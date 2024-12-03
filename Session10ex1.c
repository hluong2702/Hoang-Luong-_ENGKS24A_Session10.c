#include<stdio.h>

int main(){

    int arr[5]={1,2,3,4,5};
    int n;
    int count = 0;
    printf("Moi ban nhap vap mot so nguyen ");
    scanf("%d",&n);

    for(int i = 1;i<5;i++){
        if(arr[i]== n){
            printf("Vi tri cua phan tu do la %d",i+1);
            count ++;
        }
    }
    if(count ==0){
        printf("Vi tri cau phan tu k ton tai ");
    }
    return 0;

}