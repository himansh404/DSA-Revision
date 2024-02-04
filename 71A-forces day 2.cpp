/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n){
        string s;
        cin>>s;
        if(s.size()>10){
            cout<<s[0]+to_string(s.size()-2)+s[s.size()-1]<<"\n";
        }
        else{
            cout<<s<<endl;
        }
        n--;
    }

    return 0;
}
