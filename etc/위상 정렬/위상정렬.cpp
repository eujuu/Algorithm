int v, e; //노드 개수, 간선 개수
int indegree[100001]; 진입차수
vector<int> graph[100001]; //간선정보 연결 리스트

void topologySort(){
    vector<int> result;
    queue<int> q;
    
    for(int i= 1; i <= v; i++){
        if( indegree[i] == 0)
            q.push(i);
    }
    
    while(!q.empty()){
        int now = q.front();
        q.pop();
        result.push_back(now);
        for(int i= 0 ; i < graph[now].size(); i++){
            //해당 원소와 연결된 노드들의 진입차수에서 1 빼기
            indegree[graph[now][i]] -=1;
            //새롭게 진입차수가 0이 되는 노드를 큐에 삽입
            if(indegree[graph[now][i]] == 0){
                q.push(graph[now][i]);
            }
        }
    }
    
    for(int i=0 ; i< result.size(); i++){
        cout << result[i] <<" " ;
    }
}
    