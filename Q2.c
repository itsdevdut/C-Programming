#include <stdio.h>

int main() {
    int i;


    printf("Enter The number: ");
    scanf("%d", &i);


    if (i % 2 == 0) {
        printf("%d is an even number\n", i);
    } else {
        printf("%d is an odd number\n", i);
    }

    return 0;
}
