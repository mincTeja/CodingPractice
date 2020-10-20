#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int ans=n&(n-1);
    (n&(n-1))==0?cout<<"Yes":cout<<"No";
    return 0;
}