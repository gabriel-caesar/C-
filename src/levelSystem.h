#pragma once
#include "hp.h"

class LevelSystem {
public:

  LevelSystem() {
    CurrentLevel = 1u;
    CurrentEXP = 0u;
  }

  void gainEXP(std::uint64_t gained_exp) {
    CurrentEXP += gained_exp;
  }

private:

  std::uint16_t CurrentLevel;
  std::uint64_t CurrentEXP;
};