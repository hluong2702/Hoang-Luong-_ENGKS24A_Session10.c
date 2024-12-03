#include <stdio.h>

void bubbleSort(int arr[], int m) {
   for(int i = 0;i<m;i++){
        for(int j = 0;j<m-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() {
    int n, m;

    printf("Moi ban nhap vao so hang ");
    scanf("%d",&m);

    printf("Moi ban nhap vao so cot ");
    scanf("%d",&n);

    int arr[m][n];
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            printf(" arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        bubbleSort(arr[i], m);
    }

    printf("\nMa tran sau khi sap xep:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
