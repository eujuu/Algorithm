#include <iostream>
#include <queue>
#include <string>
using namespace std;
class QUEUE {
public:
	deque<int> q;
	void push(int s) {
		q.push_back(s);
	}
	void pop() {
		if (!q.empty()) {
			int fr = q.front();
			q.pop_front();
			cout << fr << endl;
		}
		else
			cout << -1 << endl;

	}
	void size() {
		cout << q.size() << endl;
	}
	void empty() {
		if (q.empty())
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	void front() {
		if (!q.empty()) {
			cout << q.front() << endl;
		}
		else
			cout << -1 << endl;
	}
	void back() {
		if (!q.empty()) {

			cout << q.back() << endl;
		}
		else
			cout << -1 << endl;
	}
};

int main() {
	int total_num, i;
	string line;
	cin >> total_num;
	QUEUE que;
	for (i = 0; i < total_num; i++) {
		cin >> line;
		if (line == "push") {
			int n;
			cin >> n;
			que.push(n);
		}
		else if (line == "pop") {
			que.pop();
		}
		else if (line == "size") {
			que.size();
		}
		else if (line == "empty") {
			que.empty();
		}
		else if (line == "front") {
			que.front();
		}
		else if (line == "back") {
			que.back();
		}

	}
}