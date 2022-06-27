#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int c_spaces = 0;
int c_tabs = 0;
int c_nlines = 0;

void count_spaces(char* s) {
    while (*s!='\0') {
        if (*s == ' ') {
            c_spaces++;
            s++;
        }
        else if (*s == '\t') {
            c_tabs++;
            s++;
        }
        else if (*s == '\n') {
            c_nlines++;
            s++;
        }
        else 
            s++;
    }
}

int main (void) {  
    FILE *S1;
    char str[50];
    char *estr;

    S1 = fopen ("S1.txt","r");

    if (S1 == NULL) {printf ("Ошибка открытия файла\n"); return -1;}

    while (1) {
        estr = fgets (str,sizeof(str),S1);

        if (estr == NULL) {
            if ( feof (S1) != 0)
                break;

            else {
                printf ("Ошибка чтения из файла\n");
                break;
            }
        }
        count_spaces(str);
    }

    if ( fclose (S1) == EOF) printf ("Ошибка закрытия файла\n");

    printf("%d spaces, %d tabulation, %d new-lines.\n", c_spaces, c_tabs, c_nlines);

    return 0;
}