/*You are tasked with writing a C program that checks the strength of a password entered by a user. 
The program should analyze the password based on the following criteria:
The password must be at least 8 characters long.
The password must contain at least one uppercase letter, one lowercase letter, one digit, and one special character (such as !, @, #, $, %, etc.).
No spaces are allowed in the password.
Your program should prompt the user to enter a password and then evaluate its strength according to the criteria mentioned above. 
If the password meets all criteria, it should be deemed strong; otherwise, it should be considered weak.
Your program should provide informative messages to the user regarding the strength of their password and which criteria it fails to meet if it is weak.
Here are some guidelines to help you implement the program:
Use string functions like strlen(), isupper(), islower(), isdigit(), and strchr() for string manipulation and character checking.
You may use loops and conditional statements as necessary.
Ensure error handling for cases where the password does not meet the minimum length requirement or if spaces are found.
Utilize meaningful prompts and messages for user interaction.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(char password[]) {
    int length = strlen(password);
    int hasUpperCase = 0, hasLowerCase = 0, hasDigit = 0, hasSpecial = 0;

    if (length < 8) {
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isspace(password[i])) {
            printf("Password cannot contain spaces.\n");
            return 0;
        }
        if (isupper(password[i])) {
            hasUpperCase = 1;
        } else if (islower(password[i])) {
            hasLowerCase = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (strchr("!@#$%^&*()-_+=~`[]{}|;:,.<>?/", password[i]) != NULL) {
            hasSpecial = 1;
        }
    }

    if (!hasUpperCase) {
        printf("Password must contain at least one uppercase letter.\n");
    }
    if (!hasLowerCase) {
        printf("Password must contain at least one lowercase letter.\n");
    }
    if (!hasDigit) {
        printf("Password must contain at least one digit.\n");
    }
    if (!hasSpecial) {
        printf("Password must contain at least one special character.\n");
    }

    if (hasUpperCase && hasLowerCase && hasDigit && hasSpecial) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char password[100];

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Remove trailing newline

    if (isStrongPassword(password)) {
        printf("Strong password!\n");
    } else {
        printf("Weak password. Please follow the criteria mentioned above.\n");
    }

    return 0;
}
