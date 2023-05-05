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

    if (vct.size() > 2)
        A = sort(A);
    if (vct.size() == 1)
        return vct;

    for(int i = (B.size() - 1); i >= 0; i--)
    {
        PmergeMe::vector_type::iterator ita = A.begin(); 
        while ((ita + 1) != A.end() && *ita > B[i])
            ita++;
        A.insert(ita, B[i]);
    }
    return A;
}

PmergeMe::deque_type  PmergeMe::sort(PmergeMe::deque_type dqe)
{
    deque_type A;
    deque_type B;

    for (deque_type::iterator it = dqe.begin(); it != dqe.end(); it++)
    {
        if (it + 1 == dqe.end())
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

    if (dqe.size() > 2)
        A = sort(A);
    if (dqe.size() == 1)
        return dqe;

    for(int i = (B.size() - 1); i >= 0; i--)
    {
        PmergeMe::deque_type::iterator ita = A.begin(); 
        while ((ita + 1) != A.end() && *ita > B[i])
            ita++;
        A.insert(ita, B[i]);
    }
    return A;
}

bool    PmergeMe::sort()
{
    std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
    std::chrono::duration<double> vct_t;
    std::chrono::duration<double> dqe_t;

    if (_vct.size() > 1 || _dqe.size() > 1)
    {
        _vct = sort(_vct);
        std::chrono::system_clock::time_point mid = std::chrono::system_clock::now();
        vct_t = mid - start;
        _dqe = sort(_dqe);
        std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
        dqe_t = end - mid;
    }
    std::cout << "VCT) ";
    for(PmergeMe::vector_type::iterator it = _vct.begin(); it != _vct.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl << "DQE) ";
    for(PmergeMe::deque_type::iterator it = _dqe.begin(); it != _dqe.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(5);
    std::cout << "Vector time = "<< vct_t.count() << " us" << std::endl;
    std::cout << "Deque time = "<< dqe_t.count() << " us" << std::endl;
    return (std::is_sorted(_vct.rbegin(), _vct.rend()) && std::is_sorted(_dqe.rbegin(), _dqe.rend()));
}
