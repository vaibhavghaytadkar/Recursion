#include<bits/stdc++.h>
using namespace std;
int numberofzeroes(int n){
    int ld=n%10;
    int sa=numberofzeroes(n/10);
    if(ld==0){
        return sa+1;
    }
    else{
        return sa;
    }
}
int main(){
    int n;
    cin>>n;
    int k=n;
    int count=0;
    while(n!=0){
        int ld=n%10;
        if(ld==0){
            count++;
        }
        n=n/10;
    }
    cout<<count<<endl;
    cout<<numberofzeroes(k);

}