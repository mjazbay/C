#include <stdio.h>
#include <stdlib.h>
#define Prompt() printf("\nPlease enter a number: ")
#define ReadWrite(value) scanf("%d", &value) 
#define Answer(number, ans) printf("\nFactorial of %d is : %d", number, ans);

int factorial(int n);

int main() {
	int number;
	do {
		Prompt();
		ReadWrite(number);
		Answer(number, factorial(number));
	} while (number);
	return 0;
}

int factorial(int n) {
	if (n == 0) {
		return 1;
	} else {
		return n * factorial(n-1);
	}
}