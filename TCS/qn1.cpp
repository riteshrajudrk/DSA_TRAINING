#include<bits/stdc++.h>
using namespace std;
int sod(string str){
    int sum = 0;
    for(char ch : str){
        sum += ch -'0';
    }
    return sum;
}
 int main(){
    int N,K;
    cin>>N>>K;
    int digSum=0;
    string temp = to_string(N);
    string str = "";
    for(int i = 0; i < K; i++){
        str += temp;
    }
    while(str.size() > 1){

         digSum = sod(str);
         str = to_string(digSum) ;
    }
    cout<<digSum;
 }