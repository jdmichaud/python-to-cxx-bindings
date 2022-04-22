#ifndef __CAT_H__  
#define __CAT_H__

#include "animal.h"

namespace Animal {

class Cat : public Animal {
public:
  Cat(const std::string name): _name(name) {}

  std::string talk();

private:
  std::string _name;
};

}

#endif // __CAT_H__

