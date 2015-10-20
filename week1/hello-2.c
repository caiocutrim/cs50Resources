#include <cs50.h>
#include <stdio.h>

int main(void){
	printf("your name please: ");
	string s = GetString();
	printf("hello, %s\n", s);
}
