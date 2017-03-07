/*SHELL SORT*/

#include <stdio.h>
#include <stdlib.h>


void shellsort(int a[],int n)
{
	int i,j,k,temp;
	
	for(i=n/2;i>0;i=i/2)
	    {
	    for(j=i;j<n;j++)
		     {
		       for(k=j-i;k>=0;k=k-i)
			       {
			        if(a[k+i]>a[k])	
			           break;
			        else
					   {
				         temp=a[k+i];
						 a[k+i]=a[k];
						 a[k]=temp;	    	
					   }   
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
	
	
	printf("enter item\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
    }
    
    shellsort(a,n);
    
    
    printf("sorted items are as:-\n");
    for(i=0;i<n;i++)
	{
	
	printf(" %d",a[i]);	
    }
     
	return 0;
}
