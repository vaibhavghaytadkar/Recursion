#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversestr(string str){
    if(str.length()==0){
        return;
    }
    string ros=str.substr(1);
    reversestr(ros);
    cout<<str[0];
}
int main(){
    string s="abcdefghijkilmonopqrstuvwxyz";
    reversestr(s);
}