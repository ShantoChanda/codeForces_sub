/*
***** SHANTO
***
***** DATE :12/03/2
*/
//*******C++ HEADER*******//
#include<iostream>
#include<algorithm>
#include<cmath>
#include<array>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<unordered_set>
#include<cstdlib>
#include<iomanip>
#include<numeric>
using namespace std;
//*******MACROS*******//
#define ll			long long
#define test(T)         	ll t;cin>>t;
#define speedIO 		ios_base::sync_with_stdio(false);cin.tie(NULL);
#define setNum(n)		cout<<fixed<<setprecision(n);	
#define endl    		"\n"
#define elif    		else if
#define pb      		push_back
#define pop     		pop_back
#define vbe(v)  		v.begin(),v.end()
#define llv  			vector<ll>
#define forA(v)			for(auto&i:v)
#define forF(n0,n)		for(int i=n0;i<n;++i)
//*******TEMPLATES *******//
template<typename T>void out(T x){cout << x << endl;}

//*************************************************************//

int formula(int x1 ,int x2 , int y1 , int y2){
	int ans = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	return ans;
}
 
int main() {
	speedIO
	test(t)
	while(t--){
		vector<pair<int , int>> vp;
		forF(0,4){
			int x1 , y1;
			cin >> x1 >> y1;
			vp.pb(make_pair(x1 , y1));
		}
		sort(vbe(vp));
		int ANS = formula(vp[0].first ,vp[1].first , vp[0].second ,vp[1].second);
		out(ANS * ANS);
	}
}