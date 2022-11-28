

/*
	https://www.hackerrank.com/challenges/grading/
*/

#include <bits/stdc++.h>
using namespace std;

void Graading( vector<int> vec){

	for( int i=0 ; i<vec.size() ; i++ ){

		if(vec[i]>40){
			int rem = vec[i]%5;

			if( rem > 2 ){
				vec[i] = vec[i]+(5-rem) ;
			}
		}
		// cout << i << " " << vec[i] << endl ;
	}
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int n; cin >> n;

	vector<int> vec;

	for( int i=0 ; i<n ; i++ ){
		int x; cin >> x;
		vec.emplace_back(x);
	}

	//Graading(vec);
	for( int i=0 ; i<vec.size() ; i++ ){

		if(vec[i]>40){
			int rem = vec[i]%5;

			if( rem > 2 ){
				vec[i] = vec[i]+(5-rem) ;
			}
		}
		// cout << i << " " << vec[i] << endl ;
	}


	for( int i =0 ; i<n ; i++)
		cout << vec[i] << " ";
}
