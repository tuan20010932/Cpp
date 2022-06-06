
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<Book> books;
    Book book1();
    Book book2();
    Book book3();
    Book book4();
    Book book5();
    books.push_back(book1);
    books.push_back(book2);
    books.push_back(book3);
    books.push_back(book4);
    books.push_back(book5);
    
    Children children1;
    Children children2;
    Children children3;
    Adult adult1;
    Adult adult2;
    Adult adult3;

    vector<Person *> people;
    people.push_back(&children1);
    people.push_back(&children2);
    people.push_back(&children3);
    people.push_back(&adult1);
    people.push_back(&adult2);

    for(Person *person : people){
        person->display();
    }
}
