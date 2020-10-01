/*sherwin kati*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long LL;
LL pow(LL a, LL b, LL m)
{
    LL ans = 1;
       while(b)
       {
           if(b&1) ans = ans * a  % m;
           b >>= 1;
           a = a * a % m;
       }
    return ans;
}
int f(int n)
     {
       int result = n,i;
       for( i=2;i*i <= n;i++)
       {
         if (n % i == 0)
         result -= result / i;
         while (n % i == 0)
         n /= i;
       }
       if (n > 1)
       result -= result / n;
       return result;
}
int main()
 {
    int T;
    cin >> T;
    while(T--)
    {
        LL a, b, m;
        cin >> a >> b >> m;
        if(b<0) a = pow(a, f(m)-1, m),b = -b;
        cout << pow(a, b, m) << endl;
    }
    return 0;
}
