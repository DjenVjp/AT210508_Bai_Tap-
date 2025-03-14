#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c;
    do{
        printf("nhap 3 canh a b c ");
        scanf("%lf%lf%lf", &a, &b, &c);
    }while( a<0 || b < 0 || c < 0 );
    if((a+b)>c && (a+c)>b && (c+b)>a){
        if(a == b || b == c){
            if(b == c)
                printf("tam giac deu\n");
            if((a*a == (b*b+c*c))|| ((a*a+b*b) == c*c) || ((c*c+b*b) == a*a ))
                printf("tam giac vuong can\n");
            else 
                printf("tam giac can\n");
        }
        else{
            if((a*a == (b*b+c*c))|| ((a*a+b*b) == c*c) || ((c*c+b*b) == a*a ))
                printf("tam giac vuong\n");
            else
                printf("tam giac thuong\n");
        }
        double cv = a + b + c;
        double dt=sqrt((cv/2)*(cv/2 - a)*(cv/2 - c)*(cv/2 - b));
        printf("chu vi %.2lf dien tich %.2lf", cv, dt);
        
    }
    else 
        printf("khong phai tam giac");
    return 0;
}