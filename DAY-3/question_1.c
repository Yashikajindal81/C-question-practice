// Sum and average of three numbers

#include <stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("enter three numbers: \n");
    scanf("%d %d %d", &a,&b,&c); 

    sum = a+b+c;
    avg = sum / 3; 
    printf("the avg of three numbers: %d", avg);
    return 0; 
    
}