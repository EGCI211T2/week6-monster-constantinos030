#ifndef monster_h
#define monster_h

#include "cj_util_lib.h"

class monster{
private:
	string name;
	int hp,potion, dmg, maxhp;
public:
	void Attack(monster &opp);
    void heal();
	void damage(monster &opp);
	void operator-(int Oww);
	void heal_by(int Yay);
	void display();
	void battle_display();
	bool dead_check();
	bool decision();

// CONSTRUCTOR
monster(string n = "Monster", int hh = 6, int pp = 6, int atk = 6)
{
	name = n; hp = hh; potion = pp; dmg = atk; maxhp = hh;
};
// DESTRUCTOR empy
~monster()
{
	cout << "DELETED Monster Name: " << name << endl;
};
};

void monster::heal(){
	int healed = roll(1,potion);
	hp += healed;
	if (hp>maxhp) hp = maxhp;
	cout << name << " healed " << healed << " HP !!" << endl;

}

void monster::damage(monster &opp){
hp-= roll(1,opp.dmg);
}

void monster::Attack(monster &opp){
	int damage = roll(1, dmg);
	opp.hp -= damage;
	if (opp.hp<0) opp.hp=0;
	cout << endl << name << " dealt " << damage << " damage to " << opp.name << endl;
	cout << endl << opp.name << " HP: " << opp.hp << "/" << opp.maxhp << endl;
} 

void monster::display(){

	cout << endl << name << endl << "HP: " << hp << "/" << maxhp << endl << "Potion: " << potion << endl << "Damage: " << dmg << endl << endl;
}

void monster::battle_display()
{
	
	cout << endl << "Battling: " << name <<" !!" << endl << "HP: " << maxhp << endl << "Potion: " << potion << endl << "Damage Clg: " << dmg << endl << endl;
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

bool monster::decision(){
	if (hp<maxhp/2) return 1; 
	else return 0;
}

#endif
