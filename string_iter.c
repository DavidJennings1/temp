/* Iterate through string input on command line
until nul character */;

#include <stdio.h>
#include <string.h>

struct A
{
    A() {
        printf("asdf\n");
    }

};

A a;

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            printf("%c\n", argv[i][j]);
        }
        printf("\n");
    }
}
