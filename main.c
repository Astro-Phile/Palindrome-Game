#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
#define MAX 100

void Duplication(char *arr, char *dup) {
    int count = 0;
    for (int i = 0; arr[i]; i++) {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= '0' && arr[i] <= '9')) {
            arr[i]=tolower(arr[i]);
            dup[count++] = arr[i];
        }
    }
    dup[count] = '\0';
}

void Reversal(char *dup, char *reverse) {
    int n = strlen(dup);
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        reverse[count++] = dup[i];
    }
    reverse[count] = '\0';
}

int Checking(const char *word) {
    FILE *meaning= fopen("words_alpha.txt","r");
    if (meaning == NULL) {
        perror("Error opening file");
        return 0;
    }

    char dict_word[MAX];
    while (fgets(dict_word, MAX, meaning) != NULL) {
        dict_word[strcspn(dict_word, "\n")] = '\0';
        if (strcmp(word, dict_word) == 0) {
            fclose(meaning);
            return 1;
        }
    }

    fclose(meaning);
    return 0;
}

void DifferentWords(char *ar, char words[][MAX]) {
    int row = 0, col = 0;
    for (int i = 0; ar[i]; i++) {
        if ((ar[i] >= 'A' && ar[i] <= 'Z') || (ar[i] >= 'a' && ar[i] <= 'z') || (ar[i] >= '0' && ar[i] <= '9')) {
            ar[i]=tolower(ar[i]);
            words[row][col] = ar[i];
            col++;
        } else {
            words[row][col] = '\0';
            row++;
            col = 0;
        }
    }
    words[row][col] = '\0';
}

int main() {
    this:
    char arr[1000], dup[1000], reverse[1000];
    
    printf("Enter a sentence: ");
    fgets(arr, sizeof(arr), stdin);

    Duplication(arr, dup);
    Reversal(dup, reverse);

    //printf("Duplicate: %s\n", dup);
    //printf("Reversed: %s\n", reverse);

    char arrayofwords[1000][MAX];
    DifferentWords(arr, arrayofwords);

   int allWordsHaveMeaning = 1; 

    // Check the meaning of each word
    for (int i = 0; arrayofwords[i][0] != '\0'; i++) {
        if (Checking(arrayofwords[i]) == 0) {
            printf("One or more words have no meaning.\n");
            printf("Do you wish to continue? Type 'y'for yes or any other character to end.\n");
            char ch;
            scanf("%c",&ch);
           if(ch=='y'){
            allWordsHaveMeaning = 0; 
             continue;
           }else{
            return 0;
           }
        }
    }
    if (allWordsHaveMeaning) {
        printf("All the words have meaning.\n");
    }
    
     if (strcmp(dup, reverse) == 0) {
        printf("It is a palindrome\n");
    } else {
        printf("It's not a palindrome\n");
    }

    return 0;
}
