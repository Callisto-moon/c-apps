#include <stdio.h>
void signup(void){
    char Username[20], email[50], password[20];
    int age, flag=0;
    printf("Enter the Username: ");
    scanf("%s", Username);
   // char uname = &Username; 
    if (Username >= 'A' && Username <= 'Z')
    {
        printf("good");
        flag++;
    }
    else{
        flag=0;
    }
    
    printf("Enter the email: ");
    scanf("%s", email);
    printf("Enter the age: ");
    scanf("%d", &age);
    printf("Enter the password: ");
    scanf("%s",password);
}
