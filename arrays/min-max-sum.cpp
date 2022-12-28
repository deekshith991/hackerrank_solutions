

/*
	https://www.hackerrank.com/challenges/mini-max-sum/
*/

#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    
    unsigned long long sum=0, min = arr[0] , max= arr[0];

    for(auto i : arr)
    	sum += i ;

    for(int i=1;i<5;i++){
    	if(arr[i]>max)
    		max=arr[i];
    	if(arr[i]<min)
    		min=arr[i];
    }

    cout  << sum-max << " " << sum-min ;
    
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

// 140638725 436257910 953274816 734065819 362748590
// 1673711044 2486347135

	vector<int> vec;

	for( int i= 0 ; i<5 ; i++){
		int x ; cin >> x;
		vec.emplace_back(x);
	}

	miniMaxSum(vec);

	
}
