
#include <stdio.h>
#include<stdlib.h>
void display();
void delete();
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL;
int main()
{
   
char ch='y';
struct node *newnode,*current;
nm:
while(ch=='y')
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the value in node:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
current=newnode;
}
else
{
//oldnode=newnode;
current->next=newnode;
current=newnode;
}

printf("\n Do you want to create another node");
scanf(" %c",&ch);
if(ch=='y')
{
    goto nm;
}
else if(ch=='d')
{
    delete();
}
else
{
    display();
}

}

    return 0;
}
void display()
{
    while(head!=NULL)
{
    printf("\t%d",head->data);
    head=head->next;
}
}

void delete()
{
    struct node *temp = head;       
    int i,pos;   
       printf("enter location for deletion");
    scanf("%d",&pos);
    if(pos==0)
    {
        printf("\nElement deleted is : %d\n",temp->data);
        head=head->next;        
        temp->next=NULL;
                    
    }
    else
    {
        for(i=0;i<pos-1;i++)
        { 
            temp=temp->next;
        }
       
        struct node *del =temp->next;       
        temp->next=temp->next->next;
        printf("\nElement deleted is : %d\n",del->data);      
        del->next=NULL;
                               
    }
    printf("\nUpdated Linked List is : \n");
    display();
   
}


