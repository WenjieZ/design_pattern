#ifndef STANDARDMAZEBUILDER_H
#define STANDARDMAZEBUILDER_H

#include "MazeBuilder.h"
#include "MazeFactory.h"
#include "Maze.h"
#include "Room.h"

class StandardMazeBuilder : public MazeBuilder
{
    public:
        StandardMazeBuilder()
        {
            _maze = NULL;
        }
        virtual void buildMaze(MazeFactory& factory = MazeFactory())
        {
            _maze = factory.makeMaze();
        }
        virtual void buildRoom(int n, MazeFactory& factory = MazeFactory())
        {
            Room* room = factory.makeRoom(n);
            room->setSide(North, factory.makeWall());
            room->setSide(West, factory.makeWall());
            room->setSide(South, factory.makeWall());
            room->setSide(East, factory.makeWall());
            _maze->addRoom(room);
        }
        virtual void buildDoor(int n1, int n2, MazeFactory& factory = MazeFactory())
        {
            Room* r1 = _maze->roomNo(n1);
            Room* r2 = _maze->roomNo(n2);
            Door* door = factory.makeDoor(r1, r2);
            r1->setSide(commonWall(r1,r2), door);
            r2->setSide(commonWall(r2,r1), door);
        }
        virtual Maze* getMaze()
        {
            return _maze;
        }
    protected:
    private:
        Maze* _maze;
        Direction commonWall(Room* r1, Room* r2);
};

#endif // STANDARDMAZEBUILDER_H
