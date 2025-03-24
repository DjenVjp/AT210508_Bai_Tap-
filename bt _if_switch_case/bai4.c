#include <stdio.h>
int main(){
    float bankinh ;
    printf("ban kinh cua hinh cau la ");
    scanf("%f", &bankinh);
    printf("dien tich cua hinh cau la %.2f\n", bankinh * bankinh * 4 * 3.14);
    printf("the tich cua hinh cau la %.2f", bankinh*bankinh*bankinh*3.14*4/3);
    return 0;
}