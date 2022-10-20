#include <iostream>
#include <iterator>
#include <map>
#include <vector>
#include <string>

int main() {
    std::vector<int> vector = {1, 2, 3, 4};

    std::vector<int>::iterator vector_itr;

    for(vector_itr = vector.begin(); vector_itr != vector.end(); vector_itr++) {
        std::cout << *vector_itr << " ";
    }

    std::cout << std::endl;

    std::map<std::string, int> container = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}};

    std::map<std::string, int>::iterator map_itr;

    for(map_itr = container.begin(); map_itr != container.end(); map_itr++) {
        std::cout << map_itr->first << " ";
    }


    return 0;
}
