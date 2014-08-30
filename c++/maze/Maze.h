#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include "Room.h"

class Maze
{
    public:
        Maze();
        void addRoom(Room*);
        Room* roomNo(int) const;
    private:
        std::vector<Room*> _room;
};

#endif // MAZE_H
