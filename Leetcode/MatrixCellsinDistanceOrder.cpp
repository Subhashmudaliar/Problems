/*
https://leetcode.com/problems/matrix-cells-in-distance-order/
*/
class Solution {
public:
  vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
    queue<pair<int,int>>q;
    q.push(make_pair(r0,c0));
    vector<vector<int> >visited(R,vector<int> (C,false));
    pair<int,int>cur;
    vector<vector<int>> res;
    vector<int>temp(2);
    while(!q.empty()){
      cur=q.front();
      q.pop();
      int r=cur.first;
      int c=cur.second;
      temp[0]=r;temp[1]=c;
      if(r<0 || r>=R || c<0 || c>=C){
        continue;
      }
      if(visited[r][c]==false){
        res.push_back(temp);
        visited[r][c]=true;
        q.push(make_pair(r,c-1));
        q.push(make_pair(r,c+1));
        q.push(make_pair(r-1,c));
        q.push(make_pair(r+1,c));
    }
  }
  return res;
}
};
