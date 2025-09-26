#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin>>N;
    cin>>K;
    vector<int> arr(N);
    // unordered_set<int> s(arr.begin(), arr.end());
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    // sort(arr.begin(),arr.end());
    for(int i = 0; i < N ; i++){
        for(int j = i+1; j < N; j++){
            if(arr[i] + arr[j] == K){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}