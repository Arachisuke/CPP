#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <ctime>


#define RESET       "\033[0m"
#define BLACK       "\033[1;30m"
#define RED         "\033[1;31m"
#define GREEN       "\033[1;32m"
#define YELLOW      "\033[1;33m"
#define BLUE        "\033[1;34m"
#define MAGENTA     "\033[1;35m"
#define CYAN        "\033[1;36m"
#define WHITE       "\033[1;37m"


class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void process(int argc, char** argv);

    void InsertVector(std::vector<std::pair<int, int> > &myPairs, int start, int end);

    void MergeVector(std::vector<std::pair<int, int> > &myPairs, int start, int mid, int end);

    void SortVector(std::vector<std::pair<int, int> > &myPairs, int start, int end);

    void Compairvec(std::vector<std::pair<int, int> > &myPairs);

    void GenerateJacobsthal(std::vector<std::pair<int, int> > &myPairs, std::vector<int> &jacobjacob);

    void InsertJacob(std::vector<std::pair<int, int> > &myPairs, std::vector<int> &jacobjacob);

    void printSequence(std::vector<int> &vec, std::string expression) const;
    void printSequence(std::deque<int> &vec, std::string expression) const;
    void printSequence(std::vector<std::pair<int, int> >& myPairs, std::string expression) const;

    void parseArguments(int argc, char **argv);



private:
    std::vector<int> _vector;
    std::deque<int> _deque;


    
    void InsertDeq(std::deque<int> &vec, int start, int end);
    void MergeDeq(std::deque<int> &vec, int start, int mid, int end);
    void SortDeq(std::deque<int> &vec, int start, int end);
    void CompairDeq(std::deque<int> &MIN, std::deque<int> &MAX);
    void GenerateJacobsthal(std::deque<int> &vec, std::deque<int> &jacobjacob);
    void InsertJacob(std::deque<int> &MAX, std::deque<int> &MIN, std::deque<int> &jacobjacob);
    int _impair;
    bool isNumber(const std::string& str) const;
};

#endif