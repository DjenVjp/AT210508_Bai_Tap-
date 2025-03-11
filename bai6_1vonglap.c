#include <stdio.h>
#include <math.h>
int ucln(int a, int b){
    int c;
    while(b != 0) {
        c = a%b;
        a = b;
        b =c; 
    } 
    if(b == 0)
        return a;

}
int main(){
    int a, b;
    printf("nhap hai so a va b = ");
    scanf("%d%d", &a, &b);
    printf("uoc chung lon nhat la %d\n", ucln(a, b));
    printf("boi chung lon nhat la %d", a*b/ucln(a, b));
    return 0;
}