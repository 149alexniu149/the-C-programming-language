#include <stdio.h>

int main()
{
	int tabs, blanks, nl, c;

	tabs = blanks = nl = 0;
	while((c = getchar()) != EOF) {
		if (c == '\t') {
			++tabs;
		} else if (c == ' ') {
			++blanks;
		} else if (c == '\n') {
			++nl;
		}
	}	

	printf("Tabs: %d Blanks: %d New Lines: %d\n", tabs, blanks, nl);
}
