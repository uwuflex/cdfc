#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int s[n];
	int cnt=0;
	while(n--) {
		int x,y,z;
		cin>>x>>y>>z;
		if(x+y+z>=2)cnt++;
	}
	cout<<cnt;
}
