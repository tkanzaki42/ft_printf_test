#include "stdio.h"
#include "limits.h"

int main()
{
	void *p;

	printf("[%d]\n", printf("%c", 'a'));
	printf("[%d]\n", printf("%s", "Tokyo"));
	printf("[%d]\n", printf("%p", p));
	printf("[%d]\n", printf("%d", 42));
	printf("[%d]\n", printf("%i", 2021));
	printf("[%d]\n", printf("%u", (unsigned int)(INT_MAX + 1)));
	printf("[%d]\n", printf("%x", 42));
	printf("[%d]\n", printf("%X", 42));
	printf("[%d]\n", printf("%%"));
	

	return (0);
}
