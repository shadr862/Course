#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll po(ll a, ll b) {
    if(!b) return 1;
    if(b%2) return (a*po(a, b-1)) % MOD;
    ll cur = po(a, b/2);
    return (cur*cur) % MOD;
}

int main() {

}
