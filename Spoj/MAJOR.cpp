
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


int main() {
	DRT(){
		map<int,int>m;
		int n;
		si(n);
		int a[n];
		repi(i,n){
			scanf("%d",&a[i]);
			m[a[i]]++;
		}
		int c=n/2;int flag=0;
		repi(i,n)
			if(m[a[i]]>c){
				printf("YES %d\n",a[i]),flag=1;
				break;
			}
		if(!flag)
			printf("NO\n");

	}
  return 0;
}
