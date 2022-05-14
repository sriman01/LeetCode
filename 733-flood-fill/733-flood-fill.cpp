class Solution {
    
    
    void dfs(int i, int j, int newColor, int color, vector<vector<int>>& image) {
        
        int m = image.size();
        int n = image[0].size();
    
        
        if(i < 0 || j < 0) return;
        if(i >= m || j >= n) return;
        if(image[i][j] != color) return;
        
        image[i][j] = newColor;
        
        dfs(i + 1, j, newColor, color, image);
        dfs(i - 1, j, newColor, color, image);
        dfs(i, j + 1, newColor, color, image);
        dfs(i, j - 1, newColor, color, image);
        
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int color = image[sr][sc];
        
        if(image[sr][sc] != newColor)
            dfs(sr, sc, newColor, color, image);
        
        return image;
        
    }
};