#include <stdio.h>

int main() {
    FILE *fin1, *fin2, *fout;
    fin1 = fopen("/Users/ruslani4/Desktop/Studying/Programming/Labs/Lab12/input_1.txt", "r");
    fin2 = fopen("/Users/ruslani4/Desktop/Studying/Programming/Labs/Lab12/input_2.txt", "r");
    fout = fopen("/Users/ruslani4/Desktop/Studying/Programming/Labs/Lab12/output.txt", "w");
    char ch;

    while (1)
    {
        ch = getc(fin1);
        if (ch == EOF)
        {
            fprintf(fout, " ");
            break;
        }
        else
            putc(ch, fout);
    }

    while (1)
    {
        ch = getc(fin2);
        if (ch == EOF)
            break;
        else
            putc(ch, fout);
    }

    printf("File copied succesfully!");
    fclose(fin1);
    fclose(fin2);
    fclose(fout);
}