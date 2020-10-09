//c++ dijkstra, developed
#define INF 1e9

int n, m, start;
vector<pair<int, int>> graph[100001]; //간선 정보
int d[100001]; //최단 거리 테이블

void dijkstra(int start){
    priority_queue<pair<int, int>> pq; //우선순위 큐(최소 비용 값, 노드번호), 최대힙으로 구성되어있음
    
    pq.push({0, start}); //시작 노드로 가기위한 최단 경로는 0으로 설정하여 큐에 삽입
    d[start] = 0;
    while(!pq.empty()){
        //가장 최단 거리가 짧은 노드에 대한 정보 꺼내기
        int dist = -pq.top().first; //현재 노드까지의 비용, 최대힙으로 구성되어 있기 때문에 -
        int now = pq.top().second; //현재 노드
        
        pq.pop();
        
        if(d[now] < dist) continue; //현재 노드가 이미 처리된 적 있는 노드라면 무시
        
        //현재 노드와 연결된 다른 인접한 노드들을 확인
        for(int i= 0; i < graph[now].size(); i++){
            int cost = dist + graph[now][i].second;
            //햔재 노드를 거쳐서, 다른 노드로 이동하는 거리가 더 짧은 경우
            if( cost < d[graph[now][i].first] ) {
                d[graph[now][i].first] = cost;
                pq.push(make_pair(-cost, graph[now][i].first));//최대힙으로 구성되어 있기 때문
            }
        }
    }
}
                
           
int main(){
    cin >> n >> m >> start;
    //모든 간선 정보 입력
    for(int i=0;i < m; i++){
        int a, b, c;
        cin >> a>> b>> c;
        graph[a].push_back({b,c });   
    }
    
    fill(d, d+100001, INF);
    dijkstra(start);
    
    for(int i =1; i <= n; i++){
        if(d[i] == INF)
            cout << "infinity\n";
        else
            cout << d[i] <<endl;       
    }       
}
                