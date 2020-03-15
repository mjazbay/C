#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float h;
    float xx = 0;
    float yy = 0;
    //ask user for x and h values
    printf("please enter values for x and h: ");
    scanf("%f %f", &x, &h);
    
    int n = x / h;
    //numerical approximation using half-increment method
    //approximate the derivative of f(x) = x * sinx
    
    for (int i = 0; i <= n; i++) {
        yy = ( (xx + h/2) * sin(xx + h/2) - (xx - h/2) * sin(xx - h/2) ) / h;
        printf("numerical approximation @ x and y  %f %f\n", xx, yy);
        if ( (xx + h) < x) {
        xx += h;
        }
    }
    float yyy = sin(xx) + xx* cos(xx);
    printf("exact solution @ %f is %f \n", xx, yyy);
}
