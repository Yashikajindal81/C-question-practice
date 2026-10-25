// Ask the user for a number n, then print all even numbers from 2 up to n. using while loop

#include <stdio.h> 
int main()
{
    int n, i; 
    i = 2; 
    printf("enter a positive number: "); 
    scanf("%d", &n); 
    
    while(i<= n) {
            printf("%d \n " ,i); 
        
        i += 2 ; 
    }
} 