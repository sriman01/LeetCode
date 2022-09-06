class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), x = INT_MIN;
        vector<int> prev(n), next(n);
        stack<int> s;
        
        for(int i = 0; i < n; i++){
            while(!s.empty() && heights[s.top()] >= heights[i])
                s.pop();
            
            if(!s.empty())
                prev[i] = s.top() + 1;
            else
                prev[i] = 0;
            
            s.push(i);
        }
        
        while(!s.empty()) s.pop();
        
        for(int i = n-1; i >= 0; i--){
            while(!s.empty() && heights[s.top()] >= heights[i])
                s.pop();
            
            if(!s.empty())
                next[i] = s.top() - 1;
            else
                next[i] = n - 1;
            
            s.push(i);
        }
        
        for(int i = 0; i < n; i++){
            int y = (next[i] - prev[i] + 1) * heights[i];
            
            if(x < y)
                x = y;
        }
        return x;
    }
};