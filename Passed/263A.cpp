#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c=0;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cin>>a;
			if(a==1) {
				c += abs(i+1-3) + abs(j+1-3);
				break;
			}
		}
	}
	cout<<c;
}

