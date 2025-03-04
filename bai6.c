#include <stdio.h>

int main(){
    double a, b, c, d, e, f;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    double det1 = c*e - f*b, det2 = a*f - c*d, det= a*e - b*d;
    if(det == 0 ){
        if(det2 == 0){
            if((a == 0 && b == 0 && c == 0 && d==0 && e==0 && f!=0)||(d == 0 && e == 0 && f == 0 && a==0 && b ==0 &&c != 0))
                printf("vo nghiem");
            else if((a == 0 && b == 0 && c == 0) || (d == 0 && e == 0 && f == 0 ))
                printf("vo so nghiem");
            else if(a/d == b/e && b/e == e/f)
                printf("vo so nghiem");
            else 
                printf("vo nghiem");
        }
        else
            printf("vo nghiem");
    }
    else
        printf("x= %.2lf y= %.2lf", det1/det, det2/det);
    return 0;
}