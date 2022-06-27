#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input_chars(char* s) {
    while (*s != '\0') {
        if ((*s != ' ') && (*s != '\t')) {
            printf("%c", *s);
            s++;
        }
        else {
            printf("\n");
            s++;
        }
    }
}

int main (void) {  
    FILE *S2;
    char str[50];
    char *estr;

    S2 = fopen ("S2.txt","r");

    if (S2 == NULL) {printf ("Ошибка открытия файла\n"); return -1;}

    while (1) {
        estr = fgets (str,sizeof(str),S2);

        if (estr == NULL) {
            if ( feof (S2) != 0)
                break;

            else {
                printf ("Ошибка чтения из файла\n");
                break;
            }
        }
        input_chars(str);
    }

    if ( fclose (S2) == EOF) printf ("Ошибка закрытия файла\n");

    return 0;
}