package maze;

public class EnchantedRoom extends Room {
	private Spell _spell;
	
	public EnchantedRoom(){
		this(0,null);
	}
	public EnchantedRoom(int n, Spell sp){
		super(n);
		_spell = sp;
	}
}
