class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r = board.size();
        int c = board[0].size();
        int dr[] = {-1,-1,0,1,1,1,0,-1};
        int dc[] = {0,1,1,1,0,-1,-1,-1};
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                int sum = 0;
                for(int d=0 ; d<8; d++){
                    int ndr = i + dr[d];
                    int ndc = j + dc[d];
                    if(ndr>=0 && ndc>=0 && ndr<r && ndc<c && (board[ndr][ndc] == 1 || board[ndr][ndc] == 2)){
                        sum++;
                    }
                }

                if(board[i][j] == 1 && (sum < 2 || sum > 3)){
                    board[i][j] = 2;
                }
                if(board[i][j] == 0 && sum == 3){
                    board[i][j] = 3;
                }
            }
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(board[i][j] == 2) board[i][j] = 0;
                else if(board[i][j] == 3) board[i][j] = 1; 
            }
        }
    }
};