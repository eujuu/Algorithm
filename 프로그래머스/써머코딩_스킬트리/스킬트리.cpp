#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	string now = "", tmp;

	for (int i = 0; i < skill_trees.size(); i++) {
		now = skill_trees[i];
		tmp = "";
		int flag = 1;
		for (int j = 0; j < now.length(); j++) {
			for (int s = 0; s < skill.length(); s++) {
				if (now[j] == skill[s])
					tmp += now[j];
			}
		}
		for (int j = 0; j < tmp.length(); j++) {
			if (tmp[j] != skill[j])
				flag = 0;
		}
		if (flag == 1) answer++;
	}
	return answer;
}