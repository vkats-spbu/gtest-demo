#include "hello.h"

#include <iostream>

void hello::sayHello()
{
  saySomth("Hello");
}

bool hello::sayBye()
{
  return saySomth("Bye");
}


bool hello::saySomth(const char *str)
{
  if(!str)
  {
    return false;
  }

  std::cout << str << std::endl;

  return true;
}
