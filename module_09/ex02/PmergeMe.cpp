#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _vct(), _dqe() {};

PmergeMe::~PmergeMe() {};

PmergeMe::PmergeMe(char **argv)
{
    this->initialize(argv);
}

PmergeMe::PmergeMe(PmergeMe const &asg)
{
    *this = asg;
}

PmergeMe    &PmergeMe::operator=(PmergeMe const &asg)
{
    this->_vct = asg.getVector();
    this->_dqe = asg.getDeque();
    return *this;
}

PmergeMe::vector_type PmergeMe::getVector() const
{
    return this->_vct;
}

PmergeMe::deque_type  PmergeMe::getDeque() const
{
    return this->_dqe;
}

template<typename N>
std::string to_str(N nbr)
{
    std::ostringstream sstr;
    sstr << nbr;
    return sstr.str();
}

bool is_unsigned_int(std::string str)
{
    if (str[0] < '0' || str[0] > '9')
        return false;
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        if (*it < '0' || *it > '9')
            return false;
    }
    return true;
}

bool    PmergeMe::initialize(char **argv)
{
    for(int i = 1; argv[i] != NULL; i++)
    {
        //std::cout << "argv[" << i << "] = " << std::string(argv[i]) << std::endl;
        if (!is_unsigned_int(std::string(argv[i])))
            return false;
        this->_vct.push_back(stof(std::string(argv[i])));
        this->_dqe.push_back(stof(std::string(argv[i])));
    }
    return true;
}

PmergeMe::vector_type PmergeMe::sort(PmergeMe::vector_type vct)
{
    vector_type A;
    vector_type B;

    for (vector_type::iterator it = vct.begin(); it != vct.end(); it++)
    {
        if (it + 1 == vct.end())
            B.push_back(*it);
        else
        {
            if (*it > *(it + 1))
            {
                B.push_back(*(it++));
                A.push_back(*it);
            }
            else
            {
                A.push_back(*(it++));
                B.push_back(*it);
            }
        }
    }

    std::cout << "A) ";
    for(PmergeMe::vector_type::iterator it = A.begin(); it != A.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl << "B) ";
    for(PmergeMe::vector_type::iterator it = B.begin(); it != B.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    if (vct.size() > 2)
        A = sort(A);
    if (vct.size() == 1)
        return vct;
    else
    {
        int aux = A[1];
        if (A[0] > A[1])
        {
            A[1] = A[0];
            A[0] = aux;
        }
    }

    for(PmergeMe::vector_type::reverse_iterator itb = B.rbegin(); itb != B.rend(); itb++)
    {
        
    }


    return vct;
    
}

PmergeMe::deque_type  PmergeMe::sort(PmergeMe::deque_type dqe)
{
    return dqe;
}

bool    PmergeMe::sort()
{
    if (_vct.size() < 1 || _dqe.size() < 1)
        return false;
    _vct = sort(_vct);
    _dqe = sort(_dqe);
    return (std::is_sorted(_vct.begin(), _vct.end()) && std::is_sorted(_dqe.begin(), _dqe.end()));
}
