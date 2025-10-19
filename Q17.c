#include <stdio.h>

int main() {
    char ch;


    printf("Input an alphabet: ");
    scanf(" %c", &ch);


    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }


    if ((ch >= 'a' && ch <= 'z')) {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The alphabet is a vowel.\n");
        } else {
            printf("The alphabet is a consonant.\n");
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
