#define enumeration_begin(arg) const char* const arg##_strs[]={ 
#define declare_member(arg) #arg 
#include "Suits.h"

#include "Suits.h"

#define enumeration_begin(arg) const char* const arg##_strs[]={ 
#define declare_member(arg) #arg 
#include "Power.h"

#include "Power.h"


struct Cart {
public:
	Suit suit;
	Power power;
};