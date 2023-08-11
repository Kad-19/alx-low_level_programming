#include <stdio.h>

int main(void) 
{
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    for(int i=0; message[i]!='\0'; i++){
        putchar(message[i]);
    }
    return (1);
}
