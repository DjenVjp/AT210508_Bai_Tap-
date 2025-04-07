#include <stdio.H>
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(){
    int a, b;
    printf("nhap hai gia tri a va b : ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("gia tri a va b sau khi hoan doi la : %d %d", a, b);
    return 0;
}