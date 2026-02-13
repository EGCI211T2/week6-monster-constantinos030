#include <iostream>
using namespace std;

#include "cj_util_lib.h"
#include "monster.h"


int main(int argc, char* argv[]) {

monster A("A Mons", 1, 1, 1);
 
 
 monster *p,x("X Mons", 1, 1, 1);
  p=&x;
  p->display();
  p=new monster("Jane", 4, 4, 4);
   x.display();
   p->display();
 delete p;

 x.display();

 p=new monster[3];
 delete []p;

}
