/*
 This program reads molar concentrations untill end-of-file.(control+c || control+z) For each molar concentration mc, it computes the corresponding pH using the formula
            pH = -log10( mc )
 It then reports whether the solution is acidic (pH < 7) or nonacidic
 */
#include <stdio.h>
#include <math.h>

int main() {
    float pH, mc;
    while (scanf("%f", &mc) != EOF) {
        pH = -log10(mc);
        printf("\nMolar concentration = %e", mc);
        printf("\npH = %f", pH);
        if (pH < 7) {
            printf("\nAcidic\n");
        } else if (pH == 7) {
            printf("\nNeutral\n");
        }
        else {
            printf("\nNonacidic\n");
            
        }
    }
}
