#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char tolower(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + ('a' - 'A');
	}return c;

}
int main() {
	char str1[80], str2[80];
	int i = 0;
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	while (1) {
		char c1 = tolower(str1[i]);
		char c2 = tolower(str2[i]);
		if (c1 == '\0' || c2 == '\0')
		{
			if (c1 == c2) {
				printf("=");
			}
			else if (c1 == '\0') {
				printf("<");
			}
			else {
				printf(">");
			}
			break;
		}
		if (c1 < c2)
		{
			printf("<");
			break;
		}
		else if (c1 > c2) {
			printf(">");
			break;
		}
		i++;
	}
	return 0;
}