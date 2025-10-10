//CP 7th conditional notes 

#include <stdio.h>
#include <string.h>
/* logical operators
&& and 
||or 
! not
*/
int main (void){
    int grade;
    char name[50];
    printf("what is your grade percent:");
    scanf("%d",grade);
    printf("what is your name;");
    scanf("%s", &name);
    printf("%d", strcmp (name, "Ms.LaRose"));
    if(name == "Ms.Larose"){
        printf("you dont get a grade!\n");
    }
    
    else if(grade >= 90){
        printf("you have a A!!\n");
    }else if(grade >= 80){
    printf("you have a B!\n");
    }else if(grade >= 70){
    } else if (grade >= 70){
    } else{
        printf("you are failing: (\n");
    }
    return 0;
}







//What puts something inside of the “if” statement?
//curley brackts

//How are conditions written in C?
//if
//else if
//else

//How do we write elif conditions in C?
//else if

//When do else conditions run?
//when none of the other conditions come out ture 

//What are the 3 logical operators in C?
// < > >= <=