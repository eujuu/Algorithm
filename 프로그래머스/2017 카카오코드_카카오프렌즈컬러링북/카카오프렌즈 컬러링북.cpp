#include <vector>
#include <queue>
using namespace std;
int visit[101][101] = {0};
vector<vector<int>> pic;
int height, width;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int dfs(int x ,int y, int cnt){
    visit[x][y] = 1;
    
    for(int i=0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y+ dy[i];
        
        if( nx >= height || ny >= width || nx<0 || ny <0) continue;
        if(pic[nx][ny] == pic[x][y] && visit[nx][ny] == 0)
            cnt = dfs(nx, ny, cnt+1);
    }
    return cnt;
}
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    pic = picture;
    height= m; width= n;
    for(int i = 0 ; i <m;i++)
        for(int j = 0 ; j < n; j++)
            visit[i][j] = false;
        
    


    vector<int> answer(2);
    for(int i=0; i<m; i++){
        for(int j = 0; j < n; j++){
            if(picture[i][j] !=0 && visit[i][j] == 0){
                number_of_area++;
                max_size_of_one_area = max(max_size_of_one_area, dfs(i, j, 1));
            }
        }
    }
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
 
    return answer;
}