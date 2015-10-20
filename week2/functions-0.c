#include <stdio.h>
#include <cs50.h>


void PrintName(string name);

int main (void){
	printf("Your name: ");
	string name = GetString();

	if(name != NULL){
		PrintName(name);
	}
}

void PrintName(string name){
	printf("Your name is %s\n", name);
}
