#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int sum = 1;
    printf("nhap so ");
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++){
        if(n%i== 0){
            if(i == sqrt(n))
                sum +=i;
            else{
                sum = sum + i + n/i;
            }
        }

    }
    if(sum == n && sum!= 1)
        printf("la so hoan hao");
    else 
        printf("khong phai so hoan hao");
    return 0;
}