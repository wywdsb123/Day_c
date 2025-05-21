#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	char count[26] = { 0 };

	int i = 0;

	char s[80];

	fgets(s, sizeof(s), stdin);

	while (s[i]) {

		if (s[i] >= 'a' && s[i] <= 'z')

			count[s[i] - 'a']++;

		if (s[i] >= 'A' && s[i] <= 'Z')

			count[s[i] - 'A']++;

		i++;

	}

	for (int i = 0; i < 26; i++) {

		if (count[i] != 0) {

			printf("%c:%d\n", 'a' + i, count[i]);

		}

	}

	return 0;

}

