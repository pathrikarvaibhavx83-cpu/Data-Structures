#include<iostream>
#include<algorithm>
int main(){
  vector<int>arr={10,20,30,40};
  int first=0;
  int second=0;

  for(int i=1;i<=arr.size();i++){
    first=arr[0];
  
    if(arr[i]>first){
      first==arr[i];
      second==first;
    }
    else if(arr[i]>second && arr[i]<first)
     second ==arr[i];
    }
    cout<<"Second largest element is :";
    return second;

  }
