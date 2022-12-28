
/*
	TITLE :

	LINK  : 

	DESCRIPTION :	
*/

#include <bits/stdc++.h>
using namespace std;

int formingMagicSquare(vector<vector<int>> s) {

    map<int,int> mp;

    for(auto i : s)
    	for(auto j: i){
    	mp[j]++;
    }

    
    return 0;
}


int main(){
	int n=3;

	vector<vector<int>> vec;

	for( int i=1;i<n+1;i++){
		vector<int> row;
		for(int j=1;j <n; i++){
			row.emplace_back(i*j);
		}
	}

	cout << formingMagicSquare(vec);
	return 0;
}
