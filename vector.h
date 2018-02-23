#ifndef ISMK_VECTOR_H
#define ISMK_VECTOR_H

#include <utility>

namespace ismk {

class  vector {

public:
vector();
~vector();
vector(std::size_t size, float val = 0);

vector(const vector& other);

vector(vector&& other);

vector& operator=(vector other);



friend void swap(vector& first, vector& second);

private:

std::size_t size;
float* data;

};



vector add (const vector& first, const vector& second);
vector sub (const vector& first, const vector& second);
vector mul (const vector& first, const vector& second);
vector div (const vector& first, const vector& second);

float dot(const vector& first, const vector& second);
float norm(const vector& first, const vector& second);
float norm2(const vector& first, const vector& second);



} //namespace ismk

#endif // ISMK_VECTOR_H
