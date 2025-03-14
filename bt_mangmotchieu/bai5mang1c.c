#include <stdio.h>
int main(){
    int n;
    float x;
    printf("mang co bao nhieu phan tu ");
    scanf("%d", &n);
    printf("nhap x di ");
    scanf("%f", &x);
    float a[n];
    for (int i = 0; i < n; i++){
        printf("nhap phan tu thu %d cua mang ", i +1);
        scanf("%f", &a[i]);
    }
    int dem = 0;
    for (int i =0; i < n; i++){
        if(x == a[i])
            ++dem;
        }
    printf("x xuat hien %d lan", dem);
    return 0;
}