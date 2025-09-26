#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;

    cin>>n;

    cin.ignore();
    getline(cin, str);

    string temp1 = "";
    string temp2 = "";
    
    for(char ch : str){
        if(isalpha(ch)){
            temp1 += tolower(ch);
        }else if(isdigit(ch)){
            temp1 += ch;
        }else{
            temp2 += ch;
        }
    }
    cout<<temp1+temp2;
}