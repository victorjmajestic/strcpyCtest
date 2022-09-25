#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *mystring;
    mystring = malloc(10*sizeof(char));
    strcpy(mystring, "hello world");

    printf("MyString:\n%s\n", mystring);
    return 0;
}
