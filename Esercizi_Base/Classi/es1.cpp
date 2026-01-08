#include <iostream>
using namespace std;

class Utente{
    private : 
        string username;
        string password;
        string email;
    public:

    Utente(string username , string password , string email)  : email(email) , username(username) , password(password) {}

    Utente(const Utente& u) : email(u.email) , username(u.username) , password(u.password) {}

    Utente(){}

    string getUsername() const {return username;}
    string getPassword() const {return password;}
    string getEmail() const {return email;}

    void setUsername(string username){this->username = username;}
    void setEmail(string email){this->email = email;}
    void setPassword(string password){
        if(password.length() >= 8){
            this->password = password;
        }else{
            cout<<"Error"<<endl;
        }
    }

    void stampa(const Utente& u) const {
        cout<<"Username : "<<u.username<<" , email : "<<u.email<<" , password : "<<u.password<<endl;
    }
};

int main(){

    Utente utente ;
    utente.setUsername("Eugenio");
    utente.setEmail("eugenio@gmail.com");
    utente.setPassword("Euge");
    utente.stampa(utente);


    return 0;
}