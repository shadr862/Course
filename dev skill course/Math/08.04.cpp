#include <bits/stdc++.h>
#define LIM 100005
#define ll long long
using namespace std;

int cut[LIM];

void gen(ll N) {
    cut[0] = cut[1] = 1;
    for(ll i=2; i<=N; i++) {
    //for(ll i=2; i*i<=N; i++) {
        if(i*i > N) break;
        if(cut[i]) continue;
        for(ll j=i*i; j<=N; j+=i) {
            cut[j] = 1;
        }
    }
}

int main() {
    int n = 100000;;
    gen(n);
}
