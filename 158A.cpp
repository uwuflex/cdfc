#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int cnt=0;
	int sc[a];
	for(int i=0; i<a; i++) {
		cin>>sc[i];
	}
	for(int i=0; i<a; i++) {
		if(sc[i]>=sc[b-1]&&sc[i]>0) cnt++;
	}
	cout<<cnt;
}

