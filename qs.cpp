#include<iostream>
using namespace std;

int partition(int arr[],int low ,int high){
  int i=low-1;
  int pivot=arr[high];//
  for(int j=low;j<high;j++){
  if(arr[j]<pivot){//
    i++;
    swap(arr[i],arr[j]);
  }
  }
  swap(arr[i+1],arr[high]);////
  return i+1;///

}
void quicksort(int arr[],int low ,int high){
  if(low<high){//
    int pi=partition(arr,low,high);
   quicksort(arr, low, pi - 1);   // left side
   quicksort(arr, pi + 1, high);  // right side
   
  }
}

int main(){
  int arr[]={5,4,3,8,1};
  int n=5;
  quicksort(arr,0,n-1);
  cout<<"sorted array"<<" "<<endl;
  for(int i=0;i<n;i++){////////
    cout<<arr[i]<<endl;
  }
}