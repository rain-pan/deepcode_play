#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *home = getenv("HOME");
    char *another_home = malloc(strlen(home)+1);
    strcpy(another_home, home);
 
    return 0;
}
