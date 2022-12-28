

/*
	https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true
*/

#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) { // " d " is the sum ; " m " is the length of the continousness 

	// here we need to find how many time a fixed length of continuous sub array is equal to a num.
    

    int cnt=0;
    int end = s.size();
    for(int i =0 ;i < end ; i++){ // traversing 
        int sum =0;
        for( int j = i; j <  i+m; j++ ){  // summing the subarray to check
            sum += s[j];
        }
        if(sum == d) // checking if sum is equal or not
            cnt++;
    }
    return cnt;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n ; cin >> n;

	vector<int> s;

	for( int i=0 ; i < n; i++){
		int x; cin >> x;
		s.emplace_back(x);
	}

	int d  , m ;
	cin >> d  >> m;

	cout << birthday(s,d,m);

	
}
