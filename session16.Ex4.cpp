#include<stdio.h>
void printVarry(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d \n",i,*(arr+i));
	}
}
int main(){
	int arr[]={10,20,30,40,59};
	int size=sizeof(arr)/sizeof(arr[0]);
	printVarry(arr,size);
	return 0;
}
