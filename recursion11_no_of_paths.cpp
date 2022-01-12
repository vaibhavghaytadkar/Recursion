#include<bits/stdc++.h>
using namespace std;

//count the number of paths possible from start point to end point in gameboard
// where number of steps decided by throwing a dice
 int countpath(int s,int e){
     if(s==e){
         return 1;
     }
     if(s>e){
         return 0;
     }
     int count=0;
     for(int i=0;i<6;i++){
         count+=countpath(s+i,e);
     }
     return count;
 }
 int main(){
     cout<<countpath(0,3)<<endl;
     return 0;
 }
