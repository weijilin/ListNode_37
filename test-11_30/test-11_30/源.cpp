#include<stdio.h>
#include<iostream>
using namespace std;
//int main() {
//	char a[10] = { '1','2','3','4','5','6','7','8','9',0 },*p;
//	int i;
//	i = 8;
//	p=a + i;
//	
//	printf("%s\n", p-3);
//	system("pause");
//}



//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//	{
//		k++;
//	}
//	return k;
//}
//int main()
//{
//	cout << (func());
//}
找出字符串中第一个只出现一次的字符#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	string s;
	while (cin >> s) {
		vector<int> map(256);
		int i;
		for (i = 0; i < s.size(); ++i) {
			map[s[i]]++;
		}
		for (i = 0; i < s.size(); i++) {
			if (map[s[i]] == 1) {
				cout << s[i] << endl;
				break;
			}
		}
		if (i == s.size())
			cout << -1 << endl;
	}
	return 0;
}



//小易的升级之路
#include<iostream>
#include<vector>
using namespace std;
int gcd(int a, int b) {
	/*
	if(q==0){
		return p;
	}
	int r=p%q;
	return gcd(q,r);*/
	int t;
	t = (a > b) ? b : a;
	while (t > 0) {
		if (a%t == 0 && b%t == 0)
			break;
		t--;
	}
	return (t);
}
int main() {
	int n;
	int a;

	while (cin >> n >> a) {
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < v.size(); i++) {
			if (a >= v[i]) {
				a += v[i];
			}
			else {
				int c = gcd(a, v[i]);
				a += c;
			}
		}
		cout << a << endl;
	}
	return 0;
}