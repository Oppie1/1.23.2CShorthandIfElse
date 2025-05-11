#include <stdio.h>
#include <stdlib.h>

// Write a program using the "?" "if" ":" "else" method. Based off 7 friends.
// If you have you only have one friend the program will run but not put in "s"
// Any other number will make program run with "s".

int main()
{
	int friends = 7;

	printf("I have %d friend%s", friends, (friends != 1) ? "s" : "");

	return 0;
}
