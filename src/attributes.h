#pragma once
#include "statTypes.h"

class StatBlock {
  stattype Strength;   // 0xFF
  stattype Intellect;  // 0xFF
  
public:  
  StatBlock() { 
    Strength = (stattype)1u;
    Intellect = (stattype)1u;
  }

  // explicit requires you to only use stattype other than int or str or whatever
  explicit StatBlock(stattype s, stattype i) { 
    Strength = s;
    Intellect = i; 
  }
  
  stattype getStrength() {
    return Strength;
  }

  stattype getIntellect() {
    return Intellect;
  }
};
