int v, e; //노드의 개수(v)와 간선(union 연산)의 개수(e)
int parent[100001];

int findParent(int x){ //특정 원소가 속한 집합 찾기
    if (x == parent[x]) return x;
    return findParent(parent[x])
}

void unionParent(int a, int b){ //두 원소가 속한 집합을 합치기
    a = findParent(a)
    b = findParent(b)
    if (a<b) parent[b] = a;
    else parent[a] = b;
}
int main(){
    cin >> v >> e;
    for(int i= 1; i <=v; i++){
        parent[i] = i;
    }
    
    //union연산 수행
    for(int i=0; i <e; i++){
        int a,b;
        cin >> a>> b;
        unionParent(a, b);
    }
    
    //각 원소가 속한 집합 출력
    cout << "각 원소가 속한 집합: ";
    for(int i = 1; i <=v; i++){
        cout <<findParent(i) <<" ";
    }
    
    //부모 테이블 출력
    cout >> "부모 테이블: " ;
    for(int i= 1; i <=v; i++){
        cout << parent[i] <<" ";
    }
}