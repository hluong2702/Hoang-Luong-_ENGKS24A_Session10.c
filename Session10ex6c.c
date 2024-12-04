#include <stdio.h>

int main()
{
	int arr[8] = {1,3,5,1,18,1,8,1};
	int item;
	int length = sizeof(arr)/sizeof(arr[0]);
	int count = -1;
	printf("moi ban nhap gia tri can tim kiem:");
	scanf("%d",&item);
	for(int i=0;i<length;i++){
		if(arr[i]==item){
			printf("phan tu %d co vi tri index la %d\n",item,i);
			count=i;
		}
	}
	if(count==-1){
		printf("khong tim thay phan tu %d trong mang",item);
	}	
	return 0;
}
