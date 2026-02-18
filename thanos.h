#ifndef thanos_h
#define thanos_h

class thanos {
private:
	int stones;
	int hp; 
public:
	thanos(int stn = 0, int hh = 100){hp = hh; stones = stn;};
	void snap_finger(monster[]); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(){stones++; cout <<"You got a stone! Stone Count = " << stones << endl;} // increase the stone;
	void operator++(int){stones++; cout <<"You got a stone! Stone Count = " << stones << endl;}
};



void thanos::snap_finger(monster mons[]){
	cout << "The field is riddled with monsters... :" << endl << endl;
	for (int i = 0; i < mon_count ; i++){
		mons[i].show_hp();
	}
	if (stones >= 6){
		cout << "Thanos' eyes gaze upon the field of monsters, raising his gauntlet, adorned with all six stones," << endl << endl << "\"Domain Expansion: Universal Balance.\"" << endl << endl;
		for (int i = 0; i < mon_count ; i++){mons[i].thanos();}
		enter();
		for (int i = 0; i < mon_count ; i++){mons[i].show_hp();}
	}
	
	else {cout << "\"I do not possess enough stones...\"" << endl<< endl;}
}










#endif