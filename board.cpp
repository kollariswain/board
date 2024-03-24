#include <iostream>
#include "board.h"
using namespace std;

basketci::basketci(int sayi2, int asist2, int rebound2, int block2, int steal2) {
    sayi = sayi2;
    asist = asist2;
    rebound = rebound2;
    block = block2;
    steal = steal2;
};
void basketci::yazdir() {
    cout << "attigi sayi: " << sayi << " yaptigi asist: " << asist << " aldigi rebound: " << rebound << " koydugu blok: " << block << " caldigi top: " << steal << endl;
};
