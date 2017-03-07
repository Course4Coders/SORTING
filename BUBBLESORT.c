/*BUBBLE SORT*/

#include <stdio.h>
#include <stdlib.h>


void bubblesort(int a[],int n)
{
	int i,j,temp,flag=1;
	for(i=0;i<n-1&&flag;i++)
	  {
	  	flag=0;
	    for(j=0;j<n-1-i;j++)
		    {
		      if(a[j]>a[j+1])
			     {
			       temp=a[j];
				   a[j]=a[j+1];
				   a[j+1]=temp;
				   flag=1; 	
				 }	
			}	
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
    
    bubblesort(a,n);
    
    
    printf("sorted items are as:-\n");
    for(i=0;i<n;i++)
	{
	
	printf(" %d",a[i]);	
    }
     
	return 0;
}
