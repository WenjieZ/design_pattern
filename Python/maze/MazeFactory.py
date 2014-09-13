from MapSite import Room, Wall, Door
from Maze import Maze

def makeMaze():
    return Maze()

def makeRoom(n):
    return Room(n)

def makeWall():
    return Wall()

def makeDoor(r1,r2):
    return Door(r1,r2)
