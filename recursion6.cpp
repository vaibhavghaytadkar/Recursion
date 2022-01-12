#include<bits/stdc++.h>
using namespace std;

string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string str=moveallx(s.substr(1));
    if(ch=='x'){
        return str+ch;
    }
    return ch+str;
}
int main(){
    string s="xaacczzxxfhtamhhkkddffxxxos";
    string str=moveallx(s);
    cout<<str;
}