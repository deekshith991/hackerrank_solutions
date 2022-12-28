
/*
	https://www.hackerrank.com/challenges/diagonal-difference/forum

	-> first add all the elements in the diagonals and find the 
	differece between them.
*/



#include <bits/stdc++.h>
using namespace std;

void DiagonalDifference( vector<vector<int>> v);

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n; cin >> n; // getting size and initializing 2D vector
	vector<vector<int>> vecd ;


	// 2D vector input
	for(int i =0; i < n ; i++ ){
		vector<int> row;
		for(int j =0; j < n ; j++ ){
			int x ; cin >> x;
			row.push_back(x);					
		}
		vecd.push_back(row);
	}

	int D1sum=0,D2sum=0;

	for( int i =0 ; i<vecd.size(); i++){
		D1sum += vecd[i][i];
		D2sum += vecd[i][vecd.size()-1-i];
	}

	cout << abs(D1sum-D2sum);
}
