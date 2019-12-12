#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

main()
{
	char s[101];
	stack<int> stack1;
	cin>>s;
	int n=strlen(s), tong=0, t;
	for (int i=0; i<n; i++){
		if (s[i]=='(') stack1.push(0);
		if (s[i]=='C') stack1.push(12);
		if (s[i]=='O') stack1.push(16);
		if (s[i]=='H') stack1.push(1);
		if (s[i]==')'){
			while (stack1.top()!=0){
				tong+=stack1.top();
				stack1.pop();
			} // gap ki tu ')' tinh tong cac phan tu tu dinh stack den khi gap so 0
			stack1.pop();
			stack1.push(tong);
			tong=0;
			// pop cac phan tu tu dinh stack den so 0 dau tien, tinh ca so 0
		} 
		  
		if (s[i]>='2' && s[i]<='9') {
			t=s[i]-'0';
			t*=stack1.top();
			stack1.pop();
			stack1.push(t);
		} // gap ki tu so thi nhan phan tu o dinh stack roi pop phan tu o dinh stack va push gia tri moi vao stack
	while (!stack1.empty()){
		tong+=stack1.top();
		stack1.pop();
	} //tinh tong cac phan tu co trong stack
	cout<<tong;
}
//http://www.spoj.com/PTIT/problems/PTIT121E/
