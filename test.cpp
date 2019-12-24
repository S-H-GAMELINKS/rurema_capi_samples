#include <ruby.h>

VALUE return_ll2num() {
    long long i = 123LL;
    return LL2NUM(i);
}

extern "C" {
    void Init_test() {
        rb_define_global_function("func", RUBY_METHOD_FUNC(return_ll2num), 0);
    }
}