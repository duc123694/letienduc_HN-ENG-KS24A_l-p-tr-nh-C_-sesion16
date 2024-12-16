#include<stdio.h>
int searchNumber(int *arr,int size,int value){
	for(int i=0;i<size;i++){
		if(arr[i]==value){
		return i;
	  }
	}
	return -1;
}
int main(){
	int arr[]={10,20,30,40,50,60};
	int size=sizeof(arr)/sizeof(arr[0]);
	int valueFind=20;
	int position=searchNumber(arr,size,valueFind);
	if(position!=-1){
		printf("Phan tu %d duoc tim thay tai vi tri: %d\n",valueFind,position);
	}else{
		printf("Phan tu %d k ton tai trong mang");
	}
	return 0;
	}
