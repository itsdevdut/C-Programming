#include <stdio.h>

int main() {
    int i, j;

    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);

    if (i == j) {
        printf("Both numbers are equal\n");
    } else {
        printf("Numbers are not equal\n");
    }

    return 0;
}
