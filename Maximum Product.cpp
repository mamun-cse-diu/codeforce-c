#include <bits/stdc++.h>

using namespace std;

#define int long long int
int inf = (1e18);
void solve()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for (int j=0; j<n; j++)
	{
		cin>>v[j];
	}
	sort(v.begin(), v.end());
	int m[6];
	m[0]=v[0]*v[1]*v[2]*v[3]*v[4];
	m[1]=v[0]*v[1]*v[2]*v[3]*v[n-1];
	m[2]=v[0]*v[1]*v[2]*v[n-2]*v[n-1];
	m[3]=v[0]*v[1]*v[n-3]*v[n-2]*v[n-1];
	m[4]=v[0]*v[n-4]*v[n-3]*v[n-2]*v[n-1];
	m[5]=v[n-5]*v[n-4]*v[n-3]*v[n-2]*v[n-1];
	//covers unnecessary but all cases
	int mx=-inf;
	for (int j=0; j<=5; j++) mx=max(mx, m[j]);
	cout<<mx<<"\n";


	return;
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
