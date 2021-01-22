#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned int counter = 0.0;
    for(float f=0.0f; f<1.0f; f=f+0.001f){
        ++counter;
    } 
    return 0;
}
