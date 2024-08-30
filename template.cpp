#include <bits/stdc++.h>
using namespace std;

//alias
using ll = long long;

//typedef
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef set<ll> sll;

//speed
#define speed ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//macros
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define fl(i, n) for(int i=0; i<n; i++)
#define rl(i, m, n) for(int i=m; i>=m; i--)
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define nn "\n"
#define pl cout << "\n";
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()

//debug
void dbg() {

}

//utility functions
template<typename T>
ll sumvec(vector<T> v) {ll n=v.size();ll s=0;fl(i,n)s+=v[i];return s;}

unordered_map<char, int> countCharacters(const string& s) {
    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    return charCount;
}

bool checkprime(ll n){
    if(n==0 || n==1) return false;
    if(n == 2) return true;

    for(int i = 3; i<= sqrt(n); i+=2) 
	if(n%i == 0) 
	   return false;

    return true;
} 

/* ---------- CODE BEGINS HERE ---------- */

void solve() {
}

int main() {
	speed
	ll t; cin >> t;
	while(t--) {
	solve();

//	if(solve()) py;
//	else pn;

	}
}
