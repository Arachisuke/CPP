#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <unordered_set>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) : _vector(other._vector), _deque(other._deque) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        _vector = other._vector;
        _deque = other._deque;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

bool PmergeMe::isNumber(const std::string& str) const 
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it))
            return false;
    }
    return !str.empty();
}

void PmergeMe::parseArguments(int argc, char** argv) 
{
    for (int i = 1; i < argc; ++i) {
        std::string s(argv[i]);
        if (!isNumber(s)) 
            throw std::runtime_error("Error");
        long n = std::strtol(argv[i], NULL, 10);
        if (n < 0 || n > 2147483647) 
            throw std::runtime_error("Error");
        _vector.push_back(static_cast<int>(n)); 
        _deque.push_back(static_cast<int>(n));
    }
}

void PmergeMe::isDoublon() 
{
        std::unordered_set<int> seen;

    for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
    {
        if (!seen.insert(*it).second)
            throw std::runtime_error("Error");
    }
}


void PmergeMe::printSequence(std::vector<int> &vec, std::string expression) const 
 {
    std::cout << expression << std::endl;

    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << BLACK << *it << " " << RESET;
    }
    std::cout << std::endl;
}

void PmergeMe::printSequence(std::deque<int> &vec, std::string expression) const 
 {
    std::cout << expression << std::endl;

    for (std::deque<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << BLACK << *it << " " << RESET;
    }
    std::cout << std::endl;
}

void PmergeMe::printSequence(std::vector<std::pair<int, int> >& myPairs, std::string expression) const 
 {
    std::cout << expression << std::endl;

    for (std::vector<std::pair<int, int> >::const_iterator it = myPairs.begin(); it != myPairs.end(); ++it) {
        std::cout << BLACK << it->first << " " << std::endl << RESET;
    }
    std::cout << std::endl;
}


void PmergeMe::process(int argc, char** argv) 
{ 
    parseArguments(argc, argv);
    isDoublon();
    std::vector<std::pair<int, int> > myPairs;
    std::vector<int> jacobjacob;
    std::deque<int> MINDEQ;
    std::deque<int> MAXDEQ;
    std::deque<int> jacobjacobDEQ;


    printSequence(_vector, "Before: ");

    clock_t startVector = clock();

    Compairvec(myPairs); 
    SortVector(myPairs, 0, myPairs.size() - 1); 
    SortVector(myPairs, 0, myPairs.size() - 1); 
    GenerateJacobsthal(myPairs, jacobjacob);
    InsertJacob(myPairs,jacobjacob);

    clock_t endVector = clock();
   
    printSequence(_vector, "After: ");

    // printSequence(_deque, "Before: ");

    // clock_t startDeque = clock();
    // CompairDeq(MINDEQ, MAXDEQ);
    // SortDeq(MAXDEQ, 0, MAXDEQ.size() - 1); 
    // GenerateJacobsthal(MINDEQ, jacobjacobDEQ); 
    // InsertJacob(MAXDEQ, MINDEQ, jacobjacobDEQ);
    // clock_t endDeque = clock();
    // printSequence(_deque, "After: ");



    double vectorTime = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1000000;
    // double dequeTime = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1000000;

    std::cout << "Time to process a range of " << _vector.size()
             << " elements with std::vector : " << vectorTime << " us" << std::endl;
    // std::cout << "Time to process a range of " << _deque.size()
    //           << " elements with std::deque : " << dequeTime << " us" << std::endl;
}
void PmergeMe::InsertVector(std::vector<std::pair<int, int> >& myPairs,int start, int end)
{
    int key;
    int key2;
    int j;
    int tmp;
    int tmp2;
    for (int i = start + 1; i <= end; i++)   
    {
        key = myPairs[i].first; 
        key2 = myPairs[i].second; 
        j = i - 1; 
        while (j >= start && key < myPairs[j].first) 
        {
            tmp = myPairs[j].first; // stocker le numero que je vais ecrase
            tmp2 = myPairs[j].second; // stocker son second.
            myPairs[j].first = key; // jai ecraser la position j par key car il est plus petit key c I et
            myPairs[j].second = key2;
            myPairs[j + 1].first = tmp; 
            myPairs[j + 1].second = tmp2; 
            j--;
        }
    }
   // printSequence(vec, "insert");
}

void PmergeMe::MergeVector(std::vector<std::pair<int, int> >& myPairs, int start, int mid, int end) 
{
    std::vector<std::pair<int, int> > left;
    std::vector<std::pair<int, int> > right;

    left.assign(myPairs.begin() + start, myPairs.begin() + mid + 1);
    right.assign(myPairs.begin() + mid + 1, myPairs.begin() + end + 1);

    std::vector<std::pair<int, int> >::const_iterator itleft = left.begin();
    std::vector<std::pair<int, int> >::const_iterator itright = right.begin();

    while (itleft != left.end())
    {
        if (itright == right.end()) 
        {
            myPairs[start].first = itleft->first ;
            myPairs[start++].second = itleft->second ;
            itleft++;   
        }
        else if  (*itleft < *itright)
        {
           myPairs[start].first = itleft->first ;
            myPairs[start++].second = itleft->second ;
            itleft++;   
        }
        else
        {
            myPairs[start].first = itright->first ;
            myPairs[start++].second = itright->second ;
            itright++;  
        }
    }
    while(itright != right.end()) 
    {
        myPairs[start].first = itright->first ;
        myPairs[start++].second = itright->second ;
        itright++;
    }
}

void PmergeMe::SortVector(std::vector<std::pair<int, int> >& myPairs, int start, int end)
{
    int mid = 0;

    if (start < end)
    {
        if (end - start == 1)
            InsertVector(myPairs, start,end);
        else 
        {   
            mid = start + ((end - start) / 2);
            SortVector(myPairs, start, mid);
            SortVector(myPairs, mid + 1, end);
            MergeVector(myPairs, start, mid, end);
        }
    }
}

void PmergeMe::Compairvec(std::vector<std::pair<int, int> > &myPairs)
{
    
    int i = 0;
    size_t j = 1;
    if (_vector.size() % 2 != 0)
        _impair = 1;
    while (j < _vector.size()) 
    {
        if (_vector[i] < _vector[j])
            myPairs.emplace_back(_vector[j], _vector[i]);
        else
            myPairs.emplace_back(_vector[i], _vector[j]);
        j = j + 2;
        i = i + 2;
    }

}

void PmergeMe::GenerateJacobsthal(std::vector<std::pair<int, int> > &myPairs, std::vector<int>& jacobjacob) 
{
    size_t i;
    size_t j;
    int tmp;
    int tmp2;
    
    jacobjacob.push_back(1);
    jacobjacob.push_back(3);
    std::vector<int>jacobpure;
    for (size_t i = 2; i <= myPairs.size() -1; i++) 
    {

        if (jacobjacob[i - 1] + 2 * jacobjacob[i - 2] <= (int)myPairs.size() - 1)
           jacobjacob.push_back(jacobjacob[i - 1] + 2 * jacobjacob[i - 2]);
        else
            break;
    }
    i = 1;
    j = 2;
    jacobpure = jacobjacob;
    printSequence(jacobjacob, "JACOB PURE");
    while(1)
    {
        if (i < jacobpure.size())
        {
            tmp = jacobpure[i - 1]; // = 1
            tmp2 = jacobpure[i]; // = 3
        }
        else
            break;
        while(tmp < tmp2 -1)
        {
            tmp2--;
            jacobjacob.insert(jacobjacob.begin() + j, tmp2); 
            j++;
        }
        j++;
        i++;
    }
    i = myPairs.size() - 1;
    for (std::vector<int>::iterator it = jacobpure.end() -1; *it < (int)i; i--) // *it = le dernier chiffre 
       jacobjacob.push_back(i);

    // manque le bout de code que t'as supp avec les indice manquant.
    printSequence(jacobjacob, "JACOB FINALE");
}

// while (jacob) pour inserer les min
// binary(begin, positioninpair -1)
// insert.
void PmergeMe::InsertJacob(std::vector<std::pair<int, int> > &myPairs, std::vector<int>& jacobjacob)
{
    int countInsert;
    int i;
    int pos;
    int last;
    int forindice = 1; // pour transformer la suite en indice de tableau ->
    int precision = 1; // precision c'est ak -1 car je sais que ak deja c'est la limite certes mais je suis inferieur a lui donc autant regarder avant.
    countInsert = 0;
    i = 0;

    std::vector<int>::iterator it = jacobjacob.begin();

    if (_vector.size() % 2 != 0)
        last = _vector[_vector.size() -1];

    for (size_t i = 0; i < myPairs.size(); ++i)
    {
        _vector.push_back(myPairs[i].first);
    }      

    while(it != jacobjacob.end())
    {
        pos = BinarySearch(myPairs, 0, jacobjacob[i] - forindice + countInsert - precision, myPairs[jacobjacob[i] -1].second);
        _vector.insert(_vector.begin() + pos,  myPairs[jacobjacob[i] -1].second);
        countInsert++;
        it++;
    }

    if (_vector.size() % 2 != 0)
    {
        pos = BinarySearch(myPairs, 0, _vector.size() -1, last);
        _vector.insert(_vector.begin() + pos,  myPairs[jacobjacob[i] -1].second);
    }
}

// binary search
// prendre start(begin) end(position + nbrinsert)
// start - end if target > mid prendre la partie superieur
// et redecouper ainsi de suite jusqu'a trouve la target

int PmergeMe::BinarySearch(std::vector<std::pair<int, int> > &myPairs, int start, int end, int target) //hendek siya pas le chiffre.
{
    int mid;
    std::cout << "start = " << start << std::endl;
    std::cout << "end = " << end << std::endl;
    std::cout << "target = " << target << std::endl;
    printSequence(myPairs, "OOOOOK");    

    while(end - start != 0) // jai envie de mettre 0 c plus logique
    {
        mid = (end - start +1) / 2;
        if (target > myPairs[mid].first)
            start = mid +1;
        if (target < myPairs[mid].first)
            end = mid - 1;
    }
    if (target > myPairs[start].first)
        start++;
    std::cout << "start = " << start << std::endl;
    return start;
}