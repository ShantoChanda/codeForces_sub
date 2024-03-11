/*
***** SHANTO
***
***** DATE :12/03/24
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
#include <cstring>
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

const ll int N = 5 * 1e5; 
ll int arr[N];


// ll sum = 0;
// ll int ow = 8;
// ll int lastNumber = 1;

ll int dp(int n){
	if(arr[n-1] != -1){
		return arr[n-1];
	}else{
		ll sum = 0;
		ll int ow = 8;
		forF(1,n){
			sum += (ow*i);
			ow+=8;
			arr[i] = sum;
		}
		return arr[n-1];
		
		// forF(lastNumber,n){
		// 	sum += (ow*i);
		// 	ow+=8;
		// 	arr[i] = sum;
		// }
		// lastNumber = n-1;
		
	}
}

 
int main() {
	speedIO
	test(t)
	memset(arr, -1 , sizeof(arr));
	while(t--){
		int n; cin>>n;
		// ((n+1)/2)-1 && num ++ 8+=8  ANS
		
		if(n < 3)out(0);
		else{
			n = (n+1)/2;
			out(dp(n));
		}
	}
}