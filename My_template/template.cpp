#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds; 

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define pii pair<int, int> 
#define vpii vector<pair<int, int>>
#define vvpii vector<vector<pair<int, int>>>
#define fr(i, n) for(int i = 0; i < (n); i++)
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define srt(v)  sort(all(v))         // sort 
#define mxe(v)  *max_element(all(v))     // find max element in vector
#define mne(v)  *min_element(all(v))     // find min element in vector

using ll = long long;
using ull = unsigned long long;
using ld = long double;
template<typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Operator Overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator >> (istream &istream, pair<T1, T2> &p) {return (istream >> p.first >> p.second); }

template<typename T> // cin >> vector<T>
istream& operator >> (istream &istream, vector<T> &v) { for(auto &it : v) cin >> it; return istream; }

template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator << (ostream &ostream, const pair<T1, T2> &p) {return (ostream << p.first << " " << p.second); }

template<typename T> // cout << vector<T>
ostream& operator << (ostream &ostream, const vector<T> &v) { for(auto &it : v) cout << it << " "; return ostream; }

// gcd function
int gcd(int a, int b) 
{ 
  if (a == 0) 
    return b; 
  return gcd(b % a, a); 
} 

typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_multiset;


void solve()
{
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;

    int t;
    cin >> t;
    
    // t = 1;
    while(t--){
        solve();
    }
    return 0;
}