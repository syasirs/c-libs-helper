#include "sc_string.h"

#include <stdio.h>

int main(void)
{
	char *s1;

	s1 = sc_string_create("*-hello-*");
	printf("%s \n", s1); // prints **hello**

	sc_string_trim(&s1, "*-");
	printf("%s \n", s1); // prints hello

	sc_string_append_fmt(&s1, "%d", 2);
	printf("%s \n", s1); // prints hello2

	sc_string_replace(&s1, "2", " world!");
	printf("%s \n", s1); // prints hello world!

	sc_string_substring(&s1, 0, 5);
	printf("%s \n", s1); // prints hello

	sc_string_destroy(&s1);

	return 0;
}
