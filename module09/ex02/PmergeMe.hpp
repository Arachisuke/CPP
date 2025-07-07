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

    void InsertVector(int start, int end); //neww
    void printSequence() const;
        void parseArguments(int argc, char** argv);
    void mergeVector(int left, int mid, int right);



private:
    std::vector<int> _vector;
    std::deque<int> _deque;

    void mergeInsertSortVector(std::vector<int>& vec, int left, int right);

    void mergeInsertSortDeque(std::deque<int>& deq, int left, int right);
    void mergeDeque(std::deque<int>& deq, int left, int mid, int right);

    bool isNumber(const std::string& str) const;
};

#endif