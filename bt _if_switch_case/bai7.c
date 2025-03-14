#include <stdio.h>
int main(){
    float x;
    do{
        printf("nhap so diem di ");
        scanf("%f", &x);
    }while( x<0 || x> 10 );
    if(x >=5 && x <7)
        printf("TB");
    else if(x >=7 && x <8)
        printf("kha");
    else if(x >=8 && x <9)
        printf("Gioi");
    else if(x >= 9)
        printf("Xuat sac :>");
    else
        printf("yeu :((");
    return 0;
}