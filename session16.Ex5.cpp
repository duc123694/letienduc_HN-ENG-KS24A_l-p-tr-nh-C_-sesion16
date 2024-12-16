#include<stdio.h>
void value(int *arr,int newValue,int number){
	arr[number]=newValue;
}
int main(){
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	value(arr,99,2);
	printf("Mang sau khi thay doi la \n");
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d \n",i,arr[i]);
	}
	return 0;
}
