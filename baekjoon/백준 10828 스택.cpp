#include<iostream>
#include <stack>
#include <string>
using namespace std;

class m_stack {
	stack <int> m_stk;
public:
	void m_push(int p_num) {
		m_stk.push(p_num);
	}
	void m_pop() {
		if (m_stk.empty())
			cout << -1 << "\n";
		else {
			int m_num;
			m_num = m_stk.top();
			m_stk.pop();
			cout << m_num << "\n";
		}
	}
	void m_size() {
		int p_size;
		p_size = m_stk.size();
		cout << p_size << "\n";
	}
	void m_empty() {
		if (m_stk.empty())
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
	void m_top() {
		if (m_stk.empty())
			cout << -1 << "\n";
		else
		{
			int top_n;
			top_n = m_stk.top();
			cout << top_n << "\n";
		}
	}
};
int main() {
	int total_num;
	cin >> total_num;
	string inst;
	m_stack my;
	for (int i = 0; i < total_num; i++) {
		cin >> inst;
		if (inst == "push") {
			int n;
			cin >> n;
			my.m_push(n);
		}
		else if (inst == "top")
			my.m_top();
		else if (inst == "size")
			my.m_size();
		else if (inst == "pop")
			my.m_pop();
		else if (inst == "empty")
			my.m_empty();
	}

	return 0;
}