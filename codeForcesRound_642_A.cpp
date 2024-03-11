/*
***** SHANTO
***
***** DATE :24/10/23
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
 
int main() {
	speedIO
	test(t)
	while(t--){
		int n , m;cin >> n >> m;
		if(n <= 2){
			n == 1 ? out(0) : out(m);
		}else{
			out(m*2);
		}	
	}
}