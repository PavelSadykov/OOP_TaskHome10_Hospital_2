//
//  class Patient.cpp
//  ООП ДЗ 10 Hospital-2
//
//  Created by Павел on 08.01.2023.
//

#include "class Patient.hpp"

Patient::Patient(const std::string & name, int  age, const std::string & diagnosis):  _name(name),_age(age),_diagnosis(diagnosis) {}

const std::string  Patient::getName() const{
    return _name;
}


const std::string  Patient::getDiagnosis() const{
     return _diagnosis;
 }

 
void Patient::setName(std::string name){
   _name=name;
}
void Patient::setDiagnosis(std::string diagnosis){
    _diagnosis=diagnosis;
}
void Patient::setAge(int age){
    _age=age;
}



