package maze;

public class StandardMazeBuilder extends MazeBuilder {
	private Maze _maze;
	private Direction commonWall(Room r1, Room r2){
		return null;
	}
	
	public StandardMazeBuilder(){
		_maze = null;
	}
	public void buildMaze(){
		_maze = new Maze();
	}
	public void buildRoom(int n){
		Room room = new Room(n);
		room.setSide(Direction.North, new Wall());
		room.setSide(Direction.West, new Wall());
		room.setSide(Direction.South, new Wall());
		room.setSide(Direction.East, new Wall());
	}
	public void buildDoor(int n1, int n2){
		Room r1 = _maze.roomNum(n1);
		Room r2 = _maze.roomNum(n2);
		Door d = new Door(r1,r2);
		r1.setSide(commonWall(r1,r2), d);
		r2.setSide(commonWall(r2,r1), d);
	}
	public Maze getMaze(){
		return _maze;
	}
}
