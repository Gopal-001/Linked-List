#include<iostream>
using namespace std;
class node
{
    private:
    int data;
    struct node *next;
}*head,*newnode,*temp;
int main()
{
    head=0;
    int choice=1;
    while(choice)
    {
    newnode=;new Node();
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
    cout<<"press 1 to continue or 0 to exit\n";
    cin>>choice;
    }
    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
