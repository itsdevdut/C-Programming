#include <stdio.h>

int main() {
    int num1, num2, num3;


    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2, num3);

    if (num1 > num2 && num1 > num3) {
        printf("The 1st Number is the greatest among three\n");
    } else if (num2 > num1 && num2 > num3) {
        printf("The 2nd Number is the greatest among three\n");
    } else if (num3 > num1 && num3 > num2) {
        printf("The 3rd Number is the greatest among three\n");
    } else {
        printf("Two or more numbers are equal and greatest.\n");
    }

    return 0;
}
