#include <stdio.h>
#include <string.h>

int
main(void)
{
	const char text[] = "and that piece of art is useful\" - Dora Korpar, "
		"2015-10-19\n";
	fwrite(text, 1, strlen(text), stderr);
	return 0;
}
