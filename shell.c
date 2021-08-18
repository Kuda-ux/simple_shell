#include <stdio.h>
#include "shell.h"

int main()
{
	int i;
	printf("I can work");

	for (i = 0; i >= 0; i++)
	{
		printf("$ ");
		if (_getline(stdin) != -1)
			printf("%s", str);
		else if (str == "exit")
			break;
		else
			printf("failure");
	}
	return (0);
}
