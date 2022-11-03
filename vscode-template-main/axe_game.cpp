#include "raylib.h"

int main(int argc, char const *argv[])
{
  // Colors
  Color windowBG_Color = RED;
  Color gameBG_Color = GREEN;
  Color primary_Color = DARKGRAY;
  Color secondary_Color = VIOLET;

  /* Window Dimensions */
  int width = 1000;
  int height{750};

  // Circle Coordinates/Dimensions
  int circle_x{width/2};
  int circle_y{height/2};
  int circle_radius{width / 3};

  InitWindow(width, height, "Kevin's Window");
  SetTargetFPS(60);
  while (WindowShouldClose() == false)
  {
    BeginDrawing();
    ClearBackground(windowBG_Color);

    // Game Logic Begins
    DrawCircle(circle_x, circle_y, circle_radius, secondary_Color);

    if (IsKeyDown(KEY_D))
    {
      /* Moving the Circle*/
      circle_x = circle_x + 10;
    }

    if (IsKeyDown(KEY_A))
    {
      /* Moving Circle Left*/
      circle_x = circle_x - 10;
    }
    
    


    // Game Logic Ends
    EndDrawing();
  }
}
