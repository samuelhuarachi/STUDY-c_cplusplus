#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
  private:
    char *str; // pointer to a char[] that holds a C-style string
  public:
    Mystring();                               // no-args constructor
    Mystring(const char *s);                  // overloaded constructor
    Mystring(const Mystring &source);         // copy constructor
    Mystring(Mystring &&source);              // move constructor
    ~Mystring();                              // destructor
    Mystring &operator=(const Mystring &rhs); // copy assignmeent

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
