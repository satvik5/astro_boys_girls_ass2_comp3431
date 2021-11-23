#include <string> 
#include <iostream> 
#include "plan_parser.hpp"

int main(int argc, char *argv[]) 
{ 
    if (argc != 2) { 
        printf("No valid arguments given"); 
    } else { 
        PlanParser p(argv[1]); 
        std::cout << "-----------Generated Plan-----------"; 
        while (p.done() != true) { 
            std::vector<std::string> str = p.getNextStep(); 
            for (int i = 0; i < str.size(); i++) { 
                std::cout << str[i] << " "; 
            }
            std::cout << "\n"; 
        }
        std::cout << "---------End Generated Plan--------- ";
    }
}