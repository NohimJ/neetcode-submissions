class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for row in range(9):
            seen = set()
            for i in range(9):
                if board[i][row] == ".":
                    continue
                if board[i][row] in seen:
                    return False
                seen.add(board[i][row])

        
        for row in range(9):
            seen = set()
            for i in range(9):
                if board[row][i] == ".":
                    continue
                if board[row][i] in seen:
                    return False
                seen.add(board[row][i])
        
        for sq in range(9):
            seen = set()
            for i in range(3):
                for j in range(3):
                    row = (sq // 3) * 3 + i
                    col = (sq % 3) * 3 + j
                    if board[row][col] == ".":
                        continue
                    
                    if board[row][col] in seen:
                        return False
                    seen.add(board[row][col])
        return True