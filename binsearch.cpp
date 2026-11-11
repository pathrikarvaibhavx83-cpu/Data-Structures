#include<iostream>
#include<algorithm>
using namespace std;

int binarysearch(int arr[],int size,int key){
  int low=0;
  int high=size-1;

  while(low<=high){
    int mid= low+(high-low)/2;
    if(arr[mid]==key){
      return mid;

    }else if(mid<key){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  return-1;
}

int main(){
  int arr[]={10,20,30,40,50};
  int size=sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr + size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
  int key;
  cout<<"enter the key u want to find "<<endl;
  cin>>key;

  int result = binarysearch(arr,size,key);;
  if(result!=-1){
    cout<<"element found at the index:"<<result<<endl;

  }else{
    cout<<"element not found:"<<endl;

  }
 return 0;

}