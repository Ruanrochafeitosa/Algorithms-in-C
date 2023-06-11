/*This program make the odd number in order ascending order and descending order.*/

#include<stdio.h>
int main(){

    int num, i;
    printf("Please enter a number");
    scanf("%d", &num);
    //Ascending 
    for(i=1;i<=num;i++){
        if(i%2==1){
            if(i==num){
             printf("%d.", i);
            }else{
                printf("%d, ", i);
            }
        }
    }

    return 0;
}