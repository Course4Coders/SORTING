/*MERGE SORT*/
 
 
#include<stdio.h>


void mergesort(int a[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=l;
	int temp[h];
	
	
	while(i<=mid&&j<=h)
	    {
	    	if(a[i]>a[j])
	    	temp[k++]=a[j++];
	    	else
	    	temp[k++]=a[i++]; 
		}
	
	  if(i<=mid)
	     {
	      while(i<=mid)
		     {
		      temp[k++]=a[i++];	
			 }		 
		 }	
	
	   if(j<=h)
	     {
	      while(j<=h)
		     {
		      temp[k++]=a[j++];	
			 }		 
		 }	
	   
	   for(i=l;i<=h;i++)
	        {
	       	  a[i]=temp[i];
			} 
}



void merge(int a[],int l,int h)
{
	if(l<h)
	   {
	   int	mid=l+(h-l)/2;
	   
	   	merge(a,l,mid);
	   
	   	merge(a,mid+1,h); 
	   
	   	mergesort(a,l,mid,h);
	   }
}





int  main()
{
  int a[]={10,89,765,45,9,12,907,645,34,67,896,997,32,17},i;
  
    int  n=(sizeof(a)/sizeof(a[0]))-1;
  
      merge(a,0,n);
     
	  for(i=0;i<=n;i++)
	      {
	   
	      	printf("%d ",a[i]);
	
		  }
   return 0; 	
}
 
