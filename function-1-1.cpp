//
//  function-1-1.cpp
//  
//
//  Created by Shea Cowan on 9/8/22.
//


#include <iostream>


void print_matrix(int array[10][10]){
    for (int i = 0; i< 10; i++){
        for (int j = 0l; j< 10; j++){
            std::cout<< array[i][j]<< " ";
        }
        std::cout<<std::endl;
    }

}
