#include <stdio.h>
#include <math.h>
double ratnhieutien(long long n, float m, int p ){
    return n*pow((1+ m/100), p);
}
int main()
{
    long long n;
    int p;
    float m = 0.45;
    printf("so tien cua ban va lai trong bao nhieu thang ");
    scanf("%lld %d", &n, &p);
    printf("so tien lai la %lf", ratnhieutien(n, m, p));
    return 0;
}