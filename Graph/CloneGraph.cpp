/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node)
{
  unordered_map<UndirectedGraphNode *, UndirectedGraphNode *> mp;
  UndirectedGraphNode *cloneNode = new UndirectedGraphNode(node->label);
  queue<UndirectedGraphNode *> q;
  q.push(node);
  mp[node] = cloneNode;
  while (!q.empty())
  {
    UndirectedGraphNode *curr = q.front();
    q.pop();
    for (auto v : curr->neighbors)
    {
      if (mp.find(v) == mp.end())
      {
        mp[v] = new UndirectedGraphNode(v->label);
        q.push(v);
      }
      mp[curr]->neighbors.push_back(mp[v]);
    }
  }
  return cloneNode;
}
