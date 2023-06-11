/*This program make the odd number in order ascending order and descending order.*/

#include<stdio.h>
int main(){

    int num, i, cont=0;
    printf("Please enter a number");
    scanf("%d", &num);
    //Ascending 
    printf("\n==========Ascending order==========\n");
    for(i=1;i<=num;i++){
        if(i%2==1){
            if(i==num){
             printf("%d.", i);
            }else{
                printf("%d, ", i);
            }
        }
        if(cont%10==0){
            printf("\n");
        }
        cont++;
    }
    //Descending
    printf("\n==========Descending order==========\n");
    for(i=num;i>=1;i--){
        if(i%2==1){
            if(i==1){
                printf("%d.", i);
            }else{
                printf("%d, ", i);
            } 
        }
        if(cont%10==0){
            printf("\n");
        }
        cont++;

    }
    return 0;
}