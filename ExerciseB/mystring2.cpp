//  mystring2.cpp
// ENSF 614 - Lab 3
// M. Moussavi
#include "mystring2.h"
#include <string.h>
#include <iostream>
using namespace std;

Mystring::Mystring()
{
  charsM = new char[1];
  charsM[0] = '\0';
  lengthM = 0;
}

Mystring::Mystring(const char *s)
  : lengthM(strlen(s))
{
  charsM = new char[lengthM + 1];
  strcpy(charsM, s);
}

Mystring::Mystring(int n)
  : lengthM(0), charsM(new char[n])
{
  charsM[0] = '\0';
}

Mystring::Mystring(const Mystring& source):
  lengthM(source.lengthM), charsM(new char[source.lengthM+1])
{
  strcpy (charsM, source.charsM);
}

Mystring::~Mystring()
{
  delete [] charsM;
}

//Overloaded << operator
ostream& operator << (ostream& os, const Mystring& s)
{
  os << s.charsM;
  return os;
}

Mystring& Mystring::operator=(const char* s)
{
    if (charsM == s)  // if we're assigning the same string, do nothing
        return *this;
    
    delete[] charsM;               // free the old memory
    lengthM = strlen(s);           // set new length
    charsM = new char[lengthM + 1]; // allocate new memory
    strcpy(charsM, s);             // copy the string
    return *this;
}

bool Mystring::operator>(const Mystring& other) const
{
    return strcmp(this->charsM, other.charsM) > 0;
}

bool Mystring::operator<(const Mystring& other) const
{
    return strcmp(this->charsM, other.charsM) < 0;
}


int Mystring::length() const
{
  return lengthM;
}

char Mystring::get_char(int pos) const
{
  if(pos < 0 && pos >= length()){
    cerr << "\nERROR: get_char: the position is out of boundary." ;
  }

  return charsM[pos];
}

const char * Mystring::c_str() const
{
  return charsM;
}

void Mystring::set_char(int pos, char c)
{
  if(pos < 0 && pos >= length()){
    cerr << "\nset_char: the position is out of boundary."
     << " Nothing was changed.";
    return;
  }

  if (c != '\0'){
    cerr << "\nset_char: char c is empty."
     << " Nothing was changed.";
    return;
  }

  charsM[pos] = c;
}

Mystring& Mystring::operator =(const Mystring& S)
{
  if(this == &S)
    return *this;
  delete [] charsM;
  lengthM = strlen(S.charsM);
  charsM = new char [lengthM+1];
  strcpy(charsM,S.charsM);
  return *this;
}

Mystring& Mystring::append(const Mystring& other)
{
  char *tmp = new char [lengthM + other.lengthM + 1];
  lengthM+=other.lengthM;
  strcpy(tmp, charsM);
  strcat(tmp, other.charsM);
  delete []charsM;
  charsM = tmp;

  return *this;
}

 void Mystring::set_str(char* s)
{
    delete []charsM;
    lengthM = strlen(s);
    charsM=new char[lengthM+1];

    strcpy(charsM, s);
}

int Mystring::isNotEqual (const Mystring& s)const
{
  return (strcmp(charsM, s.charsM)!= 0);
}

int Mystring::isEqual (const Mystring& s)const
{
  return (strcmp(charsM, s.charsM)== 0);
}


int Mystring::isGreater (const Mystring& s)const
{
  return (strcmp(charsM, s.charsM)> 0);
}

int Mystring::isLessThan (const Mystring& s)const
{
  return (strcmp(charsM, s.charsM)< 0);
}














