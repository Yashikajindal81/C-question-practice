// Ask the user for a number and print its multiplication table from 1 to 10.
#include <stdio.h> 
int main()
{
    int n,i,multiply; 
    printf("enter a number:"); 
    scanf("%d",&n); 
    
    i = 1; 

    while (i<= 10){
        multiply = i * n; 
        i++; 
        printf("the table of n is: %d\n", multiply); 
    }
    return 0; 

}
