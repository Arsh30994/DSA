#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int> v) {
    vector<int> ls;
    map<int,int> mpp;
    int n = v.size();
    int mini = (int)(n/3) + 1;
    for(int i = 0;i<n;i++) {
        mpp[v[i]]++;
        if(mpp[v[i]] == mini) {
            ls.push_back(v[i]);
        }
        if(ls.size() == 2) break;
    }
    sort(ls.begin(), ls.end());
    return ls;

        
    }
};