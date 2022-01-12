#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerofhanoi(n-1,src,helper,dest);
    cout<<"MOVE FROM SOURCE "<<src<<" TO DESTINATION "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);
}
int main(){
    towerofhanoi(5,'A','C','B');
    return 0;
}