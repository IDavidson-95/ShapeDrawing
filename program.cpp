#include "splashkit.h"

// Procedures declared here.

// Draws a house - provided by assessment instructions.
void draw_house_scene() 
{
    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_BRIGHT_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);
    refresh_screen();
}

// Draws a barn, created by me.
void draw_barn_scene()
{
    clear_screen(COLOR_WHITE);
    fill_rectangle(COLOR_BLUE, 0, 0, 800, 600);
    fill_circle(COLOR_YELLOW, 400, 0, 100);
    fill_rectangle(COLOR_GREEN, 0, 400, 800, 200);
    fill_rectangle(COLOR_RED, 100, 300, 600, 100);
    fill_triangle(COLOR_BROWN, 50, 300, 400, 200, 750, 300);
    refresh_screen();
}

// Procedures called here. House, custom, house, custom.
int main()
{
    open_window("Shape Drawing", 800, 600);
    draw_house_scene();
    delay(5000);
    draw_barn_scene();
    delay(5000);
    draw_house_scene();
    delay(5000);
    draw_barn_scene();
    delay(5000);
    return 0;
}