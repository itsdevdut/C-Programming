#include <stdio.h>

int main() {
    int phy, chem, math, total_all, total_mp;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math);


    total_all = phy + chem + math;
    total_mp = math + phy;


    printf("Total marks of Maths, Physics and Chemistry: %d\n", total_all);
    printf("Total marks of Maths and Physics: %d\n", total_mp);


    if ((math >= 65 && phy >= 55 && chem >= 50 && total_all >= 190) || (total_mp >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
