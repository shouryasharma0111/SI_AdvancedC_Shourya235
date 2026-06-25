#include<stdio.h>
int main(){
    int num,rev=0,rem=0;
    printf("enter the value of integer");
    scanf("%d",&num);
    for(int temp=num;temp>0;temp=temp/10)
    {
        rem = temp%10;
        rev = rev*10+rem;
    }
    printf("reverse of an integer%d\n",rev);
    return 0;
}