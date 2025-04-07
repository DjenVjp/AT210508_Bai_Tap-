#include <stdio.h>
int main(){
    int n;
    printf("so phan tu cua mang la : ");
    scanf("%d", &n);
    int a[n];
    printf("nhap cac phan tu cua mang : ");
    for(int i = 0; i < n; i++)
         scanf("%d", a + i);
    int min = *a, max = min;
    for(int i = 1; i < n; i++){
        if(max  <= *(a + i))
            max = *(a + i);
        if(min >= *(a + i))
            min = *(a + i);
    }
    printf("phan tu lon nhat va nho nhat trong mang la : %d %d", max, min);
    return 0;
}