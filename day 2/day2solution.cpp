#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

int main() {
    std::fstream inputfile("day2input.txt");
    std::string line;
    int minRange, maxRange;
    std::vector<int> minRanges;
    std::vector<int> maxRanges;

    while(std::getline(inputfile, line)){
        std::istringstream iss(line);
        std::string token;
        while(iss >> token){
           size_t dashPos = token.find('-');
           if(dashPos != std::string::npos){
                minRange = std::stoi(token.substr(0, dashPos));
                maxRange = std::stoi(token.substr(dashPos + 1));
                minRanges.push_back(minRange);
                maxRanges.push_back(maxRange);
           }
        }
    }
    for(int i : minRanges){
        std::cout << i << std::endl;
    }
    for(int i : maxRanges){
        std::cout << i << std::endl;
    }
    return 0;
}