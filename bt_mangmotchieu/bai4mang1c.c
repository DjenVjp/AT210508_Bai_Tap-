#include <stdio.h>
int main(){
    int n;
    printf("mang co bao nhieu phan tu? - ");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++){
        printf("nhap phan tu thu %d ", i + 1);
        scanf("%f", &a[i]);
    }
    float min = a[0], max = a[0];
    for (int i = 0; i < n; i++){
        if(min > a[i])
            min = a[i];
        if(max < a[i])
            max = a[i];
    }
    printf("gia tri lon nhat va nho nhat la %.4f va %.4f\n", max, min);
    printf("vi tri cua phan tu lon nhat trong mangla\n");
    for (int i = 0; i < n; i ++){
        if(max == a[i]){
            printf("%d ", i+1);
        }
    }
    printf("\n");
    printf("vi tri cua phan tu nho nhat trong mang la\n");
    for (int i = 0; i < n; i++){
        if(min == a[i]){
            printf("%d ", i+1);
        }
    }

}