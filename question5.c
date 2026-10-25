// Ask the user for a positive number n. Using a while loop, print all the odd numbers from 1 up to n.
#include <stdio.h> 
int main() {
    int i,n; 
    printf("enter a number: "); 
    scanf("%d",&n); 
    i = 1; 
    while (i<=n) {
        printf("odd numbers are: %d\n",i); 
        i += 2; 
    }
}