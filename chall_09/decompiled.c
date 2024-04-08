#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Actual input: T5YX

int main(void)
{
    char key[] = {'=', '\x01'};
    char input[50];

    fgets(input, 50, stdin);

    for (int i = 0; i < strlen(input); i++)
    {
        char val = input[i] ^ 105;
        char keyVal = key[i];
        if (val == keyVal)
        {
            continue;
        }

        exit(69);
    }
}