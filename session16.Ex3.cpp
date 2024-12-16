#include<stdio.h>
void sum(int *a,int *b, int *result){
	*result= *a + *b;
}
int main(){
	int x=5,y=10;
	int result;
	sum(&x,&y,&result);
	printf("Tong cua 2 so %d va %d la %d",x,y,result);
	return 0;
}
