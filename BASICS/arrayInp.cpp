#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
        int M;
        cin>>M;
        int arr[M];
        for(int i = 0; i < M; i++){
            cin>>arr[i];
        }
        int sum = accumulate(arr,arr+M, 0);
        cout<<sum;
    }
}