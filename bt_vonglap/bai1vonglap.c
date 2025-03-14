#include <stdio.h>

int main()
{
    long long sum = 0;
    for (int i = 1; i <=10; i++)
    {
        long long num;
        printf("Nhap so thu %d: ", i);
        scanf("%lld", &num);
        sum += num;
    }
    printf("Tong la: %lld", sum);
    return 0;
}