#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40};

    int first = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] < first && arr[i] > second){
            second = arr[i];
        }
    }

    cout << "Second largest element is: " << second << endl;

    return 0;
}