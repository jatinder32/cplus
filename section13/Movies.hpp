//
//  Movies.hpp
//  section13
//
//  Created by MSys on 20/06/19.
//  Copyright © 2019 MSys. All rights reserved.
//

#ifndef Movies_hpp
#define Movies_hpp
#include <vector>
#include <string>
#include "Movie.hpp"

class Movies
{
private:
    vector<Movie> movies;
public:
    Movies();
    ~Movies();
    bool add_movie(string name, string rating, int watched);
    bool increment_watched(string name);
    
    void display() const;
};
#endif /* Movies_hpp */
