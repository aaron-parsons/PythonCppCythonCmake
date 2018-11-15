# distutils: language = c++

cdef extern from "ClassWithArgument.h":
    cdef cppclass ClassWithArgument_c:
        ClassWithArgument_c(int) except +
        void do_something()
        void do_something_else()


cdef class ClassWithArgument:
    cdef ClassWithArgument_c *thisptr
    def __cinit__(self, int num):
        self.thisptr = new ClassWithArgument_c(num)

    def __dealloc__(self):
        del self.thisptr

    def do_something(self):
        self.thisptr.do_something()

    def do_something_else(self):
        self.thisptr.do_something_else()
