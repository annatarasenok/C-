#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void histogramm(char* s) {
    int c = 0;
    while (*s != '\0') {
       if (*s != ' ') {
            c++;
            s++;
        }
        else {
            while (c != 0) {
                printf("=");
                c--;
            }

            printf("\n");
            c = 0;
            s++;
        }
    }

    while (c != 0) {
        printf("#");
        c--;
    }
}

int main (void) {  
    FILE *S3;
    char str[50];
    char *estr;

    S3 = fopen ("S3.txt","r");

    if (S3 == NULL) {printf ("Ошибка открытия файла\n"); return -1;}

    while (1) {
        estr = fgets (str,sizeof(str),S3);

        if (estr == NULL) {
            if ( feof (S3) != 0)
                break;

            else {
                printf ("Ошибка чтения из файла\n");
                break;
            }
        }
        histogramm(str);
    }

    if ( fclose (S3) == EOF) printf ("Ошибка закрытия файла\n");

    return 0;
}