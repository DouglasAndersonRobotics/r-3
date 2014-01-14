// Created on vr juli 26 2013

// Replace FILE with your file's name
#ifndef _r^3_H_
#define _r^3_H_

//(definitions)
#define WALL 0
#define FLOOR 1
#define MAP_HEIGHT 10
#define MAP_WIDTH 10
//(\definitions)

int map_array[MAP_HEIGHT][MAP_WIDTH] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int bot_pos_x = 5;
int bot_pos_y = 2;
char bot_face = n;

void straight() {
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
   
