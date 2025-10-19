#include <stdio.h>

int main() {
    int height;

    printf("Enter your height(in cm): ");
    scanf("%d", &height);

    if (height < 150) {
        printf("The person is Dwarf.\n");
    } else if (height >= 150 && height <= 165) {
        printf("The person is of average height.\n");
    } else if (height > 165 && height <= 195) {
        printf("The person is tall.\n");
    } else {
        printf("The person is very tall.\n");
    }

    return 0;
}
