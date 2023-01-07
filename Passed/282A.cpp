#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	cin>>a;
	int cnt=0;
	for(int i=0; i<a; i++) {
		string x;
		cin>>x;
		if(x=="++X" || x=="X++") cnt++;
		else if(x=="--X" || x=="X--") cnt--;
	}
	
	cout<<cnt;
}

