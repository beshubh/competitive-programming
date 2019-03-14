#include<iostream>
using namespace std;
void mazeHelper(int maze[][20], int solution[][20],int x, int y,int n){
    if(x == n - 1 && y == n - 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
            {
                cout << solution[i][j] << " ";
            }
        }
        cout << endl;
    }
    if(solution[x][y] == 1 || maze[x][y] == 0 ||x < 0 || y < 0 || x >= n || y >= n){
        return;
    }
    solution[x][y] = 1;
    mazeHelper(maze, solution,x,y - 1, n);
    mazeHelper(maze, solution, x, y + 1, n);
    mazeHelper(maze, solution, x - 1,y, n);
    mazeHelper(maze, solution, x + 1, y, n);
    solution[x][y] = 0;

}
void ratInaMaze(int maze[][20],int n){
    int solution[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            solution[i][j] = 0;
        }
    }
    int x = 0;
    int y = 0;
    mazeHelper(maze, solution,x, y, n);
}

int main(){
    int n;
    cin >>n;
    int maze[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++)
       {
        cin >> maze[n][n];
       }
    }
    ratInaMaze(maze, n);
}