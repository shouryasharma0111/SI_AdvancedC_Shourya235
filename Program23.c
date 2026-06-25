#include<stdio.h>
int main(){
    int num=121,rem,rev=0;
    for(int temp=num;temp<num;temp=temp/10)
    {
        rem = temp%10;
        rev = rev*10 + rem;
    if(num==rev)
    {printf("It is a palindrome number =%d\n",rev);}
    else{
        printf("It is not a palindrome number=%d\n",rev);
    }
}
return 0;
}