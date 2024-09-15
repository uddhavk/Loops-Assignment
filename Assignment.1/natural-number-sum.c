#include<stdio.h>

int main(){

    int a;
    int sum=0;
    printf("Enter the number");
    scanf("%d",&a);

    

     for(int num=1;num<=a;num++){
        sum=sum+num;
        printf("%d"" ",sum);
     }


    return 0;
}