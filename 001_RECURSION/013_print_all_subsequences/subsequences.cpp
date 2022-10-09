#include<bits/stdc++.h>
using namespace std;
void subseq(int ind, string str, string &str1) {
	if (ind == str.size()) {
		cout << str1 << " ";
		return;
	}
	str1.push_back(str[ind]);
	subseq(ind + 1, str, str1);
	str1.pop_back();
	subseq(ind + 1, str, str1);
}
int main() {
	string str;
	cin>>str;
	string str1 = "";
	cout<<"Possible subsequences of given string:"<<endl;
	subseq(0, str, str1);
}
