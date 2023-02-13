#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
	
};

struct node* head=NULL;


void createlinklist(int value)
{
struct node* temp=head;
struct node* newnode;
newnode=new (node);
if(head==NULL)
{
newnode->data=value;
head=newnode;

}
else
{
newnode->next=newnode;
newnode->data=value;

}

}



void mergeshort(&head)
{

if(head->next==0)
{
	return head;
	}	
struct node* mid=findmid();

struct node*left=head;
struct node*right=mid->next;
	
left=meergesort(left);
right=mergesort(right);

struct node*ans=merge(left,right);
	




}

node* findmid(node* head)
{
	
	node* slow=head;
node*fast=head;
	
	while(fast->next=NULL)
	{
		fast =fast->next->next;
		slow=slow->next;
	}
	
slow->next=NULL;

	return slow;
}

node* merge(node*left,node*right)
{
	if(left==0)
	{
		return right;
	}
	if(right==0)
    {
     return left;	
    }

struct node* ans=new node(-1);
struct node*temp=ans;
while(left!=NULL&&right!=NULL)
{
if(left->data<right->data)
	{
		temp->next=left;
		temp=left;
		left=left->next;
		
	}
	else
	{
		temp->next=right;
		temp=right;
		right=right->next;
	}
}

	
	while(left!=NULL)
	{
		temp->next=left;
		temp=left;
		left=left->next;
			
	}
	
	while(right!=NULL)
	{
		temp->next=right;
		temp=right;
		right=right->next;
	}
	
	
ans=ans->next;
return ans;

	
}








void printlinklist( node* head)
{
node*temp=head;
while(temp!=NULL)
{
	cout<<temp->data;
	temp=temp->next;
	}	
		
}









int main()
{

struct node*head=NULL;


int value;
int  n;
cout<<"enter the number alement in linklist ";
cin>>n;

for(int i=0;i<n;i++)
{
cin>>value;
createlinklist(value);	

}
printlinklist(head);

return 0;	
}
