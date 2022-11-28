

/*
	https://www.hackerrank.com/challenges/staircase/
*/

#include <bits/stdc++.h>
using namespace std;

void pat(int n){

	for (int i = 0; i <n; i++)
	{
		for(int j = 0 ; j < n-i-1 ; j++)
			cout << " ";
		for(int j=0;j<i+1 ; j++)
			cout << "#";
		cout << endl;
		
	}

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int n; cin >> n;
	pat(n);

	
}
