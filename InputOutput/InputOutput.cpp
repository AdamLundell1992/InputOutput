// InputOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Adam Lundell
//Add data to a file

#include <iostream>
#include <fstream> //reading to from files
#include <string>
#include <vector>

int main()
{
  
    
    std::string filename;


    std::cout << "Create a file and store some data ! " << std::endl;
    std::cout << "Enter a file name " << std::endl;
    std::cin >> filename;
    std::ofstream file(filename.c_str(),std::ios::app);


   
    
        if (file.is_open()) {
            std::cout << "File open succeed" << std::endl;
           
        }
        else {
            std::cout << "file not opened! " << std::endl;
        }
        
       
        
        
   std::string name1;
    std::string name2;
    std::string name3;
    std::cout << "write 3 different  names" << std::endl;
    std::cin >> name1;
    std::cin >> name2;
    std::cin >> name3;
    std::vector<std::string> names;
    names.push_back(name1);
    names.push_back(name2);
    names.push_back(name3);

    for (std::string name : names) {
        
        file <<name << std::endl;


    }
    
    std::cout << "write a sentence tp store into your file on your pc" << std::endl;
    std::string data;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(std::cin, data);
     file << data << std::endl;
     std::cout << "Data is now stored on file , lets read the data in the file: " << std::endl;




}

