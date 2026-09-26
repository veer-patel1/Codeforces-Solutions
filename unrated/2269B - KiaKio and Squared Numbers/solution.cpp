#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '
'
#define yes cout << "YES
"
#define no cout << "NO
"
#define f(i, a) for (auto &i : a)
#define input(a) for(auto &x : a) cin >> x
#define rr return;
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define maxe(a) *max_element(all(a))
#define mine(a) *min_element(all(a))
 
// const ll mod = 998244353;
// const ll MOD = 1000000007;
// const ll INF = 1e18;
// const ll MAXN = 10000000;
 
// #ifdef DEBUG,
//     #define debug(x) cerr << #x << " = " << x << endl
// #else,
//     #define debug(x) 
// #endif
 
/*
sum from k
ll mx=1ll*k*(2*n-k +1)/2;
*/
 
/*..................................Check Prime.....................................!*/
// template<typename T>
// bool isPrime(T n) {
//     static_assert(std::is_same_v<T, int> || std::is_same_v<T, long long>, "This function only supports int or long long!");
//     if(n < 2) return false;
//     for(T i=2; i*i<=n; i++){
//         if(n % i == 0)
//             return false;
//     }
//     return true;
// }
 
 
/*..................................GCD .....................................!*/
// template<typename T>
// T gcd(T a,T b) {
//     static_assert(std::is_same_v<T, int> || std::is_same_v<T, long long>, "This function only supports int or long long!");
//     if(b == 0) return a;
//     return gcd(b,a%b);
// }
 
/* ..........................Binary Exp Iterators.....................!*/
// template<typename T>
// T binExpIter(T a,T b) {
//     static_assert(std::is_same_v<T, int> || std::is_same_v<T, long long>, "This function only supports int or long long!");
//     T ans=1;
//     while(b){
//         if(b&1){
//             ans=(ans*a)%M;
//         }
//         a=(a*a)%M;
//         b>>=1;
//     }
//     return ans;
// }
 
//...............................sieve prime ....................................!
// vector<bool> is_prime(3000002, true);
// vector<ll> primes;
// void sieve()
// {
//   ll n = 3000002;
//   is_prime[0] = is_prime[1] = false;
//   for (ll i = 2; i * i <= n; i++)
//   {
//     if (is_prime[i])
//     {
//       for (ll j = i * i; j <= n; j += i)
//         is_prime[j] = false;
//     }
//   }
//   for (ll i = 2; i <= n; i++)
//   {
//     if (is_prime[i])
//       primes.pb(i);
//   }
// }
 
int sum1(int n) {
    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
 
vector<int> sum2(vector<int> v) {
    for(auto &i : v) {
        i = sum1(i);
    }
    return v;
}
 
// int getFirstDigit(int num) {
//     num = abs(num); 
//     while (num >= 10) {
//         num /= 10;
//     }
//     return num;
// }
 
void solution(int n, vector<int> v) {
    for(int k = 0; k < 20; k++) {
        v = sum2(v);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] == v[j]) {
                sum++;
            }
        }
    }
    cout << sum << "
";
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        solution(n,v);
    }
    return 0;
}