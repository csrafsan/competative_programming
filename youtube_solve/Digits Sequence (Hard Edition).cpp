
        #include <bits/stdc++.h>
        using namespace std;
        #define endl              "\n"
        #define int               long long
        #define mem1(x)           memset(x, -1, sizeof (x))
        #define M                 1000000007
        #define MM                998244353
        #define ff                first
        #define pb                insert        #define pii               pair<int,int>
        #define rep(i,a,b)        for(long long i=a;i<b;i++)
        #define ss                second
        #define mii               map<int,int>
        #define psi               pair<string,int>
        #define pis               pair<int,string>
        #define GCD(x,y)          (__gcd((x), (y)))
        #define LCM(x,y)          (((x)/__gcd((x), (y)))*(y))
        #define mem0(x)           memset(x, 0, sizeof (x))
        #define all(x)            (x).begin(),(x).end()
        #define IOS ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int powmod(int a, int l, int md) {int res = 1; while (l) {if (l & 1)res = res * a % md; l /= 2; a = a * a % md;} return res;}
         
         
        void solve()
        {
            


           
        }
         
        signed main() {
            IOS;
              #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
        
            //sieve();
            int k, x = 9;

            cin >> k;
            for( long long i = 1; ; i++){

            	if(k <= ( i * x)){

            		x = ( x / 9 ) + ( --k / i);

            		while( ++k % i){

            			x = x / 10;

            		}

            		cout << x % 10;

            		return 0;

            	}

            	k = k - (i * x);
            	x = x * 10;
            }


            
           
            return 0;
        }


