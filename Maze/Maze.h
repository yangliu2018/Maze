#pragma once

#include "MapSite.h"

class Maze
{
public:
	Maze();
	void AddRoom(Room*);
	Room* RoomNo(int) const;
};