#ifndef MAZEGAME_H
#define MAZEGAME_H

#include "Maze.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"
#include "MazeFactory.h"
#include "MazeBuilder.h"

class MazeGame
{
    public:
        static void run()
        {
            StandardMazeBuilder builder;
            EnchantedMazeFactory factory;
            Maze* maze = createMazeWithBuilderAndKit(builder, factory);
        }
        static Maze* createMaze() /** the original design */
        {
            Maze* maze = new Maze;
            Room* room1 = new Room(1);
            Room* room2 = new Room(2);
            Door* door12 = new Door(room1,room2);

            room1->setSide(North, new Wall);
            room1->setSide(West, new Wall);
            room1->setSide(South, new Wall);
            room1->setSide(East, door12);
            room2->setSide(North, new Wall);
            room2->setSide(West, door12);
            room2->setSide(South, new Wall);
            room2->setSide(East, new Wall);

            maze->addRoom(room1);
            maze->addRoom(room2);
            return maze;
        }

        static Maze* createMazeWithKit(MazeFactory& factory) /** Abstract Factory */
        {
            Maze* maze = factory.makeMaze();
            Room* room1 = factory.makeRoom(1);
            Room* room2 = factory.makeRoom(2);
            Door* door12 = factory.makeDoor(room1,room2);

            room1->setSide(North, factory.makeWall());
            room1->setSide(West, factory.makeWall());
            room1->setSide(South, factory.makeWall());
            room1->setSide(East, door12);
            room2->setSide(North, factory.makeWall());
            room2->setSide(West, door12);
            room2->setSide(South, factory.makeWall());
            room2->setSide(East, factory.makeWall());

            maze->addRoom(room1);
            maze->addRoom(room2);
            return maze;
        }

        static Maze* createMazeWithBuilderAndKit(MazeBuilder& builder, MazeFactory& factory) /** Builder & Abstract Factory */
        {
            builder.buildMaze(factory);
            builder.buildRoom(1,factory);
            builder.buildRoom(2,factory);
            builder.buildDoor(1,2,factory);
            return builder.getMaze();
        }
};

#endif // MAZEGAME_H
