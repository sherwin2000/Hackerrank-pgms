#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t ;
    cin >> t;
    string s;
    while(t--){
        cin >> s ;
        ll len = s.size() ;
        int z[len] = {0} ;
        int left = 0 , right =  0 ;
        for(int i = 1 ; i < len ; i++){
            if(i > right){
                left = right = i;
                while(right < len and (s[right] == s[right - left]))
                    right++;
                z[i] = right-left;
                right--;
            } else {
                int k = i - left; // do a mistake here.
                if(z[k] < (right-i+1)){
                    z[i] = z[k];
                } else {
                    left = i;
                    while(right < len and (s[right] == s[right-left]))
                        right++;
                    z[i] = right-left;
                    right--;
                }
            }
        }
        cout << accumulate(z,z+len,len) << endl;
    }
}
