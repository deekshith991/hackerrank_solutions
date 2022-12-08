/*
    TITLE : Project Euler #3: Largest prime factor

    DESCRIPTION : 
        Here a integer is given we need to find the prime factor of that number means it has to be a factor and a prime and highest of both
        
       my approach got 1TLE and rest 5 passed

        MY FUNCTIONS : 1. solve(n)
                    2. prime(i)
*/

#include <iostream>
using namespace std;

bool prime(int n){
    for( int i=2 ; i < n ; i++)
        if(n%i ==0 )
            return 0;
            
    return 1;
}

int solve(int n){
    
    for( int i = n ; i>1 ; i-- ){
        if(n%i == 0){
            if(prime(i))
                return i;
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}

