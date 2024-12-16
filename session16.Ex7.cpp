#include<stdio.h>
void sapXep(int *arr,int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
}
int main(){
	int arr[]={3,2,5,1,20,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	sapXep(arr,size);
	printf("Mang sau khi dc sap xep la: ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
