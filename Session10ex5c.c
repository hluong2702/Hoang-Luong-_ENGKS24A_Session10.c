#include<stdio.h>

int main(){

    int arr[8]={1,4,7,3,4,9,8,2};
    int item;
    int mid;
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Moi ban nhap gia tri can tim kiem ");
    scanf("%d",&item);

    int start =0;
    int end = length -1;

    while(start<=end){
        mid= (start + end)/2;
        if(arr[mid]>item){
            end = mid - 1;
        }else if(arr[mid]<item){
            start = mid +1;
        }else{
            printf("Phan tu %d co vi tri la %d ",item,mid);
            break;
        }
        
    }
    return 0;
} 