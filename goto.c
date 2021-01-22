#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
l1:
    i=i+1;
    printf("i=%d\n", i);
    if (i<2){
      goto l1;
    }
    return 0;
}
