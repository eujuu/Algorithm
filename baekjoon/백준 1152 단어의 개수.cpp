#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int ans = 0;
    getline(cin, str);

    for (int i = 0; i < str.length() ; i++) {
        if (str[i] == ' ' && i!=0)
            ans++;
    }
    if (str[str.length() - 1] == ' ') cout << ans;
    else cout << ++ans;
}