

/*
	-> https://www.hackerrank.com/challenges/plus-minus/
*/

#include <bits/stdc++.h>
#include <iomanip>
using namespace std ;

void plusMinus(vector<int> arr) {
    float posi=0,negi=0,zero=0 ;

    for( int i=0; i< arr.size(); i++){

    	if(arr[i]==0){
    		zero++;
    	} 
    	else if(arr[i]>0) {
    		posi++;
    	}

    	else if(arr[i]<0) {
    		negi++;
    	}

    }
    cout << fixed << setprecision(7) << posi/arr.size() << endl << negi/arr.size() <<endl<< zero/arr.size()<< endl;


}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int n; cin>>n;
	vector<int> arr;

	for(int i=0; i<n; i++){
		int x; cin >> x;
		arr.emplace_back(x);
	}

	plusMinus(arr);
	pat(4);

	
}
