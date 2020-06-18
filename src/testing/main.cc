#include<iostream>
#include<string>
#include<vector>


std::string VecToStr(std::vector<std::string> vecStr)
    {
        std::string retStr;
        for(auto a : vecStr){
            retStr += " " + a;
        };
        return retStr;
    }    

int main(int ac, char** av){

    std::vector<std::string> vecarr = {"Hello", "World", "I", "am", "Good"};
    std::cout << VecToStr(vecarr)<< std::endl;

    return 0;
}