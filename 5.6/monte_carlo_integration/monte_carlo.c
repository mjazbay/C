#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PREPROCESSOR MACROS */
#define dran( u1 ) ( (rand() / (double) RAND_MAX) * (u1))
#define Prompt(p) printf(p)
#define Response(r) scanf("%d", &r)
#define Answer(a) printf("Integral = %f\n", a)

double area(int trials);

int main() {
int resp, trials;
do { 
Prompt("\n\nRun again (1 = yes, 0 = no)? ");
Response(resp);

if (resp) {
	Prompt("How many trials? ");
	Response(trials);
	Answer(area(trials));
}
} while (resp);
return 0;
}

double area(int trials) {
	double x,y;
	int count, hit; 

	for (count = 0, hit = 0; count <= trials; count++) {
		x = dran(1.0);
		y = dran(1.0);
		if (y <= exp(-x * x / 2))
			hit++;
	}
	return (double) hit / (double) trials;
}
