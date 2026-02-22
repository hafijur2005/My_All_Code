#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    long long n;
    cin>>n;
    if (n%3==0&&n%7==0){
        cout<<"NO";
    }
   else if(n%3==0){
        cout<<"YES";
    }
   else if(n%7==0){
        cout<<"YES";
    
    }
    else 
    cout<<"NO";
   
    cout<<"\n";
    
    }

    
    return 0;
}