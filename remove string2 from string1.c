#include<stdio.h>
#include<conio.h>
#include<string.h>

char hash[256];

void fun(char a[],char b[])
{
	int i,len=strlen(a),len2=strlen(b);
	for(i=0;i<len2;i++)
	    hash[b[i]]=1;
	    
	for(i=0;i<len;i++)
	   {
	     if(hash[a[i]]==1)
		   {
		   	a[i]='0';
		   }	
	   }    
	   
	   printf("\nTHE FINAL STRING\n");
	   for(i=0;i<len;i++)
	      {
	      	if(a[i]=='0')
	      	  continue;
	      	printf("%c",a[i]);  
		  }
}


int main()
{
char a[20];
char b[20];

printf("Enter THe first String1\n ");
fgets(a,20,stdin);
printf("Enter The second string2\n ");
fgets(b,20,stdin);

printf("THe first String1\n ");
fputs(a,stdout);
printf("The second string2\n ");
fputs(b,stdout);

fun(a,b);
	
return 0;	
}
