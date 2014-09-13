from MapSite import EnchantedRoom, Wall, DoorNeedingSpell
from Maze import Maze
from MazeFactory import makeMaze, makeWall
from Spell import Spell

def makeRoom(n):
    def castSpell():
        return Spell()
    return EnchantedRoom(n, castSpell())

def makeDoor(r1, r2):
    return DoorNeedingSpell(r1, r2)
