#include <stdio.h>
#include <math.h>

int main() {

    int n;
    float total = 0.1;
    printf("please enter # of iterations n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        total = total - (pow(total, 3) - 3) / (3 * pow(total, 2));
    }
    printf("your approximation is %f\n", total);
}
