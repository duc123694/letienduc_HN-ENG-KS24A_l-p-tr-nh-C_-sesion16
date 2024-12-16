#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x=5,y=10;
	printf("gia tri cua 2 bien truoc khi doi la %d va %d",x,y);
	swap(&x,&y);
	printf("gia tri cua 2 bien sau khi doi la %d va %d",x,y);
	
	return 0;
}
