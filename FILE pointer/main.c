#include <stdio.h>
#include <stdlib.h>
FILE *text;
FILE *reading;
char words[100];

int main()
{
    text = fopen("../index.html", "w+");
    fprintf(text, "My name is Visal \n");
    fputs("Liger Cambodia \n", text);
    fclose(text);

    reading = fopen("../index.html", "r");
    fscanf(reading, "%s", words);
    printf("1: %s\n", words);

    fgets(words, 255, reading);
    printf("2: %s\n", words);

    fgets(words, 255, reading);
    printf("3: %s\n", words);
    return 0;
}
