#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void){
	printf("Type a word: ");
	string s = GetString();

	if (s != NULL){
		for(int i = 0, n = strlen(s); i < n; i++){
			// c is equal a char
			printf("%c\n", s[i]);
		}
	}

	return 0;
}
