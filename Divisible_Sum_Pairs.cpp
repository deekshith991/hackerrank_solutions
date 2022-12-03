

/*
	https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true
*/

#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    vector<int> cp(ar.begin(),ar.end());
    sort(cp.begin(),cp.end());
    int cnt=0;
    for( int i=0 ; i< n-1 ; i++){
        for( int j = i+1 ; j < n ; j++ ){
            if((ar[i]+ar[j])%k ==0)
                cnt++;
        }
    }
    
    return cnt;
}
int main(){

	int n , k ; cin >> n >> k;

	vector<int> arr;
	for(int i =0 ; i < n ; i++ ){
		int x ; cin >> x;
		arr.emplace_back(x);
	}
	
	cout << divisibleSumPairs(n,k,arr);
}
