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
int main(){
    int n;
    printf("nhap so n = ");
    scanf("%d", &n);
    printf("he co so 2 ");
    bin(n);
    printf("\n");
    printf("he co so 8 %o\n", n);
    printf("he co so 16 %x", n);
    return 0;
}