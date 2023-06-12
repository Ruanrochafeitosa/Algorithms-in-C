/*Today will let's make a program where the user enters several numbers, and then it display the
largets number and how many times it was entered. The user has to input the quantity of numbers.*/

#include<stdio.h>
int main(){

    int num, q, i, big=0;
    printf("Please inform the quantity of number you wish to add:");
    scanf("%d", &q);

    for(i=1;i<=q;i++){
        printf("Enter a number:");
        scanf("%d", &num);
        if(big<num){
            big=num;

        }else if();
    }
    return 0;
}