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
add(adj,5,6);
add(adj,6,7);
bool vis[8];int v=7;
 for(int i=0;i<v+1;i++)vis[i]=false;
 for(int i=1;i<v+1;i++){//check for all vertex
 
if(vis[i]==false)//include this condition for example if 2 is processed so that it again not get 
//processed
dfs(adj,i,v,vis);
     
 }
    return 0;
}
