//
//  main.cpp
//  ООП ДЗ 10 Hospital-2
//
//  Created by Павел on 08.01.2023.
//
#include "class Patient.hpp"
#include "class Hospital.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iterator>

int main(int argc, const char * argv[]) {
   
    const std::vector<std::string>_vec={"abscess", "allergy", "arrhythmia", "arthritis", "asthma", "myopia" , "bronchitis", "gastritis" , "haematoma", "hypertension", "glaucoma" , " influenza", " cataract", "laryngitis", "neurosis", " burn", "otitus", "pancreatitis", " fracture"," pneumonia"};
    
    Patient A("John", 23, "laryngitis");
    Patient B("Alex", 46, "allergy");
    Patient C("Nik", 34, "appendicitis");
    Patient D("",0, "");

    Hospital h(_vec);
    h.addPersone(A);
    h.addPersone(B);
    h.addPersone(C);
    h.printAllPatients();
    std::cout << std::endl;
   
    std::string name,disease,disHistory, diagnosis;
    int  age, X, Y=0;
    do{
        std::cout <<std:: endl << "Выберите действие: \n1 - Зарегистрировать пациента \n2 - Направить пациента на процедуры \n3 - Выписать пациента \n4 - Список пациентов   \n5 - Завершение работы \n-->";
        
        std::cin>>X;
        switch (X) {
            case 1:{
               
                std::cout<<"Регистрация пациента"<<std::endl;
                std::cout<<"Список пациентов :"<<std::endl;
                h.printAllPatients();
                std::cout << std::endl;
                std::cout<<"Введите имя ";
                std::cin >> name;
                D.setName(name);
                std::cout<<"Введите Возраст ";
                std::cin >> age;
                D.setAge(age);
                std::cout<<"Введите диагноз :";
                std::cin>> diagnosis;
                D.setDiagnosis(diagnosis);
                std::cout<<"Список пациентов :"<<std::endl;
                h.addPersone(D);
                h.printAllPatients();
                std::cout << std::endl;
                    }
                break;
                
            case 2:{
                int Q=0,tmpID=-1;
                 std::cout<<"Проведение процедур "<<std::endl;
                 std::cout<<"Список пациентов :"<<std::endl;
                 h.printAllPatients();
                std::cout<<"Введите Id пациента -->";
                std::cin>>tmpID;
                std::cout<<"Направить  пациента на  процедуру? \n1 - да \n-->";
                std::cin>>Q;
                if(Q==1){
                    h.sendForProcedure(tmpID);
                    std::cout << std::endl;
                   
                
                }
                 }
                break;
                
            case 3:{
                int Q=0, tmpID=-1;;
                std::cout<<"Выписка из медучреждения "<<std::endl;
                std::cout<<"Список пациентов :"<<std::endl;
                h.printAllPatients();
                std::cout<<"Введите Id пациента -->";
                std::cin>>tmpID;
                std::cout<<"Выписать пациента из медучреждения ? \n1 - да \n-->";
                std::cin>>Q;
                if(Q==1){
                    h.removePatient(tmpID);
                std::cout<<"Пациент выписан из медучреждения"<<std::endl;
                std::cout<<"Список оставшихся пациентов :"<<std::endl;
                    h.printAllPatients();
                
                }}
                break;
                
            case 4:
                std::cout<<"Список пациентов :"<<std::endl;
                h.printAllPatients();
                
                break;
                
            case 5:
                std::cout<<" Работа завершена "<<std::endl;
                exit(0);
                break;
                
            default:std::cout<<"Ошибка ввода, задайте корректные параметры "<<std::endl;
                break;
        }
    }while (Y!=5);
           
 
   
    
    
    return 0;
}
