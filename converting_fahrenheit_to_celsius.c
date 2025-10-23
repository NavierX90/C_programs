/*
Name :Dennis mwangi kuria
Reg : CT101/G/26506/25
Description : converting fehrenheit input to celsius
*/

// header file input and output function

#include <stdio.h>

// function to convert Fahrenheit to celsius

float convertToCelsius(float fahrenheit){
    float celsius;
    celsius = (fahrenheit - 32)* 5/9; //applying the formula

    return celsius;  //return the converted temp


}

int main(){
    float fahrenheit; // variable to store the input

    printf("Enter temperature in fahrenheit :");
    scanf("%f", &fahrenheit); //allows for one to enter the input reads it

    //displaying of ht e converted temperature

    printf("Temperature in Celsius : %.2f\n ", convertToCelsius(fahrenheit));
    return 0;
}
