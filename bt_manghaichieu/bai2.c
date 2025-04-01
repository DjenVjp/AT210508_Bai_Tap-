#include <stdio.h>
void tinhtong(int a, int b, int arr1[][b], int arr2[][b], int tong[][b]){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++)
            tong[i][j] = arr1[i][j] + arr2[i][j];
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++)
            printf("%d ", tong[i][j]);
        printf("\n");
    }
}
int main(){
    int a, b, c, d;
    printf("nhap so hang va cot cua ma tran 1 ");
    scanf("%d%d", &a, &b);
    printf("nhao so hang va cot cua ma tran 2 ");
    scanf("%d%d", &c, &d);
    int arr1[a][b], arr2[c][d];
    printf("nhap ma tran 1\n");
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            scanf("%d", &arr1[i][j]);
    printf("nhap ma tran 2\n");
    for(int i = 0; i < c; i++)
        for(int j = 0; j < d; j++)
            scanf("%d", &arr2[i][j]);
    int tong[a][b];
    if(a == c && b == d){
        printf("tong cua hai ma tran la : \n");
        tinhtong(a, b, arr1, arr2, tong);
    }
    else    
        printf("bo tay, khong tinh duoc tong hai ma tran\n");
    return 0;
}