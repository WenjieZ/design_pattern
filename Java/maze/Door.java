package maze;

public class Door extends MapSite {

	private Room _room1, _room2;
	private boolean _isOpen;
	
	public Door(){}
	public Door(Room r1, Room r2){
		_room1 = r1;
		_room2 = r2;
		_isOpen = false;
	}
	
	public Room getOtherSide(Room r){
		Room otherSide = null;
		if (r==_room1) otherSide = _room2;
		else if (r==_room2) otherSide = _room1;
		return otherSide;
	}
	
	public boolean isOpen(){
		return _isOpen;
	}
	@Override
	public void enter() {
		// TODO Auto-generated method stub

	}

}
