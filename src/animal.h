#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

namespace Animal {

class Animal {
public:
  Animal() {}
  virtual ~Animal() {}

  virtual void walk() { std::cout << "walks" << std::endl; }
  virtual std::string talk() = 0;
};

}

#endif // __ANIMNAL_H__

