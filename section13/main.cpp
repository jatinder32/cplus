//
//  main.cpp
//  section13
//
//  Created by MSys on 20/06/19.
//  Copyright © 2019 MSys. All rights reserved.
//

#include <iostream>
#include "Movies.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Movies my_movies;
    my_movies.display();
    my_movies.add_movie("Don", "PG", 4);
    my_movies.add_movie("Don2", "PG", 4);

    my_movies.display();

    std::cout << "Hello, World!\n";
    return 0;
}
