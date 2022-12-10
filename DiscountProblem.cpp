#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a;
	cin>>t;
	while(t--){
	    cin>>a;
	    if(a<=100){
	        cout<<a<<endl;
	    }
	    else if(a>100 && a<=1000){
	        cout<<a-25<<endl;
	    }
	    else if(a>1000 && a<=5000){
	        cout<<a-100<<endl;
	    }
	    else{
	        cout<<a-500<<endl;
	    }
	}
	return 0;
}
