#include<iostream>
using namespace std;
class Node{
  public:

  int data;
  Node* NEXT;

  Node(int value){
    data=value;
    NEXT=NULL;
  }
  
};
class list{
  Node* head;
  Node* tail;
public:
list(){
  head=tail=NULL;


  }
  void push_front(int value){
    Node* newNode= new Node(value);
  if(head==NULL){
    head= tail=newNode;
    return;
  
   } else{
      newNode->NEXT=head;
      head=newNode;
    }
  }
};


int main(){  



  return 0;
}
