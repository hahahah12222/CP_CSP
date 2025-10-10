// CP 7th silly sentences 

#include <stdio.h>
#include <string.h>


int main(void){
    char adjective[25];
    printf("Give me a adjective:\n");
    scanf("%s", adjective);
    
    char noun[25];
    printf("Give me a noun:\n");
    scanf("%s",noun);

    char verb[25];
    printf("Give me a verb:\n");
    scanf("%s", verb);

    printf("The %s %s %sed loudly.\n", adjective, noun, verb);
}
