/*
***** SHANTO
***
***** DATE :11/03/24
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
		int n;cin>>n;
		int k;cin >> k;
		vector<int> a(n) , b(n);
		forA(a)cin>>i;
		forA(b)cin>>i;
		sort(vbe(b), greater<int>());
		sort(vbe(a));
		
		forF(0,k){
			if(a[i] > b[i]){
				break;
			}
			else{
				int temp = a[i];
				a[i] = b[i];
				b[i] = a[i];
			}
		}
		int sum = 0;
		forA(a){
			sum += i;
		}
		out(sum);
		
	}
}