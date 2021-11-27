#ifndef MYPYC_NATIVE_INTERNAL_H
#define MYPYC_NATIVE_INTERNAL_H
#include <Python.h>
#include <CPy.h>
#include "__native.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[28];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern CPyModule *CPyModule_dice_internal;
extern CPyModule *CPyModule_dice;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins_internal;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_random_internal;
extern CPyModule *CPyModule_random;
extern CPyModule *CPyModule_itertools_internal;
extern CPyModule *CPyModule_itertools;
extern CPyModule *CPyModule_more_itertools_internal;
extern CPyModule *CPyModule_more_itertools;
extern PyTypeObject *CPyType_pair_sums_env;
extern PyObject *CPyDef_pair_sums_env(void);
extern PyTypeObject *CPyType_pair_sums_gen;
extern PyObject *CPyDef_pair_sums_gen(void);
extern PyObject *CPyDef_pair_sums_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
extern PyObject *CPyPy_pair_sums_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_pair_sums_gen_____next__(PyObject *cpy_r___mypyc_self__);
extern PyObject *CPyPy_pair_sums_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_pair_sums_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
extern PyObject *CPyPy_pair_sums_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_pair_sums_gen_____iter__(PyObject *cpy_r___mypyc_self__);
extern PyObject *CPyPy_pair_sums_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_pair_sums_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
extern PyObject *CPyPy_pair_sums_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_pair_sums_gen___close(PyObject *cpy_r___mypyc_self__);
extern PyObject *CPyPy_pair_sums_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_pair_sums(void);
extern PyObject *CPyPy_pair_sums(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_sum_ratios(void);
extern PyObject *CPyPy_sum_ratios(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_sums_from_dice(PyObject *cpy_r_dice);
extern PyObject *CPyPy_sums_from_dice(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_sum_n_dice(PyObject *cpy_r_n);
extern PyObject *CPyPy_sum_n_dice(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_dice_fight(PyObject *cpy_r_x, PyObject *cpy_r_y);
extern PyObject *CPyPy_dice_fight(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_dice_fight2(void);
extern PyObject *CPyPy_dice_fight2(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
