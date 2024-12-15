#ifndef ANAKIN_H
#define ANAKIN_H

#include "Padawan.h"
#include "Person.h"
#include "Player.h"
#include <string>

class Anakin : public Person, public Padawan, public Player {
  private:
  public:
    char *job_title;
    std::string favorite_phare;
    unsigned int life;

    Anakin(const char *n, const char *l) : Person(n, l) {};
    void codeName() override;
    void setFavoritePhare(const std::string &favoritePhare);
    std::string getFavoritePhare() const;
    void sayFavoritePhare() const;

    ~Anakin();
};

#endif