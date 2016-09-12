#include <stdio.h>

#include <string.h>

#include <ctype.h>

 

struct detail

{

    char word[20];

    int freq;

};

 

int update(struct detail [], const char [], int);

 

int main()

{

    struct detail s[10];

    char string[100], unit[20], c;

    int i = 0, freq = 0, j = 0, count = 0, num = 0;

 

    for (i = 0; i < 10; i++)

    {

       s[i].freq = 0;

    }

    printf("Enter string: ");

    i = 0;

    do

    {

        fflush(stdin);

        c = getchar();

        string[i++] = c;

 

    } while (c != '\n');

    string[i - 1] = '\0';

    printf("The string entered is: %s\n", string);

    for (i = 0; i < strlen(string); i++)

    {

        while (i < strlen(string) && string[i] != ' ' && isalnum(string[i]))

        {

            unit[j++] = string[i++];

        }

        if (j != 0)

        {

            unit[j] = '\0';

            count = update(s, unit, count);

            j = 0;

        }

    }

 

    printf("*****************\nWord\tFrequency\n*****************\n");

    for (i = 0; i < count; i++)

    {

        printf("%s\t   %d\n", s[i].word, s[i].freq);

        if (s[i].freq > 1)

        {

            num++;

        }

    }

    printf("The number of repeated words are %d.\n", num);

 

    return 0;

}
