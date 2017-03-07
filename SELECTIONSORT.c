/*SELECTION SORT*/

#include <stdio.h>
#include <stdlib.h>


void selectionsort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	  {
	    for(j=i+1;j<n;j++)
		    {
		      if(a[i]>a[j])
			     {
			       temp=a[j];
				   a[j]=a[i];
				   a[i]=temp; 	
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
    
    selectionsort(a,n);
    
    
    printf("sorted items are as:-\n");
    for(i=0;i<n;i++)
	{
	
	printf(" %d",a[i]);	
    }
     
	return 0;
}
