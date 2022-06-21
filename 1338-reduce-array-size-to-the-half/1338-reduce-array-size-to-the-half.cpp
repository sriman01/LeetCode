class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> freq;
        
        int n = arr.size();
        
        for(auto it : arr) {
            freq[it]++;
        }
        priority_queue<int> pq;
        for(auto it:freq){
            pq.push(it.second);
        }
        
        int a = 0, count = 0;
        
        while(! pq.empty()) {
            if(n <= 2*a)
                break;
            a += pq.top();
            pq.pop();
            count++;
                
            
        }
        return count;
    }
};