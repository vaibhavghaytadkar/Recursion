#include<bits/stdc++.h>
using namespace std;

//TILING PROBLEM...............
//GIVEN A 2*N BOARD AND TILES OF SIZE 2*1 , COUNT THE NUMBER OF WAYS TO TILE THE GIVEN 
//BOARD USING THESE TILES......

int noofways(int n){
    if(n==0 || n==1){
        return n;
    }
    return noofways(n-1)+noofways(n-2);
}
int main(){
    cout<<noofways(8);
}