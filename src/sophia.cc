#include<sophia>


Sophia::Sophia(std::string config_file)

this->conf = releax::config(config_file);

void say(std::string line);
void listen(std::vector<std::string> args);
void learn(std::string ques, std::string ans);

