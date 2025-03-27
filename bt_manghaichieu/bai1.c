#include <stdio.h>
void in(int a[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr1[3][3] = {{0, 0}};
    int arr2[3][3];
    printf("nhap phan tu cua mang \n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &arr2[i][j]);
    printf("truong hop 1 la \n");
    in(arr1);
    printf("truong hopn 2 la \n");
    in(arr2);
    return 0;
}