#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (void){
	printf("type something: ");
	string s = GetString();
	if(s != NULL){
		for (int i = 0, n = strlen(s); i <= n; i ++){
			if(islower(s[i])){
				printf("%c\n", toupper(s[i]));
			}
			else{
				printf("%c\n", s[i]);
			}
		}
	}
}
