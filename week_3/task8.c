#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define alphabet 26

void most_used_alphabet(char *arr)
{
    int len = strlen(arr);
    int count[alphabet] = {0};

    int max, duplicated = 0;
    char result;

    for (int i = 0; i < len; i++)
    {
        char c = toupper(arr[i]);
        count[c - 'A']++;
    }

    for (int i = 0; i < alphabet; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = 'A' + i;
            duplicated = 0;
        }
        else if ((count[i] == max) && (max > 0))
        {
            duplicated = 1;
            result = '?';
        }
    }

    printf("%c\n", result);
}

int main(void)
{
    char arr[1000001];

    fgets(arr, sizeof(arr), stdin);
    most_used_alphabet(arr);
}