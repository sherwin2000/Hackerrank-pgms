#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,b,p,f,h,c;  // t is no. of test cases; b is no. of buns; p is beef patties; f is chicken cutlets;
                      // h is selling price of hamburger; c is selling price of chicken burger
    cin>>t;
    while(t--)
{
 cin>>b>>p>>f>>h>>c;
 b/=2; // we require two buns for one burger
 if(h>c)
 {
     swap(h,c);
     swap(p,f);
 }
 cout<<min(f,b)*c+min(p,b-min(f,b))*h<<'\n';
}
}
