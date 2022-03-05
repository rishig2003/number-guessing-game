#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int num,total_guesses=1,guess;
	srand(time(0));
	num=rand()%100+1;
	//printf("%d",rand());
	while(guess!=num){
		printf("Make a guess: ");
		scanf("%d",&guess);
		if(guess>num){
			printf("Lower number please!\n");
		}
		else if(guess<num){
			printf("Higher number please!\n");
		}
		else{
			printf("You guessed the number in %d guesses!!",total_guesses);
			break;
		}
		total_guesses++;
	}
	
}
