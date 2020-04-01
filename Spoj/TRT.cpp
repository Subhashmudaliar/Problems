//WA with greedy 
//Greedy doesnt work for all test cases
//Hence dp 
#include <bits/stdc++.h>

#define assn(n, a, b) assert(n <= b and n >= a)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define SET(a, b) memset(a, b, sizeof(a))
#define LET(x, a) __typeof(a) x(a)
#define TR(v, it) for (LET(it, v.begin()); it != v.end(); it++)
#define repi(i, n) for (int i = 0; i < (int)n; i++)
#define sd(n) scanf("%d", &n)
#define si(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define sortv(a) sort(a.begin(), a.end())
#define sortvr(a) sort(a.begin(), a.end(),greater<int>())
#define all(a) a.begin(), a.end()
#define p(x) printf("%d ",x);
#define sz(arr) sizeof(arr)/sizeof(arr[0])
#define DRT()  int t; cin>>t; while(t--)
#define DRTV() int n;scanf("%d",&n);vector<int>v;int t=n;while(t--){int x;scanf("%d",&x);v.pb(x);}
#define pv(v) for(int i=0;i<SZ(v);i++) cout<<v[i]<<" "


#define MOD 1000000007ll
#define PI 3.1415926535

using namespace std;
typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;

LL mpow(LL a, LL n) 
{LL ret=1;LL b=a;while(n) {if(n&1) 
ret=(ret*b)%MOD;b=(b*b)%MOD;n>>=1;}
return (LL)ret;}

int a[2005],n;
vector<vector<int> > dp(2005,vector<int> (2005, -1));

int solve(int start,int end){
	if(start>end) return 0;
	if(dp[start][end]!=-1) return dp[start][end];
	int t=n-(end-start+1)+1;
	return dp[start][end]=max(a[start]*t+solve(start+1,end),a[end]*t+solve(start,end-1));
}

int main() {
	si(n);
	repi(i,n) si(a[i]);
	cout<<solve(0,n-1)<<endl;
  return 0;
}
