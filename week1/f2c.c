#include <stdio.h>
#include <cs50.h>


int main (void){
	printf("Temperature in F: ");

	float getFloatNumber = GetFloat();

	float result = 5.0 / 9.0 * (getFloatNumber - 32.0);

	printf("%1.f\n", result);
}
