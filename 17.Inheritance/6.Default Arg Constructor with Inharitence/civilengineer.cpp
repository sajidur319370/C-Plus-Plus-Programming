#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
  std::cout << "Civil Engineer::Default constructor is called" << std::endl;
};
std::ostream &operator<<(std::ostream &out, const CivilEngineer &civil_engineer)
{
  out << "Civil Engineer: [Full Name:" << civil_engineer.get_full_name()
      << ", Age: " << civil_engineer.get_age()
      << ", Address: " << civil_engineer.get_address()
      << ", Contract count: " << civil_engineer.get_contract_count()
      << ", Speciality: " << civil_engineer.m_speciality << "]" << std::endl;

  return out;
}
CivilEngineer::~CivilEngineer()
{
}