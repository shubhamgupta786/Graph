//countig connected component in undirected graph(island in graph)
#include <bits/stdc++.h>
using namespace std;
void add(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int> adj[],int s,int v,bool vis[]){
    
   
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
vector<int> adj[9];
add(adj,1,2);
add(adj,2,4);
add(adj,1,3);
add(adj,3,4);
add(adj,5,6);
add(adj,6,7);
bool vis[8];int v=7;int count=0;
 for(int i=0;i<v+1;i++)vis[i]=false;
 for(int i=1;i<v+1;i++){
if(vis[i]==false){bfs(adj,i,v,vis);
    count++; }
 }
 cout<<"\n"<<"-------->"<<count<<endl;
    return 0;
}
