#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"ENter the size of the array: ";
    cin>>N;
    int evenCount = 0,oddCount = 0;
    int arr[N];
    cout<<"ENter the elements of the array: ";
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < N; i++){
        if(arr[i] % 2 == 0) evenCount++;
        else oddCount++;
    }
    if(evenCount == oddCount){
        cout<<"TIE";
    }else if(evenCount > oddCount){
        cout<<"EVEN";
    }else if(evenCount < oddCount){
        cout<<"ODD";
    }
}