#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* s) {
    int len = strlen(s);
    char myString[len];
    int i;
    for (i = len - 1; i >= 0; i--) {
        if (*s == '\0')
            break;
        myString[i] = *s;
        s++;
    }
    for (i = 0; i < len; i++) {
        printf("%c", myString[i]);
    }
}

int main (void) {  
    FILE *S5;
    char str[500];
    char *estr;

    S5 = fopen ("S5.txt","r");

    if (S5 == NULL) {printf ("Ошибка открытия файла\n"); return -1;}

    while (1) {
        estr = fgets (str,sizeof(str),S5);

        if (estr == NULL) {
            if ( feof (S5) != 0)
                break;

            else {
                printf ("Ошибка чтения из файла\n");
                break;
            }
        }
        reverse(str);
    }

    if ( fclose (S5) == EOF) printf ("Ошибка закрытия файла\n");
    getchar();
    return 0;
}