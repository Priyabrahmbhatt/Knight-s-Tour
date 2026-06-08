public class Main {

    static final int SIZE = 8;

    static int[][] board = new int[SIZE][SIZE];

    static int[] rowMove = {2, 1, -1, -2, -2, -1, 1, 2};
    static int[] colMove = {1, 2, 2, 1, -1, -2, -2, -1};

    static boolean isSafe(int row, int col) {
        return row >= 0 &&
               row < SIZE &&
               col >= 0 &&
               col < SIZE &&
               board[row][col] == 0;
    }

    static boolean knightTour(int row, int col, int moveCount) {

        if (moveCount == 65)
            return true;

        for (int i = 0; i < 8; i++) {

            int nextRow = row + rowMove[i];
            int nextCol = col + colMove[i];

            if (isSafe(nextRow, nextCol)) {

                board[nextRow][nextCol] = moveCount;

                if (knightTour(nextRow, nextCol, moveCount + 1))
                    return true;

                board[nextRow][nextCol] = 0;
            }
        }

        return false;
    }

    static void printBoard() {

        for (int i = 0; i < SIZE; i++) {

            for (int j = 0; j < SIZE; j++) {
                System.out.print(board[i][j] + "\t");
            }

            System.out.println();
        }
    }

    public static void main(String[] args) {

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                board[i][j] = 0;
            }
        }

        board[0][0] = 1;

        if (knightTour(0, 0, 2)) {

            System.out.println("Knight's Tour Solution:");
            printBoard();

        } else {

            System.out.println("No solution exists.");
        }
    }
}
