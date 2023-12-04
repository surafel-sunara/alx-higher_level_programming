0x03-python-data_structures
0x03-python-data_structures




0-main.py


#!/usr/bin/python3

print_list_integer = __import__('0-print_list_integer').print_list_integer


my_list = [1, 2, 3, 4, 5]

print_list_integer(my_list)





0-print_list_integer.py


#!/usr/bin/python3

def print_list_integer(my_list=[]):

    for i in my_list:

        print("{:d}".format(i))





1-element_at.py


#!/usr/bin/python3

def element_at(my_list, idx):

    if idx < 0:

        return None

    elif idx >= len(my_list):

        return None

    return my_list[idx]





1-main.py


#!/usr/bin/python3

element_at = __import__('1-element_at').element_at


my_list = [1, 2, 3, 4, 5]

idx = 3

print("Element at index {:d} is {}".format(idx, element_at(my_list, idx)))






10-main.py


#!/usr/bin/python3

divisible_by_2 = __import__('10-divisible_by_2').divisible_by_2


my_list = [0, 1, 2, 3, 4, 5, 6]

list_result = divisible_by_2(my_list)


i = 0

while i < len(list_result):

    print("{:d} {:s} divisible by 2".format(my_list[i], "is" if list_result[i] else "is not"))

    i += 1






10-divisible_by_2.py


#!/usr/bin/python3

def divisible_by_2(my_list=[]):

    new_list = []

    if my_list:

        for num in my_list:

            new_list.append(False if num % 2 else True)

        return new_list






100-print_python_list_info.c


#include <stdlib.h>

#include <stdio.h>

#include <Python.h>

/**

 * print_python_list_info -  function that prints some basic

 *                                                        info about Python lists

 * @p: python list

 */

void print_python_list_info(PyObject *p)

{

        int elem;


        printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));

        printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);

        for (elem = 0; elem < Py_SIZE(p); elem++)

                printf("Element %d: %s\n", elem, Py_TYPE(PyList_GetItem(p, elem))->tp_name);

}
