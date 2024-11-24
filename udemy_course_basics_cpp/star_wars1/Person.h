#ifndef _PERSON_H_
#define _PERSON_H_

class Person {
  private:
    char *name;     // pointer to a char[] that holds a C-style string
    char *lastname; // pointer to a char[] that holds a C-style string
  public:
    Person();                             // no-args constructor
    Person(const char *s, const char *l); // overloaded constructor
    // Person(const Person &source);         // copy constructor
    // Person(Person &&source);              // move constructor
    ~Person(); // destructor
    // Person &operator=(const Person &rhs); // copy assignmeent

    void say_name() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
