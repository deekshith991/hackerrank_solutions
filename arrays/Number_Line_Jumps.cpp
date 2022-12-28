

/*
	https://www.hackerrank.com/challenges/kangaroo/
*/

#include <bits/stdc++.h>
using namespace std;



// my way it failed for 13/30 test cases
string kangaroo(int x1, int v1, int x2, int v2) {

	int k = x1 + v1;
    
    while(k<100000 ){
        if(k%(v2)==0 )
            return "YES";
        else
            k+=v1;
    }
    return "NO";
}


// another online way
string kangarooo(int x1,int v1,int x2,int v2){
	if(x1<x2 && v1<v2)
		return "NO";
	else{
		if(v1!=v2 && (x2-x1)%(v2-v1) == 0)
			return "YES";
	}
	return "NO";
}

int main(){

	int x1,v1,x2,v2;
	cin >> x1 >> v1 >> x2 >> v2 ;



	
}
