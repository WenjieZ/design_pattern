package maze;

public class Room extends MapSite {
	
	private int _roomNum;
	private MapSite[] _side;
	
	public Room(){}
	public Room(int no) {
		_roomNum = no;
		_side = new MapSite[4];
	}
	
	public int getRoomNumber(){
		return _roomNum;
	}
	
	public MapSite getSide(Direction dir){
		return _side[toIndex(dir)];
	}
	
	public void setSide(Direction dir, MapSite site){
		_side[toIndex(dir)] = site;
	}
	
	@Override
	public void enter() {
		// TODO Auto-generated method stub

	}
	
	private int toIndex(Direction dir){
		int index = 0;
		switch (dir){
		case North: 
			index = 0;
			break;
		case West:
			index = 1;
			break;
		case South:
			index = 2;
			break;
		case East:
			index = 3;
			break;
		}
		return index;
	}
}
