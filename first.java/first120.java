
// N-Knights BackTracking Question : -

import java.util.*;

public class first120 {
    static void solveNKnights(int n) {
        char[][] board = new char[n][n];
        for (char[] row : board) Arrays.fill(row, '.');
        backtrack(board, 0, 0, n, 0);
    }

    static boolean backtrack(char[][] board, int row, int col, int n, int placedKnights) {
        if (placedKnights == n) {
            printBoard(board);
            return true;
        }
        if (row >= n) return false;

        int nextRow = (col == n - 1) ? row + 1 : row;
        int nextCol = (col == n - 1) ? 0 : col + 1;

        if (isSafe(board, row, col, n)) {
            board[row][col] = 'K';
            backtrack(board, nextRow, nextCol, n, placedKnights + 1);
            board[row][col] = '.'; // Backtrack
        }
        backtrack(board, nextRow, nextCol, n, placedKnights);
        return false;
    }

    static boolean isSafe(char[][] board, int row, int col, int n) {
        int[][] moves = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}};
        for (int[] move : moves) {
            int newRow = row + move[0], newCol = col + move[1];
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && board[newRow][newCol] == 'K') {
                return false;
            }
        }
        return true;
    }

    static void printBoard(char[][] board) {
        for (char[] row : board) {
            System.out.println(new String(row));
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int n = 4; // Change N as needed
        solveNKnights(n);
    }
}
