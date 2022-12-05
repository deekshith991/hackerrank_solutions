
/*
	PROBLEM : https://www.hackerrank.com/challenges/c-tutorial-stringstream/
	
	DESCRIPTION: 
		here an input of string of numbers separated by commas are given in 
		and we need to store it an array

		eg : "23,4,56,78,57"

		HINT : stringstream function
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> ParseInt(string ss){

    stringstream k(ss);
    char ch1;
    int a;
    vector<int> vec;
    
    while(k>>a){
        vec.push_back(a);
        k>>ch1;
    }
    
    return vec;
}
int main(){

	vector<int> k = ParseInt("23,56,6,7,4");

	for(int i =0 ; i < k.size() ; i++ )
		cout << k[i] << " ";
}
