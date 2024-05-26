✨For what's the use of your intellect if you can't think of sentence palindromes.

Welcome to THE PALINDROME GAME. It's our word checker and palindrome identifier program. This program allows users to enter a sentence, checks if each word in the sentence has meaning based on a provided dictionary file, and determines if the sentence is a palindrome.


Features-


Word Meaning Check: The program checks each word in the input sentence against a dictionary file to ensure that all words have valid meanings.
Palindrome Identification: It identifies whether the input sentence is a palindrome or not.
User Interaction: Provides user-friendly prompts for continuing or ending the program based on user input.

How to Use-


1. Clone the Repository:
   Clone this repository to your local machine using the following command:
   ```
   git clone https://github.com/Astro-Phile/Palindrome-Game.git
   ```

1.1 Run the executable (exe) file and follow the prompt.If doesn't work follow through below.

2. Compile the Program:
   Navigate to the project directory and compile the program using a C compiler:
   ```
   gcc -o main main.c
   ```
3. Run the Program:
   Execute the compiled program:
   ```
   ./main or ./main.exe
   ```
4. Follow the Prompts:
   Enter a sentence when prompted. The program will then check each word for meaning and determine if the sentence is a palindrome.


Example Usage-

plaintext:
Enter a sentence: A man, a plan, a canal, Panama!
All the words have meaning.
It is a palindrome


Notes-

- The dictionary file `words_alpha.txt` contains a list of words, each on a separate line, without any additional characters or spaces.
- Ensure that the dictionary file is in the same directory as the compiled program or provide the correct path to the file in the code (`Checking` function).
- To continue checking sentences or try again, follow the prompts provided by the program.


Contributions-

Contributions to this project are welcome. Feel free to fork the repository, make improvements, and submit a pull request.
----
Thank you for using our word checker and palindrome identifier program. If you encounter any issues or have suggestions for improvements, please let us know. Happy checking!
