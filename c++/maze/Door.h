#ifndef DOOR_H
#define DOOR_H

#include <MapSite.h>


class Door : public MapSite
{
    public:
        Door(Room* r1 = NULL, Room* r2 = NULL): _room1(r1), _room2(r2) {}
        virtual void enter();
        Room* getOtherSide(Room*);
    private:
        Room* _room1;
        Room* _room2;
        bool isOpen;
};

#endif // DOOR_H
