#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int col = 80;

void input80(char* s) {
    if (strlen(s) > col) {
        while (*s != '\0') {
            printf("%c", *s);
            s++;
        }
        printf("\n");
    }
    else {
        int pos=strlen(s)- 1;
        if ( s[pos] == '\n')
            s[pos]='\0';
        printf("Строка '%s' меньше %d символов\n\n", s, col);
    }
}

int main (void) {  
    FILE *S4;
    char str[500];
    char *estr;

    S4 = fopen ("S4.txt","r");

    if (S4 == NULL) {printf ("Ошибка открытия файла\n"); return -1;}

    while (1) {
        estr = fgets (str,sizeof(str),S4);

        if (estr == NULL) {
            if ( feof (S4) != 0)
                break;

            else {
                printf ("Ошибка чтения из файла\n");
                break;
            }
        }
        input80(str);
    }

    if ( fclose (S4) == EOF) printf ("Ошибка закрытия файла\n");

    return 0;
}