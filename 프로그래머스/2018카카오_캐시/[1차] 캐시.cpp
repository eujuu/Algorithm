#include <string>
#include <vector>
#include <queue>
using namespace std;
string make_lower(string a) {
    for (int i = 0; i < a.length(); i++)
        a[i] = tolower(a[i]);
    return a;
}
int solution(int cacheSize, vector<string> cities) {
    int answer = 0, flag = 0;
    if (cacheSize == 0) return cities.size() * 5;
    vector <string> in_cache(cacheSize);

    for (int i = 0; i < cities.size(); i++) {

        string city = make_lower(cities[i]);
        flag = 0;
        for (int j = 0; j < cacheSize; j++) {
            if (city == in_cache[j]) {
                in_cache.erase(in_cache.begin() + j);
                in_cache.push_back(city);
                answer += 1;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            in_cache.erase(in_cache.begin());
            in_cache.push_back(city);
            answer += 5;
        }

    }

    return answer;
}