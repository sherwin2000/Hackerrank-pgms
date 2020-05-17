#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b;
    sort(a.begin(),a.end());

    for(int i=0; i<a.size(); i++)
    for(int j=i+1; j<a.size(); j++)
    {
        c=a;
        swap(c[i],c[j]);
        if( stoll(c)>stoll(a) && stoll(c)<=stoll(b) ) // stoll function converts a string input to long long int type
        a=c;
    }
    cout<<a;
}
