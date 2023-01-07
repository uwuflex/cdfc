#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
		string x;
		cin>>x;
		int z=x.size();
		if(z<=10){
			cout<<x<<"\n";
		}
		else {
			cout<<x[0]<<z-2<<x[z-1]<<"\n";
		}
	}
}
