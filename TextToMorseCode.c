////////////////////////////////////////////////
// Name TextToMorseCode.c
//
// Author: Fares
//
// Purpose: Convert text input to morse code (lower case only).
//
// Notes: If you can't use strdup()
//
// char *input = malloc(input_size + 1);
//
////////////////////////////////////////////////


#include <string.h>
#include <stdio.h>


#define ALPHA_SIZE 26


int main(int argc, char *argv[])
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    char *morse_table[] = {
                               ".-", "-...", "-.-.",
                               "-..",".", "..-.",
                               "--.", "....", "..",
                               ".---", "-.-", ".-..",
                               "--", "-.", "---",
                               ".--.", "--.-", ".-.",
                               "...", "-", "..-",
                               "...-", ".--", "-..-",
                               "-.--", "--.."
                           };

    short input_size, i, j;

    input_size = strlen(argv[1]);

    char *input = strdup(argv[1]);

    for (i = 0; i < ALPHA_SIZE; ++i)
    {
        for (j = 0; j < input_size; ++j)
        {
            if (alphabet[i] == input[j])
            {
                printf("%s ", morse_table[i]);
            }
        }
    }

    free(input);

    return 0;
}

