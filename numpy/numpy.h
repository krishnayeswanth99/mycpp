#ifndef __numpy
#define __numpy

#include <vector>

template<typename T>
class numpy_vector{
    protected:
        vector<T> values;
        typename T::dtype 
    void numpy_vector(vector<T> &v){
        values = v;
    }
    // numpy_vector operator + (numpy_vector const &obj){

    // }
}


#endif