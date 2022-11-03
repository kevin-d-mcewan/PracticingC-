#include "raylib.h"

int main(int argc, char const *argv[])
{
  /* code */
  int width = 1000;

  InitWindow(width, 750, "Kevin's Window");
  while (WindowShouldClose() == false)
  {
    BeginDrawing();
    ClearBackground(RED);
    DrawCircle(350, 350, 100, BLUE);
    EndDrawing();
  }
}
