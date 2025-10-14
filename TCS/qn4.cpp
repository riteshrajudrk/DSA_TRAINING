#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr1(N),arr2(N),arr3;
    for(int i = 0; i < N; i++) cin>>arr1[i];
    for(int i = 0; i < N; i++) cin>>arr2[i];
int k = 0, l = 0;
    while(k < N && l < N){
        if(arr1[k] < arr2[l]){
            arr3.push_back(arr1[k++]);
        }else{
            arr3.push_back(arr2[l++]);
        }
    }
    while(k < N){
            arr3.push_back(arr1[k++]);

    }
    while(l < N){
            arr3.push_back(arr2[l++]);
    }

    int mid = arr3.size()/2;
    cout<<arr3[mid-1]+arr3[mid];
    // for(int num : arr3) cout<<num<<"   ";

 }