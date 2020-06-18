#include<sophia>


Sophia::Sophia(std::string config_file)

this->conf = releax::config(config_file);

void say(std::string line);
void listen(std::vector<std::string> args);
void learn(std::string ques, std::string ans);

Sophia::VecToStr(std::vector<std::string> vecStr)
    {
        std::string del = " ";
        std::string retStr;
        for(auto a : vecStr){
            retStr += del + a;
        };
        return retStr;

    }    

Sophia::StrToVec(std::string str){

    std::vector<std::string> retVec;
    std::string curstr;
    std::stringstream ss(str);

    while (ss >> curstr) {
        retVec.push_back(curstr);
    }
    return retVec;
     
}
