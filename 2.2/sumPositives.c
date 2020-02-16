/*
 Propmt the user for integers. When a negative integer, the program stops reading numbers and writes the sum of all the nonnegative integers entered. Assume that at least one nonnegative integer is entered.
 */
#include <stdio.h>
int main() {
    int sum, propmtedNum;
    sum = 0;
    printf("Enter a number: ");
    scanf("%d", &propmtedNum);
    while (propmtedNum > 0) {
        sum += propmtedNum;
        printf("Total of all positive numbers you entered: %d\n", sum);
        printf("Enter a number: ");
        scanf("%d", &propmtedNum);
    }
    printf("*** END OF PROGRAM ***");
}
