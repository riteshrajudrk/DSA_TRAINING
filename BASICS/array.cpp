#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cout<<"ENter the size of the array: ";
    cin>>N;
    int arr[N];
    cout<<"ENter the elements of the array: ";
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    int firstTwoSum = arr[0] + arr[1];
    int lastTwoSum = arr[N-1] + arr[N-2];
    cout<<"Sum of first two elements is : "<<firstTwoSum<<endl;
    cout<<"Sum of last two elements is : "<<lastTwoSum<<endl;
}