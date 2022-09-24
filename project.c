// number guessing game 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand ()%100+1;
    do
    {
        printf("guess the number beween 1 to 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please!! ");
        }
        else if(guess < number){
            printf("Higher number please!!" );
        }
        else{
            printf("you guesed it in %d attempt \n ", nguesses);
        }
        nguesses++;
    } while (guess!=number);
    
    return 0;
}