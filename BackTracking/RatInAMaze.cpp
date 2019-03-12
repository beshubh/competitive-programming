#include<bits/stdc++.h>
using namespace std;
void mazeHelp(int maze[][20], int n, int solution[][20], int x, int y){
    if( x == n - 1 && y == n - 1){
        solution[x][y] = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
               cout << solution[i][j] << " ";
            }
            
        }
        cout << endl;
        return;
    }
    if(x >= n || y >= n || x < 0 || y < 0 || maze[x][y] == 0 || solution[x][y] == 1)
    {
        return;
    }


    solution[x][y] = 1;
    mazeHelp(maze, n, solution, x - 1, y);
    mazeHelp(maze, n, solution, x + 1, y);
    mazeHelp(maze, n, solution, x , y - 1);
    mazeHelp(maze, n, solution, x, y + 1);
    solution[x][y] = 0;
}
void ratInMaze(int maze[][20], int n)
{
    int solution[n][20];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            solution[i][j] = 0;
        }
    }
    mazeHelp(maze, n,solution,0,0);   
}
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i , n; i++){
        for(int j = 0; i < n; j++){
            cin >> arr[i][j];
        }
    }
    return 0;
}