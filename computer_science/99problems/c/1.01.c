#include <stdio.h>

void tty_find_last(char list[], size_t length)
{
	char last = list[length - 1];

	if (last == 0)
		printf("The list is empty.\n");
	else
		printf("%c\n", last);
}

int main()
{
	char list[] = {'a', 'b', 'c', 'd'};
	size_t length = sizeof(list) / sizeof(list[0]);

	tty_find_last(list, length);
	return 0;
}
/* => d  */
