/*
 This program reads molar concentrations from the file ph.in until end-of-file.(control+c || control+z) For each molar concentration mc, it computes the corresponding pH using the formula
            pH = -log10( mc )
 It then reports whether the solution is acidic (pH < 7) or nonacidic
 */
#include <stdio.h>
#include <math.h>

int main() {
    float pH, mc;
    FILE *fin, *fout;
    fin = fopen("ph.in", "r");
    fout = fopen("ph.out", "w");
    while (fscanf(fin, "%f", &mc) != EOF) {
        pH = -log10(mc);
        fprintf(fout, "\nMolar concentration = %e", mc);
        fprintf(fout, "\npH = %f", pH);
        if (pH < 7) {
            fprintf(fout, "\nAcidic\n");
        } else if (pH == 7) {
            fprintf(fout, "\nNeutral\n");
        }
        else {
            fprintf(fout, "\nNonacidic\n");
        }
    }
}
