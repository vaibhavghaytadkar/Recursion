#include<bits/stdc++.h>
using namespace std;

void substring(string s,string output){
    if(s.length()==0){
        cout<<output<<endl;
        return ;
    }
    char ch=s[0];
    string ros=s.substr(1);
    substring(ros,output);
    substring(ros,output+ch);

}
int main(){
    string s="ABCD";
    string ans="";
    substring(s,ans);
}