#include<stdio.h>
#include<string.h>

main(){
	
	char gmail[]="kevin@gmail.com";
	char user_mail[50];
	
	printf("Enter mail : ");
	gets(user_mail);
	
	char password[]="123456789";
	char user_password[50];
	
	printf("Enter password : ");
	gets(user_password);
	
	int z = strcmp(gmail,user_mail);
	int v = strcmp(password,user_password);
	
	
	if((z==0) && (v==0)){
		printf("login done");
	}else{
		printf("login fail");
	}
}
