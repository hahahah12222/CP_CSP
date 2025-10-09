//CP 7th name decorator

#include <stdio.h>
#include <string.h>

    int main(void){
    char name[20];
    char decorated_name[30] = "****" ;
    char name_decor[20] = "jdkjdkf";
    
    printf("what is your name\n");
    scanf("%s", decorated_name, name);
    strcat(decorated_name,name_decor);
    printf("%s",decorated_name);

}

