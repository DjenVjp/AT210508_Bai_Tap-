#include <stdio.h>
int main()
{
    int a[10];
    printf("den gio nhap roi(10 phan tu) : ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("cac phan tu trong mang la ");
    for (int i = 9; i >= 0; i--)
        printf("%d ", a[i]);
}