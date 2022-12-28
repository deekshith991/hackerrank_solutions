

/*

*/

#include <bits/stdc++.h>
using namespace std;
string timeConversionO(string s);

string timeConversion(string s) {

	string str = s;

    if(s[0] == '1' && s[1] == '2' && s[8]=='A'){
        s[0] = '0' ;
        s[1] = '0' ;
        return str;
    }

    else if( s[8] == 'P'){
        if(s[0] == '0'){
        	s[0] = '1';

        	switch (s[1]){
        		case '1': s[1] = '3';
        			break;
        		case '2': s[1] = '4';
        			break;

        	}
        }
    }
    return s;

}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n=10;
	string s;
	getline(cin,s);

	string k = timeConversion(s);
	cout << k;

	
}

string timeConversionO(string s) {
    if(s[0] == '1' && s[1] == '2' && s[8]=='A'){
        s[0] = '0' ;
        s[1] = '0' ;
        s.erase(8,10);
        return s;
    }
    else if( s[8] == 'P'){
        if(s[0] == '0'){
            s[0]++;
        	switch (s[1]){
            case '0': s[1]++; 
            case '1': s[1]++; break; 
            case '2': s[1]++; break;
            case '3': s[1]++; break; 
            case '4': s[1]++; break; 
            case '5': s[1]++; break;  
            case '6': s[1]++; break; 
            case '7': s[1]++; break; 
            case '8': s[1]++; break; 
            case '9': s[1]++; break; 
            }
            s[1]++;
        }
        else if( s[0] == '1' && s[1] == '2'){
            s.erase(8,10);
            return s;
        }
        else if( s[0] == '1' ){
            s[0]++;
            switch (s[1]){
            case '0': s[1]++; s[1]++ ;break; 
            case '1': s[1]++; s[1]++ ;break; 
            }
        }
        
    }
    s.erase(8,10);
    return s;

}

