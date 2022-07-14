#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int judge;
    int n=0;
    int T=0;
    int H=0;
    char name[100];

    printf("Who are you?\n> ");
    scanf("%s",name);

    printf("Hello, %s!",name);

    srand((unsigned int)time(NULL));

    printf("Tossing a coin..\n");
    for(int k=0;k<3;k++){
        for(int i=0;i<5;i++){
            judge = rand()%2;
            if(judge == 0){
                n++;
            }
            else n--;
        }
        printf("Round %d: ",k+1);
        if(n>0){
            printf("Heads\n");
            H++; 
        }
        else{
            printf("Tails\n");
            T++;
        }
    }
    printf("Heads: %d, Tails: %d\n",H,T);
    return 0;
}