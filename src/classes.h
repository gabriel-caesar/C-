#pragma once
#include "hp.h"
#include "attributes.h"
#include "levelSystem.h"

class Cleric : public hp, public StatBlock, public LevelSystem {
public:
	static const hptype BASEHP = (hptype)14u;
	static const stattype BASESTR = (stattype)2u;
	static const stattype BASEINT = (stattype)3u;

	static const hptype HPGROWTH = (hptype)7u;
	static const stattype STRGROWTH = (stattype)1u;
	static const stattype INTGROWTH = (stattype)2u;
	
	
	Cleric() : hp(BASEHP, BASEHP), StatBlock(BASESTR, BASEINT) {}
	
private: 

	void LevelUp() override {
		setMaxHP(HPGROWTH + getMaxHP());
		increaseStats(STRGROWTH, INTGROWTH);
	}
};


class Warrior : public hp, public StatBlock, public LevelSystem {
public:
	static const hptype BASEHP = (hptype)18u;
	static const stattype BASESTR = (stattype)4u;
	static const stattype BASEINT = (stattype)1u;

	static const hptype HPGROWTH = (hptype)9u;
	static const stattype STRGROWTH = (stattype)2u;
	static const stattype INTGROWTH = (stattype)1u;
	
	Warrior() : hp(BASEHP, BASEHP), StatBlock(BASESTR, BASEINT) {}
	
private: 
	void LevelUp() override {
		setMaxHP(HPGROWTH + getMaxHP());
		increaseStats(STRGROWTH, INTGROWTH);
	}
};


class Wizard : public hp, public StatBlock, public LevelSystem {
public:
	static const hptype BASEHP = (hptype)10u;
	static const stattype BASESTR = (stattype)1u;
	static const stattype BASEINT = (stattype)4u;

	static const hptype HPGROWTH = (hptype)5u;
	static const stattype STRGROWTH = (stattype)1u;
	static const stattype INTGROWTH = (stattype)2u;
	
	Wizard() : hp(BASEHP, BASEHP), StatBlock(BASESTR, BASEINT) {}
	
private: 
	void LevelUp() override {
		setMaxHP(HPGROWTH + getMaxHP());
		increaseStats(STRGROWTH, INTGROWTH);
	}
};


class Rogue : public hp, public StatBlock, public LevelSystem {
public:
	static const hptype BASEHP = (hptype)12u;
	static const stattype BASESTR = (stattype)3u;
	static const stattype BASEINT = (stattype)2u;

	static const hptype HPGROWTH = (hptype)6u;
	static const stattype STRGROWTH = (stattype)2u;
	static const stattype INTGROWTH = (stattype)1u;
	
	Rogue() : hp(BASEHP, BASEHP), StatBlock(BASESTR, BASEINT) {}
	
private: 
	void LevelUp() override {
		setMaxHP(HPGROWTH + getMaxHP());
		increaseStats(STRGROWTH, INTGROWTH);
	}
};