
// Import input/output library
#include <iostream>
// Import time library for random numbers
#include <ctime>
// Import standard library for random numbers
#include <cstdlib>
// Import console input library
#include <conio.h>
// Import Windows-specific library
#include <windows.h>
// Use standard namespace
using namespace std;


//Constants


// Set game width (20 units)
const int WIDTH = 20;
// Set game height (20 units)
const int HEIGHT = 20;


//Game Variables


// Snake's x-coordinate
int x;
// Snake's y-coordinate
int y;
// Fruit's x-coordinate
int fruitX;
// Fruit's y-coordinate
int fruitY;
// Player's score
int score;
// Snake's tail x-coordinates
int tailX[100];
// Snake's tail y-coordinates
int tailY[100];
// Snake's tail length
int nTail;
// Enumerate directions
enum eDirection { 
  // Initial direction (stopped)
  STOP = 0, 
  // Left direction
  LEFT, 
  // Right direction
  RIGHT, 
  // Up direction
  UP, 
  // Down direction
  DOWN 
};
// Snake's direction
eDirection dir;


//Setup Function


// Initialize game
void Setup() {
  // Seed random number generator
  srand(time(0));
  // Initialize snake's position
  x = WIDTH / 2;
  y = HEIGHT / 2;
  // Randomize fruit position
  fruitX = rand() % WIDTH;
  fruitY = rand() % HEIGHT;
  // Reset score
  score = 0;
  // Reset tail length
  nTail = 0;
  // Reset direction
  dir = STOP;
}


//Draw Function


// Draw game board
void Draw() {
  // Clear console
  system("cls");
  
  // Draw top border
  for (int i = 0; i < WIDTH + 2; i++) 
    cout << "#";
  cout << endl;
  
  // Draw game area
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      // Draw snake head
      if (i == y && j == x) 
        cout << "O";
      // Draw fruit
      else if (i == fruitY && j == fruitX) 
        cout << "F";
      // Draw snake tail
      else {
        bool print = false;
        for (int k = 0; k < nTail; k++) {
          if (tailX[k] == j && tailY[k] == i) {
            cout << "o";
            print = true;
          }
        }
        // Draw empty space
        if (!print) 
          cout << " ";
      }
    }
    cout << endl;
  }
  
  // Draw bottom border
  for (int i = 0; i < WIDTH + 2; i++) 
    cout << "#";
  cout << endl;
  
  // Display score
  cout << "Score: " << score << endl;
}


//Input Function


// Handle user input
void Input() {
  // Check keyboard input
  if (_kbhit()) {
    switch (_getch()) {
      // Move left
      case 'a': 
        dir = LEFT;
        break;
      // Move right
      case 'd': 
        dir = RIGHT;
        break;
      // Move up
      case 'w': 
        dir = UP;
        break;
      // Move down
      case 's': 
        dir = DOWN;
        break;
    }
  }
}


//Logic Function


// Update game logic
void Logic() {
  // Store previous tail coordinates
  int prevX = tailX[0];
  int prevY = tailY[0];
  int prev2X, prev2Y;
  
  // Update tail coordinates
  tailX[0] = x;
  tailY[0] = y;
  
  // Shift tail
  for (int i = 1; i < nTail; i++) {
    prev2X = tailX[i];
    prev2Y = tailY[i];
    tailX[i] = prevX;
    tailY[i] = prevY;
    prevX = prev2X;
    prevY = prev2Y;
  }
  
  // Update snake position
  switch (dir) {
    case LEFT: 
      x--;
      break;
    case RIGHT: 
      x++;
      break;
    case UP: 
      y--;
      break;
    case DOWN:        
	y++;
        break;
    }
    if (x >= WIDTH) x = 0;
    else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0;
    else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            Setup();

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {
    Setup();
    while (true) {
        Draw();
        Input();
        Logic();
        Sleep(10);
    }
    return 0;
}


