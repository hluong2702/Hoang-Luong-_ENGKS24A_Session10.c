#include<stdio.h>

int main(){
    int arr[5]={4,6,9,1,7};

    for(int i = 0;i<5;i++){
        int minIndex =i;
        for(int j = i +1;j<5;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }

        }
         int temp= arr[minIndex];
         arr[minIndex]=arr[i];
         arr[i]=temp;
    }
    for(int i = 0;i<5;i++){
        printf("%d\t",arr[i]);

    }
    return 0;
}


