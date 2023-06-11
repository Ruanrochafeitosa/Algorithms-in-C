/*Code for sorting even numbers in order ascending and descending.*/

#include<stdio.h>
int main(){
    int n, i, cont=0, cont1=0;
    printf("Provide a number:");
    scanf("%d", &n);
    printf("\n==========In ascending order==========\n");
    for(i=1;i<=n;i++){
        cont++;
      if(i%2==0){
            if(i==n){
                printf("%d.", i);
            }else{
                printf("%d, ", i);
            }
        }
        if(cont%10==0){
                printf("\n");
        }
    }
    printf("\n==========In descending order==========\n");
    for(i=n;i>=1;i--){
        cont1++;
        if(i%2==0){
            if(i==2){
                printf("%d.", i);
            }else{
                printf("%d, ", i);
            }
        }
        if(cont1%10==0){
                printf("\n");
        }
    }
    printf("\nÉ isso, um beijo da Anitta");

    return 0;
}