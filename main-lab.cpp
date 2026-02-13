#include <iostream>
using namespace std;

#include "monster.h"
#include "cj_util_lib.h"

int main(int argc, char* argv[]) {
  monster player(argv[1], atoi(argv[2]),atoi(argv[3]), atoi(argv[4]));

  for(int i=0; i<6; i++){
        monster *p=new monster(i+1,roll(1,i+1),roll(1,i+1),roll(1,i+1));  
        while (!dead_check(p)){
        p.battle_display();
        cout << endl << "Attack? (Press Enter to Attack)";
        enter();
        player.Attack(p);
        }
      delete p;
      You.heal();
  }
  
}//call des for A
  
  
