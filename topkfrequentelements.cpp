#include <iostream>
#include <map>
#include <vector>
// include queue, sis
#include <queue>
using namespace std;

int main(){
    typedef pair<int, int> P;
    unordered_map<int, int> mp;

    //example vector
    vector<int> nums{1,1,1,2,2,3,3,3,3,3};
    //this is the "k" 
    int k =2;
    //create the map which tells ya element -> frequency mapping
    for(auto num:nums){
        mp[num]++;
    }

    //create a min_heap, why? that's a discussion for another time. Check notion.
    priority_queue<P, vector<P>, greater<P>> pq;
    for(auto &it: mp){
        int value = it.first;
        int freq = it.second;
        pq.push({freq, value});
    }
    
    //add only k elements in min_heap
    if(pq.size()> k){
        pq.pop();
    }

    //create result
    vector<int> result;
    while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
    }

    //print result
    for(int i : result){
        cout << i;
        cout << endl;
    }
    return 0;
}