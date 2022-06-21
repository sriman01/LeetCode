class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       	int N = heights.size();
	priority_queue<int> pq;

	for (int i = 1; i < N; i++) {
		int diff = heights[i] - heights[i - 1];
		if (diff <= 0 ) continue;
        
        pq.push(diff);
		
        if(bricks < diff){
		    if(ladders==0) return i-1;
            bricks += pq.top();
            pq.pop();
            ladders--;
		 }
        
        bricks -= diff;
	  }
	
	return N - 1;
   }
        
};