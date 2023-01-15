//
//  class Hospital.hpp
//  ООП ДЗ 10 Hospital-2
//
//  Created by Павел on 08.01.2023.
//

#ifndef class_Hospital_hpp
#define class_Hospital_hpp
#include "class Patient.hpp"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>

class Hospital{
public:
    Hospital(const std::vector<std::string>&vec);
   
    void addPersone(Patient & patient);
    void removePatient(int id);
    void printAllPatients();
    void sendForProcedure ( int id);
    void sendOtherClinic(int id);
 
    
    
    
private:
   
    std::map<int,  Patient>_patients;
    std::map<int,  Patient>::iterator _it;
    const std::vector<std::string>&_vec;
        int _counter;
        int _id;
        
        
        
    };
   
    
    
    
    





#endif /* class_Hospital_hpp */
