#ifndef CSENG_H
#define CSENG_H

#include "engineer.h"
#include <iostream>

class CsEng : public Engineer
{
private:
    std::string speciality;

public:
    friend std::ostream &operator<<(std::ostream &out,const CsEng &cse);
    CsEng();
    CsEng(std::string_view name, int age, std::string_view stream_param, std::string_view speciality_param);
    CsEng(const CsEng& obj);
    ~CsEng();
};

#endif