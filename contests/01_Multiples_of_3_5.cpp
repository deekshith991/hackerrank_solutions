/*
    TITLE : Project Euler #1: Multiples of 3 and 5
    LINK  : https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem

    DESCRIPTION :
        here we need to find sum of no. that are divisible by 3 & 5

        First function is normal bruteforce

        second is optimum solution
*/

#include <iostream>
using namespace std;


long long solve(long long n){
    
    long long sum = 0 ;
    
    for( long long i = 1 ; i < n ; i++ ){
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    
    return sum;
}

long long sol(long long n){
    
    long long sum=0,temp=0,fives,threes,fifteens;
    
    fives = n/5; // first find no.of 5 divisble elements
    temp = ((fives*(fives+1))/2) *5; // sum of that many eg :5 then 1+2+3+4+5 then that sum multiplied by 5
    sum = temp;
    
    
    temp=0;
    threes = n/3;  // here similar op
    temp = ((threes*(threes+1))/2) *3;
    sum = sum +temp;
    
    temp=0;
    fifteens = n/15; // we finding for 15 because 3&5 co-join at 15 those are counted twice so subtracting them
    temp =((fifteens*(fifteens+1))/2) *15;
    sum = sum - temp ;
    
    return sum;
}



int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        cout << sol(n-1) << endl;
    }
    return 0;
}

