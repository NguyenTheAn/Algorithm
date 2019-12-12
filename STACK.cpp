#include <iostream>
using namespace std;
struct stack{
	int top;
	int n[1001];
};
void init(stack &s){
	s.top=-1;
}
void push(stack &s, int x){
	s.top++;
	s.n[s.top]=x;
}	
void pop(stack &s){
	if (s.top!=-1){
		s.top--;
	}
}
int top(stack s){
	if (s.top==-1) return -1;
	return s.n[s.top];
}
int size(stack s){
	return (s.top+1);
}
int empty(stack s){
	if (s.top==-1) return 1;
	return 0;
}
 
int main ()
{
	stack s;
	string str;
	while (1){
		cin>>str;
		if (str=="init"){
			init(s);
		}
		if (str=="push"){
			int x;
			cin>>x;
			push(s, x);
		}
		if (str=="pop"){
			pop(s);
		}
		if (str=="top"){
			cout<<top(s)<<endl;
		}
		if (str=="size"){
			cout<<size(s)<<endl;
		}
		if (str=="empty"){
			cout<<empty(s)<<endl;
		}
		if (str=="end"){
			break;
		}
	}
}
