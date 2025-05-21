#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
int main()
{
    char temp[501];
    fgets(temp, sizeof(temp), stdin);
    int len = strlen(temp);
    if (temp[len - 1] == '\n')
    {
       temp[len - 1] = '\0';
    }
  if (temp[len - 1] == '.') {

        temp[len - 1] = '\0';
    }
    char* token = strtok(temp, " ");
    char longestWord[501] = "";
    while (token != NULL)
    {
        if (strlen(token) > strlen(longestWord))
        {
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " ");
    }
   printf("%s\n", longestWord);
    return 0;
}

