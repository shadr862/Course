#include <bits/stdc++.h>
#define LIM 1000000000012LL

using namespace std;

ll trail(ll N) {
    ll cnt = 0;
    ll d = 5;
    while(d <= N) {
        cnt += N/d;
        d *= 5;
    }
    return cnt;
}

ll solve(ll Q) {
    ll lo = 1, hi = 1000000000;
    while(lo < hi) {
        ll md = (lo+hi)/2;
        if(Q <= trail(md)) hi = md;
        else lo = md+1;
    }
    if(trail(hi) == Q) printf("%lld\n", hi);
    else printf("impossible\n");
}

int main() {

}

