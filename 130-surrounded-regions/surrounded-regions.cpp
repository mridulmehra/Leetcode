class Solution {
private:
    void dfs(int row, int col , vector<vector<char>>& board , vector<vector<int>> &vis , int drow[] , int dcol[]){
        vis[row][col] = 1;
        int n = board.size();
        int m = board[0].size();
        for(int k=0; k<4; k++){
            int nrow = row + drow[k];
            int ncol = col + dcol[k];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol] == 'O'){
                dfs(nrow,ncol,board,vis,drow,dcol);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if(n == 0) return;
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));

        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};

        for(int i=0; i<m; i++){
            if(!vis[0][i] && board[0][i] == 'O') dfs(0,i,board,vis,drow,dcol);
            if(!vis[n-1][i] && board[n-1][i] == 'O') dfs(n-1,i,board,vis,drow,dcol);
        }
        for(int j=0; j<n; j++){
            if(!vis[j][0] && board[j][0] == 'O') dfs(j,0,board,vis,drow,dcol);
            if(!vis[j][m-1] && board[j][m-1] == 'O') dfs(j,m-1,board,vis,drow,dcol);
        }
        for(int a=0; a<n; a++){
            for(int b=0; b<m; b++){
                if(!vis[a][b] && board[a][b] == 'O'){
                    board[a][b] = 'X';
                }
            }
        }
    }
};