#include <stdio.h>
#include <math.h>

int main() {
    float x = 1;
    float y = 1;
    float h = 0.001;
    float total;
    int X = 2;
    int Y;
    int n ;
    float ytemp ;
    float xx;
    float yy;
    printf("Please enter # of iterations n : ");
    scanf("%d", &n);
    
    //approximate solution
    for (int i = 0; i <= n; i++) {
        //improved euler method
        ytemp = y + h * (x + 3 * y / x);
        xx = x + h;
        yy = y + h * ( (x + 3 * y / x) + (xx + 3 * ytemp / x) );
        
        // euler method
        y = y + h * (x + 3 * y / x);
        
        
        x = x + h;
        printf("euler's approximate solution is %f %f \n", x, y);
        printf("improved euler's approximate solution is %f %f \n", xx, yy);
    }
    
    
    //exact solutation
    Y = 2 * pow(X,3) - pow(X,2);
    printf("exact solution is %d \n", Y);
    
}
