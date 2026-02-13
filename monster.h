#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion, dmg;
public:
	void Attack(monster &opp);
    void heal();
	void damage(monster &opp);
	void operator-(int Oww);
	void heal_by(int Yay);
	void display();
	void battle_display();
	bool dead_check();

// CONSTRUCTOR
monster(string n = "Default Monster", int hh = 6, int pp = 6, int atk = 6)
{
	name = n; hp = hh; potion = pp; dmg = atk;
	cout << " Monster Name: " << name << endl << " HP:" << hp << " Potion Val:" << potion << " Dmg Ceiling:" << dmg << endl;
};
// DESTRUCTOR empy
~monster()
{
	cout << "DELETED Monster Name: " << name << endl << " HP:" << hp << " Potion Val:" << potion << " Dmg Ceiling:" << dmg << endl << endl;
};
};

void monster::heal(){
hp += roll(1,potion);
}

void monster::damage(monster &opp){
hp-= roll(1,opp.dmg);
}

void monster::Attack(monster &opp){
	cout << "Before Attack:" << opp.hp << endl;
	opp.hp-= roll(1,dmg);
	cout << "After Attack:" << opp.hp << endl;
}

void monster::display(){

	cout << "Displaying: " << name << endl << "HP: " << hp << endl << "Potion Val: " << potion << endl << "Damage Clg: " << dmg << endl << endl;
}

void monster::battle_display()
{
	
	cout << "Battling: Monster " << name <<" !!" << endl << "HP: " << hp << endl << "Potion Val: " << potion << endl << "Damage Clg: " << dmg << endl << endl;
}

bool monster::dead_check()
{
	if (hp <= 0) return true;
	else return false;
}

void monster::operator-(int ow)
{
	hp-= ow;
}


#endif
