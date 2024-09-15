#include<stdio.h>

int main(){

    int a;
    int sum=0;
    printf("Enter the number");
    scanf("%d",&a);

    

    if(a%2==0){
         printf("Number is even \n");
        for(int num=1;num<=a;num++){
        sum=sum+num;
        printf("%d"" ",sum);
     }
    }else{
        printf("Number is odd \n");
        for(int num=1;num<=a;num++){
        sum=sum+num;
        printf("%d"" ",sum);
     }
    }


    return 0;
}