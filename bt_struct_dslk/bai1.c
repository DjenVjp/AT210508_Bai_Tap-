#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
struct banhang
{
    char ten[100];
    double gia;
    int sl;
    double th;
};
typedef struct banhang banhang;
void nhap(banhang *a)
{
    printf("nhap ten hang : ");
    gets((*a).ten);
    printf("nhap don gia : ");
    scanf("%lf", &(*a).gia);
    printf("nhap so luong hang : ");
    scanf("%d", &(*a).sl);
    getchar();
}
void sapxep(banhang a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int pos;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(a[i].ten, a[j].ten) == 1)
            {
                pos = j;
                banhang b = a[i];
                a[i] = a[pos];
                a[pos] = b;
            }
        }
    }
}
int main()
{
    int n;
    printf("so luong hang cua ban la : ");
    scanf("%d", &n);
    getchar();
    banhang a[n];
    for (int i = 0; i < n; i++)
    {
        nhap(&a[i]);
        a[i].th = a[i].gia* a[i].sl;
    }
    sapxep(a, n);
    double tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i].th;
    }
    printf("STT");
    printf("            Ten hang");
    printf("              Don gia");
    printf("             So luong");
    printf("           Thanh tien\n");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", i + 1);
        printf("%20s %20.2lf %20d %20.2lf", a[i].ten, a[i].gia, a[i].sl, a[i].th);
        printf("\n");
    }
    printf("                                                        Tong tien:%20.2lf", tong);
    return 0;
}