package maze;

public class MazeFactory {
	public MazeFactory(){}
	public Maze makeMaze(int n){
		return new Maze(n);
	}
	public Room makeRoom(int n){
		return new Room(n);
	}
	public Wall makeWall(){
		return new Wall();
	}
	public Door makeDoor(Room r1, Room r2){
		return new Door(r1,r2);
	}	
}
