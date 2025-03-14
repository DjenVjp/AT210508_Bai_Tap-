#include <stdio.h>
#include <math.h>
int main(){
    long long n;
    printf("nhap so n = ");
    scanf("%lld", &n);
    printf("uoc ne :\n");
    for(long long i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            if(i == sqrt(n))
                printf("%lld\n", i);
            else{
                printf("%lld\n", i);
                printf("%lld\n", n/i);
            }
        }
    }
    return 0;
}