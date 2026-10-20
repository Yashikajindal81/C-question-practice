// convert celcius temprature to fareneit 
#include <stdio.h>
int main()
{
    float celcius, fah;
    printf("enter temprature in celcius: \n");
    scanf("%f", &celcius); 

    fah = (celcius * 9 / 5) + 32;
     printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celcius, fah); 

     return 0; 


}