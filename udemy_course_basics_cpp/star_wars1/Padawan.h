#ifndef PADAWAN_H
#define PADAWAN_H

class Padawan { // abstract base class

  private:
  public:
    virtual void codeName() = 0; // pure virtual function
    virtual ~Padawan() {};
};

#endif