#include <stdio.h>
int main(){
    int a = 2014;
    double b, c;
    printf("tong thu nhap GDP va toc do tang truong binh quan la \n");
    scanf("%lf%lf", &b, &c);
    double d = 2*b;
    printf(" Nam                GDP\n");
    do
    {
        printf("%d              %.2lf\n", a, b);
        a++;
        b*=c;
    }while(b<=d);
    printf("%d              %.2lf\n", a, b);
    return 0;
}