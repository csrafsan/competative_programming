
        
///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///
 
 
 
#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
const ll sz = 2e5 + 123;

ll a[sz], sum[sz];

int main()
{
    optimize();

      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif

  	ll n, q, l, r, k, t, i;

    cin >> t;

    while ( t-- ){

    cin >> n >> q;

    for ( i = 1; i <= n; i++)
    {

        cin >> a[i];
    }

    

    for ( i = 1; i <= n; i++)
    {

        sum[i] = sum[i - 1] + a[i]; // creating the prefix_sum array
    }

    while (q--)
    {
        cin >> l >> r >> k;

         k = ( ( r - l + 1) * k);

        // if ((sum[l + 1] - sum[1] + k + sum[n] - sum[r]) % 2 == 1){
        if ((sum[n] - (  sum[r] - sum[l-1] ) + k) % 2 == 1){

        	cout << "Yes" << endl;

         }
         else{

         	cout << "No" << endl;
         }
    }


    }

    

    return 0;
}






