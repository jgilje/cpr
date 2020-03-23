#ifndef CPR_INTERFACE_H
#define CPR_INTERFACE_H

#include <string>

namespace cpr {

class Interface {
  public:
    Interface(const std::string& interface)
      : interface(interface) {}

    std::string interface;
};

} // namespace cpr

#endif
