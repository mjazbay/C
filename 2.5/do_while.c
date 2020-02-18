/*
The do while loop is useful whenever the test naturally occurs at the bottom of the loop. For example, when we are verifying user input, the user enters a value then the input is checked. 
*/
#include <stdio.h>
int main(){
int response;
do {
	printf("Enter a positive integer: ");
	scanf("%d", &response);
}while(response > 0);
}
