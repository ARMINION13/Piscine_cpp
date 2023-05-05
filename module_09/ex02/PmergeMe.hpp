#ifndef _PMERGE_ME_
#define _PMERGE_ME_

#include <iostream>
#include <vector>
#include <deque>
#include <fstream>
#include <sstream>
#include <string>
#include <chrono>

class PmergeMe
{
    public:
        typedef std::vector<int> vector_type;
        typedef std::deque<int> deque_type;

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
        bool        sort();

    private:
        vector_type sort(vector_type vct);
        deque_type  sort(deque_type dqe);
};

#endif