#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int setBits=0;
    while(n>0){
        n&=(n-1);
        setBits++;
    }
    cout<<setBits;
}