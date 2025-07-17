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
