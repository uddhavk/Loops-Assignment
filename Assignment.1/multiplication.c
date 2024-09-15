#include<stdio.h>

int main(){

    int num;
    printf("Enter the value of table : ");
    scanf("%d",&num);
    
    printf("The value of the number is %d \n",num);
       

     for(int i=1;i<=10;i++){
        printf("%d \n",i*num);
     }


    return 0;
}