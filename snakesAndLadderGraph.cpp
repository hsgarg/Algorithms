#include <iostream>
#include <unordered_map>
#include <climits>
#include <queue>
#include <map>
#include<stack>
#include <list>
using namespace std;

/// Snakes and Ladder

template <typename T>
class graph{
	map <T,list<T> > adjlist;
public:

	void edgeAdd(T u,T v, bool bidir=false){
		adjlist[u].push_back(v);
		if(bidir){
			adjlist[v].push_back(u);	
		}
	}

	int singleSourceSP(T src,T des)
    {
		queue<T> q;
		map<T,T> parent;
		map<T,int> dist;

		for(auto node:adjlist)
        {
			dist[node.first]=INT_MAX;
		}	
		
		q.push(src);
		dist[src]=0;
		parent[src]=src;

		while(!q.empty()){
			T node=q.front();
			q.pop();

			for(auto children:adjlist[node]){
				if(dist[children]==INT_MAX){
					dist[children]=dist[node]+1;
					q.push(children);
					parent[children]=node;
				}
			}
		}

		T temp=des;

		while(temp!=src){
			cout<<temp<<"<--";
			temp=parent[temp];
		}
		cout<<src<<endl;	

		return dist[des];
	}

};


int main(){
	grap<int> g;

	int board[50] = {0};
	
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
    board[25] = -10;
	board[32] = -2;
	board[34] = -22;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;


	for(int u=0;u<=36;u++)
    {
		for(int i=1;i<7;i++)
        {
			int v=u+i+board[u+i];
			g.edgeAdd(u,v);
		}
	}

	cout<<g.singleSourceSP(1,36)<<endl;

	return 0;
}