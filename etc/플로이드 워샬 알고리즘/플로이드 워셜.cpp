#include <iostream>
#define INF 1e9

using namespace std;

int n, m;
int graph[501][501]; //플로이드 워샬을 사용해여 하는 경우 노드가 500개 이상 되는 경우가 거의 없음(3중 for문이라)

int main(){
    cin >> n >> m;
    
    //최단 거리 테이블을 모두 무한으로 초기화
    for (int i = 0;i < 501; i++){
         fill(graph[i], graph[i] + 501,INF);
    }
    
    //자기 자신에서 자기 자신으로 가는 비용은 0으로 초기화
    for(int a = 1; a <= n; i++){
        for(int b = 1; b <= n; b++){
            if(a==b) graph[a][b] = 0;
        }
    }
    
    //점화식에 따라 플로이드 워셜 알고리즘 수행
    for(int k =1; k <=n; k++){ //거쳐가는 노드
        for(int a =  1; a<=n; a++){ //출발 노드
            for(int b = 1; b<=n; b++){ //도착 노드
                graph[a][b] = min(graph[a][b], graph[a][k]+ graph[k][b]);
            }
        }
    }
    
    //수행 결과
    for(int a = 1; a<=n; a++){
        for(int b= 1; b<=n; b++){
            if(graph[a][b] == INF) cout << "Infinity" <<endl;
            else cout << graph[a][b] <<endl;
        }
    }
}
    
    