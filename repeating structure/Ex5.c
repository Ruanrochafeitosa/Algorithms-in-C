/*Today will let's make a program where the user enters several numbers, and then it display the
largets number and how many times it was entered. The user has to input the quantity of numbers.*/

#include<stdio.h>
int main(){

    int quant, i, q=0, big=0;
    printf("Please inform the quantity of number you wish to add:");
    scanf("%d", &quant);
    int num[quant];

    for(i=0;i<quant;i++){
        printf("Enter a number:");
        scanf("%d", &num[i]);
        if(big<num[i]){
            big=num[i];
        }
    }
    for(i=0;i<quant;i++){
        if(big==num[i]){
            q++;
        }
    }
    printf("The highst number is %d, it appeared %d times.", big, q);
    return 0;
}