#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "str_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native.h"
#include "__native_internal.h"

static PyObject *pair_sums_env_setup(PyTypeObject *type);
PyObject *CPyDef_pair_sums_env(void);

static PyObject *
pair_sums_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_pair_sums_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return pair_sums_env_setup(type);
}

static int
pair_sums_env_traverse(dice___pair_sums_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->_perm);
    Py_VISIT(self->_dcombs);
    return 0;
}

static int
pair_sums_env_clear(dice___pair_sums_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->_perm);
    Py_CLEAR(self->_dcombs);
    return 0;
}

static void
pair_sums_env_dealloc(dice___pair_sums_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, pair_sums_env_dealloc)
    pair_sums_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem pair_sums_env_vtable[1];
static bool
CPyDef_pair_sums_env_trait_vtable_setup(void)
{
    CPyVTableItem pair_sums_env_vtable_scratch[] = {
        NULL
    };
    memcpy(pair_sums_env_vtable, pair_sums_env_vtable_scratch, sizeof(pair_sums_env_vtable));
    return 1;
}

static PyMethodDef pair_sums_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_pair_sums_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "pair_sums_env",
    .tp_new = pair_sums_env_new,
    .tp_dealloc = (destructor)pair_sums_env_dealloc,
    .tp_traverse = (traverseproc)pair_sums_env_traverse,
    .tp_clear = (inquiry)pair_sums_env_clear,
    .tp_methods = pair_sums_env_methods,
    .tp_basicsize = sizeof(dice___pair_sums_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_pair_sums_env_template = &CPyType_pair_sums_env_template_;

static PyObject *
pair_sums_env_setup(PyTypeObject *type)
{
    dice___pair_sums_envObject *self;
    self = (dice___pair_sums_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = pair_sums_env_vtable;
    self->___mypyc_self__ = NULL;
    self->_type = NULL;
    self->_value = NULL;
    self->_traceback = NULL;
    self->_arg = NULL;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__0 = NULL;
    self->___mypyc_temp__1 = NULL;
    self->_perm = NULL;
    self->_dcombs = NULL;
    return (PyObject *)self;
}

PyObject *CPyDef_pair_sums_env(void)
{
    PyObject *self = pair_sums_env_setup(CPyType_pair_sums_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *pair_sums_gen_setup(PyTypeObject *type);
PyObject *CPyDef_pair_sums_gen(void);

static PyObject *
pair_sums_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_pair_sums_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return pair_sums_gen_setup(type);
}

static int
pair_sums_gen_traverse(dice___pair_sums_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
pair_sums_gen_clear(dice___pair_sums_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
pair_sums_gen_dealloc(dice___pair_sums_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, pair_sums_gen_dealloc)
    pair_sums_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem pair_sums_gen_vtable[6];
static bool
CPyDef_pair_sums_gen_trait_vtable_setup(void)
{
    CPyVTableItem pair_sums_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_pair_sums_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_pair_sums_gen_____next__,
        (CPyVTableItem)CPyDef_pair_sums_gen___send,
        (CPyVTableItem)CPyDef_pair_sums_gen_____iter__,
        (CPyVTableItem)CPyDef_pair_sums_gen___throw,
        (CPyVTableItem)CPyDef_pair_sums_gen___close,
    };
    memcpy(pair_sums_gen_vtable, pair_sums_gen_vtable_scratch, sizeof(pair_sums_gen_vtable));
    return 1;
}

static PyMethodDef pair_sums_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_pair_sums_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_pair_sums_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_pair_sums_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_pair_sums_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_pair_sums_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_pair_sums_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_pair_sums_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "pair_sums_gen",
    .tp_new = pair_sums_gen_new,
    .tp_dealloc = (destructor)pair_sums_gen_dealloc,
    .tp_traverse = (traverseproc)pair_sums_gen_traverse,
    .tp_clear = (inquiry)pair_sums_gen_clear,
    .tp_methods = pair_sums_gen_methods,
    .tp_iternext = CPyDef_pair_sums_gen_____next__,
    .tp_iter = CPyDef_pair_sums_gen_____iter__,
    .tp_basicsize = sizeof(dice___pair_sums_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_pair_sums_gen_template = &CPyType_pair_sums_gen_template_;

static PyObject *
pair_sums_gen_setup(PyTypeObject *type)
{
    dice___pair_sums_genObject *self;
    self = (dice___pair_sums_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = pair_sums_gen_vtable;
    self->___mypyc_env__ = NULL;
    return (PyObject *)self;
}

PyObject *CPyDef_pair_sums_gen(void)
{
    PyObject *self = pair_sums_gen_setup(CPyType_pair_sums_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef module_methods[] = {
    {"pair_sums", (PyCFunction)CPyPy_pair_sums, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sum_ratios", (PyCFunction)CPyPy_sum_ratios, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sums_from_dice", (PyCFunction)CPyPy_sums_from_dice, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sum_n_dice", (PyCFunction)CPyPy_sum_n_dice, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dice_fight", (PyCFunction)CPyPy_dice_fight, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dice_fight2", (PyCFunction)CPyPy_dice_fight2, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "dice",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_dice(void)
{
    if (CPyModule_dice_internal) {
        Py_INCREF(CPyModule_dice_internal);
        return CPyModule_dice_internal;
    }
    CPyModule_dice_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_dice_internal == NULL))
        return NULL;
    PyObject *modname = PyObject_GetAttrString((PyObject *)CPyModule_dice_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_dice_internal);
    if (unlikely(CPyStatic_globals == NULL))
        return NULL;
    CPyType_pair_sums_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_pair_sums_env_template, NULL, modname);
    if (unlikely(!CPyType_pair_sums_env))
        return NULL;
    CPyType_pair_sums_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_pair_sums_gen_template, NULL, modname);
    if (unlikely(!CPyType_pair_sums_gen))
        return NULL;
    if (CPyGlobalsInit() < 0)
        return NULL;
    char result = CPyDef___top_level__();
    if (result == 2)
        return NULL;
    Py_DECREF(modname);
    return CPyModule_dice_internal;
}

PyObject *CPyDef_pair_sums_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T2OO cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T2OO cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    int64_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    int64_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
CPyL0: ;
    cpy_r_r0 = ((dice___pair_sums_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(((dice___pair_sums_genObject *)cpy_r___mypyc_self__)->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_env__' of 'pair_sums_gen' undefined");
    } else {
        CPy_INCREF(((dice___pair_sums_genObject *)cpy_r___mypyc_self__)->___mypyc_env__);
    }
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL43;
    }
CPyL1: ;
    cpy_r_r1 = ((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__ == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_next_label__' of 'pair_sums_env' undefined");
    } else {
        CPyTagged_IncRef(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL44;
    } else
        goto CPyL33;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL45;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL43;
    }
CPyL4: ;
    CPy_Unreachable();
CPyL5: ;
    PyErr_SetString(PyExc_RuntimeError, "mypyc internal error: should be unreachable");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("dice.py", "pair_sums", 10, CPyStatic_globals);
        goto CPyL44;
    }
CPyL6: ;
    cpy_r_r5 = Py_None;
    cpy_r_r6 = PyObject_GetIter(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 10, CPyStatic_globals);
        goto CPyL44;
    }
CPyL7: ;
    CPy_INCREF(cpy_r_r5);
    if (((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__0 != NULL) {
        CPy_DecRef(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__0);
    }
    ((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r5;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("dice.py", "pair_sums", -1, CPyStatic_globals);
        goto CPyL46;
    }
CPyL8: ;
    if (((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__1 != NULL) {
        CPy_DecRef(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__1);
    }
    ((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__1 = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("dice.py", "pair_sums", -1, CPyStatic_globals);
        goto CPyL44;
    }
CPyL9: ;
    cpy_r_r9 = ((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__1' of 'pair_sums_env' undefined");
    } else {
        CPy_INCREF(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_temp__1);
    }
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 10, CPyStatic_globals);
        goto CPyL44;
    }
CPyL10: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    CPy_DecRef(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL29;
CPyL11: ;
    if (((dice___pair_sums_envObject *)cpy_r_r0)->_perm != NULL) {
        CPy_DecRef(((dice___pair_sums_envObject *)cpy_r_r0)->_perm);
    }
    ((dice___pair_sums_envObject *)cpy_r_r0)->_perm = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("dice.py", "pair_sums", 10, CPyStatic_globals);
        goto CPyL44;
    }
CPyL12: ;
    cpy_r_r12 = CPyModule_more_itertools;
    cpy_r_r13 = CPyStatics[3]; /* 'distinct_combinations' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 11, CPyStatic_globals);
        goto CPyL44;
    }
CPyL13: ;
    cpy_r_r15 = ((dice___pair_sums_envObject *)cpy_r_r0)->_perm;
    if (unlikely(((dice___pair_sums_envObject *)cpy_r_r0)->_perm == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'perm' of 'pair_sums_env' undefined");
    } else {
        CPy_INCREF(((dice___pair_sums_envObject *)cpy_r_r0)->_perm);
    }
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 11, CPyStatic_globals);
        goto CPyL47;
    }
CPyL14: ;
    cpy_r_r16 = CPyTagged_StealAsObject(4);
    PyObject *cpy_r_r17[2] = {cpy_r_r15, cpy_r_r16};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r18, 2, 0);
    CPy_DecRef(cpy_r_r14);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 11, CPyStatic_globals);
        goto CPyL48;
    }
CPyL15: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    if (((dice___pair_sums_envObject *)cpy_r_r0)->_dcombs != NULL) {
        CPy_DecRef(((dice___pair_sums_envObject *)cpy_r_r0)->_dcombs);
    }
    ((dice___pair_sums_envObject *)cpy_r_r0)->_dcombs = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("dice.py", "pair_sums", 11, CPyStatic_globals);
        goto CPyL44;
    }
CPyL16: ;
    cpy_r_r21 = ((dice___pair_sums_envObject *)cpy_r_r0)->_perm;
    if (unlikely(((dice___pair_sums_envObject *)cpy_r_r0)->_perm == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'perm' of 'pair_sums_env' undefined");
    } else {
        CPy_INCREF(((dice___pair_sums_envObject *)cpy_r_r0)->_perm);
    }
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL44;
    }
CPyL17: ;
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[4]; /* 'sum' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL49;
    }
CPyL18: ;
    cpy_r_r25 = ((dice___pair_sums_envObject *)cpy_r_r0)->_dcombs;
    if (unlikely(((dice___pair_sums_envObject *)cpy_r_r0)->_dcombs == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dcombs' of 'pair_sums_env' undefined");
    } else {
        CPy_INCREF(((dice___pair_sums_envObject *)cpy_r_r0)->_dcombs);
    }
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL50;
    }
CPyL19: ;
    cpy_r_r26 = PySequence_List(cpy_r_r25);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL50;
    }
CPyL20: ;
    cpy_r_r27 = CPyModule_builtins;
    cpy_r_r28 = CPyStatics[5]; /* 'map' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL51;
    }
CPyL21: ;
    PyObject *cpy_r_r30[2] = {cpy_r_r24, cpy_r_r26};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 2, 0);
    CPy_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL51;
    }
CPyL22: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    cpy_r_r33 = PySequence_List(cpy_r_r32);
    CPy_DecRef(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL49;
    }
CPyL23: ;
    cpy_r_r34.f0 = cpy_r_r21;
    cpy_r_r34.f1 = cpy_r_r33;
    CPy_INCREF(cpy_r_r34.f0);
    CPy_INCREF(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r33);
    cpy_r_r35 = PyTuple_New(2);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r34.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp2);
    PyObject *__tmp3;
    if (unlikely(!(PyTuple_Check(cpy_r_r35) && PyTuple_GET_SIZE(cpy_r_r35) == 2))) {
        __tmp3 = NULL;
        goto __LL4;
    }
    __tmp3 = PyTuple_GET_ITEM(cpy_r_r35, 0);
    if (__tmp3 == NULL) goto __LL4;
    __tmp3 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    if (__tmp3 == NULL) goto __LL4;
    __tmp3 = cpy_r_r35;
__LL4: ;
    if (unlikely(__tmp3 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r35);
        cpy_r_r36 = tuple_undefined_T2OO;
    } else {
        PyObject *__tmp5 = PyTuple_GET_ITEM(cpy_r_r35, 0);
        CPy_INCREF(__tmp5);
        PyObject *__tmp6;
        __tmp6 = __tmp5;
        cpy_r_r36.f0 = __tmp6;
        PyObject *__tmp7 = PyTuple_GET_ITEM(cpy_r_r35, 1);
        CPy_INCREF(__tmp7);
        PyObject *__tmp8;
        __tmp8 = __tmp7;
        cpy_r_r36.f1 = __tmp8;
    }
    CPy_DecRef(cpy_r_r35);
    if (unlikely(cpy_r_r36.f0 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL44;
    }
CPyL24: ;
    cpy_r_r37 = PyTuple_New(2);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = cpy_r_r36.f0;
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp9);
    PyObject *__tmp10 = cpy_r_r36.f1;
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp10);
    if (((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DecRef(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r38 = 1;
    CPy_DecRef(cpy_r_r0);
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL52;
    }
CPyL25: ;
    return cpy_r_r37;
CPyL26: ;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r40 = cpy_r_type != cpy_r_r39;
    if (cpy_r_r40) {
        goto CPyL53;
    } else
        goto CPyL9;
CPyL27: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("dice.py", "pair_sums", 12, CPyStatic_globals);
        goto CPyL43;
    }
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r41 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("dice.py", "pair_sums", 10, CPyStatic_globals);
        goto CPyL44;
    }
CPyL30: ;
    cpy_r_r42 = Py_None;
    if (((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DecRef(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r43 = 1;
    CPy_DecRef(cpy_r_r0);
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL43;
    }
CPyL31: ;
    CPyGen_SetStopIterationValue(cpy_r_r42);
    if (!0) goto CPyL43;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r44 = cpy_r_r1 & 1;
    cpy_r_r45 = cpy_r_r44 == 0;
    if (!cpy_r_r45) goto CPyL35;
CPyL34: ;
    cpy_r_r46 = cpy_r_r1 == 0;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL36;
CPyL35: ;
    cpy_r_r48 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r47 = cpy_r_r48;
CPyL36: ;
    if (cpy_r_r47) goto CPyL54;
CPyL37: ;
    cpy_r_r49 = cpy_r_r1 & 1;
    cpy_r_r50 = cpy_r_r49 == 0;
    if (!cpy_r_r50) goto CPyL39;
CPyL38: ;
    cpy_r_r51 = cpy_r_r1 == 2;
    CPyTagged_DecRef(cpy_r_r1);
    cpy_r_r52 = cpy_r_r51;
    goto CPyL40;
CPyL39: ;
    cpy_r_r53 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DecRef(cpy_r_r1);
    cpy_r_r52 = cpy_r_r53;
CPyL40: ;
    if (cpy_r_r52) {
        goto CPyL26;
    } else
        goto CPyL55;
CPyL41: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL43;
    }
CPyL42: ;
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r55 = NULL;
    return cpy_r_r55;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL43;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL43;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL43;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL43;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL43;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL43;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    goto CPyL43;
CPyL52: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL43;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL27;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL41;
}

PyObject *CPyPy_pair_sums_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_pair_sums_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_pair_sums_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
CPyL0: ;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_pair_sums_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
CPyL1: ;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_pair_sums_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_pair_sums_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dice.pair_sums_gen", obj___mypyc_self__);
        arg___mypyc_self__ = NULL;
    }
    if (arg___mypyc_self__ == NULL) goto fail;
    PyObject *retval = CPyDef_pair_sums_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "__next__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_pair_sums_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
CPyL0: ;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_pair_sums_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
CPyL1: ;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_pair_sums_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_pair_sums_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dice.pair_sums_gen", obj___mypyc_self__);
        arg___mypyc_self__ = NULL;
    }
    if (arg___mypyc_self__ == NULL) goto fail;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_pair_sums_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "send", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_pair_sums_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
CPyL0: ;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_pair_sums_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_pair_sums_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dice.pair_sums_gen", obj___mypyc_self__);
        arg___mypyc_self__ = NULL;
    }
    if (arg___mypyc_self__ == NULL) goto fail;
    PyObject *retval = CPyDef_pair_sums_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "__iter__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_pair_sums_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
CPyL0: ;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
CPyL1: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
CPyL3: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_pair_sums_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
CPyL5: ;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_pair_sums_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_pair_sums_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dice.pair_sums_gen", obj___mypyc_self__);
        arg___mypyc_self__ = NULL;
    }
    if (arg___mypyc_self__ == NULL) goto fail;
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_pair_sums_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "throw", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_pair_sums_gen___close(PyObject *cpy_r___mypyc_self__) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
CPyL0: ;
    PyErr_SetString(PyExc_RuntimeError, "close method on generator classes unimplemented");
    cpy_r_r0 = 0;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    CPy_Unreachable();
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_pair_sums_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_pair_sums_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("dice.pair_sums_gen", obj___mypyc_self__);
        arg___mypyc_self__ = NULL;
    }
    if (arg___mypyc_self__ == NULL) goto fail;
    PyObject *retval = CPyDef_pair_sums_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "close", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_pair_sums(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
CPyL0: ;
    cpy_r_r0 = CPyDef_pair_sums_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL5;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef_pair_sums_gen();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL6;
    }
CPyL2: ;
    CPy_INCREF(cpy_r_r0);
    if (((dice___pair_sums_genObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DecRef(((dice___pair_sums_genObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((dice___pair_sums_genObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL7;
    }
CPyL3: ;
    if (((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DecRef(((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((dice___pair_sums_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r3 = 1;
    CPy_DecRef(cpy_r_r0);
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
        goto CPyL8;
    }
CPyL4: ;
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_pair_sums(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":pair_sums", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_pair_sums();
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "pair_sums", 9, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_sum_ratios(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_aux;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_psum;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_s;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_c;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_l;
    PyObject *cpy_r_r24;
    tuple_T3OOO cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
CPyL0: ;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 18, CPyStatic_globals);
        goto CPyL20;
    }
CPyL1: ;
    cpy_r_aux = cpy_r_r0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 19, CPyStatic_globals);
        goto CPyL21;
    }
CPyL2: ;
    cpy_r_res = cpy_r_r1;
    cpy_r_r2 = CPyDef_pair_sums();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 20, CPyStatic_globals);
        goto CPyL22;
    }
CPyL3: ;
    cpy_r_r3 = PyObject_GetIter(cpy_r_r2);
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 20, CPyStatic_globals);
        goto CPyL22;
    }
CPyL4: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL23;
CPyL5: ;
    cpy_r_psum = cpy_r_r4;
    cpy_r_r5 = CPyTagged_StealAsObject(2);
    cpy_r_r6 = PyObject_GetItem(cpy_r_psum, cpy_r_r5);
    CPy_DecRef(cpy_r_psum);
    CPy_DecRef(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 21, CPyStatic_globals);
        goto CPyL24;
    }
CPyL6: ;
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    CPy_DecRef(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 21, CPyStatic_globals);
        goto CPyL24;
    }
CPyL7: ;
    cpy_r_r8 = PyIter_Next(cpy_r_r7);
    if (cpy_r_r8 == NULL) goto CPyL25;
CPyL8: ;
    cpy_r_e = cpy_r_r8;
    cpy_r_r9 = CPyStatics[6]; /* 'append' */
    PyObject *cpy_r_r10[2] = {cpy_r_aux, cpy_r_e};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775810U, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 23, CPyStatic_globals);
        goto CPyL26;
    } else
        goto CPyL27;
CPyL9: ;
    CPy_DecRef(cpy_r_e);
    goto CPyL7;
CPyL10: ;
    cpy_r_r13 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 21, CPyStatic_globals);
        goto CPyL24;
    } else
        goto CPyL4;
CPyL11: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 20, CPyStatic_globals);
        goto CPyL22;
    }
CPyL12: ;
    cpy_r_r15 = 4;
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_r15);
    cpy_r_s = cpy_r_r16;
CPyL13: ;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)26;
    if (!cpy_r_r17) goto CPyL28;
CPyL14: ;
    cpy_r_r18 = CPyStatics[7]; /* 'count' */
    PyObject *cpy_r_r19[2] = {cpy_r_aux, cpy_r_s};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775810U, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 26, CPyStatic_globals);
        goto CPyL29;
    }
CPyL15: ;
    cpy_r_c = cpy_r_r21;
    cpy_r_r22 = CPyObject_Size(cpy_r_aux);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 27, CPyStatic_globals);
        goto CPyL30;
    }
CPyL16: ;
    cpy_r_r23 = CPyTagged_StealAsObject(cpy_r_r22);
    cpy_r_l = cpy_r_r23;
    cpy_r_r24 = PyNumber_TrueDivide(cpy_r_c, cpy_r_l);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 28, CPyStatic_globals);
        goto CPyL31;
    }
CPyL17: ;
    cpy_r_r25.f0 = cpy_r_c;
    cpy_r_r25.f1 = cpy_r_l;
    cpy_r_r25.f2 = cpy_r_r24;
    CPy_INCREF(cpy_r_r25.f0);
    CPy_INCREF(cpy_r_r25.f1);
    CPy_INCREF(cpy_r_r25.f2);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_l);
    CPy_DecRef(cpy_r_r24);
    cpy_r_r26 = PyTuple_New(3);
    if (unlikely(cpy_r_r26 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = cpy_r_r25.f0;
    PyTuple_SET_ITEM(cpy_r_r26, 0, __tmp11);
    PyObject *__tmp12 = cpy_r_r25.f1;
    PyTuple_SET_ITEM(cpy_r_r26, 1, __tmp12);
    PyObject *__tmp13 = cpy_r_r25.f2;
    PyTuple_SET_ITEM(cpy_r_r26, 2, __tmp13);
    cpy_r_r27 = PyObject_SetItem(cpy_r_res, cpy_r_s, cpy_r_r26);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("dice.py", "sum_ratios", 28, CPyStatic_globals);
        goto CPyL22;
    }
CPyL18: ;
    cpy_r_r29 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r29;
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_s = cpy_r_r30;
    goto CPyL13;
CPyL19: ;
    return cpy_r_res;
CPyL20: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL21: ;
    CPy_DecRef(cpy_r_aux);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_aux);
    CPy_DecRef(cpy_r_res);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL11;
CPyL24: ;
    CPy_DecRef(cpy_r_aux);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r3);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL10;
CPyL26: ;
    CPy_DecRef(cpy_r_aux);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_e);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL9;
CPyL28: ;
    CPy_DecRef(cpy_r_aux);
    CPy_DecRef(cpy_r_s);
    goto CPyL19;
CPyL29: ;
    CPy_DecRef(cpy_r_aux);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_s);
    goto CPyL20;
CPyL30: ;
    CPy_DecRef(cpy_r_aux);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_c);
    goto CPyL20;
CPyL31: ;
    CPy_DecRef(cpy_r_aux);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_c);
    CPy_DecRef(cpy_r_l);
    goto CPyL20;
}

PyObject *CPyPy_sum_ratios(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":sum_ratios", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_sum_ratios();
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "sum_ratios", 17, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_sums_from_dice(PyObject *cpy_r_dice) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[4]; /* 'sum' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("dice.py", "sums_from_dice", 36, CPyStatic_globals);
        goto CPyL8;
    }
CPyL1: ;
    cpy_r_r3 = CPyModule_more_itertools;
    cpy_r_r4 = CPyStatics[3]; /* 'distinct_combinations' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dice.py", "sums_from_dice", 36, CPyStatic_globals);
        goto CPyL9;
    }
CPyL2: ;
    cpy_r_r6 = CPyTagged_StealAsObject(4);
    PyObject *cpy_r_r7[2] = {cpy_r_dice, cpy_r_r6};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r8, 2, 0);
    CPy_DecRef(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("dice.py", "sums_from_dice", 36, CPyStatic_globals);
        goto CPyL10;
    }
CPyL3: ;
    CPy_DecRef(cpy_r_r6);
    cpy_r_r10 = PySequence_List(cpy_r_r9);
    CPy_DecRef(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dice.py", "sums_from_dice", 36, CPyStatic_globals);
        goto CPyL9;
    }
CPyL4: ;
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[5]; /* 'map' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dice.py", "sums_from_dice", 36, CPyStatic_globals);
        goto CPyL11;
    }
CPyL5: ;
    PyObject *cpy_r_r14[2] = {cpy_r_r2, cpy_r_r10};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 2, 0);
    CPy_DecRef(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dice.py", "sums_from_dice", 36, CPyStatic_globals);
        goto CPyL11;
    }
CPyL6: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r10);
    cpy_r_r17 = PySet_New(cpy_r_r16);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dice.py", "sums_from_dice", 36, CPyStatic_globals);
        goto CPyL8;
    }
CPyL7: ;
    return cpy_r_r17;
CPyL8: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r10);
    goto CPyL8;
}

PyObject *CPyPy_sums_from_dice(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dice", 0};
    static CPyArg_Parser parser = {"O:sums_from_dice", kwlist, 0};
    PyObject *obj_dice;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dice)) {
        return NULL;
    }
    PyObject *arg_dice = obj_dice;
    PyObject *retval = CPyDef_sums_from_dice(arg_dice);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "sums_from_dice", 35, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_sum_n_dice(PyObject *cpy_r_n) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r__;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
CPyL0: ;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL14;
    }
CPyL1: ;
    cpy_r_r1 = 0;
    CPyTagged_IncRef(cpy_r_r1);
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r__ = cpy_r_r2;
    CPy_DecRef(cpy_r__);
CPyL2: ;
    CPyTagged_IncRef(cpy_r_r1);
    cpy_r_r3 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r3, cpy_r_n, 0);
    CPy_DecRef(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL15;
    }
CPyL3: ;
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL15;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL16;
CPyL5: ;
    cpy_r_r8 = CPyModule_random;
    cpy_r_r9 = CPyStatics[8]; /* 'choice' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL15;
    }
CPyL6: ;
    cpy_r_r11 = CPyStatic_globals;
    cpy_r_r12 = CPyStatics[9]; /* 'dice' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL17;
    }
CPyL7: ;
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeError("list", cpy_r_r13);
        cpy_r_r14 = NULL;
    }
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL17;
    }
CPyL8: ;
    PyObject *cpy_r_r15[1] = {cpy_r_r14};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r16, 1, 0);
    CPy_DecRef(cpy_r_r10);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL18;
    }
CPyL9: ;
    CPy_DecRef(cpy_r_r14);
    cpy_r_r18 = PyList_Append(cpy_r_r0, cpy_r_r17);
    CPy_DecRef(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL15;
    }
CPyL10: ;
    cpy_r_r20 = CPyTagged_Add(cpy_r_r1, 2);
    CPyTagged_DecRef(cpy_r_r1);
    CPyTagged_IncRef(cpy_r_r20);
    cpy_r_r1 = cpy_r_r20;
    cpy_r_r21 = CPyTagged_StealAsObject(cpy_r_r20);
    cpy_r__ = cpy_r_r21;
    CPy_DecRef(cpy_r__);
    goto CPyL2;
CPyL11: ;
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[4]; /* 'sum' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL19;
    }
CPyL12: ;
    PyObject *cpy_r_r25[1] = {cpy_r_r0};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("dice.py", "sum_n_dice", 44, CPyStatic_globals);
        goto CPyL19;
    }
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    return cpy_r_r27;
CPyL14: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r1);
    goto CPyL14;
CPyL16: ;
    CPyTagged_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r14);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
}

PyObject *CPyPy_sum_n_dice(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:sum_n_dice", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_n)) {
        return NULL;
    }
    PyObject *arg_n = obj_n;
    PyObject *retval = CPyDef_sum_n_dice(arg_n);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "sum_n_dice", 43, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_dice_fight(PyObject *cpy_r_x, PyObject *cpy_r_y) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_xwins;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_ywins;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r__;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_xsum;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_ysum;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
CPyL0: ;
    cpy_r_r0 = CPyTagged_StealAsObject(0);
    cpy_r_xwins = cpy_r_r0;
    cpy_r_r1 = CPyTagged_StealAsObject(0);
    cpy_r_ywins = cpy_r_r1;
    cpy_r_r2 = 0;
    cpy_r_r3 = CPyTagged_StealAsObject(cpy_r_r2);
    cpy_r__ = cpy_r_r3;
    CPy_DecRef(cpy_r__);
CPyL1: ;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)20000000;
    if (!cpy_r_r4) goto CPyL18;
CPyL2: ;
    cpy_r_r5 = CPyDef_sum_n_dice(cpy_r_x);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 52, CPyStatic_globals);
        goto CPyL28;
    }
CPyL3: ;
    cpy_r_xsum = cpy_r_r5;
    cpy_r_r6 = CPyDef_sum_n_dice(cpy_r_y);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 53, CPyStatic_globals);
        goto CPyL29;
    }
CPyL4: ;
    cpy_r_ysum = cpy_r_r6;
    cpy_r_r7 = PyObject_RichCompare(cpy_r_xsum, cpy_r_ysum, 4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 55, CPyStatic_globals);
        goto CPyL30;
    }
CPyL5: ;
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DecRef(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("dice.py", "dice_fight", 55, CPyStatic_globals);
        goto CPyL30;
    }
CPyL6: ;
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL9;
CPyL7: ;
    cpy_r_r11 = CPyTagged_StealAsObject(2);
    cpy_r_r12 = PyNumber_InPlaceAdd(cpy_r_xwins, cpy_r_r11);
    CPy_DecRef(cpy_r_xwins);
    CPy_DecRef(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 56, CPyStatic_globals);
        goto CPyL31;
    }
CPyL8: ;
    cpy_r_xwins = cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = PyObject_RichCompare(cpy_r_xsum, cpy_r_ysum, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 57, CPyStatic_globals);
        goto CPyL30;
    }
CPyL10: ;
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("dice.py", "dice_fight", 57, CPyStatic_globals);
        goto CPyL30;
    }
CPyL11: ;
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL14;
CPyL12: ;
    cpy_r_r17 = CPyTagged_StealAsObject(2);
    cpy_r_r18 = PyNumber_InPlaceAdd(cpy_r_ywins, cpy_r_r17);
    CPy_DecRef(cpy_r_ywins);
    CPy_DecRef(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 58, CPyStatic_globals);
        goto CPyL32;
    }
CPyL13: ;
    cpy_r_ywins = cpy_r_r18;
CPyL14: ;
    cpy_r_r19 = PyObject_RichCompare(cpy_r_xsum, cpy_r_ysum, 2);
    CPy_DecRef(cpy_r_xsum);
    CPy_DecRef(cpy_r_ysum);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 59, CPyStatic_globals);
        goto CPyL28;
    }
CPyL15: ;
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r19);
    CPy_DecRef(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("dice.py", "dice_fight", 59, CPyStatic_globals);
        goto CPyL28;
    }
CPyL16: ;
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL17;
CPyL17: ;
    cpy_r_r23 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r23;
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r23);
    cpy_r__ = cpy_r_r24;
    CPy_DecRef(cpy_r__);
    goto CPyL1;
CPyL18: ;
    cpy_r_r25 = CPyStatics[10]; /* '' */
    cpy_r_r26 = CPyStatics[11]; /* 'xwins = ' */
    cpy_r_r27 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r28 = CPyStatics[10]; /* '' */
    cpy_r_r29 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r30[3] = {cpy_r_r27, cpy_r_xwins, cpy_r_r28};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r29, cpy_r_r31, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL28;
    }
CPyL19: ;
    cpy_r_r33 = CPyStatics[14]; /* ' ywins = ' */
    cpy_r_r34 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r35 = CPyStatics[10]; /* '' */
    cpy_r_r36 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r37[3] = {cpy_r_r34, cpy_r_ywins, cpy_r_r35};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_VectorcallMethod(cpy_r_r36, cpy_r_r38, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL33;
    }
CPyL20: ;
    cpy_r_r40 = CPyStatics[15]; /* ' ratio = ' */
    cpy_r_r41 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r42 = PyNumber_TrueDivide(cpy_r_xwins, cpy_r_ywins);
    CPy_DecRef(cpy_r_xwins);
    CPy_DecRef(cpy_r_ywins);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL34;
    }
CPyL21: ;
    cpy_r_r43 = CPyStatics[10]; /* '' */
    cpy_r_r44 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r45[3] = {cpy_r_r41, cpy_r_r42, cpy_r_r43};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = PyObject_VectorcallMethod(cpy_r_r44, cpy_r_r46, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL35;
    }
CPyL22: ;
    CPy_DecRef(cpy_r_r42);
    cpy_r_r48 = PyList_New(6);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL36;
    }
CPyL23: ;
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    CPy_INCREF(cpy_r_r26);
    *(PyObject * *)cpy_r_r50 = cpy_r_r26;
    cpy_r_r51 = cpy_r_r50 + 8;
    *(PyObject * *)cpy_r_r51 = cpy_r_r32;
    cpy_r_r52 = cpy_r_r50 + 16;
    CPy_INCREF(cpy_r_r33);
    *(PyObject * *)cpy_r_r52 = cpy_r_r33;
    cpy_r_r53 = cpy_r_r50 + 24;
    *(PyObject * *)cpy_r_r53 = cpy_r_r39;
    cpy_r_r54 = cpy_r_r50 + 32;
    CPy_INCREF(cpy_r_r40);
    *(PyObject * *)cpy_r_r54 = cpy_r_r40;
    cpy_r_r55 = cpy_r_r50 + 40;
    *(PyObject * *)cpy_r_r55 = cpy_r_r47;
    cpy_r_r56 = PyUnicode_Join(cpy_r_r25, cpy_r_r48);
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL27;
    }
CPyL24: ;
    cpy_r_r57 = CPyModule_builtins;
    cpy_r_r58 = CPyStatics[16]; /* 'print' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL37;
    }
CPyL25: ;
    PyObject *cpy_r_r60[1] = {cpy_r_r56};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = _PyObject_Vectorcall(cpy_r_r59, cpy_r_r61, 1, 0);
    CPy_DecRef(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight", 62, CPyStatic_globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL26: ;
    CPy_DecRef(cpy_r_r56);
    cpy_r_r63 = Py_None;
    CPy_INCREF(cpy_r_r63);
    return cpy_r_r63;
CPyL27: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL28: ;
    CPy_DecRef(cpy_r_xwins);
    CPy_DecRef(cpy_r_ywins);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_xwins);
    CPy_DecRef(cpy_r_ywins);
    CPy_DecRef(cpy_r_xsum);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_xwins);
    CPy_DecRef(cpy_r_ywins);
    CPy_DecRef(cpy_r_xsum);
    CPy_DecRef(cpy_r_ysum);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_ywins);
    CPy_DecRef(cpy_r_xsum);
    CPy_DecRef(cpy_r_ysum);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_xwins);
    CPy_DecRef(cpy_r_xsum);
    CPy_DecRef(cpy_r_ysum);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_xwins);
    CPy_DecRef(cpy_r_ywins);
    CPy_DecRef(cpy_r_r32);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r39);
    goto CPyL27;
CPyL35: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    goto CPyL27;
CPyL36: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r47);
    goto CPyL27;
CPyL37: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL27;
CPyL38: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL26;
}

PyObject *CPyPy_dice_fight(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", "y", 0};
    static CPyArg_Parser parser = {"OO:dice_fight", kwlist, 0};
    PyObject *obj_x;
    PyObject *obj_y;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_x, &obj_y)) {
        return NULL;
    }
    PyObject *arg_x = obj_x;
    PyObject *arg_y = obj_y;
    PyObject *retval = CPyDef_dice_fight(arg_x, arg_y);
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "dice_fight", 48, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_dice_fight2(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_two_wins;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_three_wins;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_draws;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_two;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_three;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject **cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    CPyPtr cpy_r_r105;
    CPyPtr cpy_r_r106;
    CPyPtr cpy_r_r107;
    CPyPtr cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject **cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_total;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject **cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject **cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    CPyPtr cpy_r_r146;
    CPyPtr cpy_r_r147;
    CPyPtr cpy_r_r148;
    CPyPtr cpy_r_r149;
    CPyPtr cpy_r_r150;
    CPyPtr cpy_r_r151;
    CPyPtr cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
CPyL0: ;
    cpy_r_r0 = CPyTagged_StealAsObject(0);
    cpy_r_two_wins = cpy_r_r0;
    cpy_r_r1 = CPyTagged_StealAsObject(0);
    cpy_r_three_wins = cpy_r_r1;
    cpy_r_r2 = CPyTagged_StealAsObject(0);
    cpy_r_draws = cpy_r_r2;
    cpy_r_r3 = CPyStatic_globals;
    cpy_r_r4 = CPyStatics[17]; /* 'all_twos' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 73, CPyStatic_globals);
        goto CPyL60;
    }
CPyL1: ;
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeError("list", cpy_r_r5);
        cpy_r_r6 = NULL;
    }
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 73, CPyStatic_globals);
        goto CPyL60;
    }
CPyL2: ;
    cpy_r_r7 = 0;
CPyL3: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL61;
CPyL4: ;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(PyTuple_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeError("tuple", cpy_r_r12);
        cpy_r_r13 = NULL;
    }
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 73, CPyStatic_globals);
        goto CPyL62;
    }
CPyL5: ;
    cpy_r_two = cpy_r_r13;
    cpy_r_r14 = CPyStatic_globals;
    cpy_r_r15 = CPyStatics[18]; /* 'all_threes' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 74, CPyStatic_globals);
        goto CPyL63;
    }
CPyL6: ;
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeError("list", cpy_r_r16);
        cpy_r_r17 = NULL;
    }
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 74, CPyStatic_globals);
        goto CPyL63;
    }
CPyL7: ;
    cpy_r_r18 = 0;
CPyL8: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL64;
CPyL9: ;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r18);
    if (likely(PyTuple_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeError("tuple", cpy_r_r23);
        cpy_r_r24 = NULL;
    }
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 74, CPyStatic_globals);
        goto CPyL65;
    }
CPyL10: ;
    cpy_r_three = cpy_r_r24;
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[4]; /* 'sum' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 75, CPyStatic_globals);
        goto CPyL66;
    }
CPyL11: ;
    PyObject *cpy_r_r28[1] = {cpy_r_two};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 75, CPyStatic_globals);
        goto CPyL66;
    }
CPyL12: ;
    cpy_r_r31 = CPyModule_builtins;
    cpy_r_r32 = CPyStatics[4]; /* 'sum' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 75, CPyStatic_globals);
        goto CPyL67;
    }
CPyL13: ;
    PyObject *cpy_r_r34[1] = {cpy_r_three};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    CPy_DecRef(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 75, CPyStatic_globals);
        goto CPyL67;
    }
CPyL14: ;
    cpy_r_r37 = PyObject_RichCompare(cpy_r_r30, cpy_r_r36, 4);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 75, CPyStatic_globals);
        goto CPyL66;
    }
CPyL15: ;
    cpy_r_r38 = PyObject_IsTrue(cpy_r_r37);
    CPy_DecRef(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 75, CPyStatic_globals);
        goto CPyL66;
    }
CPyL16: ;
    cpy_r_r40 = cpy_r_r38;
    if (!cpy_r_r40) goto CPyL19;
CPyL17: ;
    cpy_r_r41 = CPyTagged_StealAsObject(2);
    cpy_r_r42 = PyNumber_InPlaceAdd(cpy_r_two_wins, cpy_r_r41);
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 76, CPyStatic_globals);
        goto CPyL68;
    }
CPyL18: ;
    cpy_r_two_wins = cpy_r_r42;
CPyL19: ;
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[4]; /* 'sum' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 77, CPyStatic_globals);
        goto CPyL66;
    }
CPyL20: ;
    PyObject *cpy_r_r46[1] = {cpy_r_two};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DecRef(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 77, CPyStatic_globals);
        goto CPyL66;
    }
CPyL21: ;
    cpy_r_r49 = CPyModule_builtins;
    cpy_r_r50 = CPyStatics[4]; /* 'sum' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 77, CPyStatic_globals);
        goto CPyL69;
    }
CPyL22: ;
    PyObject *cpy_r_r52[1] = {cpy_r_three};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DecRef(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 77, CPyStatic_globals);
        goto CPyL69;
    }
CPyL23: ;
    cpy_r_r55 = PyObject_RichCompare(cpy_r_r48, cpy_r_r54, 0);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 77, CPyStatic_globals);
        goto CPyL66;
    }
CPyL24: ;
    cpy_r_r56 = PyObject_IsTrue(cpy_r_r55);
    CPy_DecRef(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 77, CPyStatic_globals);
        goto CPyL66;
    }
CPyL25: ;
    cpy_r_r58 = cpy_r_r56;
    if (!cpy_r_r58) goto CPyL28;
CPyL26: ;
    cpy_r_r59 = CPyTagged_StealAsObject(2);
    cpy_r_r60 = PyNumber_InPlaceAdd(cpy_r_three_wins, cpy_r_r59);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 78, CPyStatic_globals);
        goto CPyL70;
    }
CPyL27: ;
    cpy_r_three_wins = cpy_r_r60;
CPyL28: ;
    cpy_r_r61 = CPyModule_builtins;
    cpy_r_r62 = CPyStatics[4]; /* 'sum' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 79, CPyStatic_globals);
        goto CPyL66;
    }
CPyL29: ;
    PyObject *cpy_r_r64[1] = {cpy_r_two};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DecRef(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 79, CPyStatic_globals);
        goto CPyL66;
    }
CPyL30: ;
    cpy_r_r67 = CPyModule_builtins;
    cpy_r_r68 = CPyStatics[4]; /* 'sum' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 79, CPyStatic_globals);
        goto CPyL71;
    }
CPyL31: ;
    PyObject *cpy_r_r70[1] = {cpy_r_three};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = _PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, 0);
    CPy_DecRef(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 79, CPyStatic_globals);
        goto CPyL71;
    }
CPyL32: ;
    CPy_DecRef(cpy_r_three);
    cpy_r_r73 = PyObject_RichCompare(cpy_r_r66, cpy_r_r72, 2);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 79, CPyStatic_globals);
        goto CPyL65;
    }
CPyL33: ;
    cpy_r_r74 = PyObject_IsTrue(cpy_r_r73);
    CPy_DecRef(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 79, CPyStatic_globals);
        goto CPyL65;
    }
CPyL34: ;
    cpy_r_r76 = cpy_r_r74;
    if (!cpy_r_r76) goto CPyL37;
CPyL35: ;
    cpy_r_r77 = CPyTagged_StealAsObject(2);
    cpy_r_r78 = PyNumber_InPlaceAdd(cpy_r_draws, cpy_r_r77);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 80, CPyStatic_globals);
        goto CPyL72;
    }
CPyL36: ;
    cpy_r_draws = cpy_r_r78;
CPyL37: ;
    cpy_r_r79 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r79;
    goto CPyL8;
CPyL38: ;
    cpy_r_r80 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r80;
    goto CPyL3;
CPyL39: ;
    cpy_r_r81 = CPyStatics[10]; /* '' */
    cpy_r_r82 = CPyStatics[19]; /* 'two_wins: ' */
    cpy_r_r83 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r84 = CPyStatics[10]; /* '' */
    cpy_r_r85 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r86[3] = {cpy_r_r83, cpy_r_two_wins, cpy_r_r84};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = PyObject_VectorcallMethod(cpy_r_r85, cpy_r_r87, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 82, CPyStatic_globals);
        goto CPyL60;
    }
CPyL40: ;
    cpy_r_r89 = CPyStatics[20]; /* ' three_wins: ' */
    cpy_r_r90 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r91 = CPyStatics[10]; /* '' */
    cpy_r_r92 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r93[3] = {cpy_r_r90, cpy_r_three_wins, cpy_r_r91};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = PyObject_VectorcallMethod(cpy_r_r92, cpy_r_r94, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 82, CPyStatic_globals);
        goto CPyL73;
    }
CPyL41: ;
    cpy_r_r96 = CPyStatics[21]; /* ' draws: ' */
    cpy_r_r97 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r98 = CPyStatics[10]; /* '' */
    cpy_r_r99 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r100[3] = {cpy_r_r97, cpy_r_draws, cpy_r_r98};
    cpy_r_r101 = (PyObject **)&cpy_r_r100;
    cpy_r_r102 = PyObject_VectorcallMethod(cpy_r_r99, cpy_r_r101, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 82, CPyStatic_globals);
        goto CPyL74;
    }
CPyL42: ;
    cpy_r_r103 = PyList_New(6);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 82, CPyStatic_globals);
        goto CPyL75;
    }
CPyL43: ;
    cpy_r_r104 = (CPyPtr)&((PyListObject *)cpy_r_r103)->ob_item;
    cpy_r_r105 = *(CPyPtr *)cpy_r_r104;
    CPy_INCREF(cpy_r_r82);
    *(PyObject * *)cpy_r_r105 = cpy_r_r82;
    cpy_r_r106 = cpy_r_r105 + 8;
    *(PyObject * *)cpy_r_r106 = cpy_r_r88;
    cpy_r_r107 = cpy_r_r105 + 16;
    CPy_INCREF(cpy_r_r89);
    *(PyObject * *)cpy_r_r107 = cpy_r_r89;
    cpy_r_r108 = cpy_r_r105 + 24;
    *(PyObject * *)cpy_r_r108 = cpy_r_r95;
    cpy_r_r109 = cpy_r_r105 + 32;
    CPy_INCREF(cpy_r_r96);
    *(PyObject * *)cpy_r_r109 = cpy_r_r96;
    cpy_r_r110 = cpy_r_r105 + 40;
    *(PyObject * *)cpy_r_r110 = cpy_r_r102;
    cpy_r_r111 = PyUnicode_Join(cpy_r_r81, cpy_r_r103);
    CPy_DecRef(cpy_r_r103);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 82, CPyStatic_globals);
        goto CPyL60;
    }
CPyL44: ;
    cpy_r_r112 = CPyModule_builtins;
    cpy_r_r113 = CPyStatics[16]; /* 'print' */
    cpy_r_r114 = CPyObject_GetAttr(cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 82, CPyStatic_globals);
        goto CPyL76;
    }
CPyL45: ;
    PyObject *cpy_r_r115[1] = {cpy_r_r111};
    cpy_r_r116 = (PyObject **)&cpy_r_r115;
    cpy_r_r117 = _PyObject_Vectorcall(cpy_r_r114, cpy_r_r116, 1, 0);
    CPy_DecRef(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 82, CPyStatic_globals);
        goto CPyL76;
    } else
        goto CPyL77;
CPyL46: ;
    CPy_DecRef(cpy_r_r111);
    cpy_r_r118 = PyNumber_Add(cpy_r_two_wins, cpy_r_three_wins);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 83, CPyStatic_globals);
        goto CPyL60;
    }
CPyL47: ;
    cpy_r_r119 = PyNumber_Add(cpy_r_r118, cpy_r_draws);
    CPy_DecRef(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 83, CPyStatic_globals);
        goto CPyL60;
    }
CPyL48: ;
    cpy_r_total = cpy_r_r119;
    cpy_r_r120 = CPyStatics[10]; /* '' */
    cpy_r_r121 = CPyStatics[22]; /* 'ODDS - two_wins ' */
    cpy_r_r122 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r123 = PyNumber_TrueDivide(cpy_r_two_wins, cpy_r_total);
    CPy_DecRef(cpy_r_two_wins);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL78;
    }
CPyL49: ;
    cpy_r_r124 = CPyStatics[10]; /* '' */
    cpy_r_r125 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r126[3] = {cpy_r_r122, cpy_r_r123, cpy_r_r124};
    cpy_r_r127 = (PyObject **)&cpy_r_r126;
    cpy_r_r128 = PyObject_VectorcallMethod(cpy_r_r125, cpy_r_r127, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL79;
    }
CPyL50: ;
    CPy_DecRef(cpy_r_r123);
    cpy_r_r129 = CPyStatics[20]; /* ' three_wins: ' */
    cpy_r_r130 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r131 = PyNumber_TrueDivide(cpy_r_three_wins, cpy_r_total);
    CPy_DecRef(cpy_r_three_wins);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL80;
    }
CPyL51: ;
    cpy_r_r132 = CPyStatics[10]; /* '' */
    cpy_r_r133 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r134[3] = {cpy_r_r130, cpy_r_r131, cpy_r_r132};
    cpy_r_r135 = (PyObject **)&cpy_r_r134;
    cpy_r_r136 = PyObject_VectorcallMethod(cpy_r_r133, cpy_r_r135, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL81;
    }
CPyL52: ;
    CPy_DecRef(cpy_r_r131);
    cpy_r_r137 = CPyStatics[21]; /* ' draws: ' */
    cpy_r_r138 = CPyStatics[12]; /* '{:{}}' */
    cpy_r_r139 = PyNumber_TrueDivide(cpy_r_draws, cpy_r_total);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_total);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL82;
    }
CPyL53: ;
    cpy_r_r140 = CPyStatics[10]; /* '' */
    cpy_r_r141 = CPyStatics[13]; /* 'format' */
    PyObject *cpy_r_r142[3] = {cpy_r_r138, cpy_r_r139, cpy_r_r140};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = PyObject_VectorcallMethod(cpy_r_r141, cpy_r_r143, 9223372036854775811U, 0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL83;
    }
CPyL54: ;
    CPy_DecRef(cpy_r_r139);
    cpy_r_r145 = PyList_New(6);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL84;
    }
CPyL55: ;
    cpy_r_r146 = (CPyPtr)&((PyListObject *)cpy_r_r145)->ob_item;
    cpy_r_r147 = *(CPyPtr *)cpy_r_r146;
    CPy_INCREF(cpy_r_r121);
    *(PyObject * *)cpy_r_r147 = cpy_r_r121;
    cpy_r_r148 = cpy_r_r147 + 8;
    *(PyObject * *)cpy_r_r148 = cpy_r_r128;
    cpy_r_r149 = cpy_r_r147 + 16;
    CPy_INCREF(cpy_r_r129);
    *(PyObject * *)cpy_r_r149 = cpy_r_r129;
    cpy_r_r150 = cpy_r_r147 + 24;
    *(PyObject * *)cpy_r_r150 = cpy_r_r136;
    cpy_r_r151 = cpy_r_r147 + 32;
    CPy_INCREF(cpy_r_r137);
    *(PyObject * *)cpy_r_r151 = cpy_r_r137;
    cpy_r_r152 = cpy_r_r147 + 40;
    *(PyObject * *)cpy_r_r152 = cpy_r_r144;
    cpy_r_r153 = PyUnicode_Join(cpy_r_r120, cpy_r_r145);
    CPy_DecRef(cpy_r_r145);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL59;
    }
CPyL56: ;
    cpy_r_r154 = CPyModule_builtins;
    cpy_r_r155 = CPyStatics[16]; /* 'print' */
    cpy_r_r156 = CPyObject_GetAttr(cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL85;
    }
CPyL57: ;
    PyObject *cpy_r_r157[1] = {cpy_r_r153};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = _PyObject_Vectorcall(cpy_r_r156, cpy_r_r158, 1, 0);
    CPy_DecRef(cpy_r_r156);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("dice.py", "dice_fight2", 84, CPyStatic_globals);
        goto CPyL85;
    } else
        goto CPyL86;
CPyL58: ;
    CPy_DecRef(cpy_r_r153);
    cpy_r_r160 = Py_None;
    CPy_INCREF(cpy_r_r160);
    return cpy_r_r160;
CPyL59: ;
    cpy_r_r161 = NULL;
    return cpy_r_r161;
CPyL60: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    goto CPyL59;
CPyL61: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL39;
CPyL62: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    goto CPyL59;
CPyL63: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    goto CPyL59;
CPyL64: ;
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    goto CPyL38;
CPyL65: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    goto CPyL59;
CPyL66: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_three);
    goto CPyL59;
CPyL67: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_three);
    CPy_DecRef(cpy_r_r30);
    goto CPyL59;
CPyL68: ;
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_three);
    goto CPyL59;
CPyL69: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_three);
    CPy_DecRef(cpy_r_r48);
    goto CPyL59;
CPyL70: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_three);
    goto CPyL59;
CPyL71: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_three);
    CPy_DecRef(cpy_r_r66);
    goto CPyL59;
CPyL72: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_two);
    CPy_DecRef(cpy_r_r17);
    goto CPyL59;
CPyL73: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r88);
    goto CPyL59;
CPyL74: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    goto CPyL59;
CPyL75: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r102);
    goto CPyL59;
CPyL76: ;
    CPy_DecRef(cpy_r_two_wins);
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_r111);
    goto CPyL59;
CPyL77: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL46;
CPyL78: ;
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_total);
    goto CPyL59;
CPyL79: ;
    CPy_DecRef(cpy_r_three_wins);
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_r123);
    goto CPyL59;
CPyL80: ;
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_r128);
    goto CPyL59;
CPyL81: ;
    CPy_DecRef(cpy_r_draws);
    CPy_DecRef(cpy_r_total);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r131);
    goto CPyL59;
CPyL82: ;
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    goto CPyL59;
CPyL83: ;
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r139);
    goto CPyL59;
CPyL84: ;
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r144);
    goto CPyL59;
CPyL85: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL59;
CPyL86: ;
    CPy_DecRef(cpy_r_r159);
    goto CPyL58;
}

PyObject *CPyPy_dice_fight2(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":dice_fight2", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_dice_fight2();
    return retval;
fail: ;
    CPy_AddTraceback("dice.py", "dice_fight2", 69, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    CPyPtr cpy_r_r80;
    CPyPtr cpy_r_r81;
    CPyPtr cpy_r_r82;
    CPyPtr cpy_r_r83;
    CPyPtr cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    CPyPtr cpy_r_r107;
    CPyPtr cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyPtr cpy_r_r110;
    CPyPtr cpy_r_r111;
    CPyPtr cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject **cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
CPyL1: ;
    cpy_r_r3 = CPyStatics[23]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", -1, CPyStatic_globals);
        goto CPyL38;
    }
CPyL2: ;
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DecRef(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatic_globals;
    cpy_r_r6 = CPyModule_random;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (cpy_r_r8) goto CPyL6;
CPyL4: ;
    cpy_r_r9 = CPyStatics[24]; /* 'random' */
    cpy_r_r10 = PyImport_Import(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 1, CPyStatic_globals);
        goto CPyL38;
    }
CPyL5: ;
    CPyModule_random = cpy_r_r10;
    CPy_INCREF(CPyModule_random);
    CPy_DecRef(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = PyImport_GetModuleDict();
    cpy_r_r12 = CPyStatics[24]; /* 'random' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 1, CPyStatic_globals);
        goto CPyL38;
    }
CPyL7: ;
    cpy_r_r14 = CPyStatics[24]; /* 'random' */
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r5, cpy_r_r14, cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("dice.py", "<module>", 1, CPyStatic_globals);
        goto CPyL38;
    }
CPyL8: ;
    cpy_r_r17 = CPyStatic_globals;
    cpy_r_r18 = CPyModule_itertools;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    if (cpy_r_r20) goto CPyL11;
CPyL9: ;
    cpy_r_r21 = CPyStatics[25]; /* 'itertools' */
    cpy_r_r22 = PyImport_Import(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 2, CPyStatic_globals);
        goto CPyL38;
    }
CPyL10: ;
    CPyModule_itertools = cpy_r_r22;
    CPy_INCREF(CPyModule_itertools);
    CPy_DecRef(cpy_r_r22);
CPyL11: ;
    cpy_r_r23 = PyImport_GetModuleDict();
    cpy_r_r24 = CPyStatics[25]; /* 'itertools' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 2, CPyStatic_globals);
        goto CPyL38;
    }
CPyL12: ;
    cpy_r_r26 = CPyStatics[25]; /* 'itertools' */
    cpy_r_r27 = CPyDict_SetItem(cpy_r_r17, cpy_r_r26, cpy_r_r25);
    CPy_DecRef(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("dice.py", "<module>", 2, CPyStatic_globals);
        goto CPyL38;
    }
CPyL13: ;
    cpy_r_r29 = CPyStatic_globals;
    cpy_r_r30 = CPyModule_more_itertools;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_r30 != cpy_r_r31;
    if (cpy_r_r32) goto CPyL16;
CPyL14: ;
    cpy_r_r33 = CPyStatics[26]; /* 'more_itertools' */
    cpy_r_r34 = PyImport_Import(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 3, CPyStatic_globals);
        goto CPyL38;
    }
CPyL15: ;
    CPyModule_more_itertools = cpy_r_r34;
    CPy_INCREF(CPyModule_more_itertools);
    CPy_DecRef(cpy_r_r34);
CPyL16: ;
    cpy_r_r35 = PyImport_GetModuleDict();
    cpy_r_r36 = CPyStatics[26]; /* 'more_itertools' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 3, CPyStatic_globals);
        goto CPyL38;
    }
CPyL17: ;
    cpy_r_r38 = CPyStatics[27]; /* 'more' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r29, cpy_r_r38, cpy_r_r37);
    CPy_DecRef(cpy_r_r37);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("dice.py", "<module>", 3, CPyStatic_globals);
        goto CPyL38;
    }
CPyL18: ;
    cpy_r_r41 = PyList_New(6);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 5, CPyStatic_globals);
        goto CPyL38;
    }
CPyL19: ;
    cpy_r_r42 = CPyTagged_StealAsObject(2);
    cpy_r_r43 = CPyTagged_StealAsObject(4);
    cpy_r_r44 = CPyTagged_StealAsObject(6);
    cpy_r_r45 = CPyTagged_StealAsObject(8);
    cpy_r_r46 = CPyTagged_StealAsObject(10);
    cpy_r_r47 = CPyTagged_StealAsObject(12);
    cpy_r_r48 = (CPyPtr)&((PyListObject *)cpy_r_r41)->ob_item;
    cpy_r_r49 = *(CPyPtr *)cpy_r_r48;
    *(PyObject * *)cpy_r_r49 = cpy_r_r42;
    cpy_r_r50 = cpy_r_r49 + 8;
    *(PyObject * *)cpy_r_r50 = cpy_r_r43;
    cpy_r_r51 = cpy_r_r49 + 16;
    *(PyObject * *)cpy_r_r51 = cpy_r_r44;
    cpy_r_r52 = cpy_r_r49 + 24;
    *(PyObject * *)cpy_r_r52 = cpy_r_r45;
    cpy_r_r53 = cpy_r_r49 + 32;
    *(PyObject * *)cpy_r_r53 = cpy_r_r46;
    cpy_r_r54 = cpy_r_r49 + 40;
    *(PyObject * *)cpy_r_r54 = cpy_r_r47;
    cpy_r_r55 = CPyStatic_globals;
    cpy_r_r56 = CPyStatics[9]; /* 'dice' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r41);
    CPy_DecRef(cpy_r_r41);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("dice.py", "<module>", 5, CPyStatic_globals);
        goto CPyL38;
    }
CPyL20: ;
    cpy_r_r59 = CPyStatic_globals;
    cpy_r_r60 = CPyStatics[9]; /* 'dice' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 41, CPyStatic_globals);
        goto CPyL38;
    }
CPyL21: ;
    if (likely(PyList_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeError("list", cpy_r_r61);
        cpy_r_r62 = NULL;
    }
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 41, CPyStatic_globals);
        goto CPyL38;
    }
CPyL22: ;
    cpy_r_r63 = CPyModule_builtins;
    cpy_r_r64 = CPyStatics[16]; /* 'print' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 41, CPyStatic_globals);
        goto CPyL39;
    }
CPyL23: ;
    PyObject *cpy_r_r66[1] = {cpy_r_r62};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r65, cpy_r_r67, 1, 0);
    CPy_DecRef(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 41, CPyStatic_globals);
        goto CPyL39;
    } else
        goto CPyL40;
CPyL24: ;
    CPy_DecRef(cpy_r_r62);
    cpy_r_r69 = CPyModule_more_itertools;
    cpy_r_r70 = CPyStatics[3]; /* 'distinct_combinations' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 66, CPyStatic_globals);
        goto CPyL38;
    }
CPyL25: ;
    cpy_r_r72 = PyList_New(6);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 66, CPyStatic_globals);
        goto CPyL41;
    }
CPyL26: ;
    cpy_r_r73 = CPyTagged_StealAsObject(2);
    cpy_r_r74 = CPyTagged_StealAsObject(4);
    cpy_r_r75 = CPyTagged_StealAsObject(6);
    cpy_r_r76 = CPyTagged_StealAsObject(8);
    cpy_r_r77 = CPyTagged_StealAsObject(10);
    cpy_r_r78 = CPyTagged_StealAsObject(12);
    cpy_r_r79 = (CPyPtr)&((PyListObject *)cpy_r_r72)->ob_item;
    cpy_r_r80 = *(CPyPtr *)cpy_r_r79;
    *(PyObject * *)cpy_r_r80 = cpy_r_r73;
    cpy_r_r81 = cpy_r_r80 + 8;
    *(PyObject * *)cpy_r_r81 = cpy_r_r74;
    cpy_r_r82 = cpy_r_r80 + 16;
    *(PyObject * *)cpy_r_r82 = cpy_r_r75;
    cpy_r_r83 = cpy_r_r80 + 24;
    *(PyObject * *)cpy_r_r83 = cpy_r_r76;
    cpy_r_r84 = cpy_r_r80 + 32;
    *(PyObject * *)cpy_r_r84 = cpy_r_r77;
    cpy_r_r85 = cpy_r_r80 + 40;
    *(PyObject * *)cpy_r_r85 = cpy_r_r78;
    cpy_r_r86 = CPySequence_Multiply(cpy_r_r72, 4);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 66, CPyStatic_globals);
        goto CPyL41;
    }
CPyL27: ;
    cpy_r_r87 = CPyTagged_StealAsObject(4);
    PyObject *cpy_r_r88[2] = {cpy_r_r86, cpy_r_r87};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = _PyObject_Vectorcall(cpy_r_r71, cpy_r_r89, 2, 0);
    CPy_DecRef(cpy_r_r71);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 66, CPyStatic_globals);
        goto CPyL42;
    }
CPyL28: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    cpy_r_r91 = PySequence_List(cpy_r_r90);
    CPy_DecRef(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 66, CPyStatic_globals);
        goto CPyL38;
    }
CPyL29: ;
    cpy_r_r92 = CPyStatic_globals;
    cpy_r_r93 = CPyStatics[17]; /* 'all_twos' */
    cpy_r_r94 = CPyDict_SetItem(cpy_r_r92, cpy_r_r93, cpy_r_r91);
    CPy_DecRef(cpy_r_r91);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("dice.py", "<module>", 66, CPyStatic_globals);
        goto CPyL38;
    }
CPyL30: ;
    cpy_r_r96 = CPyModule_more_itertools;
    cpy_r_r97 = CPyStatics[3]; /* 'distinct_combinations' */
    cpy_r_r98 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 67, CPyStatic_globals);
        goto CPyL38;
    }
CPyL31: ;
    cpy_r_r99 = PyList_New(6);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 67, CPyStatic_globals);
        goto CPyL43;
    }
CPyL32: ;
    cpy_r_r100 = CPyTagged_StealAsObject(2);
    cpy_r_r101 = CPyTagged_StealAsObject(4);
    cpy_r_r102 = CPyTagged_StealAsObject(6);
    cpy_r_r103 = CPyTagged_StealAsObject(8);
    cpy_r_r104 = CPyTagged_StealAsObject(10);
    cpy_r_r105 = CPyTagged_StealAsObject(12);
    cpy_r_r106 = (CPyPtr)&((PyListObject *)cpy_r_r99)->ob_item;
    cpy_r_r107 = *(CPyPtr *)cpy_r_r106;
    *(PyObject * *)cpy_r_r107 = cpy_r_r100;
    cpy_r_r108 = cpy_r_r107 + 8;
    *(PyObject * *)cpy_r_r108 = cpy_r_r101;
    cpy_r_r109 = cpy_r_r107 + 16;
    *(PyObject * *)cpy_r_r109 = cpy_r_r102;
    cpy_r_r110 = cpy_r_r107 + 24;
    *(PyObject * *)cpy_r_r110 = cpy_r_r103;
    cpy_r_r111 = cpy_r_r107 + 32;
    *(PyObject * *)cpy_r_r111 = cpy_r_r104;
    cpy_r_r112 = cpy_r_r107 + 40;
    *(PyObject * *)cpy_r_r112 = cpy_r_r105;
    cpy_r_r113 = CPySequence_Multiply(cpy_r_r99, 6);
    CPy_DecRef(cpy_r_r99);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 67, CPyStatic_globals);
        goto CPyL43;
    }
CPyL33: ;
    cpy_r_r114 = CPyTagged_StealAsObject(6);
    PyObject *cpy_r_r115[2] = {cpy_r_r113, cpy_r_r114};
    cpy_r_r116 = (PyObject **)&cpy_r_r115;
    cpy_r_r117 = _PyObject_Vectorcall(cpy_r_r98, cpy_r_r116, 2, 0);
    CPy_DecRef(cpy_r_r98);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 67, CPyStatic_globals);
        goto CPyL44;
    }
CPyL34: ;
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r114);
    cpy_r_r118 = PySequence_List(cpy_r_r117);
    CPy_DecRef(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 67, CPyStatic_globals);
        goto CPyL38;
    }
CPyL35: ;
    cpy_r_r119 = CPyStatic_globals;
    cpy_r_r120 = CPyStatics[18]; /* 'all_threes' */
    cpy_r_r121 = CPyDict_SetItem(cpy_r_r119, cpy_r_r120, cpy_r_r118);
    CPy_DecRef(cpy_r_r118);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("dice.py", "<module>", 67, CPyStatic_globals);
        goto CPyL38;
    }
CPyL36: ;
    cpy_r_r123 = CPyDef_dice_fight2();
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("dice.py", "<module>", 86, CPyStatic_globals);
        goto CPyL38;
    } else
        goto CPyL45;
CPyL37: ;
    return 1;
CPyL38: ;
    cpy_r_r124 = 2;
    return cpy_r_r124;
CPyL39: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL24;
CPyL41: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r98);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r114);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_r123);
    goto CPyL37;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_dice = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_random = Py_None;
    CPyModule_itertools = Py_None;
    CPyModule_more_itertools = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[28];
const char * const CPyLit_Str[] = {
    "\t\025distinct_combinations\003sum\003map\006append\005count\006choice\004dice\000\bxwins = ",
    "\b\005{:{}}\006format\t ywins = \t ratio = \005print\ball_twos\nall_threes\ntwo_wins: ",
    "\006\r three_wins: \b draws: \020ODDS - two_wins \bbuiltins\006random\titertools",
    "\002\016more_itertools\004more",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {0};
CPyModule *CPyModule_dice_internal = NULL;
CPyModule *CPyModule_dice;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins_internal = NULL;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_random_internal = NULL;
CPyModule *CPyModule_random;
CPyModule *CPyModule_itertools_internal = NULL;
CPyModule *CPyModule_itertools;
CPyModule *CPyModule_more_itertools_internal = NULL;
CPyModule *CPyModule_more_itertools;
PyTypeObject *CPyType_pair_sums_env;
PyObject *CPyDef_pair_sums_env(void);
PyTypeObject *CPyType_pair_sums_gen;
PyObject *CPyDef_pair_sums_gen(void);
PyObject *CPyDef_pair_sums_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy_pair_sums_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_pair_sums_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_pair_sums_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_pair_sums_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_pair_sums_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_pair_sums_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_pair_sums_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_pair_sums_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_pair_sums_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_pair_sums_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_pair_sums_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_pair_sums(void);
PyObject *CPyPy_pair_sums(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sum_ratios(void);
PyObject *CPyPy_sum_ratios(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sums_from_dice(PyObject *cpy_r_dice);
PyObject *CPyPy_sums_from_dice(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_sum_n_dice(PyObject *cpy_r_n);
PyObject *CPyPy_sum_n_dice(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_dice_fight(PyObject *cpy_r_x, PyObject *cpy_r_y);
PyObject *CPyPy_dice_fight(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_dice_fight2(void);
PyObject *CPyPy_dice_fight2(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);
