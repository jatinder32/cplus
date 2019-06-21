//
//  Movie.cpp
//  section13
//
//  Created by MSys on 20/06/19.
//  Copyright © 2019 MSys. All rights reserved.
//
#include <iostream>
#include "Movie.hpp"

using namespace std;

Movie::Movie(string name, string rating, int watched)
    : name(name), rating(rating), watched(watched) {
    
}

Movie::Movie(const Movie &source)
:Movie{source.name, source.rating, source.watched} {
    
}

Movie::~Movie() {
    
}
void Movie::display() const {
    cout << name << "," << rating << "," << watched << endl;
}
