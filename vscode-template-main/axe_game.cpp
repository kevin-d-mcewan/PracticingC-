#include "raylib.h"

int main(int argc, char const *argv[])
{
  // Colors
  Color windowBG_Color = RED;
  Color gameBG_Color = GREEN;
  Color primary_Color = DARKGRAY;
  Color secondary_Color = VIOLET;

  /* Window Dimensions */
  int window_width = 1000;
  int window_height{750};

  // Circle Coordinates/Dimensions
  int circle_x{400};
  int circle_y{400};
  int circle_radius{100};
  // Circle Edges
  // int l_circle_x{circle_x - circle_radius};
  // int r_circle_x{circle_x + circle_radius};
  // int u_circle_y{circle_y - circle_radius};
  // int b_circle_y{circle_y + circle_radius};

  // Axe Coordinates/Dimensions
  int axe_length{75};
  int axe_x{400};
  int axe_y{0};
  // Axe Edges
  // int l_axe_x{axe_x};
  // int r_axe_x{axe_x + axe_length};
  // int u_axe_y{axe_y};
  // int b_axe_y{axe_y + axe_length};

  bool collision_with_axe{false};

  int direction{10};

  InitWindow(window_width, window_height, "Kevin's Window");
  SetTargetFPS(60);
  while (WindowShouldClose() == false)
  {
    BeginDrawing();
    ClearBackground(windowBG_Color);

      if (collision_with_axe)
      {
        DrawText("Game Over!", 400, 375, 28, gameBG_Color);
      }
      else
      {
          // Game Logic Begins
          DrawCircle(circle_x, circle_y, circle_radius, secondary_Color);
          DrawRectangle(axe_x, axe_y, axe_length, axe_length, primary_Color);

          // The axe moves up and down and reverses once it hits top or bottom of window.
          axe_y += direction;
          if (axe_y > window_height || axe_y < 0)
          {
            direction = -direction;
          }
      
      

          if (IsKeyDown(KEY_D) && circle_x < window_width)
          {
              /* Moving the Circle*/
              circle_x += 10;
          }

          if (IsKeyDown(KEY_A) && circle_x > 0)
          {
              /* Moving Circle Left*/
              circle_x -= 10;
          }
      
      


            // Game Logic Ends
      }
      

    EndDrawing();
  }
}
