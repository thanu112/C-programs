/*Character Transformation:
Write a program that takes a string as input and transforms it into a new string 
where each character is replaced by the next character in the alphabet 
(e.g., 'a' becomes 'b', 'b' becomes 'c', ..., 'z' becomes 'a').*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'a' + 1) % 26 + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] - 'A' + 1) % 26 + 'A';
        }
    }
    printf("Transformed string: %s\n", str);
    return 0;
}
