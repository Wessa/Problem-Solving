//#include <bits/stdc++.h>
//
//#define pb push_back
//#define mp make_pair
//#define f first
//#define s second
//#define all(x) x.begin(),x.end()
//#define rall(x) x.rbegin(),x.rend()
//#define pi acos(-1.0)
//#define EPS 1e-9
//#define mem(n,x) memset(n,x,sizeof(n))
//typedef long long ll;
//
//using namespace std;
//
//int v[100005];
//ll arr[100005];
//
//int main()
//{
//	int t;cin>>t;
//	while(t--){
//		mem(arr,0);
//		int n;cin>>n;
//		cin>>v[0];
//		arr[0]=v[0];
//		for(int i=1;i<n;i++)cin>>v[i],arr[i]=arr[i-1]+(ll)v[i];
//
//		ll ans=-1;
//		for(int i=0;i<n;i++){
//			ll x=(i-1>=0)?arr[i-1]:0;
//			ll sum1=x;
//			ll sum2=arr[n-1]-arr[i];
//			ll sum=min(sum1,sum2)*2 + max(sum1,sum2);
//			if(ans==-1)ans=sum;
//			else ans=min(ans,sum);
//		}
//		cout<<ans<<"\n";
//	}
//	return 0;
//}
