#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fun(int x){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand() %100 + 1;
       do{
        printf("Guess the number (1-100) : ");
        scanf("%d",&guess);
        if(guess>number){
            printf("Try lower number!!!\n");
        }
        else if(guess<number){
            printf("Try higher number!!!\n");
        }
        else{
            printf("<<<Player %d you guessed number in %d attempts>>>\n\n", x, nguess);
        }
        nguess++;
    }while(guess!=number);
}
int main(){
    int players;
    printf("***Welcome to guesss the number game***\n\n");
    printf("So, how many players we are? ->");
    scanf("%d",&players);
    printf("\n");

    for(int i=0; i<players; i++){
        printf("Player %d your turn...\n",i+1);
        fun(i+1);
    }
    return 0;
}
