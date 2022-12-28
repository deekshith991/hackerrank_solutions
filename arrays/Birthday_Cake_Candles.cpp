

/*
	https://www.hackerrank.com/challenges/birthday-cake-candles/
*/

#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {

		int max_height = candles[0];
		for( int i=0 ; i < candles.size(); i++){
			if(candles[i]>max_height)
				max_height = candles[i] ;
		}
		int cnt = count(candles.begin(),candles.end(),max_height);

		return cnt;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	std::vector<int> vec;
	int n; cin >> n;

	for( int i =0 ; i<n ; i++){
		int x; cin >> x;
		vec.emplace_back(x);
	}
	
	cout << birthdayCakeCandles(vec);
}
