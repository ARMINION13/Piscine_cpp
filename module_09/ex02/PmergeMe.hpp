#ifndef _PMERGE_ME_
#define _PMERGE_ME_

#include <iostream>
#include <vector>
#include <deque>
#include <fstream>
#include <sstream>
#include <string>

class PmergeMe
{
    public:
        typedef std::vector<std::string> vector_type;
        typedef std::deque<std::string> deque_type;

    private:
        vector_type _vct;
        deque_type  _dqe;

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(char **argv);
        PmergeMe(PmergeMe const &asg);
        PmergeMe    &operator=(PmergeMe const &asg);

        vector_type getVector() const;
        deque_type  getDeque() const;
        bool        initialize(char **argv);
};

#endif