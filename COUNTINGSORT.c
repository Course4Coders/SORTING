#include <stdio.h>
#include <stdlib.h>



int max(int a[],int n)
{
	int max=0,i;
	for(i=0;i<n;i++)
	    {
	    	if(max<a[i])
	    	   {
	    	   	max=a[i];
			   }
		}
		return max;
}




int counting_sort(int a[],int b[],int n)
{
	int m=max(a,n);
	int c[m],i;
	

	
	  for(i=0;i<=m;i++)
	      {
	      	c[i]=0;
		  }
		  

		
	   for(i=0;i<n;i++)
	       c[a[i]]=c[a[i]]+1;//or ++c[a[i]];

       
       
		   
		for(i=1;i<=m;i++)
		    {
		     c[i]=c[i]+c[i-1];	
			}   	  
			
		 for(i=0;i<n;i++)
		    {
		     b[c[a[i]]-1]=a[i];
		     c[a[i]]=c[a[i]]-1;
			}	
}




int main() 
{

int i,n;
	
printf("Enter the number of element\n");
scanf("%d",&n);

int a[n],b[n];

for(i=0;i<n;i++)
scanf("%d",&a[i]);

counting_sort(a,b,n);

for(i=0;i<n;i++)
printf(" %d",b[i]);

return 0;
}


