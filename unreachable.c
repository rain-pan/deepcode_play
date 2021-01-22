#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    if(i != 0){
        //unreachable code
        i=i+1;
    }

    return 0;
    //unreachable code
    i=i+1;
}
