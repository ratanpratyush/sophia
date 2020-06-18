#include<iostream>
#include<string>
#include<vector>
#include<sstream>

std::string VecToStr(std::vector<std::string> vecStr)
    {
        std::string del = " ";
        std::string retStr;
        for(auto a : vecStr){
            retStr += del + a;
        };
        return retStr;

    }    

std::vector<std::string> StrToVec(std::string str){

    std::vector retVec;
    std::string curstr;
    std::stringstream ss(str);

    while (ss >> curstr) {
        retVec.push_back(curstr);
    }
    return retVec;

}

int main(int ac, char** av){

    std::vector<std::string> vecarr = {"Hello", "World", "I", "am", "Good"};
    std::cout << VecToStr(vecarr)<< std::endl;
    std::cout << StrToVec(str)<< std::endl;
    return 0;
}