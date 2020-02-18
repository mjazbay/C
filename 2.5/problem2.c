/*
 rewriting the previous example using while loop instead of a do while loop
 */
#include <stdio.h>
int main() {
    int response;
    printf("Enter a positive integer: ");
    scanf("%d", &response);
    while (response > 0) {
        printf("Enter a positive integer: ");
        scanf("%d", &response);
    }
    printf("*** END OF PROGRAM ***");
}
