#ifndef ISMK_VECTOR_H
#define ISMK_VECTOR_H

#include <utility>

namespace ismk {

class vector {

public:
    vector();

    ~vector();

    vector(std::size_t size, float val = 0);

    vector(const vector &other);

    vector(vector &&other);

    vector &operator=(vector other);

    friend void swap(vector &first, vector &second);

private:

    std::size_t size;
    float *data;

};


// elementwise addtion
vector add(const vector &first, const vector &second);

// elementwise subtraction
vector sub(const vector &first, const vector &second);

// elementwise multiplication
vector mul(const vector &first, const vector &second);

// elementwise division
vector div(const vector &first, const vector &second);

// scale vector
vector scale(vector& v, const float s);

// add value
vector add(vector& v, const float s);

//dot product
float dot(const vector &first, const vector &second);

// L1 norm
float norm(const vector &first, const vector &second);

// L2 norm
float norm2(const vector &first, const vector &second);




} //namespace ismk

#endif // ISMK_VECTOR_H
