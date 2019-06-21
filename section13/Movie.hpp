//
//  Movie.hpp
//  section13
//
//  Created by MSys on 20/06/19.
//  Copyright © 2019 MSys. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>

#include <string>
using namespace std;
class Movie
{
private:
    string name;
    string rating;
    int watched;
public:
    // Constructor - 3 args
    Movie(string name, string rating, int watched);
    
    // copy consturctor
    Movie(const Movie &source);
    
    //Destructor
    ~Movie();
    
    void set_name(string name) { this->name = name;}
    string get_name() const {return name;}
    
    void set_rating(string rating) { this->rating = rating;}
    string get_rating() const { return rating;}
    
    void set_watched(int watched) { this->watched = watched;}
    int get_watched() const {return watched;}
    
    void increment_watched() {++watched;}
    
    void display()const;
};
#endif /* Movie_hpp */
