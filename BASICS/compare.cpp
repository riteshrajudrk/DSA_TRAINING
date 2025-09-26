#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    int N,M;
    cin>>N;
    cin>>M;
    vector<int> arr1(N);
    for(int i = 0; i < N; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(M);
    for(int i = 0; i < M; i++){
        cin>>arr2[i];
    }
    
    for(int num1 : arr2){
        int cnt = 0;
        for(int num2 : arr1){
            if(num2 > num1) cnt++;
        }
    ans.push_back(cnt);
    }
for(int num : ans) cout<<num<<" ";
}