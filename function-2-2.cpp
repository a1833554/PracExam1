//
//  function-2-2.cpp
//  
//
//  Created by Shea Cowan on 11/8/22.
//

#include <iostream>

    
int bin_to_int(int binary_digits[], int number_of_digits){

    int n = number_of_digits;
    int sum = 0;
    
    for (int i = 0; i <n; i++){
        sum = sum*2 +binary_digits[i];
        
    }
    std::cout << sum << std::endl;
    return 0;
    
}
    

