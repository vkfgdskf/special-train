#include <stdio.h>

#include "askname.h"

void add (int i, int b);

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

    printf("Hello, %s %s!\n", first, last);
    return 0;
}

void add (int i, int b)
{
	
}