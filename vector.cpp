// implementation of vector algorithms

#include "vector.h"
#include <algorithm>

namespace ismk {

vector::vector() : size(0), data(nullptr) {}

vector::vector(std::size_t size, const float val) : size(size), data(size ? new float[size] : nullptr) {
    std::fill(data, data + size, val);
}

vector::vector(const vector &other) :
        size(other.size),
        data(size ? new float[size] : nullptr) {

}

vector::vector(vector &&other) : vector() {
    swap(*this, other);
}

vector &vector::operator=(vector other) {
    swap(*this, other);
    return *this;
}

vector::~vector() {
    delete[] data;
    data = nullptr;
}


void swap(vector &first, vector &second) {
    using std::swap;
    swap(first.size, second.size);
    swap(first.data, second.data);
}

}// namespace ismk
