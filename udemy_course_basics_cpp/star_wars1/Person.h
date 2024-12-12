#ifndef _PERSON_H_
#define _PERSON_H_

class Person {
  private:
    char *name;
    char *lastname;
    char *city_born;

  public:
    Person();
    Person(const char *s, const char *l);
    ~Person();

    void say_name() const;
    int get_length() const;
    const char *get_name() const;
};

#endif
