#include <stdio.h>
void tinhtich(int a, int b, int c, int d, int arr1[][b], int arr2[][d], int tich[][d]){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            tich[i][j] = 0;
            for(int z = 0; z < b; z++){
                tich[i][j] += (arr1[i][z] * arr2[z][j]);
            }
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++)
            printf("%d ", tich[i][j]);
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
    int tich[a][d];
    if(a == d && b == c){
        printf("tinh ma tran 1 voi ma tran 2 la \n");
        tinhtich(a, b, c, d, arr1, arr2, tich);
        printf("tich ma tran 2 voi ma tran 1 la \n");
        tinhtich(c, d, a, b, arr1, arr2, tich);
    }
    else if(b == c){
        printf("tinh ma tran 1 voi ma tran 2 la (khong tinh duoc tich ma tran 1 va 2) \n");
        tinhtich(a, b, c, d, arr1, arr2, tich);
    }
    else if(a == d){
        printf("tich ma tran 2 voi ma tran 1 la (khong tinh duoc tich ma tran 2 va 1 \n");
        tinhtich(c, d, a, b, arr1, arr2, tich);
    }
    else    
        printf("chiu, khong tinh duoc tich hai ma tran ");
    return 0; 
}