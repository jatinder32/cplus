//
//  Movies.cpp
//  section13
//
//  Created by MSys on 20/06/19.
//  Copyright © 2019 MSys. All rights reserved.
//
#include <iostream>
#include "Movies.hpp"

Movies::Movies(){
}

Movies::~Movies(){
}

bool Movies::add_movie(string name, string rating, int watched) {
    for(const Movie &movie: movies){
        if(movie.get_name() == name)
            return false;
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    return true;
}

bool Movies::increment_watched(string name) {
    for(Movie &movie:movies) {
        if(movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    if(movies.size() == 0) {
        cout << "sorry no movies to dsiplay" << endl;
    } else {
        cout << "\n===================================\n";
        for(const auto &movie:movies)
            movie.display();
        cout << "\n===================================\n";
    }
}
