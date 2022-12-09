

/*
	TITLE : Bill Division

	LINK  : https://www.hackerrank.com/challenges/bon-appetit/

	DECRIPITION :
		Here bill and anna went and eat at the restaurant vec is the cost of the items
		but anna didn't eat an item so she don't want to pay and want to split bill into
		2 parts then bill tells here the amount she needs to pay if he says actual amount 
		print Bon Appetit else print difference. 
*/

#include <bits/stdc++.h>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    int sum = accumulate(bill.begin(),bill.end(),0);
    sum = sum - bill[k];
    
    sum = sum / 2;
    if(sum == b)
        cout << "Bon Appetit" << endl;
    else
        cout << abs(sum - b) << endl;
}

int main(){

	vector<int> vec = {1,3,5,6};
	bonAppetit(vec,3,4);

	return 0;
}
