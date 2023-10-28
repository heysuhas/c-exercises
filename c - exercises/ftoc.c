#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void){
    char charinput;
    double inputtemp;
    double resulttemp;
    printf("Enter the unit which you want to convert (F) / (C): ");
    scanf("%c",&charinput);
    printf("Enter the value of the temperature: ");
    scanf("%lf",&inputtemp);

    charinput = toupper(charinput);

    if(charinput == 'F'){
        resulttemp = (inputtemp - 32) * 5/9;
        printf("The temperature in celsius is: %.2lf",resulttemp);
    } else if(charinput == 'C'){
        resulttemp = (inputtemp * 9/5) + 32;
        printf("The temperature in fahrenheit is: %.2lf",resulttemp);
    } else {
        printf("Please enter a valid unit of measurement!");
    }

    /* 
    Can also execute the code by using logical "OR" operator, instead of touppercase function.
    
    if(charinput == 'F' || charinput == 'f'){          
        resulttemp = (inputtemp - 32) * 5/9;
        printf("The temperature in celsius is: %.2lf",resulttemp);
    } else if(charinput == 'C' || charinput == 'c'){
        resulttemp = (inputtemp * 9/5) + 32;
        printf("The temperature in fahrenheit is: %.2lf",resulttemp);
    } else {
        printf("Please enter a valid unit of measurement!");
    } */
}