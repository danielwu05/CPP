#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Account {
    private:

        string password;


    public:

        int id;
        string username;

        void setPassword (string p) {
            password = p;
        }

        string getPassword () {
            return password;
        }
};

int main() {

    int opt;

    string p,u;

    Account newAccount;

    srand(time(0));


        do {
            cout << "Bem vindo ao programa \n1. criar conta \n2. entrar na conta \n3.esqueceu a senha \n4. sair do programa \nOpcao => ";
            cin >> opt;
            switch (opt) {
                case 1: {
                        cout << "\nCriar conta \n\nDigite seu usuario: ";
                        cin >> newAccount.username;
                        newAccount.id = rand() % 101;
                        cout << "\nDigite sua senha: ";
                        cin >> p;
                        newAccount.setPassword(p);

                        break;
                }

                case 2: {
                        cout << "\nEntrar na conta \n\nDigite seu usuario: ";
                        cin >> u;
                        if (newAccount.username != u) {
                            cout << "\nNao existe esse usuario no sistema!";
                        }
                        cout << "\nDigite sua senha: ";
                        cin >> p;
                        newAccount.setPassword(p);

                        break;
                }

            }
    }while(opt !=4);

    return 0;

}



