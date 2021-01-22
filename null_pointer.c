#include <stdio.h>
#include <stdlib.h>

void increase(int *p)
{
    (*p)++;
}

int main()
{
    int * p=NULL;
    increase(p);
    return 0;
}
