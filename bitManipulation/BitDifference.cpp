#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    //Way 1
    // while(a>0 || b>0){
    //     if((a&(1))!=(b&(1))){
    //         ans++;
    //     }
    //     a>>=1;
    //     b>>=1;
    // }
    //Way2
    int x=a^b;
    while(x>0){
        ans++;
        x&=(x-1);
    }
    cout<<ans;
    return 0;
}