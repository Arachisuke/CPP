#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>

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

bool PmergeMe::isNumber(const std::string& str) const // verifie si c'est que des chiffres. ou s'il est vide.
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
        if (!isNumber(s)) // verifie si c'est un chiffre .
            throw std::runtime_error("Error");
        long n = std::strtol(argv[i], NULL, 10);
        if (n < 0 || n > 2147483647) // overflow.
            throw std::runtime_error("Error");
        _vector.push_back(static_cast<int>(n)); //rempli le container.
        _deque.push_back(static_cast<int>(n));
    }
}

void PmergeMe::printSequence() const // print.
 {
    for (std::vector<int>::const_iterator it = _vector.begin(); it != _vector.end(); ++it) {
        std::cout << BLACK << *it << " ";
    }
    std::cout << std::endl;
}

// // void PmergeMe::mergeVector(std::vector<int>& vec, int left, int mid, int right) {
// //     std::vector<int> temp;
// //     int i = left, j = mid + 1;

// //     while (i <= mid && j <= right) {
// //         if (vec[i] <= vec[j])
// //             temp.push_back(vec[i++]);
// //         else
// //             temp.push_back(vec[j++]);
// //     }
// //     while (i <= mid)
// //         temp.push_back(vec[i++]);
// //     while (j <= right)
// //         temp.push_back(vec[j++]);
// //     for (int k = left; k <= right; ++k)
// //         vec[k] = temp[k - left];
// // }

// void PmergeMe::mergeInsertSortVector(std::vector<int>& vec, int left, int right) {
//     if (left >= right)
//         return;
//     int mid = (left + right) / 2;
//     mergeInsertSortVector(vec, left, mid);
//     mergeInsertSortVector(vec, mid + 1, right);
//     mergeVector(vec, left, mid, right);
// }

// void PmergeMe::mergeDeque(std::deque<int>& deq, int left, int mid, int right) {
//     std::deque<int> temp;
//     int i = left, j = mid + 1;

//     while (i <= mid && j <= right) {
//         if (deq[i] <= deq[j])
//             temp.push_back(deq[i++]);
//         else
//             temp.push_back(deq[j++]);
//     }
//     while (i <= mid)
//         temp.push_back(deq[i++]);
//     while (j <= right)
//         temp.push_back(deq[j++]);
//     for (int k = left; k <= right; ++k)
//         deq[k] = temp[k - left];
// }

// void PmergeMe::mergeInsertSortDeque(std::deque<int>& deq, int left, int right) {
//     if (left >= right)
//         return;
//     int mid = (left + right) / 2;
//     mergeInsertSortDeque(deq, left, mid);
//     mergeInsertSortDeque(deq, mid + 1, right);
//     mergeDeque(deq, left, mid, right);
// }

// void PmergeMe::process(int argc, char** argv) {
//     parseArguments(argc, argv);

//     printSequence("Before: ", _vector);

//     clock_t startVector = clock();
//     mergeInsertSortVector(_vector, 0, _vector.size() - 1);
//     clock_t endVector = clock();

//     clock_t startDeque = clock();
//     mergeInsertSortDeque(_deque, 0, _deque.size() - 1);
//     clock_t endDeque = clock();

//     printSequence("After: ", _vector);

//     double vectorTime = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC * 1000000;
//     double dequeTime = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC * 1000000;

//     std::cout << "Time to process a range of " << _vector.size()
//               << " elements with std::vector : " << vectorTime << " us" << std::endl;
//     std::cout << "Time to process a range of " << _deque.size()
//               << " elements with std::deque : " << dequeTime << " us" << std::endl;
// }



void PmergeMe::InsertVector(int start, int end)
{
    int key;
    int j;
    int tmp;
    for (int i = start + 1; i <= end; i++)   
    {
        key = _vector[i]; 
        j = i - 1; 
        while (j >= start && key < _vector[j]) 
        {
            tmp = _vector[j];
            _vector[j] = key; 
            _vector[j + 1] = tmp; 
            j--;
        }
    }
}

void PmergeMe::mergeVector(int start, int mid, int end) // trie deux sous partie trie, mais ils sont dans le meme vecteur.   1 2 6 9    3 4 5 7
{
    std::vector<int> final; // par exemple la en faire 3 coute plus de ressources, est-ce le plus efficient ?
    std::vector<int> right;
    std::vector<int> left;
    
    left.assign(_vector.begin() + start, _vector.begin() + mid + 1);
    right.assign(_vector.begin() + mid + 1, _vector.begin() + end + 1);

    std::cout << BLUE << "sous partie n1: " << std::endl;
    for (std::vector<int>::const_iterator it = left.begin(); it != left.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << GREEN << "sous partie n2: " << std::endl;

    for (std::vector<int>::const_iterator it = right.begin(); it != right.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::vector<int>::const_iterator itright = right.begin();
    std::vector<int>::const_iterator itleft = left.begin();
    while (itleft != left.end())
    {
        if (itright == right.end()) // dans le cas ou left est plus grand.
        {
            final.push_back(*itleft);
            itleft++;   
        }
        else if  (*itleft < *itright)
        {
            final.push_back(*itleft);
            itleft++;
        }
        else
        {
            final.push_back(*itright);
            itright++;
        }
    }
    while(itright != right.end()) // dans le cas ou right et plus grand.
    {
        final.push_back(*itright);
        itright++;   
    }
    _vector = final;
    printSequence();

    // cree deux vector temporaire. le vecteur trie gauche et le vecteur trie de droite.
    // while le vecteur gauche. // peu importe gauche ou droite.
    // comparaison, si l'un est plus petit, le mettre dans le vrai vecteur, et incrementer seulemement ce vecteur et continuer la comparaison.
    // jusqu'a la fin du vecteur gauche, ensuite s'il reste dans le vecteur droit, tout rajouter du vecteur droit.
    // le tester avec un la fonction affichage. // tester 2-3 cas l'un plus long que l'autre etc.    
}