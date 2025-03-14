#include <stdio.h>
int main()
{
    int n;
    printf("nhap so n ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        printf("nhap so phan tu thu %d\n", i+1);
        scanf("%d", &a[i]);
    }
    int sum = 0, sum1 = 0, sum2 = 0, dem1 = 0, dem2 = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if(a[i] > 0){
            sum1 += a[i];
            ++dem1;
        }
        else {
            sum2 += a[i];
            ++dem2;
        }

    }
    printf("tong cac so la %d\n", sum);
    printf("tong cac so nguyen duong va am la %d va %d\n", sum1, sum2);
    if(dem1 == 0)
        printf("trung binh cong cac so nguyen duong bang 0\n");
    else
        printf("trung binh cong cac so nguyen duong bang %.4lf\n", 1.0*sum1/dem1);
    if(dem2 == 0)
        printf("trung binh cong cac so nguyen am bang 0\n");
    else
        printf("trung binh cong cac so nguyen duong bang %.4lf", 1.0*sum1/dem1);
    return 0;
}