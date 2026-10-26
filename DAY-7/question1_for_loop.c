// write a program to print first n natural number using for loop 
#include <stdio.h> 
int main()
{
    int n; 
    printf("enter a number: \n"); 
    scanf("%d", &n); 
    for (int i = 1; i <= n ; i++)
    {
        printf("%d \n",i); 
    }
    
}