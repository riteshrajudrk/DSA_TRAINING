#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
int ans = 0;
    for(int i = 0; i < N ; i++){
        for(int j = i + 1; j < N; j++){
            ans = max(ans, arr[j] - arr[i]);
        }
    }
    cout<<ans;
}