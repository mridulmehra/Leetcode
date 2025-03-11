class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row[9];
        unordered_set<int> col[9];
        unordered_set<int> box[9];
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                int num = board[i][j];
                if(board[i][j] == '.') continue;
                
                int boxInd = (i/3)*3 + (j/3);

                if(col[j].count(num) || row[i].count(num) || box[boxInd].count(num)) return false;

                row[i].insert(num);
                col[j].insert(num);
                box[boxInd].insert(num);
            }
        }
        return true;
    }
};