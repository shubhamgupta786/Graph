#include <bits/stdc++.h>
using namespace std;
void add(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<int> adj[],int s,int v,bool vis[]){

    vis[s]=true;
    cout<<s<<" ";


        for(int i:adj[s]){
            if(vis[i]==false){
               
        
            dfs(adj,i,v,vis);
            
                
            }}
   
    
}
int main()
{
vector<int> adj[9];
add(adj,1,2);
add(adj,2,4);
add(adj,1,3);
add(adj,3,4);

bool vis[5];int v=4;
 for(int i=0;i<v+1;i++)vis[i]=false;
 
//if(vis[i]==false)
dfs(adj,1,4,vis);

    return 0;
}
