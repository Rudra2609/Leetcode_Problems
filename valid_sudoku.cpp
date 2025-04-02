class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> box(10, vector<int>(10, 0));

        for(int i=0;i<9;i++){
            map<int,int> tp,tp1;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(tp[board[i][j]-'0']++) return false;
                }
                if(board[j][i]!='.'){
                    if(tp1[board[j][i]-'0']++) return false;
                }
                if(board[i][j]!='.'){
                    int ind=(i/3)*3+(j/3);
                    if(box[ind][board[i][j]-'0']++) return false;
                }
            }
        }

        return true;
    }
};
