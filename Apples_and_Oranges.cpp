

/*
	https://www.hackerrank.com/challenges/apple-and-orange/
*/

#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

	int cntApples = 0;
	int cntOranges = 0;

	int D = s-a ;
	int Dminus = t - b ;

	for( int i =0 ; i < apples.size() ; i++){
		if(apples[i]>=D && apples[i] <= t - a ) // checking if the distance is in btw the s-t
			cntApples++;
	}

	for( int i = 0 ; i < oranges.size() ; i++ ){
		if( oranges[i] <= Dminus && oranges[i] >= s - b)
			cntOranges++;
	}

	cout << cntApples << endl;
	cout << cntOranges << endl;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int s, t;
	cin >> s >> t;

	int a,b;
	cin >> a >> b;

	int m , n ;
	cin >> m >> n;

	vector<int> apples ;
	vector<int> oranges ;

	for(int i= 0 ; i < m ; i++ ){
		int x ; cin >> x;
		apples.push_back(x);
	}
	
	for( int i = 0 ; i < n ; i++ ){
		int x; cin >> x;
		oranges.push_back(x);
	}

	countApplesAndOranges( s , t, a, b , apples ,oranges);
}
