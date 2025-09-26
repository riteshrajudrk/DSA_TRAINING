#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }

    int mine = *min_element(arr.begin(), arr.end());
    int maxe = *max_element(arr.begin(), arr.end());
    int minId = -1,maxId = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == mine){
            minId = i;
            break;
        }
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == maxe){
            maxId = i;
            break;
        }
    }

if(minId < maxId){
    for(int i = minId; i< maxId; i++){
    ans.push_back(arr[i]);
}
for(int i = 0; i< minId; i++){
    ans.push_back(arr[i]);
}
for(int i = maxId; i< arr.size(); i++){
    ans.push_back(arr[i]);
}
}else{
        for(int i = maxId; i< minId; i++){
    ans.push_back(arr[i]);
}
for(int i = 0; i< maxId; i++){
    ans.push_back(arr[i]);
}
for(int i = minId; i< arr.size(); i++){
    ans.push_back(arr[i]);
}
}
for(int num : ans) cout<<num<<" ";
}