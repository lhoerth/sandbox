/*
** Logan Hoerth - lhoerth@mail.greenriver.edu
** 10/5/14
**
** The Southeast Program (the not finished version)
** Time spent: about 20 minutes
*/

#include <stdio.h>

void go_south_east(int lat, int lon)
{
	lat = lat - 1;
	lon = lon + 1;
}

int main()
{

	int latitude = 32; 

	int longitude = -64;

	go_south_east(latitude, longitude);

	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

	return 0;
}
