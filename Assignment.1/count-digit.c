#include<stdio.h>

int main(){

    int number;
    int count=0;
    printf("Enter the number : ");
    scanf("%d",&number);

    printf("The number is : %d \n",number);

    while(number>0){
        number=number/10;
        count++;
    }

    printf("The total number is : %d \n",count);


    return 0;
}