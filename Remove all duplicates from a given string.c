#include <stdio.h>
#include <stdlib.h>
#define MAX 256
#include<string.h>


int main()
{
    
    int n,i,t;
    char a[101],count[MAX];
    
   
     scanf("%d",&n);
   int j=n;
   while(n)
   {
   	if(j==n)
     fgets(a,101,stdin);
     fgets(a,101,stdin);
     
    for(i=0;i<MAX;i++)
        {
            count[i]=0;
        }
        
        
        
        
           int len=0;
        
          len=strlen(a);
         
          
        for(i=0;i<len;i++)
            {
             
             if(count[a[i]]>0)
               {
                 continue;  
               }
             else
               {
                   
                 ++count[a[i]];  
                 if(count[a[i]]==1)
                 printf("%c",a[i]);
               }
            }
            
           
            memset(count,'0',MAX);
     --n;
   }    
	  return 0;
}
