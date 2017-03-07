/*INSERTION SORT*/

#include <stdio.h>
#include <stdlib.h>


void insertionsort(int a[],int n)
{
	int i,j,value;
	
	for(i=1;i<n;i++)
	   {
	   	value=a[i];
	   	j=i;
	   	while(j>0&&a[j-1]>value)
	   	      {
	   	        a[j]=a[j-1];
				   j--;	
			  }
			a[j]=value;  
	   }
}


int main() 
{
	int i,n;
	
	printf("enter the number of items\n");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
	printf("enter item\n");
	scanf("%d",&a[i]);	
    }
    
    insertionsort(a,n);
    
    
    printf("sorted items are as:-\n");
    for(i=0;i<n;i++)
	{
	
	printf(" %d",a[i]);	
    }
     
	return 0;
}
