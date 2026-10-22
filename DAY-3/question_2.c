// Largest of three numbers using the ternary operator

#include<stdio.h> 
int main()
{
    int a,b,c,max;
    printf("enter three numbers: \n");
    scanf("%d %d %d", &a,&b,&c); 

    max = (a>b) ? ((a>c) ? a : c) : ((b > c) ? b : c);
    printf("Largest = %d", max);
 return 0; 
}