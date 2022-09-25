#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *mystring;
    mystring = malloc(10*sizeof(char));
    strcpy(mystring,"hello world");

    //print each suffix of hello world
    for (int i=0; i<11; i++) {
        printf("%p %s\n", mystring+i, mystring+i);
    }

    return 0;
}
