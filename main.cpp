#include "raylib.h"
#include <iostream>
#include <cstdlib>
#include<time.h>

#include <string>

using namespace std;

const int screenWidth = 800;
const int screenHeight = 600;

class Cell{
public:
 int i, j;
char value;

Cell() : i(0), j(0), value(' ') {}
  Cell(int row, int col, char val) : i(row), j(col), value(val) {}  
};

class TicTacToe{
private:
 Cell grid[3][3];
 int currentPlayer;
   bool gameOver;
char winner;

public:
    TicTacToe() { GameInit(); }

    void DrawBoard() {
        for (int i = 1; i < 3; i++) {
            DrawLine(100, 100 + i * 100, 400, 100 + i * 100, WHITE);
            DrawLine(100 + i * 100, 100, 100 + i * 100, 400, WHITE);
        }
    }

    void DrawPiece(int x, int y, char piece) {
        if (piece == 'X') {
            DrawLine(100 + x * 100 + 20, 100 + y * 100 + 20, 100 + x * 100 + 80, 100 + y * 100 + 80, RED);
            DrawLine(100 + x * 100 + 80, 100 + y * 100 + 20, 100 + x * 100 + 20, 100 + y * 100 + 80, RED);
        } else if (piece == 'O') {
            DrawCircle(100 + x * 100 + 50, 100 + y * 100 + 50, 35, BLUE);
        }
    }

    void UpdateDrawFrame() {
        if (IsKeyPressed(KEY_ESCAPE)) CloseWindow();

        BeginDrawing();
        ClearBackground(DARKGRAY);

        DrawText("Welcome to 2 Players Tic Tac Toe Game", 30, 20, 30, YELLOW);

        DrawBoard();

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                DrawPiece(i, j, grid[i][j].value);
            }
        }
        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && !gameOver) {
            Vector2 mousePos = GetMousePosition();
            int x = (mousePos.x - 100) / 100; 
            int y = (mousePos.y - 100) / 100;  

            if (x >= 0 && x < 3 && y >= 0 && y < 3 && grid[x][y].value == ' ') {
               
                grid[x][y].value = (currentPlayer == 1) ? 'X' : 'O';
                
                if (GameIsOver(&winner)) {
                    gameOver = true;
                } else if (IsBoardFull()) {
                    
                    gameOver = true;
                    winner = 'D'; 
                } else {
                    currentPlayer = 3 - currentPlayer; 
                }
            }
        }

        if (gameOver) {
            if (winner == 'D') {
                DrawText("Match Drawn! Press R to Restart\nPress E to Exit", 150, 450, 30, GOLD);
            } else {
                DrawText(TextFormat("Player %c Wins! Press R to Restart\nPress E to Exit", winner), 150, 450, 30, GOLD);
            }
        } else {
            DrawText(TextFormat("Player %c's Turn", (currentPlayer == 1) ? 'X' : 'O'), 150, 450, 30, RAYWHITE);
        }

       
        if (IsKeyPressed(KEY_E)) {
           EndDrawing();
           CloseWindow(); 
        }
        EndDrawing();
    }

    bool GameIsOver(char* winner) {
        
        for (int i = 0; i < 3; ++i) {
            if (grid[i][0].value != ' ' && grid[i][0].value == grid[i][1].value && grid[i][0].value == grid[i][2].value) {
                *winner = grid[i][0].value;
                return true;
            }
            if (grid[0][i].value != ' ' && grid[0][i].value == grid[1][i].value && grid[0][i].value == grid[2][i].value) {
                *winner = grid[0][i].value;
                return true;
            }
        }

       
        if (grid[0][0].value != ' ' && grid[0][0].value == grid[1][1].value && grid[1][1].value == grid[2][2].value) {
            *winner = grid[0][0].value;
            return true;
        }
        if (grid[0][2].value != ' ' && grid[0][2].value == grid[1][1].value && grid[1][1].value == grid[2][0].value) {
            *winner = grid[0][2].value;
            return true;
        }

        return false;
    }

    bool IsBoardFull() {
        
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (grid[i][j].value == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    void GameInit() {
     for (int i = 0; i < 3; ++i) {
     for (int j = 0; j < 3; ++j) {
        grid[i][j] = Cell(i, j, ' ');
       }
   }
  currentPlayer = 1; 
   gameOver = false;
 winner= ' ';
    }
};

int main() {
    InitWindow(screenWidth, screenHeight, "Tic Tac Toe Game");
    SetTargetFPS(60);

    TicTacToe game;

    while (!WindowShouldClose()) {
     game.UpdateDrawFrame();
     if (IsKeyPressed(KEY_R)) game.GameInit();
   }

   CloseWindow();
return 0;
}
