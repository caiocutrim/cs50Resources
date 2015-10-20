#include <stdio.h>


int main (void){
	for (int i = 65; i < 65 + 26; i ++){
		//we can casting
		printf("\t%i is %c\n", i,  (char) i);
	}
	printf("\tlowercase ascii \n\n");
	for (int i = 97; i < 97 + 26; i ++){
		//we can casting
		printf("\t%i is %c\n", i,  (char) i);
	}
}
