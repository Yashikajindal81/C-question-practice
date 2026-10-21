// Grade calculator

#include <stdio.h> 
int main()
{
    int a,grade; 
    printf("enter marks: \n");
    scanf("%d", &a);
    if (a>=90)
    {
        printf("A grade\n");
    }
    else if (a>=80)
    {
        printf("B grade\n");
    }
    else if (a>=70)
    {
        printf("C grade\n");
    }
    else if (a>=60)
    {
        printf("D grade\n");
    }
    else if
    {
        printf("F grade\n");
    }
        else (a<0 || a>100)
    {
        printf("Invalid marks\n");
    }   
}