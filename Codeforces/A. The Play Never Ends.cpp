// https://codeforces.com/contest/2071/problem/A
// The Play Never Ends
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc; cin>>tc;
    while(tc--) {
      int k; cin>>k;
      if(k%3==1) cout << "Yes" << endl;
      else cout << "No" << endl;
    }

    return 0;
}
