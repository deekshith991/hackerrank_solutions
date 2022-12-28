

/*
	PROBLEM : https://www.hackerrank.com/challenges/migratory-birds/

	DESCRIPTION : 
		here there are 6 bird types and people have recorded the bird type they
	  in an Arr so we neede to find the type of bird that has most sighted

	  -> find the max freq num;
*/

#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    int cnt=0;
    int val;
    
    for( int i =1 ; i < 7 ; i++){
        int len = lower_bound(arr.begin() , arr.end(), i+1) - lower_bound(arr.begin() , arr.end() , i);
        if(len>cnt){
           cnt = len;
           val = i;   
        }
    }
    
    return val ;
}

int main(){

	int n ; cin >> n;
	vector<int> vec;
	for( int i = 0 ; i < n ; i++ ){
		int x ; cin >> x;
		vec.push_back(x);
	}

	cout << migratoryBirds(vec) << endl;	
}
