
// N-Queens , N-Knights , Sudoku Solver - BackTracking Questions : - 



// N - Queens : -

import java.util.*;

public class first119{
    static void solveNQueens(int n) {
        char[][] board = new char[n][n];
        for (char[] row : board) Arrays.fill(row, '.');
        List<List<String>> solutions = new ArrayList<>();
        backtrack(board, 0, solutions);
        printSolutions(solutions);
    }

    static void backtrack(char[][] board, int row, List<List<String>> solutions) {
        int n = board.length;
        if (row == n) {
            solutions.add(construct(board));
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isSafe(board, row, col)) {
                board[row][col] = 'Q';
                backtrack(board, row + 1, solutions);
                board[row][col] = '.'; // Backtrack
            }
        }
    }

    static boolean isSafe(char[][] board, int row, int col) {
        int n = board.length;
        // Check column
        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q') return false;
        // Check diagonal left
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return false;
        // Check diagonal right
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
            if (board[i][j] == 'Q') return false;
        return true;
    }

    static List<String> construct(char[][] board) {
        List<String> result = new ArrayList<>();
        for (char[] row : board) {
            result.add(new String(row));
        }
        return result;
    }

    static void printSolutions(List<List<String>> solutions) {
        for (List<String> solution : solutions) {
            for (String row : solution) {
                System.out.println(row);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 4; // Change N as needed
        solveNQueens(n);
    }
}
