#pragma once

#include "MapSite.h" 

class Room : public MapSite
{
public:
	Room(int roomNo);
	MapSite* GetSide(Direction);
	void SetSide(Direction);
	virtual void Enter();
private:
	MapSite* _sides[4];
	int _roomNumber;
};