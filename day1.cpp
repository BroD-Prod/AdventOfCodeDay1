#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

int main(){
    std::fstream inputFile("adventofcodeday1example.txt");
    std::string line;
    int startingNum = 50;
    int roationsToZero = 0;
    
    while(std::getline(inputFile, line)){
        for(int i = 0; i < line.length(); i++){
            if(line[i] == 'R' || line[i] == 'L'){
                char direction = line[i];
                std::string numberStr = line.substr(i + 1);
                int value = std::stoi(numberStr);
                if(direction == 'R'){
                    startingNum += value;
                    std::cout << "postion" << startingNum << std::endl;
                    if(startingNum > 100){
                        startingNum %= 100;
                    }
                } else if(direction == 'L'){
                    startingNum -= value;
                    std::cout << "postion" << startingNum << std::endl;
                    if(startingNum < 0){
                        startingNum %= 100;
                }
            if(startingNum == 0){
                roationsToZero++;
            }
        }
    }
    }
    }
    std::cout << "Total rotations to zero: " << roationsToZero << std::endl;
    return 0;
}
