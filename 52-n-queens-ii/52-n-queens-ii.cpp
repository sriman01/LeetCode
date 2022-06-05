class Solution {
public:
    
vector<vector<string>>ans;

bool issafe(int r,int c,vector<string>&v,int n){
    for(int i=0;i<=r;i++){
    
        if(v[i][c]=='Q')
            return false;
    }
    int row=r,col=c;
    while(row>=0&&col>=0){
     
        if(v[row][col]=='Q') 
            return false;
        row--;col--;
    }
  
    row=r;col=c;
    while(row>=0&&c<n){
        if(v[row][col]=='Q')
            return false;
        row--;col++;
    }
    return true;
   
}

void solve(int r,vector<string>&v,int n){
    if(r==n){   
        ans.push_back(v);
        return;
    }
    for(int i=0;i<n;i++){
        if(issafe(r,i,v,n)){
            v[r][i]='Q';
            solve(r+1,v,n); 
            v[r][i]='.';
        }
    }
}

int totalNQueens(int n) {
  
    vector<string>v(n,string (n,'.'));
    solve(0,v,n); 
    
    return ans.size();
  }      

};