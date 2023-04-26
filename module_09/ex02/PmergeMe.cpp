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

bool    is_already_in(PmergeMe::vector_type vct, std::string str)
{
    for(PmergeMe::vector_type::iterator it = vct.begin(); it != vct.end(); it++)
    {
        if (*it == str)
            return true;
    }
    return false;
}

bool    PmergeMe::initialize(char **argv)
{
    for(int i = 1; argv[i] != NULL; i++)
    {
        //std::cout << "argv[" << i << "] = " << std::string(argv[i]) << std::endl;
        if (!is_unsigned_int(std::string(argv[i])) || is_already_in(this->_vct, std::string(argv[i])))
            return false;
        this->_vct.push_back(std::string(argv[i]));
        this->_dqe.push_back(std::string(argv[i]));
    }
    return true;
}