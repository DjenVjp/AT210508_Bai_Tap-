#include <stdio.h>
#include <math.h>
void nhap(int a[], int n){
    for(int i = 0; i <= n;i++){
        scanf("%d", a + n - i);
    }
}
long long tinh(int a[], int n, int x){
    if(n == 0){
        return a[n];
    }
    return a[n]*pow(x, n) + tinh(a, n-1, x);
}
void in(int a[], int n){
    for(int i = n; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    int n, m, x;
    printf("bac cua da thuc P va Q la : ");
    scanf("%d%d", &n ,&m);
    printf("nhap gia tri cua x : ");
    scanf("%d", &x);
    int p[n+1], q[m+1];
    printf("nhap he so cua da thuc P (tu bac n): ");
    nhap(p, n);
    printf("nhap he so cua da thuc Q (tu bac n): ");
    nhap(q, m);
    int max = fmax(n, m);
    int min = fmin(n, m);
    int t[max + 1];
    int i = 0;
    while (i <= min){
        t[i] = p[i] + q[i];
        i++;
    }
    if(max = n)
        while(i <= max){
            t[i] = p[i];
            i++;
        }
    if(max = m)
        while(i <= max){
            t[i] = q[i];
            i++;
        }
    printf("he so cua da thuc P la : ");
    in(p, n);
    printf("he so cua da thuc Q la : ");
    in(q, m);
    printf("he so cua da thuc T la : ");
    in(t, max);
    printf("gia tri cua da thuc P la : %lld\n", tinh(p, n, x));
    printf("gia tri cua da thuc Q la : %lld\n", tinh(q, m, x));
    printf("gia tri cua da thuc Q la : %lld\n", tinh(t, m, x));
    return 0;
}