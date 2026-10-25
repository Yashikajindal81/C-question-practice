// Check if the triangle is valid
#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Ask user for input
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // 1. Check for invalid negative numbers or zero
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Error: Sides must be greater than zero.\n");
    }
    // 2. Check for triangle validity using the Triangle Inequality Theorem
    else if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("The triangle is Invalid. (Sides do not satisfy the triangle inequality rule).\n");
    }
    // 3. Classify the valid triangle
    else {
        printf("The triangle is Valid.\n");
        
        if (side1 == side2 && side2 == side3) {
            printf("Type: Equilateral Triangle\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Type: Isosceles Triangle\n");
        }
        else {
            printf("Type: Scalene Triangle\n");
        }
    }

    return 0;
}
