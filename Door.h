#pragma once

#include "MapSite.h"

class Door : public MapSite
{
public:
	Door(Room* = 0, Room* = 0);
	virtual void Enter();
	Room* OtherSiderFrom(Room*);
private:
	Room* _room1;
	Room* _room2;
	bool _isOpen();
};