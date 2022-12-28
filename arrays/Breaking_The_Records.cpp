

/*
	https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
*/

#include <bits/stdc++.h>
using namespace std;


vector<int> breakingRecords(vector<int> scores) {

	int min_x=scores[0] , max_x=scores[0];

	vector<int> result(2,0);

	for( int i = 1 ; i < scores.size() ; i++ ){
		if(scores[i]<min_x){
			min_x=scores[i]; // worst performace
			result[1]++;
		}
		else if(scores[i]>max_x){
			max_x=scores[i]; // breaked her own performance
			result[0]++;
		}
	}


	return result;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n; cin >> n;

	vector<int > scores;
	for(int i=0 ; i<n ; i++){
		int x; cin >> x;
		scores.push_back(x);
	}

	vector<int> result = breakingRecords(scores);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
    }
	
}
