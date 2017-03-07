#include <stdio.h>
#include <stdlib.h>



struct node
{
int data;
struct node*next;	
};




struct node* merge(struct node*a,struct node*b)
{
	struct node*result=NULL;
	if(a==NULL)
	   return b;

	else if(b==NULL)
	   return a;
	  
	  if(a->data>=b->data)
	   {
	   	result=b;
	   	result->next=merge(a,b->next);
	   }   
       else     
	   {
	   	result=a;
	   	result->next=merge(a->next,b);
	   } 	      
	   
	   return result;
}



void mid(struct node*p,struct node**a,struct node**b)
 {
 	
 
 	struct node*fast=p;
 	struct node*slow=p;
 
 	while(fast->next!=NULL&&fast->next->next!=NULL)
 	      {
 	      
 	       fast=fast->next->next;
		   slow=slow->next;	
		   
		  }
		 *a=p;
		 *b=slow->next;
		 slow->next=NULL;
		 
 }




void mergesort(struct node**p)
{
	
	struct node*a,*b;
		
	if((*p)==NULL||(*p)->next==NULL)
	  {  	
	  return;
      }
      
	mid(*p,&a,&b);
	

	mergesort(&a);
	mergesort(&b);
	
	
	*p=merge(a,b);		  
}





struct node* add(struct node**p,int data)
{
	
	   	struct node*q=(struct node*)malloc(sizeof(struct node));
	   	              q->data=data;
	   	              q->next=(*p);
	         
	         (*p)=q;
	   
	   return *p;
	   
}




void print(struct node*p)
{
	while(p!=NULL)
	     {
	     	printf(" %d",p->data);
	     	p=p->next;
		 }
}





int main()
{
    struct node*p=NULL;
     
       add(&p,15);
       add(&p,10);
       add(&p,5);
       add(&p,20); 
       add(&p,3);
       add(&p,2);
      
	   
      print(p);
      printf("\n");
      
      mergesort(&p);
      
     print(p); 
	   
	  return 0;
}
