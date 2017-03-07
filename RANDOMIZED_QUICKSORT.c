/*randomized_quicksort*/




#include<stdio.h>


int  quicksort(int a[],int l,int h)
{
	int i,x=l,temp,piv;
	
	srand(time(NULL));
	
	 int t=l+rand()%(h-l+1);
	

	temp=a[t];
	a[t]=a[h];
	a[h]=temp;
	
	piv=a[h];
	
	for(i=l;i<h;i++)
	    {
	    	if(a[i]<=piv)
	    	   {
	    	   	temp=a[x];
	    	   	a[x]=a[i];
	    	   	a[i]=temp;
	    	   	++x;
			   }
		}
		
		temp=a[h];//here we cannot use piv because it is local variable
		a[h]=a[x];
		a[x]=temp;
		
		
		return x;
}



void  quick(int a[],int l,int h)
{
	if(l<h)
	   {
	   
	   int piv=quicksort(a,l,h);
	   
	   	quick(a,l,piv-1); 
	   
	   	quick(a,piv+1,h);
	   }
}





int  main()
{
  int a[]={10,89,765,45,9,12,907,645,34,67,896,997,32,17},i;
  
    int  n=(sizeof(a)/sizeof(a[0]))-1;
  
      quick(a,0,n);
     
	  for(i=0;i<=n;i++)
	      {
	   
	      	printf("%d ",a[i]);
	
		  }
   return 0; 	
}
