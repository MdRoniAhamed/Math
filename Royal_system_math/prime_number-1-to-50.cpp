#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    a = 0;
    b = 50;
    cin>>b;
    for(int i=2; i<=b; i++){
        bool bo = true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                bo = false;
                break;
            }
        }
        if(bo){
            a++;
        }
    }
    cout<<a<<endl;
    return 0;
}