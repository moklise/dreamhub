#include <stdio.h>

int fibo(int n);

int z=0, o=0;

int main(void){
	int input;	

	printf("숫자를 입력하시오 :");
	scanf("%d", &input);

	fibo(input);

	printf("%d %d", z, o);
}

int fibo(int n){
	if (n == 0) {
		//printf("0");	
		z++;
		return 0;
	}else if (n == 1){
		//printf("1");
		o++;
		return 1;
	}else {
		return fibo(n-1) + fibo(n-2);
	}
}
