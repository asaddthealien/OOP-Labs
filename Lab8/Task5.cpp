#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title, pdate, uniqueID, publisher;
public:
    Media(string t, string pd, string id, string pub): title(t), pdate(pd), uniqueID(id), publisher(pub) {}

    virtual void displayInfo() {
        cout << "Title: " << title << "\nPublication Date: " << pdate << "\nID: " << uniqueID << "\nPublisher: " << publisher << endl;
    }

    void checkOut() { 
        cout << title << " checked out.\n"; 
    }
    void returnItem() { 
        cout << title << " returned.\n"; 
    }
};

class Book : public Media {
    string author, ISBN;
    int numberOfPages;
public:
    Book(string t, string pd, string id, string pub, string a, string isbn, int pages): Media(t, pd, id, pub), author(a), ISBN(isbn), numberOfPages(pages) {}

    void displayInfo() override {
        Media::displayInfo();
        cout << "Author: " << author << "\nISBN: " << ISBN  << "\nPages: " << numberOfPages << endl;
    }
};

class DVD : public Media {
    string director;
    int duration;
    float rating;
public:
    DVD(string t, string pd, string id, string pub, string dir, int dur, float rate) : Media(t, pd, id, pub), director(dir), duration(dur), rating(rate) {}

    void displayInfo() override {
        Media::displayInfo();
        cout << "Director: " << director << "\nDuration: " << duration << " min" << "\nRating: " << rating << endl;
    }
};

class CD : public Media {
    string artist, genre;
    int numberOfTracks;
public:
    CD(string t, string pd, string id, string pub, string art, string gen, int tracks): Media(t, pd, id, pub), artist(art), genre(gen), numberOfTracks(tracks) {}

    void displayInfo() override {
        Media::displayInfo();
        cout << "Artist: " << artist << "\nGenre: " << genre 
             << "\nTracks: " << numberOfTracks << endl;
    }
};

int main() {
    Book b("Homeless: A Tale of CS Majors", "2025", "B001", "TechPub", "John Doe", "12345XYZ", 350);
    DVD d("Dead Poets Society", "1989", "D001", "Touchstone Pictures", "Peter Weir", 128, 8.9);
    CD c("Kahin Main Pagal To Nahi", "2023", "C001", "Mehdi Maloof", "Mehdi Maloof", "Indie", 1);

    cout <<"Book Info"<<endl;
    b.displayInfo();
    b.checkOut();
    b.returnItem();

    cout << "DVD Info"<<endl;
    d.displayInfo();

    cout << "CD Info"<<endl;
    c.displayInfo();

    return 0;
}
