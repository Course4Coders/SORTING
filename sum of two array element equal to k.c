#include <stdio.h>
#include <stdlib.h>
#define MAX 100


int hash[MAX],temp;

void fun(int a[],int b[],int n,int m,int k)
{
	int i;
	
	for(i=0;i<m;i++)
	   ++hash[b[i]];
	
	for(i=0;i<n;i++)
	    {
	    	temp=k-a[i];
	    	if(hash[temp]>=1&&temp>0)
	    	   {
	    	   	printf("The sum %d is %d and %d ",k,a[i],temp);
	    	   	  return;
			   }
		}   
		
		printf("THERE IS NO SUCH TYPE OF ELEMENT");
}


int main() 
{
	
int a[]={2,8,4,12,9};
int b[]={6,1,8,61,11,7};


int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);

int k=73;

fun(a,b,n,m,k);	

	return 0;
}
