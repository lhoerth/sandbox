/*
** Logan - 10/5/14
** Program 04: monte.c v2
** time spent: 10 minutes
*/

#include <stdio.h>

int main()
{
	/* array declarator makes an updatable copy in the stack...*/
	char cards[] = "JQK"; 
	char a_card = cards[2];
	cards[2] = cards[1];
	cards[1] = cards[0];
	cards[0] = cards[2];
	cards[2] = cards[1];
	cards[1] = a_card;
	puts(cards);
	return 0;
}