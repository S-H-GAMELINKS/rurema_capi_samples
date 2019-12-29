#include <ruby.h>

VALUE return_ll2num() {
    //long long i = 123LL;
    float i = 1.5;
    return LL2NUM(i);
}

VALUE return_dup_object(VALUE arg) {
    return rb_obj_dup(arg);
}

extern "C" {
    void Init_test() {
        rb_define_global_function("func", RUBY_METHOD_FUNC(return_ll2num), 0);
        rb_define_global_function("dup_obj", RUBY_METHOD_FUNC(return_dup_object), 1);
    }
}