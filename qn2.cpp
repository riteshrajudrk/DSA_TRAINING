#include<bits/stdc++.h>
using namespace std;
int cod(int n){
    int cnt = 0;
    while(n > 0){
        
        cnt++;
        n /= 10;
    }
    return cnt;
}
int mypow(int a, int b){
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans *= a;
    }
    return ans;
}

bool check(int n, int k){
    int temp = n;
    int arm = 0;
    while(n > 0){
        int dig = n%10;
        arm += mypow(dig,k);
        n /= 10;
    }
    return temp == arm;
}

 int main(){
    int low,upp;
    cin>>low>>upp;
    bool flag = false;
    for(int i = low; i <= upp; i++){
        int count_of_dig = cod(i);
        if(check(i,count_of_dig)){
 cout << i<<" ";
 flag = true;
        }
    }
    if(!flag) cout<<-1;
 }