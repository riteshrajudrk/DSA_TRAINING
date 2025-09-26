#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin>>arr[i];
        }
        sort(arr,arr+N);
        int sum = accumulate(arr+N-5, arr+N,0);
        cout<<sum;
        for(int i = 5; i>=0; i--){
            cout<<arr[i]<<" ";
        }
    }