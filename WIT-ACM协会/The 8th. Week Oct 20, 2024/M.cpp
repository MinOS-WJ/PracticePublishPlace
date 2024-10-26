#include <bits/stdc++.h>
using namespace std;
stack<int> s;//int类型方便计算 
/*
若s非空
则s.top()始终保存当前最近一个未被匹配的括号位置
若s为空
则说明当前位置之前的全部括号都"完美 "
*/ 
char S[1000010]; 
int main () {
	scanf("%s",S);
	int len = strlen(S),ans=0;
	for (int i = 0; i < len; i++){
		if (S[i]=='('||S[i]=='['||S[i]=='{'){
			s.push(i);//前括号直接放进去 
		}else {
			if (s.empty()){
				s.push(i);//在空栈的情况下来了个后括号，显然它不能被匹配 
				continue;
			}
			if ((S[i]==')'&&S[s.top()]=='(')||(S[i]==']'&&S[s.top()]=='[')||(S[i]=='}'&&S[s.top()]=='{')){
				s.pop();
				if (s.empty()){
					ans = max(ans,i+1);//空了说明从头开始到当前位置都"完美"，共i+1个 
					continue;
				}
				ans = max(ans,i-s.top());//用(当前位置-最近一个未被匹配的括号位置)更新答案 
			}else {
				s.push(i);//无法被匹配的后括号 
			}
		}
	}
	printf("%d",ans);
	return 0;
}
