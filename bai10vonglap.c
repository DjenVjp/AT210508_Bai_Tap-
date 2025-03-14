#include <stdio.h>
long long fibo(int n)
{
    int a = 1, b = 1;
    long long sum;
    if( n == 1 || n == 2)
        return 1;
    else
    {
        for(int i = 3; i <= n; i++ )
        {
            sum = a + b;
            a =b;
            b = sum;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("nhap so n = ");
    scanf("%d", &n);
    printf("so fibonaci thu %d la %lld", n, fibo(n));
    return 0;
}