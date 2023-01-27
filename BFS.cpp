int visited[100],graph[3][3]={{1,1,1},{1,1,1},{1,1,1}},n=3;
queue<int>que;

int startNode = 0;
que.push(startNode);

while(!que.empty()){
	int curNode = que.front();
	
	cout << curNode << " ";
	visited[curNode] = 1;

	for(int nextNode = 0; nextNode < n; nextNode++){
		if(graph[curNode][nextNode] == 1 and visited[nextNode] == 0){
			
			visited[nextNode] = 1;
			que.push(nextNode);
		}
	}
	que.pop();
}