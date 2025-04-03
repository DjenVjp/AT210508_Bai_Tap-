#include <stdio.h>
void bin(int n)
{
    int du ;
    if(n != 0)
    {
        du = n%2;
        bin(n/2);
        printf("%d", du);
    }
}
void oct(int n){
    printf("%o", n);
}
void hex(int n){
    printf("%x", n);
}
int main(){
    int n;
    printf("nhap so nguyen n = ");
    scanf("%d", &n);
    printf("bieu dien so n o he co so 2 la\n");
    bin(n);
    printf("\n");
    printf("bieu dien so n o he co so 8 la\n");
    oct(n);
    printf("\n");
    printf("bieu dien so n o he co so 16 la\n");
    hex(n);
    return 0;
}