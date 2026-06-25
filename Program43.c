#include<stdio.h>
int main() {
    int size, arr[size], target;
    printf("Enter size and target value\n");
    scanf("%d %d\n", & size,&target);
    int i= 0 ;
    int j = size -1;
    for(int i = 0; i <= j; j++) {
        int mid = i +(j-1)/ 2;
        if(arr[mid] == target) {
        } else if (mid < target) {
            i = mid + 1;
        } else {
            j = mid - 1;
        }
    }
    return 0;
}