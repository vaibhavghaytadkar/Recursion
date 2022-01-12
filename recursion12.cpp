#include<bits/stdc++.h>
using namespace std;
//count no of path in a maze ......
int noofpath(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return noofpath(n,i+1,j) + noofpath(n,i,j+1);
}
int main(){
    cout<<noofpath(3,1,0)<<endl;
    return 0;
}