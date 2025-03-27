#include <stdio.h>
long long gt (int n){
    if(n == 1)
        return 1;
    return n*gt(n-1);
}
int main(){
    int n;
    printf("nhap n = ");
    scanf("%d", &n);
    printf("giai thua cua n la %lld", gt(n));
    return 0;
}