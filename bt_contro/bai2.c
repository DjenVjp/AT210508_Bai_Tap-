#include <stdio.h>
int main(){
    int a[10];
    printf("nhap cac phan tu cua mang : ");
    for(int i = 0; i < 10; i++)
        scanf("%d", a + i);
    printf("cac phan tu cua mang la : ");
    for(int i = 0; i < 10; i++)
        printf("%d ", *(a + i));
    return 0;
}