#include <stdio.h>

int main() {
 
	double x, y, MEDIA;
	scanf("%lf %lf", &x, &y);
	MEDIA = ((x * 3.5) + (y * 7.5)) / 11;
	printf("MEDIA = %.5lf\n", MEDIA);
	return 0;
}
