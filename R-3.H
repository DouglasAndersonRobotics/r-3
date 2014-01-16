// Created on vr juli 26 2013

// Replace FILE with your file's name
#ifndef _r^3_H_
#define _r^3_H_

//(definitions)
#define WALL 1
#define FLOOR 0
#define BOTGUY 8
#define MAP_HEIGHT 10
#define MAP_WIDTH 10
//(\definitions)

//(map)
int map_array[MAP_HEIGHT][MAP_WIDTH] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,8,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};
//(\map)

int bot_pos_x = 5;
int bot_pos_y = 2;
char bot_face = n;

/* void straight() {
{
				mav(0,100),(2,100)
				msleep(1000);
				if(bot_face == n)
				{
					bot_pos_y += 1;
				}
				if(bot_face == s)
				{
					bot_pos_y -= 1;
				}
				if(bot_face == w)
				{
					bot_pos_x -= 1;
				}
				if(bot_face == e)
				{
					bot_pos_x += 1;
				}
				printf("The bot's position is " + str(bot_pos_x) + "," + str(bot_pos_y) + "  facing " + str(bot_face) + ".");	
}
*/
   
