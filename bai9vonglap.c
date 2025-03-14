#include <stdio.h>
int main()
{
    int n;
    double sum= 0;
    int gt = 1;    
    printf("nhap so n = ");
    scanf("%d", &n);
    for(int i = 1;i <= n; i++)
    {
        gt*=i;
        sum=sum + (1.0*1/gt);
    }
    printf("S = %.4lf", sum);
    return 0;
}