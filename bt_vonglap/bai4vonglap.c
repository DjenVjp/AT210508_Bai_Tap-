#include <stdio.h>
int main(){
    int sum = 0;
    for(int i =1; i <=100; i++){
        if(i%2 == 1)
            sum +=i;
    }
    printf("tong so le la%d", sum);
    return 0;
}