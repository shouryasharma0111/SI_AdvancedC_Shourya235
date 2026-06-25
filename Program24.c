#include<stdio.h>
#include<math.h>
int main(){
    int num=153,rem,count=0;
    for(int temp=num;temp>0;temp=temp/10)
    {
        count++;
    }
    int power=1,sum=0;
    for(int temp1=num;temp1>0;temp1=temp1/10)
    {
     rem=temp1%10;
     power=pow(rem,count);
     sum = sum + power;
    }
    if(num==sum)
    {printf("it is a armstrong no. =%d\n",sum);}
    else
    {printf("It is not a armstrong no.");}
    return 0;
}