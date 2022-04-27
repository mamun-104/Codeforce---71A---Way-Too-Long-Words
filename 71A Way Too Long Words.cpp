#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        char first,last;
        int l;
        cin>>s;
        l=s.length();
        if(l>10)
        {
            first = s[0];
            last  = s[l-1];
            cout<<first<<l-2<<last<<endl;
        }
        else
        {
            cout<<s<<endl;;
        }
    }



    return 0;
}
