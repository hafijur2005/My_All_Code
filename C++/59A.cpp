
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,count1=0,count2=0;
    string s;
    cin>>s;

    
    for(i=0;i<s.length();i++)
    {
        n=(int)s[i];
        if(n>=65&&n<=90)
        {count1++;}

         if(n>=97&&n<=122)
        {count2++;}
    }

    if(count1>count2)
    {
        for(i=0;i<s.length();i++)
        {
           s[i]=toupper(s[i]);

        }
    }

    if(count1<=count2)
    {
        for(i=0;i<s.length();i++)
        {
           
                s[i]=tolower(s[i]);
        
        }
    }


    cout<<s<<endl;
 
    return 0;
}