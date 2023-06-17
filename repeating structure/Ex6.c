/*In this exercise, let's calculate the sum of divisors for the number N, excluding the number N itself.*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    while(num<0){
        printf("Enter a positive number:");
        scanf("%d", &num);
    }
     int result[num], j=0;
    printf("The divirsors for the number %d is:", num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            result[j]=i;
            j++;
        }
    }
    for(int i=0;i<j;i++){
        if(i==j-1){
        printf("and %d.", result[i]);
        }else{
            printf("%d, ", result[i]);
        }
    }

    return 0;
}
