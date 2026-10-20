//calculates the area of a circle
#include <stdio.h> // preprocessor directive
int main () // main
{ 
    float radius, area; 
    printf("enter the radius of a circle\n");
    scanf("%f", &radius); 

    printf("the area of the circle is given by %f", radius*radius*3.14);
    return 0; 
}