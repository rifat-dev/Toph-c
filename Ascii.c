#include <stdio.h>
#include <math.h>

int main(void)
{
	float rate;
	int near;

	scanf ("%f", &rate);
	near = (int) floor(rate);
	int tm = (int) (rate / 10.0);

	printf ("[");
	for (int i=0; i < tm; ++i){
		printf ("+");
	}
	for (int k=10; k > tm; --k)
		printf (".");
	printf ("] %d%c\n", near, '%');

	return 0;
}
