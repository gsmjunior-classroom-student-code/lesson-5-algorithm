// 주어주는 수의 팩토리얼을 구하는 C 프로그램
#include <stdio.h> 

// 주어주는 수의 팩토리얼을 구하는 함수
unsigned int factorial(unsigned int n) 
{ 
	if (n == 0) 
		return 1; 
	return n * factorial(n - 1); 
} 

int main() 
{ 
	//int num = 5; 
	int num;
	scanf("%d",&num);
	printf("Factorial of %d is %d", num, factorial(num)); 
	return 0; 
} 
