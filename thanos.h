#ifndef thanos_h
#define thanos_h

class Thanos {
private:
	int stones;
	int hp; 
public:
	Thanos(int stn = 0, int hp = 100);
	void snap_finger(monster[]); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};
#endif
