#include <stdio.h>
int main(){
    int n;
    printf("mag co bao nhieu phan tu? ");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++){
        printf("nhap phan tu thu %d \n", i +1);
        scanf("%f", &a[i]);
        if(a[i] < 0)
            a[i]= 0;
    }
    printf("phan tu trong mang la \n");
    for(int i = 0; i < n; i++)
        printf("%.4f ", a[i]);
    return 0;
}
