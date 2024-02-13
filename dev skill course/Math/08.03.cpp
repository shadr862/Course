
/*
1+x+x^2+x^3+...x^n
*/
ll f(ll x, ll n) {
    if(!n) return 1;
    if(n%2 == 0) return (1 + x*f(x, n-1) ) % MOD;
    return ((1+bigMod(x, (n+1)/2)) * f(x, n/2) ) % MOD;
}
