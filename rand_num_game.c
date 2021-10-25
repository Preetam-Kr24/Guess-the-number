#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand() %100 + 1;
    // printf("The number is %d\n",number);
    printf("***Welcome to guesss the number game***\n");

    do{
        printf("Enter the number (1-100) : ");
        scanf("%d",&guess);
        if(guess>number){
            printf("Try lower number!!!\n");
        }
        else if(guess<number){
            printf("Try higher number!!!\n");
        }
        else{
            printf("The number is guesssed in %d attempts",nguess);
        }
        nguess++;
    }while(guess!=number);
    
    return 0;
}