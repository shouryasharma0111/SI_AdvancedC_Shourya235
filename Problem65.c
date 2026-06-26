#include<stdio.h>

int main(){
    int a = 10, b = 20;
    int *p = &a;
    int *q = &b;
    int temp = *p;
         *p = *q;
         *q = temp;
         printf("swap two variable by pointer %d\n%d\n",*p,*q);
         return 0;
}