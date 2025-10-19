#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physics, chemistry, computer, total, percentage;


    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNo);

    printf("Input the Name of the Student: ");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%f %f %f", &physics, &chemistry, &computer);


    total = physics + chemistry + computer;
    percentage = (total / 300) * 100;

    printf("\nRoll No : %d\n", rollNo);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %.0f\n", physics);
    printf("Marks in Chemistry : %.0f\n", chemistry);
    printf("Marks in Computer Application : %.0f\n", computer);
    printf("Total Marks = %.0f\n", total);
    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 60) {
        printf("Division = First\n");
    } else if (percentage >= 48) {
        printf("Division = Second\n");
    } else if (percentage >= 36) {
        printf("Division = Pass\n");
    } else {
        printf("Division = Fail\n");
    }

    return 0;
}

