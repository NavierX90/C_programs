/*
Name: Dennis mwangi kuria
Reg:CT101/G/26506/25
Description:A number guessing game
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

//
int main(){
	int secretnumber, guess;
	int attempts =0; //number of guesses
	//to make the random generator to start from 0
	srand(time(0));
	//generating a random number between 1 and 20
	secretnumber = rand()% 20+1;
	
	printf("welcome to the number guessing game\n");
	printf("I have selected a number between 1 and 20.\n");
	//the loop until the player is able to guess correctly
	do{
		printf("enter the guess;");
		scanf("%d",&guess);
		
		attempts++; //there is an increase in attempts each time he tries
		if (guess>secretnumber){
			printf("too high!\n");
		}
		else if (guess < secretnumber){
			printf("too low!\n");
		}
		else {
			printf("congratulations! you guessed the number!\n");
			printf("it took you %d attempt(s).\n", attempts);
		}
		
	}while (guess !=secretnumber);
	return 0;
}