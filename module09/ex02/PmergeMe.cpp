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
        std::cout << BLACK << it->first << " " << it->second << std::endl << RESET;
    }
    std::cout << std::endl;
}


void PmergeMe::process(int argc, char** argv) 
{ 
    parseArguments(argc, argv);
    std::vector<std::pair<int, int> > myPairs;
    std::vector<int> jacobjacob;
    std::deque<int> MINDEQ;
    std::deque<int> MAXDEQ;
    std::deque<int> jacobjacobDEQ;


    printSequence(_vector, "Before: ");
    
    clock_t startVector = clock();
    Compairvec(myPairs);
    SortVector(myPairs, 0, myPairs.size() - 1);
    printSequence(myPairs, "TESTMICRO1212");
    GenerateJacobsthal(myPairs, jacobjacob); 
    InsertJacob(myPairs,jacobjacob);
    clock_t endVector = clock();
   
   // printSequence(_vector, "After: ");

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
    

    jacobjacob.push_back(0);
    jacobjacob.push_back(1);
    jacobjacob.push_back(1);
    jacobjacob.push_back(3);
    jacobjacob.push_back(2);

    
    for (size_t i = 5; i <= myPairs.size() -1; i++) 
    {

        if (jacobjacob[i - 2] + 2 * jacobjacob[i - 4] <= (int)myPairs.size() - 1)
        {
            jacobjacob.push_back(jacobjacob[i - 2] + 2 * jacobjacob[i - 4]);
              //  if (i <= myPairs.size() - 2)  elle sers a r non ? si la ligne d'avant passe moi aussi je passe logique.
            jacobjacob.push_back(jacobjacob[i - 2] + 2 * jacobjacob[i - 4] - 1);
            i++;
        }
        else
            break;
    }

    i = 0;
    j = 0;
    while (i <= myPairs.size() - 1) 
    {
        while((int)i != jacobjacob[j])
        {
            if (j == jacobjacob.size() - 1)
            {
                jacobjacob.push_back(i);
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }
    jacobjacob.erase(jacobjacob.begin() , jacobjacob.begin() + 2);     
}
void PmergeMe::InsertJacob(std::vector<std::pair<int, int> > &myPairs, std::vector<int>& jacobjacob)
{

   // jacobsthal - 1 (c'est ca le vrai indice ici oublie pas)
    // find -> chercher le ak et comment le cherche tu peux utilise ta technique de son indice
   // du coup find en binaire et lowerbound en binaire, par binaire j'entend que tu fais une recherche avec tres peu de range.
   // le find j'ai bien reflechis, quand c'est un jacobsthal, du coup le chiffre personne ne s'est inserer derriere lui donc il equivaut a son indice+le nombre d'insertion je n'ai meme pas besoin de find je peut direct lowerbound, en ce qui concerne un jacobsthal -1, le probleme c'est que ya eu un jacob apres lui et on ne sait pas si son faible s'est inserer devant lui ce qui changerait son indice ou derriere lui ce qui ne changerait pas son indice. // du coup la relation pourrait etre ... 
   // pour le jacobsthal -1, on sait que son indice, a soit change de +nbrinsert-1 le -1 correspond au fait que le jacobsthal a pu inserer quelque chose derriere lui du coup ne pas bouger son indice, sois de +nbrinsert
    // pour le jacobsthal, le chiffre c'est indice = second[jacobsthal -1] + nbrinsert // et le jacobsthal -1 c'est indice = second[jacobsthal -1] + nbrinsert ou indice = second[jacobsthal -1] + nbrinsert-1
    // car le jacob il est l'indice le plus fort a etre inserer personne ne peut s'inserer derriere lui du coup son indice est clair c indice de base + nbrinsert
    // jacob-1, c'est qu'il a eu qu'un insert incertain, l'insert est sois plus fort que lui sois moins ce qui fais 2 possibilite nbrinsert ou nbrinsert-1
    // du coup jacob -> lowerbound direct jusqu'a trouver le bon indice car on peut ne pas le trouve en un lowerbound.
    // et le jacob -1 je ne sais pas encore comment le trouve. essayons sans comparaison est ce une comparaison de dire est ce que tu est egal a tel chose ?
    // apres lowerbound c'est fini? oui apres details de si ya 4 chiffre ect les cas speciaux et si tu gere ou non les doublons mais je dirais oui du coup si tu veux faire le test de la lignejuste au dessus.

    std::vector<int>::iterator it = jacobjacob.begin();

    while(it != jacobjacob.end())
    {
        // find le chiffre MAX correspondant a mon min[it] pour avoir ma range max de lowerbound. ainsi j'ai indicedefort-2 - indicedefort -1. (-1) possible ou pas ? tout depend de comment fonctionne lowerbound mais pour moi oui vu que s'il s'insere juste avant son max tu dis oui bah j'ai pas trouve du coup je tenvoie mon end.
        std::vector<int>::iterator pos = std::lower_bound(MAX.begin(), MAX.end(), MIN[*it]); // par contre s'il envoie begin, je vais devoir faire une autre comparaison avec lowerbound? comment savoir que begin c'est pas le bon finalement possible que begin sois directement la bonne comparaison.
        MAX.insert(pos, MIN[*it]);
        it++;
    }
    if (_impair &&  !_vector.empty())
    {
            std::vector<int>::iterator pos = std::lower_bound(MAX.begin(), MAX.end(),_vector[_vector.size() - 1]);
            MAX.insert(pos, _vector[_vector.size() - 1]);
    }
    _vector = MAX;
}


void PmergeMe::InsertDeq(std::deque<int>& vec,int start, int end)
{
    int key;
    int j;
    int tmp;
    for (int i = start + 1; i <= end; i++)   
    {
        key = vec[i]; 
        j = i - 1; 
        while (j >= start && key < vec[j]) 
        {
            tmp = vec[j];
            vec[j] = key; 
            vec[j + 1] = tmp; 
            j--;
        }
    }
}

void PmergeMe::MergeDeq(std::deque<int>& vec,int start, int mid, int end)
{
    std::deque<int> right;
    std::deque<int> left;

    
    left.assign(vec.begin() + start, vec.begin() + mid + 1);
    right.assign(vec.begin() + mid + 1, vec.begin() + end + 1);

    std::deque<int>::const_iterator itright = right.begin();
    std::deque<int>::const_iterator itleft = left.begin();
    while (itleft != left.end())
    {
        if (itright == right.end()) 
        {
            vec[start++] = *itleft ;
            itleft++;   
        }
        else if  (*itleft < *itright)
        {
            vec[start++] = *itleft ; 
           itleft++;
        }
        else
        {
            vec[start++] = *itright ;
            itright++;
        }
    }
    while(itright != right.end()) 
    {
        vec[start++] = *itright ;
        itright++;   
    }
}
void PmergeMe::SortDeq(std::deque<int>& vec, int start, int end)
{
    int mid = 0;
    if (start < end)
    {
        if (end - start <= 10)
            InsertDeq(vec, start,end);
        else 
        {   
            mid = start + ((end - start) / 2);
            SortDeq(vec, start, mid);
            SortDeq(vec, mid + 1, end);
            MergeDeq(vec, start, mid, end);
        }
    }
}

void PmergeMe::CompairDeq(std::deque<int>& MIN, std::deque<int>& MAX)
{
    
    int i = 0;
    size_t j = 1;
    if (_deque.size() % 2 != 0)
        _impair = 1;
    while (j < _deque.size()) 
    {
        if (_deque[i] < _deque[j])
        {
            MIN.push_back(_deque[i]);
            MAX.push_back(_deque[j]);
        }
        else
        {
            MAX.push_back(_deque[i]);
            MIN.push_back(_deque[j]);
        }
        j = j + 2;
        i = i + 2;
    }
}

void PmergeMe::GenerateJacobsthal(std::deque<int>& vec, std::deque<int>& jacobjacob) 
{
    size_t i;
    size_t j;
    

    jacobjacob.push_back(0);
    jacobjacob.push_back(1);

    for (size_t i = 2; i < vec.size() -1; i++) 
    {

        if (jacobjacob[i - 1] + 2 * jacobjacob[i - 2] < (int)vec.size() - 1)
            jacobjacob.push_back(jacobjacob[i - 1] + 2 * jacobjacob[i - 2]);
        else
            break;
        
    }
    jacobjacob.erase(jacobjacob.begin(), jacobjacob.begin() + 2);
    i = 0;
    j = 0;
    while (i <= vec.size() - 1) 
    {
        while((int)i != jacobjacob[j])
        {
            if (j == jacobjacob.size() - 1)
            {
                jacobjacob.push_back(i);
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }
}
void PmergeMe::InsertJacob(std::deque<int>& MAX, std::deque<int>& MIN, std::deque<int>& jacobjacob)
{
    std::deque<int>::iterator it = jacobjacob.begin();

    while(it != jacobjacob.end())
    {
        std::deque<int>::iterator pos = std::lower_bound(MAX.begin(), MAX.end(), MIN[*it]);
        MAX.insert(pos, MIN[*it]);
        it++;
    }
    if (_impair &&  !_deque.empty())
    {
            std::deque<int>::iterator pos = std::lower_bound(MAX.begin(), MAX.end(),_deque[_deque.size() - 1]);
            MAX.insert(pos, _deque[_deque.size() - 1]);
    }
    _deque = MAX;
}
