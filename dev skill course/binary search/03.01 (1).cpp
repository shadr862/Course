#include <bits/stdc++.h>
using namespace std;
#define fast_in_out  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ln "\n"
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mem(x, n) memset(x, n, sizeof(x))
#define all(x) x.begin(), x.end()
#define rall(v)   v.rbegin(),v.rend()
#define array(something, size) something, something + size
#define sz(a) a.size()

const ll INF=1e18;
const double pii = acos(-1);
const ll mod = 1e9+7;
const ll N = 1e8+1;
ll c=1;

bool prime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%2==0)return 0;
    }
    return 1;
}

ll lowerbound(vector<ll>&v,ll x)
{
    ll lo=0,h=sz(v);

    while(lo<h)
    {
        ll mid=(lo+h)/2;

        if(x<=v[mid])
        {
            h=mid;
        }
        else
        {
            lo=mid+1;
        }
    }

    return lo;
}

ll upperbound(vector<ll>&v,ll x)
{
    ll lo=0,h=sz(v);

    while(lo<h)
    {
        ll mid=(lo+h)/2;

        if(x<v[mid])
        {
            h=mid;
        }
        else
        {
            lo=mid+1;
        }
    }

    return lo;
}


void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);

    for(ll i=0;i<n;i++)
    {
       cin>>v[i];
    }
    ll q;
    cin>>q;

    while(q--)
    {
        ll x;
        cin>>x;
        ll a=lowerbound(v,x);
        ll b=upperbound(v,x);
        if(b==sz(v) && a>=0)
        {
            cout<<v[a-1]<<" "<<'X'<<endl;
        }
        else if(a-1<0 && b<n)
        {
            cout<<'X'<<" "<<v[b]<<endl;
        }
        else if(b==n && a-1<0)
        {
            cout<<'X'<<" "<<'X'<<endl;
        }
        else
        {
             cout<<v[a-1]<<" "<<v[b]<<endl;
        }
    }


}
int main()
{
    fast_in_out;
    //ll t;
   // cin>>t;
	//while(t--)
	{
		solve();
	}
	return 0;
}
