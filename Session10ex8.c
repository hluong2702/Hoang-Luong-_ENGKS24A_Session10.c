#include <stdio.h>

int main() {
    int n, m;
    printf("Moi ban nhap vao so hang ");
    scanf("%d",&m);

    printf("Moi ban nhap vao so cot ");
    scanf("%d",&n);

    int arr[m][n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m - 1; i++) {
            for (int k = 0; k < m - i - 1; k++) {
                if (arr[k][j] > arr[k + 1][j]) {
                    int temp = arr[k][j];
                    arr[k][j] = arr[k + 1][j];
                    arr[k + 1][j] = temp;
                }
            }
        }
    }

    printf("Mang sau khi sap xep theo tung cot:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}