package maze;

public class MazeGame {
	
	/**
	 * the original design
	 */
	public static Maze createMaze(){
		Maze maze = new Maze(2);
		Room r1 = new Room(1);
		Room r2 = new Room(2);
		Door d12 = new Door(r1,r2);
		
		r1.setSide(Direction.North, new Wall());
		r1.setSide(Direction.West, new Wall());
		r1.setSide(Direction.South, new Wall());
		r1.setSide(Direction.East, d12);
		r2.setSide(Direction.North, new Wall());
		r2.setSide(Direction.West, d12);
		r2.setSide(Direction.South, new Wall());
		r2.setSide(Direction.East, new Wall());
		
		maze.addRoom(r1);
		maze.addRoom(r2);
		return maze;
	}
	
	/**
	 * Abstract Factory
	 */
	public static Maze createMazeWithKit(MazeFactory factory){
		Maze maze = factory.makeMaze(2);
		Room r1 = factory.makeRoom(1);
		Room r2 = factory.makeRoom(2);
		Door d12 = factory.makeDoor(r1,r2);
		
		r1.setSide(Direction.North, factory.makeWall());
		r1.setSide(Direction.West, factory.makeWall());
		r1.setSide(Direction.South, factory.makeWall());
		r1.setSide(Direction.East, d12);
		r2.setSide(Direction.North, factory.makeWall());
		r2.setSide(Direction.West, d12);
		r2.setSide(Direction.South, factory.makeWall());
		r2.setSide(Direction.East, factory.makeWall());
		
		maze.addRoom(r1);
		maze.addRoom(r2);
		return maze;		
	}

	/**
	 * Builder
	 */
	public static Maze createMazeWithBuilder(MazeBuilder builder){
		builder.buildMaze();
		builder.buildRoom(1);
		builder.buildRoom(2);
		builder.buildDoor(1, 2);
		return builder.getMaze();
	}
}
