class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // checking colm:
        for(int i=0;i<9;i++){
            vector<int> valid(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int num=board[i][j]-'0';
                if(valid[num]) return false;
                valid[num]++;
            }
        }
       
        // checking rows:
        for(int j=0;j<9;j++){
            vector<int> valid(10,0);
            for(int i=0;i<9;i++){
                if(board[i][j]=='.') continue;
                int num=board[i][j]-'0';
                if(valid[num]) return false;
                valid[num]++;
            }
        }

        // checking sub-boxes:
        for(int k=0;k<9;k ++){
            vector<int> valid(10,0);
            for(int l=0;l<9;l++){
                int x=((k%3)*3)+l/3;
                int y=((k/3)*3)+l%3;
                if(board[x][y]=='.') continue;
                int num=board[x][y]-'0';
                if(valid[num]) return false;
                valid[num]++;
            }            
        }
        return true;
    }
};
