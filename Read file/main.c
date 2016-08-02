#include <stdio.h>
#include <stdlib.h>
FILE *text;

int main()
{
    text= fopen("index.html", "w+");
    fprintf(text, "Hi! \n");
    fputs("My name is Visal \n", text);

    if (text == NULL){
        printf("Works are not sucess:( \n");
    } else{
        printf("It sugcess! \n");
    }
    fclose(text);

}
