

/*
	https://www.hackerrank.com/challenges/between-two-sets/
*/

#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector<int> a, vector<int> b);
bool isValid(int x , vector<int> a ,vector <int> b);

	// let X be num
	// and  if all the elements  in a[] are factors of x 
	// i.e., x/a[i] =0
	// and all the elements in b[] must have x as factor
	// i.e., b[i]/x =0


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int n,m; cin >> n>> m;
	vector<int> a;
	vector<int>b;

	for(int i=0; i<n ; i++)
		cin>>a[i];
	for(int i=0 ; i<m; i++)
		cin>> b[i];

	cout << getTotalX(a,b);

	
}



int getTotalX(vector<int> a, vector<int> b) {
    
    int cnt=0;
    
	// that condition only posible if x is btw a[high] & b[low]
    int min_x = *max_element(a.begin(),a.end());
    int max_x = *min_element(b.begin(),b.end());
    
    for( int i= min_x;i<=max_x;i++){
        if(isValid(i,a,b))
            cnt++;
    }
    return cnt;

}

bool isValid(int x , vector<int> a ,vector <int> b){
    for(int i=0; i<a.size(); i++)
        if(x% a[i]!=0)
            return 0;
    
    for( int i=0; i<b.size() ; i++)
        if(b[i]%x!=0)
            return 0;
    
    return 1;
    
}
