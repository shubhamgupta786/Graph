#include <bits/stdc++.h>
using namespace std;
void add(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int> adj[],int s,int v){
    
    bool vis[v+1];
    for(int i=0;i<v+1;i++)vis[i]=false;
   queue<int>  q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int u=q.front();
        cout<<u<<" ";
        q.pop();
        for(int i:adj[u]){
            if(vis[i]==false){
               
            vis[i]=true;
            q.push(i);
                
            }
        }
    }
    
}
int main()
{
vector<int> adj[5];
add(adj,1,2);
add(adj,2,4);
add(adj,1,3);
add(adj,3,4);

bfs(adj,1,4);
    return 0;
}
