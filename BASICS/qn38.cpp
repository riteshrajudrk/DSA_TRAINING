#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    int n, m_val;

    cin>>n>>m_val;

    cin.ignore();
    getline(cin, str1);
    getline(cin, str2);
    unordered_map<char,int> freq;

    for(char ch : str2) freq[ch]++;
    for(char ch : str1){
        cout<<freq[ch]<<" ";
    }

    // for(char ch : str1){
    //     cout<<(count(str2.begin(),str2.end(),ch))<<" ";
    // }
}