#include <stdio.h>
#include <ctype.h>
void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *po)
{
    /* analyze the characters in a line of text */
    char c;         /*  uppercase character */
    int count = 0;  /*   character count */
    while( (c = toupper(line[count])) != '\0' ){
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            ++ *pv;       /*  vowel */
        else if (c >= 'A' && c <= 'Z')
            ++ *pc;       /*  consonant */
        else if ( c >= '0' && c <= '9')
            ++ *pd;       /*  digit */
        else if ( c == ' ' || c == '\t')
            ++ *pw;       /*  whitespace */
        else
            ++ *po;
        count++;
    }
    return;
}
int main(int argc,char **argv){
    char line[80];    /*  line of text */
    int vowels = 0;   /*  vowel counter */
    int consonants = 0; /*  consonant counter */
    int digits = 0;     /*  digit counter */
    int whitespace = 0; /*  whitespace counter */
    int other = 0;      /*  remaining character counter */
    
    printf("Enter a line of text below:\n");
    scanf("%[^\n]", line);

    scan_line(line, &vowels, &consonants, &digits, &whitespace, &other);

    printf("\nNO. of vowels: %d", vowels);
    printf("\nNo. of consonants: %d", consonants);
    printf("\nNo. of digits: %d", digits);
    printf("\nNo. of whitespace characters: %d", whitespace);
    printf("\nNo. of other characters: %d", other);
    return 0;

}
