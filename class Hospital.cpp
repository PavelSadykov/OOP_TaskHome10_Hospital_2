//
//  class Hospital.cpp
//  ООП ДЗ 10 Hospital-2
//
//  Created by Павел on 08.01.2023.
//

#include "class Hospital.hpp"

Hospital::Hospital (const  std::vector<std::string>&vec):_vec(vec), _counter(0), _id(1) {};



void Hospital::addPersone(Patient & patient){
    _patients.emplace(_id, patient);
 // std::cout<<" Id: " << _id << "   Имя: " << patient.getName() <<  std::endl;
    _id++;
}

void Hospital::printAllPatients(){
    for(const auto &[_id, patient]   :   _patients){
        std::cout<<" Id: " << _id << "   Имя: " << patient.getName() <<  std::endl;
    }}
 


void Hospital::sendOtherClinic(int id){
    _patients.erase(id);
    std::cout << "Пациент переведен в другую клинику.\n";
}

void Hospital::sendForProcedure ( int id){
    int count = 0;
    _it = _patients.find(id);
    for (size_t i = 0; i < _vec.size(); i++)    {
        if (_it->second.getDiagnosis() == _vec[i]) {
            std::cout << "Пациент " <<_it->second.getName() << " заболевание " <<_it->second.getDiagnosis() << " -> направлен на процедуру."<<std::endl;
            count++;
        }
    }
    if (count == 0) {
        std::cout << "Заболевание  "<<_it->second.getDiagnosis()<<" больница не лечит.\nПациент "<<_it->second.getName()<<" будет направлен в другую клинику.\n";
        sendOtherClinic(_it->first);
    }
    
}

void Hospital::removePatient(int id){
        std::cout <<"Id: " << id << std::endl;
  
    
    _patients.erase(id);
}




