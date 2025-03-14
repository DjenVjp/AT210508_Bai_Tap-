#include <stdio.h>
int main(){
    int n;
    long long gt= 1;
    printf("nhap so n ");
    scanf("%d", &n);
    for (int i =1; i <= n; i++)
        gt= gt *i;
    printf("giai thua cua n la %lld", gt);
    return 0;
}