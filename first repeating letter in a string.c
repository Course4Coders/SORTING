#include<stdio.h>
#include<conio.h>

char hash[256];

void fun(char a[])
{
	int i,len=strlen(a);
	
	for(i=0;i<len;i++)
	    {
	          if(hash[a[i]]==1)
		        {
		    	  printf("%c",a[i]);
		    	  break;
				}	
	    ++hash[a[i]];
	    }
	    if(i==len)
	      printf("There is no repeated character\n");
}


int main()
{
char a[20];

printf("Enter THe String\n ");
fgets(a,20,stdin);

fun(a);
	
return 0;	
}
