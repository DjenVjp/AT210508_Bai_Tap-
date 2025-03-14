#include <stdio.h>
int main(){
    int n;
    printf("mang co so phan tu la ");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++){
        printf("nhap phan tu thu %d cua mang : ", i + 1);
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j <n ;j++){
            float tmp = a[i];
            if(a[i] > a[j]){
                a[i] = a[j];
                a[j]= tmp;
            }
        }
    }
    printf("mang sau khi duoc sap xep theo thu tu tang dan la \n");
    for(int i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    return 0;
} 