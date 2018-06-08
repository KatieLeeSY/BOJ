#include <stdio.h>

int main() {
	char str[101];
	while (fgets(str, 101, stdin) != '\0')
		printf(str);
	return 0;
}