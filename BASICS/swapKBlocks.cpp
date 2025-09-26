#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin>>N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k : ";
    cin >> K;
    for(int i = 0; i < N ; i += 2*K){
        for(int j = 0; j < K ; j++){
            swap(arr[i+j],arr[i+j+K]);
        }
    }
    for(int num : arr) cout<<num<<"   ";
}