#include <stdio.h>
#include <math.h>

int main(){
    long long a;
    int b =1;
    printf("nhap so di\n");
    scanf("%lld", &a);
    if(a > 0){
        for(int i = 2; i <= sqrt(a);i++)
            if(a % i == 0){
                b--;
                break;
            }
        }
    else 
        b--;
    if(b == 1)
        printf("la so nguyen to");
    else 
        printf("khong la so nguyen to");
    return 0;
}
