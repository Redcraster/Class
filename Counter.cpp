// Counter.cpp
#include "Counter.h"

Counter::Counter(int initial) : value(initial) {}

void Counter::increment() {
    value++;
}

void Counter::decrement() {
    value--;
}

int Counter::get_value() const {
    return value;
}
