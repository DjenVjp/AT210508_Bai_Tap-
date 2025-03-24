#include <stdio.h>
int main(){
    int m, n;
    printf("so phan tu cua mang 1 va mang 2 la : ");
    scanf("%d%d", &m, &n);
    int a[m], b[n], c[m + n];
    printf("nhap cac phan tu cua mang 1 : ");
    for (int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }
    printf("nhap cac phan tu cua mang 2 : ");
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    int i = 0, j = 0, tmp = 0;
    while (i < m && j < n){
        if(a[i] <= b[j]){
            c[tmp] = a[i];
            i++;
            tmp++;
        }
        else {
            c[tmp] = b[j];
            j++;
            tmp++;
        }
    }
    while (i < m){
        c[tmp] = a[i];
        i++;
        tmp++;
    }
    while (j < n){
        c[tmp] = b[j];
        j++;
        tmp++;
    }
    printf("cac phan tu cua mang da duoc ghep la : ");
    for(int i = 0; i < m+ n; i++)
        printf("%d ", c[i]);
    return 0;
}