
/*
	TITLE : Sales By Match

	LINK  : https://www.hackerrank.com/challenges/sock-merchant/

	DESCRIPTION :	Here the merchant have an arr of socks we need to pair them find how many there are

		means we need to find no.of times a number was multiple of 2 and by how many times
*/

#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    
    sort(ar.begin(),ar.end());
    map<int,int> mp;
    
    for(auto  i: ar)	// with maps we are find no . of socks of each type
        mp[i]++;
    
    int No_pairs = 0;
    for(auto  i : mp){			 // since as pair they need to be multiple of 2
        No_pairs += i.second/2 ;   // we are checking how many are multiple of 2 and adding them to No_pairs
    }
    
    return No_pairs;
}

int main(){

	vector<int> vec={1,3,45,65,8822,1,3,33,3,45,45,65};

	cout << sockMerchant(vec,vec.size());

	return 0;
}
