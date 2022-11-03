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

  // Axe Coordinates/Dimensions
  int axe_x{400};
  int axe_y{400};

  int direction{10};

  InitWindow(width, height, "Kevin's Window");
  SetTargetFPS(60);
  while (WindowShouldClose() == false)
  {
    BeginDrawing();
    ClearBackground(windowBG_Color);

    // Game Logic Begins
    DrawCircle(circle_x, circle_y, circle_radius, secondary_Color);
    DrawRectangle(axe_x, axe_y, 50, 50, primary_Color);

    // The axe moves up and down and reverses once it hits top or bottom of window.
    axe_y += direction;
    if (axe_y > 700 || axe_y < 0)
    {
      direction = -direction;
    }
    
    

    if (IsKeyDown(KEY_D) && circle_x < 1000)
    {
      /* Moving the Circle*/
      circle_x += direction;
    }

    if (IsKeyDown(KEY_A) && circle_x > 0)
    {
      /* Moving Circle Left*/
      circle_x -= direction;
    }
    
    


    // Game Logic Ends
    EndDrawing();
  }
}
