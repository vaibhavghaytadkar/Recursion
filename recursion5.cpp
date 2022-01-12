#include<bits/stdc++.h>
using namespace std;

string removeduplicate(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeduplicate(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}
int main(){

    string s="iqqqqqiiiiiwabbffssnnnntsrrrxxxxxxx";
    string str=removeduplicate(s);
    cout<<str;
}