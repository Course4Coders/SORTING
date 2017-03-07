#include<stdio.h>
#include<conio.h>

int hash[100];

void fun(int a[],int n,int s)
{
	int i,temp,m=0;
	
	for(i=0;i<n;i++)
	    {
	         temp=s-a[i];
	        
	         if(hash[temp]==1&&temp>0)
	            {
	            	++m;
	            	printf("\n The sum of %d is %d and %d\n\n",s,a[i],temp);
	            	hash[temp]=0;
				}
				hash[a[i]]=1;
	    }
	   
	   if(m==0)
	    printf("There is no such two element who can sum %d",s); 
	    
}


int main()
{

int a[20]={4,3,7,2,9,5,3,11,8};

int n=sizeof(a)/sizeof(a[0]);

fun(a,9,11);
	
return 0;	
}
