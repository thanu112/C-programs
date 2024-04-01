/*You are tasked with writing a C program that analyzes a sentence entered by a user. 
The program should prompt the user to enter a sentence containing multiple words. 
After receiving the input, the program should tokenize the sentence into individual words using strtok and then perform the following tasks:
Count the total number of words in the sentence.
Determine the average length of the words in the sentence.
Identify and print the longest word in the sentence.*/

#include <stdio.h>
#include <string.h>
 
int main() {
    char sentence[50];
    int count_of_words=0;
    int total_length = 0;
    char longest_word[50];
    int max_length=0;
    printf("Enter a sentence: ");
    scanf("%[^\n]",sentence);
    char *delimiters=" ";
    char* token = strtok(sentence, delimiters);
    while (token != NULL) {
        count_of_words++;
        printf("Token: %s\n", token);
        total_length += strlen(token);
        if (strlen(token) > max_length) {
            max_length = strlen(token);
            strcpy(longest_word, token);
        }
        token = strtok(NULL, delimiters);
    }
    printf("Count of words:%d\n",count_of_words);
    int average_length = total_length / count_of_words;
    printf("Average length of words: %d\n", average_length);
    printf("Longest word: %s", longest_word);
 
    return 0;
}