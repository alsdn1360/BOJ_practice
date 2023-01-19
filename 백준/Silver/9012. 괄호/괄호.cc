#include <iostream>
#include <stack>
#include<string>
using namespace std;
 
 
int main() {
	int cnt = 0;
	int flag = 0; // true/false 판단을 위한 flag
	string str;
 
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		stack<char> s; // 스택선언
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') {
				s.push(str[j]); // 여는 괄호를 만나면 push
			}
			else if (str[j] == ')') { // 닫는 괄호를 만났을 때
				if (s.empty()) { // 스택이 비어있다면 오류이므로 flag를 1로 세워주고 break
					flag = 1;
					break;
				}
				else { // 스택이 비어있지 않다면 = 여는 괄호가 push되어 있음
					s.pop(); // 여는 괄호가 있다는 뜻이므로 pop
				}
			}
		} // 입력받은 하나의 문자열 탐색 종료
		if (!s.empty() || flag == 1) { // flag가 1로 세워져있거나, 스택이 비어있지 않다면
			cout << "NO" << endl;    // 짝이 맞지 않음
		}
		else {
			cout << "YES" << endl;
		}
		flag = 0; // 다시 flag를 초기화 해준 뒤 상위 for문으로 이동  
	}
	return 0;
}