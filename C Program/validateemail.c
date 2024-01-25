#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a character is a valid email character
bool isValidChar(char ch) {
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9') ||
           ch == '.' || ch == '_' || ch == '@';
}

// Function to validate an email address
bool isValidEmail(const char email[]) {
    int length = strlen(email);
    int atCount = 0;

    // Check for '@' symbol
    for (int i = 0; i < length; i++) {
        if (email[i] == '@') {
            atCount++;
            // Check if '@' is not the first or last character
            if (i == 0 || i == length - 1) {
                return false;
            }
        } else if (!isValidChar(email[i])) {
            return false; // Invalid character found
        }
    }

    // Check if there is exactly one '@' symbol
    if (atCount != 1) {
        return false;
    }

    return true;
}

int main() {
    char email[1000];

    // Input email from the user
    printf("Enter an email address: \n");
    gets(email);

    // Validate the email address
    if (isValidEmail(email)) {
        printf("Valid email address\n");
    } else {
        printf("Invalid email address\n");
    }

    return 0;
}