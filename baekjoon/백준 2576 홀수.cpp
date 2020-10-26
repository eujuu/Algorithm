#include <iostream>
#include <cstdarg> //for ellipsis
#include <fstream>
using namespace std;
//단항 연산자 오버로딩

class Cents {
private:
	int m_cents;
public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend ostream& operator <<(ostream& out, const Cents& cents){
		out << cents.m_cents;
		return out;
	}

	Cents operator - () const {
		return Cents(-m_cents);
	}
	bool operator ! () const {
		//!Cents (...)
		// !0 -> true, !그외 -> false
		return (m_cents == 0) ? true : false;
	}
};
int main() {
	
}