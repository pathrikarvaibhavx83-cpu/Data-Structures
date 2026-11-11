#include<iostream>
using namespace std;

int main(){
  int a[]={10,10,10,20,20,20,30,40};
  int count=1;
  for(int i=1;i<=7;i++){
    if(a[i]==a[i-1]){
      ++count;
    }
    else{
      cout<<a[i]<<" FREQUENCY IS "<<count<<endl;
    }
  }
  return 0;
}