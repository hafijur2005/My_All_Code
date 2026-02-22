#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(i==0 && s[i] == '9'){
            cout << 9;
            continue;
        }
        int x = s[i] - '0';
        int y = '9' - s[i];
        cout << min(x, y);
    }
    return 0;
}