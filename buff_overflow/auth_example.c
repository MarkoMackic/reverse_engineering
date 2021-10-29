#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check_auth(char *authstr)
{
    int auth_flag = 0;
    char password_buffer[16];
    
    strcpy(password_buffer, authstr);
   
    if(strcmp(password_buffer, "test1") == 0)
        auth_flag = 1;
    if(strcmp(password_buffer, "test2") == 0)
        auth_flag = 1;
  

    return auth_flag;
}

int main(int argc, char *argv[])
{
  if(check_auth(argv[1]))
     printf("OKI");
  else 
     printf("A_DENIED");
} 
