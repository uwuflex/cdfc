// https://codeforces.com/problemset/problem/546/A
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d;
	cin>>a>>b>>c;
	d = (a*((c*c+c)/2));
	cout<<((d>b)?d-b:0);
}

