#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    m["A"]=5;
    m["B"]=41;
    m["C"]=543;
    m["D"]=5;
    m["E"]=76;
    //inseert a map
    m.insert({"F",10});
    //print a map
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}