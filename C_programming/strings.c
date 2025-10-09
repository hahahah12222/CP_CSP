//CP 7th string notes 
#include <stdio.h>
#include <string.h>

int main(void){
    char name[]= "Anderw";
    char last_name[25];
    printf("tell me your last name:\n");
    scanf("%s",last_name);
    char full_name[50];
    strcat(full_name, name);
    printf("[%s]\n", full_name);
    
    strcat(full_name, " ");
    printf("[%s]\n", full_name);
   
    strcat(full_name,last_name);
    printf("[%s]\n", full_name);
    
   printf("%c", last_name[0]);
   last_name[0]= 'R' ;

    printf("your name is %s %s", name ,last_name);
    printf("%zu\n" , strlen(name));
    printf("%zu\n" , strlen(name));
    
    
    
    return 0;
}


// 1. What is the difference between a string and a character?

// a string is a list of charecters and a charcter is just a single charcter 

// 2. What types of quotation marks do we need for a string?

//double qotation ""

// 3. What library do we need to include to access the string functions in C?

//#include <string.h>

// 4. List functions the library allows us to use.

//you do strcat

//5. How do we concatenate strings in C?
//you do strcat() 

//6. How do we get individual characters from a string in C?
//you have to call the name of the variable
