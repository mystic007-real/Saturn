/* Generated code for Python module 'pywin32_bootstrap'
 * created by Nuitka version 2.4rc10
 *
 * This code is in part copyright 2024 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pywin32_bootstrap" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pywin32_bootstrap;
PyDictObject *moduledict_pywin32_bootstrap;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[20];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[20];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("pywin32_bootstrap"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 20; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pywin32_bootstrap(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 20; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d41e69ee662ea981a88a150db1fc3daf;

static void createModuleCodeObjects(void) {
 module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
 codeobj_d41e69ee662ea981a88a150db1fc3daf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[19], mod_consts[19], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_pywin32_bootstrap[] = {

    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pywin32_bootstrap);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_pywin32_bootstrap,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_pywin32_bootstrap,
        sizeof(function_table_pywin32_bootstrap) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pywin32_bootstrap(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pywin32_bootstrap");

    // Store the module for future use.
    module_pywin32_bootstrap = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pywin32_bootstrap: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pywin32_bootstrap: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pywin32_bootstrap" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpywin32_bootstrap\n");

    moduledict_pywin32_bootstrap = MODULE_DICT(module_pywin32_bootstrap);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pywin32_bootstrap,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pywin32_bootstrap,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[18]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pywin32_bootstrap,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pywin32_bootstrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pywin32_bootstrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pywin32_bootstrap);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pywin32_bootstrap);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
 struct Nuitka_FrameObject *frame_d41e69ee662ea981a88a150db1fc3daf;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 int tmp_res;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = mod_consts[1];
  UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
 }
 frame_d41e69ee662ea981a88a150db1fc3daf = MAKE_MODULE_FRAME(codeobj_d41e69ee662ea981a88a150db1fc3daf, module_pywin32_bootstrap);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d41e69ee662ea981a88a150db1fc3daf);
 assert(Py_REFCNT(frame_d41e69ee662ea981a88a150db1fc3daf) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = mod_consts[1];
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[3]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_True;
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[3]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_3;
  tmp_assign_source_3 = Py_None;
  UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
 }
 {
  nuitka_bool tmp_assign_source_4;
  tmp_assign_source_4 = NUITKA_BOOL_TRUE;
  tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[7];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_pywin32_bootstrap;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[8];
  frame_d41e69ee662ea981a88a150db1fc3daf->m_frame.f_lineno = 12;
  tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_1 = exception_type;
 exception_keeper_value_1 = exception_value;
 exception_keeper_tb_1 = exception_tb;
 exception_keeper_lineno_1 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 {
  nuitka_bool tmp_assign_source_6;
  tmp_assign_source_6 = NUITKA_BOOL_FALSE;
  tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
 }
 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_1 == NULL) {
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d41e69ee662ea981a88a150db1fc3daf, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d41e69ee662ea981a88a150db1fc3daf, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_1 = PyExc_ImportError;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  assert(!(tmp_res == -1));
  tmp_condition_result_1 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 11;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_d41e69ee662ea981a88a150db1fc3daf->m_frame) frame_d41e69ee662ea981a88a150db1fc3daf->m_frame.f_lineno = exception_tb->tb_lineno;

 goto try_except_handler_2;
 branch_no_1:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_2 = exception_type;
 exception_keeper_value_2 = exception_value;
 exception_keeper_tb_2 = exception_tb;
 exception_keeper_lineno_2 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto try_end_1;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_1:;
 {
  bool tmp_condition_result_2;
  nuitka_bool tmp_cmp_expr_left_2;
  nuitka_bool tmp_cmp_expr_right_2;
  assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
  tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
  tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assign_source_7;
  tmp_assign_source_7 = IMPORT_HARD_OS();
  assert(!(tmp_assign_source_7 == NULL));
  UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_7);
 }
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_expression_value_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_8;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_9;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_9 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

    exception_lineno = 20;
          goto try_except_handler_3;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_9;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_10;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_assign_source_10 = tmp_for_loop_1__iter_value;
  UPDATE_STRING_DICT0(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_10);
 }
 {
  nuitka_bool tmp_condition_result_3;
  PyObject *tmp_isdir_arg_1;
  PyObject *tmp_capi_result_1;
  int tmp_truth_name_1;
  tmp_isdir_arg_1 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_isdir_arg_1 == NULL)) {
      tmp_isdir_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  assert(!(tmp_isdir_arg_1 == NULL));
  tmp_capi_result_1 = OS_PATH_FILE_ISDIR(tstate, tmp_isdir_arg_1);
  if (tmp_capi_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 21;

      goto try_except_handler_3;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_capi_result_1);

   exception_lineno = 21;

      goto try_except_handler_3;
  }
  tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_capi_result_1);
  if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  bool tmp_condition_result_4;
  PyObject *tmp_expression_value_2;
  tmp_expression_value_2 = IMPORT_HARD_OS();
  assert(!(tmp_expression_value_2 == NULL));
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[12]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 16;

      goto try_except_handler_3;
  }
  tmp_condition_result_4 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  tmp_called_instance_1 = IMPORT_HARD_OS();
  assert(!(tmp_called_instance_1 == NULL));
  tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_args_element_value_1 == NULL)) {
      tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  assert(!(tmp_args_element_value_1 == NULL));
  frame_d41e69ee662ea981a88a150db1fc3daf->m_frame.f_lineno = 23;
  tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_3;
  }
  Py_DECREF(tmp_call_result_1);
 }
 goto branch_end_4;
 branch_no_4:;
 {
  bool tmp_condition_result_5;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_args_element_value_2;
  tmp_expression_value_5 = IMPORT_HARD_OS();
  assert(!(tmp_expression_value_5 == NULL));
  tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[13]);
  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;

      goto try_except_handler_3;
  }
  tmp_subscript_value_1 = mod_consts[14];
  tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
  Py_DECREF(tmp_expression_value_4);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;

      goto try_except_handler_3;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[15]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;

      goto try_except_handler_3;
  }
  tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_args_element_value_2 == NULL)) {
      tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 26;

      goto try_except_handler_3;
  }
  frame_d41e69ee662ea981a88a150db1fc3daf->m_frame.f_lineno = 26;
  tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
  Py_DECREF(tmp_called_value_1);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;

      goto try_except_handler_3;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;

      goto try_except_handler_3;
  }
  tmp_condition_result_5 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_5 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_subscript_value_2;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_ass_subscript_1;
  tmp_expression_value_8 = IMPORT_HARD_OS();
  assert(!(tmp_expression_value_8 == NULL));
  tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[13]);
  if (tmp_expression_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;

      goto try_except_handler_3;
  }
  tmp_subscript_value_2 = mod_consts[14];
  tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
  Py_DECREF(tmp_expression_value_7);
  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;

      goto try_except_handler_3;
  }
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[16]);
  Py_DECREF(tmp_expression_value_6);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;

      goto try_except_handler_3;
  }
  tmp_add_expr_left_1 = mod_consts[17];
  tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_1 == NULL)) {
      tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_2);

   exception_lineno = 27;

      goto try_except_handler_3;
  }
  tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
  if (tmp_args_element_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_2);

   exception_lineno = 27;

      goto try_except_handler_3;
  }
  tmp_args_element_value_4 = mod_consts[18];
  frame_d41e69ee662ea981a88a150db1fc3daf->m_frame.f_lineno = 27;
  {
      PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_called_value_2);
  Py_DECREF(tmp_args_element_value_3);
  if (tmp_ass_subvalue_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;

      goto try_except_handler_3;
  }
  tmp_expression_value_9 = IMPORT_HARD_OS();
  assert(!(tmp_expression_value_9 == NULL));
  tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[13]);
  if (tmp_ass_subscribed_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_1);

   exception_lineno = 27;

      goto try_except_handler_3;
  }
  tmp_ass_subscript_1 = mod_consts[14];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  Py_DECREF(tmp_ass_subscribed_1);
  Py_DECREF(tmp_ass_subvalue_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;

      goto try_except_handler_3;
  }
 }
 {
  PyObject *tmp_ass_subvalue_2;
  PyObject *tmp_add_expr_left_2;
  PyObject *tmp_add_expr_right_2;
  PyObject *tmp_add_expr_left_3;
  PyObject *tmp_add_expr_right_3;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_subscript_value_3;
  PyObject *tmp_ass_subscribed_2;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_ass_subscript_2;
  tmp_add_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_left_3 == NULL)) {
      tmp_add_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_3;
  }
  tmp_add_expr_right_3 = mod_consts[17];
  tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
  if (tmp_add_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_3;
  }
  tmp_expression_value_11 = IMPORT_HARD_OS();
  assert(!(tmp_expression_value_11 == NULL));
  tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[13]);
  if (tmp_expression_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_2);

   exception_lineno = 28;

      goto try_except_handler_3;
  }
  tmp_subscript_value_3 = mod_consts[14];
  tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
  Py_DECREF(tmp_expression_value_10);
  if (tmp_add_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_2);

   exception_lineno = 28;

      goto try_except_handler_3;
  }
  tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
  Py_DECREF(tmp_add_expr_left_2);
  Py_DECREF(tmp_add_expr_right_2);
  if (tmp_ass_subvalue_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_3;
  }
  tmp_expression_value_12 = IMPORT_HARD_OS();
  assert(!(tmp_expression_value_12 == NULL));
  tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[13]);
  if (tmp_ass_subscribed_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_2);

   exception_lineno = 28;

      goto try_except_handler_3;
  }
  tmp_ass_subscript_2 = mod_consts[14];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
  Py_DECREF(tmp_ass_subscribed_2);
  Py_DECREF(tmp_ass_subvalue_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_3;
  }
 }
 branch_no_5:;
 branch_end_4:;
 goto loop_end_1;
 branch_no_3:;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 20;

     goto try_except_handler_3;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_3;
 // Exception handler code:
 try_except_handler_3:;
 exception_keeper_type_3 = exception_type;
 exception_keeper_value_3 = exception_value;
 exception_keeper_tb_3 = exception_tb;
 exception_keeper_lineno_3 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto frame_exception_exit_1;
 // End of try:
 try_end_3:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 branch_no_2:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_d41e69ee662ea981a88a150db1fc3daf, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d41e69ee662ea981a88a150db1fc3daf->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d41e69ee662ea981a88a150db1fc3daf, exception_lineno);
 }



 assertFrameObject(frame_d41e69ee662ea981a88a150db1fc3daf);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pywin32_bootstrap", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pywin32_bootstrap" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pywin32_bootstrap);
    return module_pywin32_bootstrap;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywin32_bootstrap, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pywin32_bootstrap", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
