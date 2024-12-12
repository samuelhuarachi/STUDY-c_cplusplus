#ifndef ANAKIN_H
#define ANAKIN_H

#include "Padawan.h"
#include "Person.h"

class Anakin : public Person, public Padawan {
  private:
  public:
    char *job_title;

    Anakin(const char *n, const char *l) : Person(n, l) {};
    void codeName() override;
    ~Anakin();
};

#endif