/*
	TITLE : STRONG PASSWORD

	LINK  : https://www.hackerrank.com/challenges/strong-password/

	DESCRIPTION:
				
			Here we need to find minium no.of chars we need to add to string. In order to get a strong
		E.g: 2e             here we need atleast 4 chars
		E.g: 2dadSWdasd     hewe length ok but we also need a specal char so 1

	NOTE : in the question
			special_characters = "!@#$%^&*()-+"
		    but in ascii order after " + " there is " - / " so chech upto " / "

*/

#include <bits/stdc++.h>
using namespace std;

int present(int n, string password ,char ll , char ul ){ 
	// this function check if there is one atleast element in a given range
	// of chars ll -> lower limit , ul -> upper limit
	// if it finds then it exits else it returns 1

    for(int i = 0 ; i < n ; i++ ){
        if(password[i]>= ll && password[i]<= ul )
            return 0;
    }
    return 1;
}

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    
    int min = 0;

    // here we check if each element is present if not then returned 1 is added to min 
    min += present(n,password,'0','9'); 
    min += present(n,password,'a','z');
    min += present(n,password,'A','Z');
    min += present(n,password,'!','/');

    if(password.length()<6 ){         // it checks in case the the size is too small even after adding
        int k = 6-password.length();  // so it checks max length and min
        return max(k,min);
    }
    
    return min;
    
}

int main(){

	cout << minimumNumber(5,"3dted");
	
	return 0;
}