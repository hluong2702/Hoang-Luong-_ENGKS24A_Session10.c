#include <stdio.h>

int main() {
    int m, n;

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

	int min;
	if (m< n) {
	    min = m;
	} else {
	    min = n;
	}

    for (int i = 0; i < min - 1; i++) {
        for (int j = 0; j < min - i - 1; j++) {
            if (arr[j][j] > arr[j + 1][j + 1]) {
                int temp = arr[j][j];
                arr[j][j] = arr[j + 1][j + 1];
                arr[j + 1][j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep theo duong cheo chinh:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}