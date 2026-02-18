#include <iostream>
using namespace std;

#define mon_count 6

#include "monster.h"
#include "thanos.h"




int main(int argc, char* argv[]) {
  monster player(argv[1], atoi(argv[2]),atoi(argv[3]), atoi(argv[4]));
  monster *rand_bat=new monster[mon_count];
  thanos Thanos(0, 100);

  // Creates temporary monsters copied into to monster array.
  for (int i=0; i<mon_count; i++){ 
    rand_bat[i] = monster("Monster " + to_string(i+1), roll(1,4), roll(1,4), roll(1,4)); }

  for(int i=0; i<mon_count; i++){
         
        rand_bat[i].battle_display();

        while (!rand_bat[i].dead_check()){
        if (rand_bat[i].dead_check()) break;
        cout << endl << "Attack? (Press Enter to Attack)";
        enter();
        player.Attack(rand_bat[i]);
        enter();
        cout << endl;
        if (rand_bat[i].dead_check()) break;
        if (rand_bat[i].decision()) rand_bat[i].heal(); else rand_bat[i].Attack(player);
        }
        cout <<"You Defeated the Enemy and got an infinity stone!"<< endl;
        Thanos++;
        player.display();
        cout << endl << "(Press Enter to Continue)" << endl;
      
      player.heal();
  }

  monster *thanosed=new monster[mon_count];
  for (int i=0; i<mon_count; i++){ thanosed[i] = monster("Strong Monster " + to_string(i+1), roll(10,30), roll(10,30), roll(10,30)); }

  Thanos.snap_finger(thanosed);


  delete[] rand_bat;
  delete[] thanosed;
}//call des for A
  
  
