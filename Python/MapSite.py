class MapSite:
    def __init__(self):
        raise Exception("Abstract, should not be instantiated.")
    
    def enter(self):
        pass

class Room(MapSite):
    def __init__(self, n):
        self.roomNum = n
        self.sides = {'North':None, 'West':None, 'South':None, 'East':None}
        
    def setSide(self, direction, mapSite):
        if direction not in ("North","West","South","East"):
            raise Exception("Argument should be among 'North', 'West', 'South', 'East'")
        self.sides[direction] = mapSite
        
    def getSide(self, direction):
        try:
            return self.sides[direction]
        except KeyError:
            print("Argument should be among 'North', 'West', 'South', 'East'")
            raise

class Wall(MapSite):
    def __init__(self):
        pass

class Door(MapSite):
    def __init__(self, r1, r2):
        self.room1 = r1
        self.room2 = r2
        self.isOpen = False

    def otherSideFrom(self, room):
        if room == self.room1:
            return self.room2
        elif room == self.room2:
            return self.room1
        else:
            raise Exception("This door doesn't connect this room.")

class EnchantedRoom(Room):
    def __init__(self, n, sp):
        super().__init__(n)
        self.spell = sp

class DoorNeedingSpell(Door):
    pass
