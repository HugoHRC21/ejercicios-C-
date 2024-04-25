//Crea una clase Libro que represente un libro. Utiliza punteros 
//para los atributos de título, autor y año de publicación. 
//Implementa métodos para establecer y obtener estos atributos del libro.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class book{
    private:
        char* titulo;
        char* author;
        int year;
    public:
        book();
        ~book();
        book(const char*,const char*,int);
        //get
        const char* getTitulo();
        const char* getAuthor();
        int getYear();
        //set
        bool setTitulo(char*);
        bool setAuthor(char*);
        bool setYear(int);
};

//construtor

book::book() {
    this -> titulo = new char[21]; // Considerando el fin de cadena /0
    this -> author = new char[21];
    this -> year = 2024;
}

book::~book() {
    delete[] this -> titulo;
    delete[] this -> author;
}

book::book(const char* _titulo, const char* _author, int _year){
    this -> titulo = const_cast<char*>(_titulo);
    this -> author = const_cast<char*>(_author);
    this -> year = _year;
}

//get
const char* book::getTitulo(){
    return this -> titulo;
}
//get
const char* book::getAuthor(){
    return this -> author;
}
//get
int book::getYear(){
    return this -> year;
}


// Set
bool book::setTitulo(char * titulo ) 
{
    return this -> titulo = titulo;
}
bool book::setAuthor( char * author) 
{
   return  this -> author = author;
}
bool book::setYear(int year) 
{
    return this -> year = year;
}


int main()
{
    // Default constructor
    book b = book();

    // Param constructor
    book b_p = book("Its on me", "Sandra Kuburic", 2021);


    cout << "Author: " << b.getAuthor() << endl;
    cout << "Title: " << b.getTitulo() << endl;
    cout << "Year: " << b.getYear() << endl;

    cout << "--------------" << endl;

    cout << "Author: " << b_p.getAuthor() << endl;
    cout << "Title: " << b_p.getTitulo() << endl;
    cout << "Year: " << b_p.getYear() << endl;




    return 0;
}

