#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float radius, length, breadth, base, height, area;


    printf("Select the shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The area is : %f\n", area);
            break;

        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("The area is : %f\n", area);
            break;

        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area is : %f\n", area);
            break;

        default:
            printf("Invalid choice! Please select between 1 to 3.\n");
    }

    return 0;
}
