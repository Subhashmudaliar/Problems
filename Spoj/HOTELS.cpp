#include<bits/stdc++.h>
#define MAX 300000
using namespace std;
int main(){
	int n,m,a[MAX];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int start=0,end=0,sum=0,result=0;
	while(1){
		while(end<n && sum+a[end]<m){
			sum+=a[end++];
		}
		result=max(result,sum);
		if(end==n) break;
		sum+=a[end++];
		while(start<n && sum>m){
			sum-=a[start++];
		}
	}
	printf("%d\n",result);
	return 0;
}
