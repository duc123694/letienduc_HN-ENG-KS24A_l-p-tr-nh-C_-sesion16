#include<stdio.h>
int main(){
	int y=10;
	int *yPrt=&y;
	printf("cach 1: \n");
	printf("Gia tri cua y:%d \n",y);
	printf("Dia chi cua y: %lu\n",&y);
	printf("cach 2: \n");
	printf("Gia tri cua y:%d \n",*yPrt);
	printf("Dia chi cua y: %lu\n",yPrt);

	return 0;
}
