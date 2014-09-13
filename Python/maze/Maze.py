class Maze:
    def __init__(self):
        self.maze = []

    def addRoom(self, room):
        self.maze.append(room)

    def roomNo(self, n):
        try:
            return self.maze[n]
        except IndexError:
            print("This room doesn't exist.")
            raise
        
