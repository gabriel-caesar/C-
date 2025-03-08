#pragma once
#include "hp.h"
#include <cstdint>

typedef std::uint64_t exptype;
typedef std::uint16_t leveltype;

class LevelSystem {
public:
  static const exptype LEVEL2AT = 100u;
  
  LevelSystem() {
    CurrentLevel = 1u;
    CurrentEXP = 0u;
    EXPToNextlevel = LEVEL2AT;
  }

  void gainEXP(exptype gained_exp) {
    CurrentEXP += gained_exp;
    while (check_if_leveled()) {}
  }

  leveltype getLevel() {
    return CurrentLevel;
  }

  exptype getCurrentEXP() {
    return CurrentEXP;
  }

  exptype getEXPToNextLevel() {
    return EXPToNextlevel;
  }

  virtual void LevelUp() = 0;

protected:

  leveltype CurrentLevel;
  exptype CurrentEXP;
  exptype EXPToNextlevel;

  bool check_if_leveled() {
    static const leveltype LEVELSCALER = 2u;
    if (CurrentEXP >= EXPToNextlevel) {
      CurrentLevel++;
      LevelUp();
      EXPToNextlevel *= LEVELSCALER;
      return true;
    }
    return false;
  }
};