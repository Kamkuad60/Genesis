#include <stdio.h>

//what is the result (int)
//The name (main)
int main() {
	double celsius = 0;
	double min = -100.1, max = 2000, step = 5;

	for (double cur = min; cur < max; cur = cur + step) {
		celsius = (cur - 32) * 5 / 9;
		printf("fahr %6.1f\t cel %6.1f \n", cur, celsius);
	}
}
