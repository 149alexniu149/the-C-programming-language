#include <stdio.h>

#define NOBLANK 'a'

int main()
{
	int c, lastc;

	lastc = NOBLANK;
	while ((c = getchar()) != EOF) {
		if((c != ' ') || (c == ' ' && lastc != ' '))
			putchar(c);

		lastc = c;


	}

}
