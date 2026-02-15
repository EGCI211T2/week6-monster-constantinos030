#include <iostream>
using namespace std;

#include "monster.h"


int main(int argc, char* argv[]) {
  monster player(argv[1], atoi(argv[2]),atoi(argv[3]), atoi(argv[4]));


  for(int i=0; i<6; i++){
        monster *rand_bat=new monster("A", roll(i,i+2), roll(i,i+2), roll(i,i+2));  
        rand_bat->battle_display();

        while (!rand_bat->dead_check()){
        cout << endl << "Attack? (Press Enter to Attack)";
        enter();
        player.Attack(*rand_bat);
        enter();
        cout << endl;
        if (rand_bat->dead_check()) break;
        if (rand_bat->decision()) rand_bat->heal() else rand_bat->Attack(player);
        }
        cout <<"You Defeated the Enemy!"<< endl;
        player.display();
        cout << endl << "(Press Enter to Continue)" << endl;
      delete rand_bat;
      player.heal();
  }
  
}//call des for A
  
  
