#ifndef ROOM_H
#define ROOM_H

#include "MapSite.h"
#include "Direction.h"

class Room : public MapSite
{
    public:
        Room(int n = 0): _roomNumber(n){}
        virtual void enter();
        void setSide(Direction, MapSite*);
        MapSite* getSide(Direction) const;
    private:
        int _roomNumber;
        MapSite* _sides[4];
};

#endif // ROOM_H
