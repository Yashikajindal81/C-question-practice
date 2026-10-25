// Ask the user for n and calculate 1 + 2 + 3 + ... + n

#include <stdio.h> 
int main()
{
    int n,i, sum; 
    printf("enter a number: "); 
    scanf("%d", &n);
    
    i = 1; 
    sum = 0; 

    while (i<=n) {
        sum = sum + i; 
        i++; 
    }
    printf("the sum of n numbers are: %d", sum); 
    return 0; 

}