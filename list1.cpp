#include<iostream>
using namespace std;
struct nod
{
int info;
struct nod*next;
};
typedef struct nod node;
class list
{
node  *head;
public:
list()
{
head=NULL;
}
void ins(int num)
{
node *p=new node;
node *t=new node;
if(head==NULL)
{
p->info=num;
p->next=head;
head=p;
}
else
{
p->info=num;
t=head;
while(t->next!=NULL)
{
t=t->next;
}
t->next=p;
p->next=NULL;
}
}
void del()
{
node *temp=head;
node *p;
if(head==NULL)
cout<<"\n No elemenys are there to delete\n";
else
{
cout<<"\n The deleted element is:\n";
while(temp->next!=NULL)
{
p=temp;
temp=temp->next;
}
p->next=NULL;
delete temp;
cout<<"Deletion sucessful";
}
return;
}

void disp()
{
node *temp=head;
if(head==NULL)
cout<<"List is empty\n";
else
{
cout<<"elemenets in the list are:\n";
while(temp!=NULL)
{
cout<<""<<temp->info;
temp=temp->next;
}
}
}
};
int main()
{
int num,ch=1;
list ob;
cout<<"\n!!!!!!!Linear link list !!!!!!!\n";
cout<<"n1] Insert\n2] delete\n3] Exit";
while(ch)
{
cout<<"\n  Enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:cout<<"\n Enter no. to be inserted\n";
cin>>num;
ob.ins(num);
ob.disp();
break;
case 2:ob.del();
ob.disp();
break;
case 3:return 0;
default:cout<<"Invalid choice\n";
break;
}
}
}


