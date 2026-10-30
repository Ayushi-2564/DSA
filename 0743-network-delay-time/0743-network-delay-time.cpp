#include<bits/stdc++.h>
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<vector<int>>>a(n);
        for(int i= 0;i<times.size();i++){
            int s= times[i][0];
            int d= times[i][1];
            int wt= times[i][2];
            a[s-1].push_back({d-1, wt});
           
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        vector<int>dist(n, INT_MAX);
        dist[k-1]=0;
        pq.push({0,k-1});
        while(!pq.empty()){
       pair<int, int>p=pq.top();
        pq.pop();
       int node=p.second;
       int wt=p.first;
       if(wt>dist[node])continue;
       for(int i =0;i<a[node].size();i++){
       int neigh= a[node][i][0];
       int weigh=a[node][i][1];
       if(wt+weigh<dist[neigh]){
       dist[neigh]=wt+weigh;
       pq.push({dist[neigh], neigh});
       }
       }
        }
     int ans = *max_element(dist.begin(), dist.end());
     if(ans == INT_MAX)
    return -1;
     return ans;
    }
};