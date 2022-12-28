

/*
	basic problems of the hacker rank 
	all are ansered in func manner swo i am going to store the 
	solutions as func manner only 
*/

#include <bits/stdc++.h>
using namespace std;
void ArrInput(int arr[], int n);
void ArrOutput(int arr[], int n);






//Questions that i have solved
int sumofArr(vector<int> ar);
long aVeryBigSum(vector<long> ar);






int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
}












void ArrInput(long int arr[], int n){

	for(int i=0 ; i<n ; i++)
		cin >> arr[i] ;
}

void ArrOutput(int arr[] , int n ){

	for ( int i = 0 ; i < n ; i++)
		cout << arr[i] << " " ;
	cout << endl;
}


int sumofArr(vector<int> ar){

	int sum = accumulate(ar.begin(),ar.end(),0);
	return sum;
}

long aVeryBigSum(vector<long> ar) {
    long long int sum =0 ;
    for(auto i : ar){
        sum = sum + i;
    }
    
    return sum;
}




