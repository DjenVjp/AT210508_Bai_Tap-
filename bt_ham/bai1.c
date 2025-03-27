#include <stdio.h>
#include <math.h>
double power(double x , double y){
    return pow(x, y);
}
int main(){
    double x, y;
    printf("nhap x va y : ");
    scanf("%lf %lf", &x, &y);
    if(x != 0 && y != 0)
        printf("%.4lf", power(x, y));
    else 
        printf("0");
    return 0;
}