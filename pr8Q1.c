/*
	Q1
*/
#include<stdio.h>

void main (){
	int l =0,*p;
	char s[100];
	
	printf("enter any string :=> ");
	gets(s);
	
	
	p=&s;
	strlen(s);
	l=strlen(s);
	*p=l;
	
	
	printf ("the iength of %d",*p);
		
	
}
