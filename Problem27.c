#include<stdio.h>

int main(){
    int num,rem=0,sum=0;
    printf("enter the value of number =");
    scanf("%d",&num);
    for(int temp=num;temp>0;temp=temp/10)
    {
        rem = temp%10;
        sum += rem;
    }
     printf("sum of all digits=%d\n",sum);
     return 0;
}