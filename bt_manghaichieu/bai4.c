#include <stdio.h>
int main()
{
    int n;
    printf("nhap so n : ");
    scanf("%d", &n);
    int arr[n][n];
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1, tmp = 1;
    while (tmp <= n * n)
    {
        for (int i = c1; i <= c2; i++)
            arr[h1][i] = tmp++;
        h1++;
        for (int i = h1; i <= h2; i++)
            arr[i][c2] = tmp++;
        c2--;
        for (int i = c2; i >= c1; i--)
            arr[h2][i] = tmp++;
        h2--;
        for (int i = h2; i >= h1; i--)
            arr[i][c1] = tmp++;
        c1++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            printf("%4d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}