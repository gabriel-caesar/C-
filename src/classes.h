#pragma once
#include "hp.h"
#include "attributes.h"

class Cleric : public hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)14u;
	static const stattype BASESTR = (stattype)2u;
	static const stattype BASEINT = (stattype)3u;
	
	Cleric() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}
	
private: 
};

class Warrior : public hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)19u;
	static const stattype BASESTR = (stattype)4u;
	static const stattype BASEINT = (stattype)1u;
	
	Warrior() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}
	
private: 
};

class Wizard : public hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)9u;
	static const stattype BASESTR = (stattype)1u;
	static const stattype BASEINT = (stattype)4u;
	
	Wizard() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}
	
private: 
};

class Rogue : public hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)13u;
	static const stattype BASESTR = (stattype)3u;
	static const stattype BASEINT = (stattype)2u;
	
	Rogue() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}
	
private: 
};