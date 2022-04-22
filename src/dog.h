#ifndef __DOG_H__  
#define __DOG_H__

#include <iostream>
#include "animal.h"

namespace Animal {

class Dog : public Animal {
public:
  Dog(const std::string name): _name(name) {}

  std::string talk();

private:
  std::string _name;
};

}

#endif // __DOG_H__

