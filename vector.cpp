// implementation of vector algorithms

#include "vector.h"
#include <algorithm>

namespace ismk {

vector::vector() : m_size(0), m_data(nullptr) {}

vector::vector(std::size_t size, const float val) : m_size(size), m_data(size ? new float[size] : nullptr) {
    std::fill(m_data, m_data + size, val);
}

vector::vector(const vector &other) :
        m_size(other.m_size),
		m_data(m_size ? new float[m_size] : nullptr) {

}

vector::vector(vector &&other) : vector() {
    swap(*this, other);
}

vector &vector::operator=(vector other) {
    swap(*this, other);
    return *this;
}

vector::~vector() {
    delete[] m_data;
	m_data = nullptr;
}


std::size_t vector::size() const {
    return m_size;
}

void swap(vector &first, vector &second) {
    using std::swap;
    swap(first.m_size, second.m_size);
    swap(first.m_data, second.m_data);
}


}// namespace ismk
