#include <stdio.h>

int main() {
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (i > 0) {
        printf("%d is a positive number\n", i);
    } else if (i < 0) {
        printf("%d is a negative number\n", i);
    } else {
        printf("The number is zero\n");
    }

    return 0;
}
