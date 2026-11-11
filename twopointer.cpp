//WAP A PROGRAM FOR THE MISSING ELEMENT FROM THE SORTED ARRAY
#include<iostream>
using namespace std;

int main(){
  
  int size;
  int target;
  int right;
  int left;
  cout<<"ENTER SIZE OF THE ARRAY"<<endl;
  cin>>size;
  cout<<"ENTER THE TAGETED ELEMENT OF THE ARRAY"<<endl;
  cin>>target;
  int array[size];
    cout<<"ENTER THE ELEMENT FOR THE ARRAY"<<endl;

  for(int i=0;i<=size;i++){

  cin>>array[i];
  }
  right=size-1;
  left=0;

  while(left>right){
    if(left+right==target){
      cout<<left<<endl<<right<<endl;
    }
    else{
      left++;
      right--;
    }
  }



}