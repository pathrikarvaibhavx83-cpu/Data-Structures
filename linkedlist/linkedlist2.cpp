#include<iostream>
using namespace std;
class node{
  public:
  node* next;
  int data;
  node(int val){
    next=NULL;
    data=val;
  }
};
class list{
  node* head;
  node* tail;
  public:
  list(){
  head=tail=NULL;
  }
  void push_front(int val){
    node* newnode=new node(val);
    if(head==NULL){
      head=tail=newnode;
    }else[
      newnode->next=head;
      head=newnode;
    ]

  }
};
