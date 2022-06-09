//TOPOLOGICAL SORTING ALSO CALLED(KAHN ALGORITHM)
#include <bits/stdc++.h>
using namespace std;
void add(vector<int>adj[],int u,int v,int vi1[]){
    adj[u].push_back(v);
    vi1[v]++;
    
    
}


void bfs(vector<int> adj[],int i,int vi[]){
    std::queue<int> q;
    for(int i=0;i<5;i++){
        if(vi[i]==0)q.push(i);
    }
    
while(!q.empty()){
    int u=q.front();
    q.pop();
    cout<<u<<"\t";
    for(int h:adj[u]){
        vi[h]--;
        if(vi[h]==0)q.push(h);
    }
    
}
    
    
}

int main(void)
{

vector<int> adj[5];
int vi[5]={0};
add(adj,0,2,vi);
add(adj,0,3,vi);
//add(adj,2,3,vi);
add(adj,1,3,vi);
add(adj,1,4,vi);
    
    bfs(adj,0,vi);
    
    
    
    
    
return 0;
}
