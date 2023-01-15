//
//  class Patient.hpp
//  ООП ДЗ 10 Hospital-2
//
//  Created by Павел on 08.01.2023.
//

#ifndef class_Patient_hpp
#define class_Patient_hpp
#include "class Patient.hpp"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>

class Patient{
public:
    Patient( const std::string& name,int  age, const std::string & diagnosis);
   const std::string getName ()const;
   const std::string getDiagnosis ()const;
    void setName(std::string name);
    void setDiagnosis(std::string diagnosis);
    void setAge(int age);
   

   
  
  

private:
   // std::vector <std::string>&_medicalHistory;
    std::string _name;
    std::string _diagnosis;
    int _age;
  
};

#endif /* class_Patient_hpp */


 
