#include<stdio.h>
#include<conio.h>

char hash[256];

void fun(char a[])
{
	int i,len=strlen(a);
	
	for(i=0;i<len;i++)
	    ++hash[a[i]];
	    
	for(i=0;i<len;i++)
	   {
	     if(hash[a[i]]==1)
		   {
		     printf("%c",a[i]);
			 return;	
		   }	
	   }    
	   
	   printf("THE FINAL STRING\n");
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

fun(a);
	
return 0;	
}
