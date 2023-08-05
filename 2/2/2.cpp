
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <list>




template<typename T>
void print_container(T& container)
{
    for (auto it = container.begin(); it != container.end(); it++)
    {
        if (it != container.begin()) std::cout << ", ";
        std::cout << *it;
    }
    std::cout << std::endl;
}


int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two. помните почему такой порядок? :)

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
    
}
