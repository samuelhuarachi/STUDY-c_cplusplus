

#include <iostream>
using namespace std;

// Abstract class serving as an interface
class Citizen {
  public:
    virtual char *identification_number;
    virtual ~Citizen() {} // Virtual destructor (best practice)
};