#include <string.h>


int main() { 

    // function - string of rooms, string of items 

    std::string problemPath = "problem.pddl";
    std::ofstream file;
    file.open(problemPath);
    file << "(define (problem moveitemtoroom)" << std::endl;
    file << " (:domain turtlebot3-domain)" << std::endl;
    file << " (:objects" << std::endl;
    file << "  turtlebot - robot" << std::endl;

    // Print all rooms to file 
    string room = " - room"; 
    string item = " - item"; 
    // e.g. -> file << "  initial-room - room" << std::endl; 

    // Print all items 

    //  TODO:: DEBUGGING LINES FOR NOW 





    file << ")" << std::endl;


    // Print initial values 
    file << " (:init " << std::endl;
    file << "  (at turtlebot initial-room)"
    file << "  (hand_empty turtlebot)"
    // add where items are intialised in with 'in' 

    // TODO:: DEBUGGING LINES FOR NOW 
    file << ")" << std::endl;


    // Print goal 
    file << " (:goal " << std::endl;
    // TODO:: CHANGE TO INPUTS 
    file << "  (in " << endl; // to add goal variables 
    file << ")" << std::endl;
    file.close();





}

