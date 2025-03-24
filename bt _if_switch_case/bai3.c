#include <stdio.h>

int main() {
    int a, b;
    printf("nhap hai so nguyen ");
    scanf("%d %d", &a, &b);
    printf("tong la : %d\n", a + b);
    printf("hieu la : %d\n", a - b);
    printf("tich la : %lld\n", 1ll*a * b);
    if (b != 0){
        printf("thuong la : %.3lf", 1.0*a / b);
    } 
    else{
        printf("chia cho 0 kieu j ???");
    }
    return 0;
}