#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    unordered_map<int,int> m;
    vector<int> ans(N);
    for(int i = 0; i < N; i++) cin>>arr[i];
    for(int i = 0; i<N;i++){
        m[arr[i]] = i;
    }
    sort(arr.rbegin(), arr.rend());
    int pos = 1;
    unordered_set<int> seen;
    for(int num : arr){
        if(seen.count(num)) {
        ans[m[num]] = pos;
        }else{
            ans[m[num]] = pos;
            pos++;
        }
    }
    for(int num : ans) cout<<num<<" ";
}