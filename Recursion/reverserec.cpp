#include<iostream>
using namespace std;
int reverse(int i,int n,int a[])
{
  if(i>n/2)
  return;
  swap(a[i],a[n-i-1]);
  reverse(i+1,n,a);

}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  reverse(0,n);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}