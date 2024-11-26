#include<bits/stdc++.h>
using namespace std;

#define		ll 		long long int
#define 	ld 		long double

#define 	nl 		"\n"
#define     	new     	cout<<'\n'
#define 	Yes 		cout<<"Yes"<<nl 
#define 	No 		cout<<"No"<<nl 
#define 	YES 		cout<<"YES"<<nl 
#define 	NO 		cout<<"NO"<<nl 

#define 	vi 		vector<int>
#define 	vll 		vector<ll>
#define 	pb 		push_back

#define     FAIYAZ  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     srt(v)  v.begin(),v.end()
#define     setp(n) fixed << setprecision(n)

#define     debug(x) cout << #x << " : " << x << endl;

#define     cs      cout << "Case " << t << ": ";
#define     vp(v)   for(auto it:v){cout << it <<' ';}new;


bool isPrime(ll n) {
    if (n <= 1) return false; 
    if (n <= 3) return true;  
    if (n % 2 == 0 || n % 3 == 0) return false; 

    for (ll i = 5; i * i <= n; i += 6) { 
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isPerfectSquare(ll n) {
    if (n < 0) return false; 
    ll root = sqrt(n); 
    return root * root == n && isPrime(root); 
}



int main() {
	int n; cin>>n;
	while(n--) {
		ll x; cin>> x;

    		if(isPerfectSquare(x)) YES;
		else NO;

	}
}
