/*This program will take a positive integer N and print all numbers after 0 until it reaches N*/

#include<stdio.h>

void header1(){
    for(int i=0;i<19;i++){
        printf("=");
    }
}

int main(){
    int num;

    header1();
    printf("\nEnter the number:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){

        if(i!=num){
         printf("%d, ", i);
        }else{
            printf("%d.", i);
        }

        if(i%10==0){
            printf("\n");
        }
    }

    return 0;
}