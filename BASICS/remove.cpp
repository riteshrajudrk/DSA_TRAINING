#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
int occur1 = count(arr.begin(), arr.end(), 1);
   arr.erase(arr.begin()+occur1);
    for(int num : arr) cout<<num<<"   ";
}