/*In this activity, we will create a program that takes a number N and displays 
it along with all its predecessors in descending order.*/

#include<stdio.h>
int main(){

    int num, i;
    printf("Inform the number:");
    scanf("%d", &num);
    
    for(i=num;i>=1;--i){
        if(i==1){
        printf("%d.", i);
        }else{
            printf("%d, ", i);
        }
        if(i!=num && i%10==0){
            printf("\n");
        }
    }

    return 0;
}