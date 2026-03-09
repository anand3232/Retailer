#include<list.h>

List::List(Node *h=nullptr):head(h){}
void List::add(int data)
{
    Node *newNode;
    if(head==nullptr)
    {
      newNode= new Node;
      newNode->data=data;
      newNode->next=nullptr;
      head=newNode;
      return;
    }
    Node *temp=head
    while(temp->next!=nullptr;
      temp=temp->next;
      newNode=new Node;
      newNode->data=data;
      newNode->next=nullptr;
      temp->next=newNode;
    }
}
void display()
{
   Node *temp=head;
   while(temp!=nullptr)
   {
      std::cout<<temp->data<<"\t"
   }
   std::cout<<std::endl;

}


