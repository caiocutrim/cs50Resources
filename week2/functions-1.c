#include <stdio.h>
#include <cs50.h>

int GetPositiveInt(void);
int main (void){
	int n = GetPositiveInt();

	printf("Thanks for the %i\n", n);
}

int GetPositiveInt(void){
	int n;
	do{
		printf("Please, type a number: ");
		n = GetInt();
	}
	while(n < 1);
	return n;
}
