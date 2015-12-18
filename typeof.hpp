#ifndef TYPEOF_HPP
#define TYPEOF_HPP

#include <cstdlib>
#include <cxxabi.h>
#include <typeinfo>
#include <string>


template<typename T>
std::string type_name()
{
  int status;
  std::string tname = typeid(T).name();
  char *demangled_name = abi::__cxa_demangle(tname.c_str(), NULL, NULL, &status);
  if(status == 0) {
    tname = demangled_name;
    std::free(demangled_name);
  }   
  return tname;
}
#define TYPEOF(a) type_name<decltype(a)>()

#endif  // #ifndef TYPEOF_HPP

