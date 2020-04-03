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
#define MAX INT_MAX

using namespace std;
typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;

LL mpow(LL a, LL n) 
{LL ret=1;LL b=a;while(n) {if(n&1) 
ret=(ret*b)%MOD;b=(b*b)%MOD;n>>=1;}
return (LL)ret;}

char mat[182][182];
int dist[182][182];
int r,c;
int myx[]={-1,1,0,0};
int myy[]={0,0,-1,1};

int isSafe(int x,int y){
	if(x>=0 && x<r && y>=0 && y<c)
		return 1;
	return 0;
}

void bfs(int i,int j){
	queue<PII>q;PII temp;
	dist[i][j]=0;
	q.push(mp(i,j));
	while(!q.empty()){
		temp=q.front();
		q.pop();
		int x=temp.first,y=temp.second;
		int xt,yt;
		repi(i,4){
			xt=x+myx[i],yt=y+myy[i];
			if(isSafe(xt,yt) && (dist[xt][yt] > dist[x][y]+1)){
				dist[xt][yt]=dist[x][y]+1;		
				q.push(mp(xt,yt));
			}
		}
	}
}

int main() {
	DRT(){
		char ch;
		cin>>r>>c;
		repi(i,r){
			repi(j,c){
				cin>>mat[i][j];
				dist[i][j]=MAX;
			}				
		}

		repi(i,r){
			repi(j,c){
				if(mat[i][j]=='1'){
					bfs(i,j);
				}
			}				
		}

		repi(i,r){
			repi(j,c){
				printf("%d ",dist[i][j]);
			}
			printf("\n");
		}
	}
  return 0;
}
