#pragma once

enum Direction
{
	North,
	South,
	West,
	East
};

class MapSite
{
public:
	virtual void Enter() = 0;
};

class Room : public MapSite;
class Wall : public MapSite;
class Door : public MapSite;