#include <stdio.h>
void meo(int a[], int l, int r, int mid){
    int n1 = mid - l + 1, n2 = r - mid;
    int x[n1], y[n2];
    for(int i  = 0; i < n1; i++){
        x[i] = a[l + i];
    }
    for(int i  = 0; i < n2; i++){
        y[i] = a[mid + i  +1];
    }
    int i = 0, j = 0;
    int tmp = l;
    while(i < n1 && j < n2){
        if(x[i] <= y[j])
            a[tmp++] = x[i++];
        else   
            a[tmp++] = y[j++]; 
    }
    while(i < n1)
        a[tmp++] = x[i++];
    while(j < n2)
        a[tmp++] = y[j++];
}
void meomeo(int a[], int l, int r){
    if(l < r){
        int mid = (l + r)/ 2;
        meomeo(a, l, mid);
        meomeo(a, mid + 1, r);
        meo(a, l, r, mid);
    }
}
int main(){
    int n;
    printf("so phan tu cua mang la : ");
    scanf("%d", &n);
    int a[n];
    printf("nhap cac phan tu cua mang : ");
    for(int i = 0; i < n; i++)
         scanf("%d", a + i);
    meomeo(a, 0, n - 1);
    printf("cac phan tu cua mang sau khi sap xep la : ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    return 0;
}