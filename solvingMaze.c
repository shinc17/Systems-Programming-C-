#include <stdio.h>
//Set max size of maze
#define SIZE 6

//Make maze
char maze[SIZE][SIZE] = {
   {'.','#','#','#','#','#'},
   {'.','.','.','.','.','#'},
   {'#','.','#','#','#','#'},
   {'#','.','#','#','#','#'},
   {'.','.','.','#','.','G'},
   {'#','#','.','.','.','#'}
};
//Make another array to save answer
char answer[SIZE][SIZE];

//Print answer
void printsolution() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%c\t", answer[i][j]);
        }
        printf("\n\n");
    }
}
//Solve the maze
int mazeGo(int x, int y) {
    //If Goal is arrived, maze is solved
    if ((x == SIZE - 2) && (y == SIZE - 1)) {
        answer[x][y] = 'G';
            return 1;
    }

    //Recursive and repeat until it arrive
    if (x >= 0 && y >= 0 && x < SIZE && y < SIZE && answer[x][y] == '#' && maze[x][y] == '.') {
        //Put + where it passed
        answer[x][y] = '+';

        //South
        if (mazeGo(x + 1, y))
                return 1;
        //East
        if (mazeGo(x, y + 1))
            return 1;
        //North
        if (mazeGo(x - 1, y))
            return 1;
        //West
        if (mazeGo(x, y - 1))
            return 1;

        answer[x][y] = '+';
        return 0;
    }
    return 0;
}
int main() {
    //Fill answer array with #
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            answer[i][j] = '#';
        }
    }

    if (mazeGo(0, 0)) {
        answer[0][0] = 'S';
        printsolution();
    }
    //Print no answer if there are no answer
    else
        printf("No answer\n");

    return 0;
}
