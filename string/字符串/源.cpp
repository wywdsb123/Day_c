#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void delete_subtr(const char* str, const char* substr, char* resultstr);
void delete_subtr(const char* str, const char* substr, char* resultstr)
{
	char temp[81];
	strcpy(temp, str);
	char* found;
	int substr_len = strlen(substr);
	while ((found = strstr(temp, substr)) != NULL) {
		strncpy(resultstr, temp, found - temp);
		resultstr[found - temp] = '\0';
		strcat(resultstr, found + substr_len);
		strcpy(temp, resultstr);
	}
	strcpy(resultstr, temp);
}
int main() {
	char S1[81], S2[81];
	char result[81] = { 0 };
	fgets(S1, 81, stdin);
	fgets(S2, 81, stdin);
	S1[strcspn(S1, "\n")] = '\0';
	S2[strcspn(S2, "\n")] = '\0';
	delete_subtr(S1, S2, result);
	printf("%s\n", result);
	return 0;
}