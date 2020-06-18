#include <app>
int main(int ac, char** av){
    releax::cli app;
    
    app.name("Sophia")
       .version(0.1)
       .release('a')
       .description("A Chatbot using ML and Python")
       .author("Pratyush Ratan", "ratan.pratyush@gmail.com","Developer")
       .main(sophia_main);

    return app.execute(ac, av);
}