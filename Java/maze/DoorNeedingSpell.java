package maze;

public class DoorNeedingSpell extends Door {
	public DoorNeedingSpell(){
		this(null,null);
	}
	public DoorNeedingSpell(Room r1, Room r2){
		super(r1,r2);
	}
}
