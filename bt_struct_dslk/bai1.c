#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int tienhang (int a, int b){
    return a*b;
}
struct banhang {
    char ten[100];
    int gia;
    int sl;
};
typedef struct banhang banhang;
void nhap(banhang a ){
    printf("nhap ten hang : "); gets(a.ten);
    printf("nhap don gia : "); scanf("%d", &a.gia);
    printf("nhap so luong hang : "); scanf("%d", &a.sl);
    getchar();
}
void sapxep(banhang a[], int n){
    for(int i = 0; i < n; i++){
        int pos;
        for(int j = i + 1; j < n; j++){
            if(strcmp(a[i].ten, a[j].ten) == 1){
                pos = j;
                banhang b = a[i];
                a[i] = a[pos];
                a[pos] = b;
            }
        }
    }
}
void in(banhang a){
    printf("%20s %20d %")
}
int main(){
    int n;
    printf("so luong hang cua ban la : ");
    scanf("%d", &n);
    getchar();
    banhang a[n];
    for(int i = 0; i < n; i++){
        nhap(a[i]);
    }
    sapxep(a);
}