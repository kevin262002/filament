#include<stdio.h>
#include<string.h>

main(){
	char lan1[50];
	
	printf("Enter name : ");
	gets(lan1);
	
	char lan2[50];
	strcpy(lan2,lan1);
	
	printf("Reverse : %s",strrev(lan2));
	
	int z = strcmp(lan2,lan1);
	
	if(z==0){
		printf("\npalindrome");
	}
	else{
		printf("\nNo"); 
	}
}
