#include <bits/stdc++.h>

using namespace std;

void handled(string &a, int len){
    int n = a.length();
    for (int i=n; i<len; i++) a='0'+a;
}

bool cmp(string a, string b){
    return a<b;
}

void display(string s){
    int n = s.length();
    bool check=0;
    for (int i=0; i<n; i++){
        if (s[i]!='0') {
            check=1;
        }
        if (check) cout<<s[i];
    }
    if (!check) cout<<"0";
    cout<<"\n";
}

int main(){
	vector <string> v;
	string xau[1000];
	int n;
	cin>>n;
	while (n--){
        string s;
        cin>>s;
        int n = s.length();
        for (int i=0; i<n; i++){
            if (s[i]>='0' && s[i]<='9'){
                if (i==0 || s[i-1]<'0' || s[i-1]>'9'){
                    v.push_back("");
                    v.back()+=s[i];
                    continue;
                }
                v.back()+=s[i];

            }
        }
	}
	int len = v.size();
	int maxlen=0;
	for (int i=0; i<len; i++){
        xau[i]=v[i];
        if (v[i].size()>maxlen) maxlen=v[i].size();
	}
	for (int i=0; i<len; i++) handled(xau[i], maxlen);
	sort(xau, xau+len, cmp);
	for (int i=0; i<len; i++){
        display(xau[i]);
	}
	return 0;
}
//https://www.spoj.com/PTIT/problems/PTIT127G/
