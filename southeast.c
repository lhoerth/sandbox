/*
** Logan Hoerth - lhoerth@mail.greenriver.edu
** 10/5/14 (update)
** The Southeast Program
** Time spent: about 20 minutes
** 
** I discovered the increment/decrement operators have precedence over 
** the dereference operator, so parentheses were necessitated.
** NOTE: I did this in class on 9/25/14.
*/

#include <stdio.h>

// prototype
void go_southeast(int * lat, int * lon);

int main(void)
{
	// int variables for each coordinate
	int latitude = 32, 
	longitude = -64;

	// call function, passing coordinate addresses
	go_southeast(&latitude, &longitude);

	// output adjusted coordinate values
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

	// done
	return 0;
}

// function adjusts coordinate values from main using pointers
void go_southeast(int * lat, int * lon)
{
	(*lat)--; //decrement latitude in main (south)
	(*lon)++; //increment longitude in main (east)
}
