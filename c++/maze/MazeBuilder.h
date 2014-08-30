#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H

#include "Maze.h"

class MazeBuilder
{
    public:
        virtual void buildMaze(MazeFactory&){}
        virtual void buildRoom(int, MazeFactory&){}
        virtual void buildDoor(int,int, MazeFactory&){}
        virtual Maze* getMaze(){return NULL;}
    protected:
        MazeBuilder();
};

#endif // MAZEBUILDER_H
