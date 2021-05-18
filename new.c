// c program for welocme page 

#include <stdio.h>
#include <stdlib.h>
static int entry;
void signup(void);
void login(void);
int main(){
    
    while(1){
        printf("\n\n\tWELCOME");
        printf("\n1) LOGIN\n2) SIGNUP\n3) Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &entry);
        switch (entry)
        {
        case 1:
            printf("login!\n");
            login();
            break;
        case 2:
            printf("signup form\n");/* signup */
            signup();
            break;
        case 3:
            printf("Exit"); //exit the application 
            exit(1);
        default:
            printf("\nplease enter the vaild option: ");
            break;
        }
    return 0; }
}    