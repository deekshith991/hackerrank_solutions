/*
	SECTION : INTRODUCTION
	PROBLEM : https://www.hackerrank.com/challenges/variable-sized-arrays/

	TASK	: take 2D variable sized array and retrieve elemnt by coordinates
*/

#include <vector>
#include <iostream>
using namespace std;


int main() {

	// size & queries
    int n,q;
    cin >> n >> q;
    
    vector<vector<int>> a;
    
    // input
    for( int i =0 ; i < n ; i++){
        int k ; cin >> k;
        
        vector<int> row;
        for( int i= 0 ; i< k ; i++){
            int x ; cin >> x;
            row.emplace_back(x);
        }
        a.emplace_back(row);
    }
    
    //  query
    int arr_row , posi ;
    for( int i = 1 ; i<= q ; i++){
        cin >> arr_row >> posi ;
        cout << a[arr_row][posi] << endl;    
    }
    
    
      
    return 0;
}
