#include <string> 
#include <iostream> 
#include "plan_parser.hpp"

int main(int argc, char *argv[]) 
{ 
    if (argc != 2) { 
        printf("No valid arguments given"); 
    } else { 
        PlanParser p(argv[1]); 
        // p.PlanParser(argv[1]);
        while (p.done() != true) { 
            std::vector<std::string> str = p.getNextStep(); 
            // std::cout << str << std::endl; 
            for (int i = 0; i < str.size(); i++) { 
                std::cout << str[i] << std::endl; 
            }
        }
    }
}