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

private:
    void InsertVector(std::vector<std::pair<int, int> > &myPairs, int start, int end);
    void InsertVector(std::vector<int> &vec, int start, int end);
    void Insertdeque(std::deque<int> &deq, int start, int end);
    void Insertdeque(std::deque<std::pair<int, int> > &myPairs, int start, int end);

    void MergeVector(std::vector<int>& vec, int start, int mid, int end);
    void MergeVector(std::vector<std::pair<int, int> > &myPairs, int start, int mid, int end);
    void Mergedeque(std::deque<std::pair<int, int> > &myPairs, int start, int mid, int end);
    void Mergedeque(std::deque<int>& deq, int start, int mid, int end);


    void SortVector(std::vector<std::pair<int, int> > &myPairs, int start, int end);
    void SortVector(std::vector<int> &vec, int start, int end);


    void Compairvec(std::vector<std::pair<int, int> > &myPairs);
    void CompairDeq(std::deque<std::pair<int, int> > &myPairs);

    void GenerateJacobsthal(std::vector<std::pair<int, int> > &myPairs, std::vector<int> &jacobjacob);
    void GenerateJacobsthal(std::deque<std::pair<int, int> > &myPairs, std::deque<int>& jacobjacob);

    void Sortdeque(std::deque<std::pair<int, int> > &myPairs, int start, int end);
    void Sortdeq(std::deque<int> &deq, int start, int end);

    void InsertJacob(std::vector<std::pair<int, int> > &myPairs, std::vector<int> &jacobjacob);
    void InsertJacob(std::deque<std::pair<int, int> > &myPairs, std::deque<int> &jacobjacob);

    void printSequence(std::vector<int> &vec, std::string expression) const;
    void printSequence(std::deque<int> &vec, std::string expression) const;
    void printSequence(std::vector<std::pair<int, int> >& myPairs, std::string expression) const;

    int BinarySearch(std::deque<int> &mainChain, int start, int end, int target);
    int BinarySearch(std::vector<int>& mainChain, int start, int end, int target);

    void parseArguments(int argc, char **argv);
    void isDoublon();
    bool isNumber(const std::string& str) const;
    std::vector<int> _vector;
    std::deque<int> _deque;

};

#endif




 // remetre toute les fonctions pas utilise directement par l'utilisateur en private...