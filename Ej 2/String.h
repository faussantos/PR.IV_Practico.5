#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <string.h>
#include <iostream>

const int MAX = 80;
class String {

private:
    char * cadena;

public:
    String ();
    String (char *);
    String (const String &);
    ~String ();
    bool operator== (const String &);
    String operator= (const String &);
    bool operator< (const String &);
    String operator+(const String &);

};



#endif // STRING_H_INCLUDED
