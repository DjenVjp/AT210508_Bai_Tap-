#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float sum = 0;
    printf("nhap so n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum =  sum+ 1.0*1/i;
    }
    if(n <= 0)
        printf("sai roi");
    else 
        printf("%.4lf", sum);
    return 0;
}