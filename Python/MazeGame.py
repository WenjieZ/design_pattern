from MapSite import *
from Maze import Maze
from EnchantedMazeFactory import *

class MazeGame:
    def createMaze():
        "Original Design"
        maze = Maze()
        r1 = Room(1)
        r2 = Room(2)
        door = Door(r1, r2)

        r1.setSide('North', Wall())
        r1.setSide('West', Wall())
        r1.setSide('South', Wall())
        r1.setSide('East', door)

        r2.setSide('North', Wall())
        r2.setSide('West', door)
        r2.setSide('South', Wall())
        r2.setSide('East', Wall())

        maze.addRoom(r1)
        maze.addRoom(r2)
        
        return maze
    createMaze = staticmethod(createMaze)

    def createMazeWithFactoryMethod():
        "Factory Method"
        maze = makeMaze()
        r1 = makeRoom(1)
        r2 = makeRoom(2)
        door = makeDoor(r1,r2)

        r1.setSide('North', makeWall())
        r1.setSide('West', makeWall())
        r1.setSide('South', makeWall())
        r1.setSide('East', door)

        r2.setSide('North', makeWall())
        r2.setSide('West', door)
        r2.setSide('South', makeWall())
        r2.setSide('East', makeWall())

        maze.addRoom(r1)
        maze.addRoom(r2)
        return maze
    createMazeWithFactoryMethod = staticmethod(createMazeWithFactoryMethod)
