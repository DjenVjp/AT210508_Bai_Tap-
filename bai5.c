#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double dlt = b*b - 4*a*c;
    if(a == 0){
        if(b == 0 && c == 0)
            printf("phuong trinh vo so nghiem");
        else if(b == 0)
            printf("phuong trinh vo nghiem");
        else 
            printf("phuong trinh co nghiem x = %.2lf", -c/b);
    }
    else {
        if(dlt > 0){
            printf("phuong trinh co 2 nghiem phan biet x1 = %.2lf va x2 = %.2lf", (-b + sqrt(dlt))/(2*a), (-b - sqrt(dlt))/(2*a));
        }
        else if(dlt == 0)
            printf("phuong trinh co nghiem duy nhat x = %.2lf", -b/(2*a));
        else 
            printf("phuong trinh vo nghiem");
    }

    return 0;
}