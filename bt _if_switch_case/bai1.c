#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("nhap gia tri cua x = ");
    scanf("%d", &x);
    printf("gia tri cua x mu 2 la : %.2lf\n", pow(x, 2));
    printf("gia tri cua x mu 3 la : %.2lf\n", pow(x, 3));
    printf("gia tri cua x mu 4 la : %.2lf", pow(x, 4));
    return 0;
}