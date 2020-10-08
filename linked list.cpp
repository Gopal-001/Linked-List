#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head,*newnode,*temp;
int main()
{
    head=0;
    int choice=1;
    while(choice)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter data\n";
    cin>>newnode->data;
    newnode->next=0;
    if(head==0)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    cout<<"do you want to continue\n";
    cin>>choice;
    }
    cout<<"enter the node to insert at beginning\n";
    newnode=(struct node*)malloc(sizeof(struct node));
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}