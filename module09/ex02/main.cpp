#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe numbers..." << std::endl;
        return 1;
    }
    PmergeMe pmerge;
    pmerge.parseArguments(argc, argv);
    std::cout << CYAN << "first sequance : " << std::endl;
     pmerge.printSequence(); 
    pmerge.InsertVector(0, 3); // 1200 300 34 1
    pmerge.InsertVector(4, 7); // 198 203 35 90
    // une erreur dans les param m'as fait pense que tout mon programme pourrait etre inoperant, cest bizzare
    // pmerge.printSequence();
    pmerge.mergeVector(0,3,7);

    // try {
    //     PmergeMe pmerge;
    //     pmerge.process(argc, argv);
    // } catch (const std::exception& e) {
    //     std::cerr << e.what() << std::endl;
    //     return 1;
    // }

    return 0;
}