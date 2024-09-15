/* Generated code for Python module '__main__'
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

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[54];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[54];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("__main__"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 54; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 1
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 54; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_63d8b8f65ebb8a24cae5062501465fcf;
static PyCodeObject *codeobj_bc888923fa4520c3a47db45925f1d5ff;
static PyCodeObject *codeobj_6197a1db3e1d06cabec0fe7da14e6528;
static PyCodeObject *codeobj_4a72fd6e57f35578afddb80a9321ff8f;
static PyCodeObject *codeobj_cc9c6e42a93e858fa1366b719e8bcca4;
static PyCodeObject *codeobj_6772292f0b0b728dd55af75032ef5888;
static PyCodeObject *codeobj_189bc2de23a854f592a3ef0ef1daac17;
static PyCodeObject *codeobj_13e2b444b1ad2eb010f767f09a19df03;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
 module_filename_obj = mod_consts[38]; CHECK_OBJECT(module_filename_obj);
 codeobj_63d8b8f65ebb8a24cae5062501465fcf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[47], mod_consts[47], NULL, NULL, 0, 0, 0);
 codeobj_main = codeobj_63d8b8f65ebb8a24cae5062501465fcf;
 codeobj_bc888923fa4520c3a47db45925f1d5ff = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[9], mod_consts[9], mod_consts[48], NULL, 1, 0, 0);
 codeobj_6197a1db3e1d06cabec0fe7da14e6528 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[6], NULL, NULL, 0, 0, 0);
 codeobj_4a72fd6e57f35578afddb80a9321ff8f = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[49], NULL, 0, 0, 0);
 codeobj_cc9c6e42a93e858fa1366b719e8bcca4 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[46], mod_consts[50], NULL, 0, 0, 0);
 codeobj_6772292f0b0b728dd55af75032ef5888 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[51], NULL, 0, 0, 0);
 codeobj_189bc2de23a854f592a3ef0ef1daac17 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[29], mod_consts[52], NULL, 0, 0, 0);
 codeobj_13e2b444b1ad2eb010f767f09a19df03 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[34], mod_consts[34], mod_consts[53], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function__1_clear_screen();


static PyObject *MAKE_FUNCTION___main__$$$function__2_center_text();


static PyObject *MAKE_FUNCTION___main__$$$function__3_show_main_menu();


static PyObject *MAKE_FUNCTION___main__$$$function__4_get_ip();


static PyObject *MAKE_FUNCTION___main__$$$function__5_show_ip_screen();


static PyObject *MAKE_FUNCTION___main__$$$function__6_user_id_to_token();


static PyObject *MAKE_FUNCTION___main__$$$function__7_main();


// The module function definitions.
static PyObject *impl___main__$$$function__1_clear_screen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_FrameObject *frame_6197a1db3e1d06cabec0fe7da14e6528;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_6197a1db3e1d06cabec0fe7da14e6528 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_6197a1db3e1d06cabec0fe7da14e6528)) {
     Py_XDECREF(cache_frame_6197a1db3e1d06cabec0fe7da14e6528);

#if _DEBUG_REFCOUNTS
     if (cache_frame_6197a1db3e1d06cabec0fe7da14e6528 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_6197a1db3e1d06cabec0fe7da14e6528 = MAKE_FUNCTION_FRAME(tstate, codeobj_6197a1db3e1d06cabec0fe7da14e6528, module___main__, 0);
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_6197a1db3e1d06cabec0fe7da14e6528->m_type_description == NULL);
 frame_6197a1db3e1d06cabec0fe7da14e6528 = cache_frame_6197a1db3e1d06cabec0fe7da14e6528;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6197a1db3e1d06cabec0fe7da14e6528);
 assert(Py_REFCNT(frame_6197a1db3e1d06cabec0fe7da14e6528) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  tmp_called_instance_1 = IMPORT_HARD_OS();
  assert(!(tmp_called_instance_1 == NULL));
  frame_6197a1db3e1d06cabec0fe7da14e6528->m_frame.f_lineno = 10;
  tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
      tstate,
      tmp_called_instance_1,
      mod_consts[0],
      PyTuple_GET_ITEM(mod_consts[1], 0)
  );

  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_6197a1db3e1d06cabec0fe7da14e6528, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6197a1db3e1d06cabec0fe7da14e6528->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6197a1db3e1d06cabec0fe7da14e6528, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_6197a1db3e1d06cabec0fe7da14e6528,
     type_description_1
 );


 // Release cached frame if used for exception.
 if (frame_6197a1db3e1d06cabec0fe7da14e6528 == cache_frame_6197a1db3e1d06cabec0fe7da14e6528) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_6197a1db3e1d06cabec0fe7da14e6528);
     cache_frame_6197a1db3e1d06cabec0fe7da14e6528 = NULL;
 }

 assertFrameObject(frame_6197a1db3e1d06cabec0fe7da14e6528);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__2_center_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_text = python_pars[0];
 PyObject *var_columns = NULL;
 struct Nuitka_FrameObject *frame_bc888923fa4520c3a47db45925f1d5ff;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_bc888923fa4520c3a47db45925f1d5ff = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_bc888923fa4520c3a47db45925f1d5ff)) {
     Py_XDECREF(cache_frame_bc888923fa4520c3a47db45925f1d5ff);

#if _DEBUG_REFCOUNTS
     if (cache_frame_bc888923fa4520c3a47db45925f1d5ff == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_bc888923fa4520c3a47db45925f1d5ff = MAKE_FUNCTION_FRAME(tstate, codeobj_bc888923fa4520c3a47db45925f1d5ff, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_bc888923fa4520c3a47db45925f1d5ff->m_type_description == NULL);
 frame_bc888923fa4520c3a47db45925f1d5ff = cache_frame_bc888923fa4520c3a47db45925f1d5ff;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_bc888923fa4520c3a47db45925f1d5ff);
 assert(Py_REFCNT(frame_bc888923fa4520c3a47db45925f1d5ff) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_called_instance_1;
  tmp_called_instance_1 = IMPORT_HARD_OS();
  assert(!(tmp_called_instance_1 == NULL));
  frame_bc888923fa4520c3a47db45925f1d5ff->m_frame.f_lineno = 14;
  tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[2]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 14;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 14;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_columns == NULL);
  var_columns = tmp_assign_source_1;
 }
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_text);
  tmp_expression_value_2 = par_text;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_columns);
  tmp_args_element_value_1 = var_columns;
  frame_bc888923fa4520c3a47db45925f1d5ff->m_frame.f_lineno = 15;
  tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  goto frame_return_exit_1;
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_return_exit_1:

 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto try_return_handler_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_bc888923fa4520c3a47db45925f1d5ff, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_bc888923fa4520c3a47db45925f1d5ff->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_bc888923fa4520c3a47db45925f1d5ff, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_bc888923fa4520c3a47db45925f1d5ff,
     type_description_1,
     par_text,
     var_columns
 );


 // Release cached frame if used for exception.
 if (frame_bc888923fa4520c3a47db45925f1d5ff == cache_frame_bc888923fa4520c3a47db45925f1d5ff) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_bc888923fa4520c3a47db45925f1d5ff);
     cache_frame_bc888923fa4520c3a47db45925f1d5ff = NULL;
 }

 assertFrameObject(frame_bc888923fa4520c3a47db45925f1d5ff);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_columns);
 Py_DECREF(var_columns);
 var_columns = NULL;
 goto function_return_exit;
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

 Py_XDECREF(var_columns);
 var_columns = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_text);
 Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_text);
 Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__3_show_main_menu(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *var_line = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 struct Nuitka_FrameObject *frame_189bc2de23a854f592a3ef0ef1daac17;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 static struct Nuitka_FrameObject *cache_frame_189bc2de23a854f592a3ef0ef1daac17 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_189bc2de23a854f592a3ef0ef1daac17)) {
     Py_XDECREF(cache_frame_189bc2de23a854f592a3ef0ef1daac17);

#if _DEBUG_REFCOUNTS
     if (cache_frame_189bc2de23a854f592a3ef0ef1daac17 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_189bc2de23a854f592a3ef0ef1daac17 = MAKE_FUNCTION_FRAME(tstate, codeobj_189bc2de23a854f592a3ef0ef1daac17, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_189bc2de23a854f592a3ef0ef1daac17->m_type_description == NULL);
 frame_189bc2de23a854f592a3ef0ef1daac17 = cache_frame_189bc2de23a854f592a3ef0ef1daac17;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_189bc2de23a854f592a3ef0ef1daac17);
 assert(Py_REFCNT(frame_189bc2de23a854f592a3ef0ef1daac17) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_call_result_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  frame_189bc2de23a854f592a3ef0ef1daac17->m_frame.f_lineno = 18;
  tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_add_expr_left_2;
  PyObject *tmp_add_expr_right_2;
  PyObject *tmp_called_value_3;
  tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_2 != NULL);
  tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_2 == NULL)) {
      tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  frame_189bc2de23a854f592a3ef0ef1daac17->m_frame.f_lineno = 45;
  tmp_add_expr_right_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[10]);

  if (tmp_add_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
  Py_DECREF(tmp_add_expr_right_2);
  if (tmp_add_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_1 == NULL)) {
      tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_1);

   exception_lineno = 45;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
  Py_DECREF(tmp_add_expr_left_1);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  frame_189bc2de23a854f592a3ef0ef1daac17->m_frame.f_lineno = 45;
  tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_iter_arg_1;
  tmp_iter_arg_1 = mod_consts[12];
  tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
  assert(!(tmp_assign_source_1 == NULL));
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_1;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_2;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_2 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "NNo";
    exception_lineno = 46;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_2;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_3;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_assign_source_3 = tmp_for_loop_1__iter_value;
  {
      PyObject *old = var_line;
      var_line = tmp_assign_source_3;
      Py_INCREF(var_line);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_add_expr_left_3;
  PyObject *tmp_add_expr_right_3;
  PyObject *tmp_add_expr_left_4;
  PyObject *tmp_add_expr_right_4;
  PyObject *tmp_called_value_5;
  PyObject *tmp_args_element_value_3;
  tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_4 != NULL);
  tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_4 == NULL)) {
      tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;
   type_description_1 = "NNo";
      goto try_except_handler_2;
  }
  tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_5 == NULL)) {
      tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;
   type_description_1 = "NNo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_line);
  tmp_args_element_value_3 = var_line;
  frame_189bc2de23a854f592a3ef0ef1daac17->m_frame.f_lineno = 47;
  tmp_add_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
  if (tmp_add_expr_right_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;
   type_description_1 = "NNo";
      goto try_except_handler_2;
  }
  tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
  Py_DECREF(tmp_add_expr_right_4);
  if (tmp_add_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;
   type_description_1 = "NNo";
      goto try_except_handler_2;
  }
  tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_3 == NULL)) {
      tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_3);

   exception_lineno = 47;
   type_description_1 = "NNo";
      goto try_except_handler_2;
  }
  tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
  Py_DECREF(tmp_add_expr_left_3);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;
   type_description_1 = "NNo";
      goto try_except_handler_2;
  }
  frame_189bc2de23a854f592a3ef0ef1daac17->m_frame.f_lineno = 47;
  tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;
   type_description_1 = "NNo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_3);
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 46;
  type_description_1 = "NNo";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_1;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_1 = exception_type;
 exception_keeper_value_1 = exception_value;
 exception_keeper_tb_1 = exception_tb;
 exception_keeper_lineno_1 = exception_lineno;
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
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto frame_exception_exit_1;
 // End of try:
 try_end_1:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 {
  PyObject *tmp_called_value_6;
  PyObject *tmp_call_result_4;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_add_expr_left_5;
  PyObject *tmp_add_expr_right_5;
  PyObject *tmp_add_expr_left_6;
  PyObject *tmp_add_expr_right_6;
  PyObject *tmp_called_value_7;
  tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_6 != NULL);
  tmp_add_expr_left_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_6 == NULL)) {
      tmp_add_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_7 == NULL)) {
      tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  frame_189bc2de23a854f592a3ef0ef1daac17->m_frame.f_lineno = 48;
  tmp_add_expr_right_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[13]);

  if (tmp_add_expr_right_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
  Py_DECREF(tmp_add_expr_right_6);
  if (tmp_add_expr_left_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_5 == NULL)) {
      tmp_add_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_5);

   exception_lineno = 48;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
  Py_DECREF(tmp_add_expr_left_5);
  if (tmp_args_element_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  frame_189bc2de23a854f592a3ef0ef1daac17->m_frame.f_lineno = 48;
  tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
  Py_DECREF(tmp_args_element_value_4);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "NNo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_4);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_189bc2de23a854f592a3ef0ef1daac17, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_189bc2de23a854f592a3ef0ef1daac17->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_189bc2de23a854f592a3ef0ef1daac17, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_189bc2de23a854f592a3ef0ef1daac17,
     type_description_1,
     NULL,
     NULL,
     var_line
 );


 // Release cached frame if used for exception.
 if (frame_189bc2de23a854f592a3ef0ef1daac17 == cache_frame_189bc2de23a854f592a3ef0ef1daac17) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_189bc2de23a854f592a3ef0ef1daac17);
     cache_frame_189bc2de23a854f592a3ef0ef1daac17 = NULL;
 }

 assertFrameObject(frame_189bc2de23a854f592a3ef0ef1daac17);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(var_line);
 var_line = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_2 = exception_type;
 exception_keeper_value_2 = exception_value;
 exception_keeper_tb_2 = exception_tb;
 exception_keeper_lineno_2 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_line);
 var_line = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__4_get_ip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *var_hostname = NULL;
 PyObject *var_ip_address = NULL;
 struct Nuitka_FrameObject *frame_4a72fd6e57f35578afddb80a9321ff8f;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_4a72fd6e57f35578afddb80a9321ff8f = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_4a72fd6e57f35578afddb80a9321ff8f)) {
     Py_XDECREF(cache_frame_4a72fd6e57f35578afddb80a9321ff8f);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4a72fd6e57f35578afddb80a9321ff8f == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4a72fd6e57f35578afddb80a9321ff8f = MAKE_FUNCTION_FRAME(tstate, codeobj_4a72fd6e57f35578afddb80a9321ff8f, module___main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4a72fd6e57f35578afddb80a9321ff8f->m_type_description == NULL);
 frame_4a72fd6e57f35578afddb80a9321ff8f = cache_frame_4a72fd6e57f35578afddb80a9321ff8f;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4a72fd6e57f35578afddb80a9321ff8f);
 assert(Py_REFCNT(frame_4a72fd6e57f35578afddb80a9321ff8f) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_called_instance_1;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[14]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_4a72fd6e57f35578afddb80a9321ff8f->m_frame.f_lineno = 51;
  tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[15]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_hostname == NULL);
  var_hostname = tmp_assign_source_1;
 }
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_args_element_value_1;
  tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[14]);

  if (unlikely(tmp_called_instance_2 == NULL)) {
      tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
  }

  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_hostname);
  tmp_args_element_value_1 = var_hostname;
  frame_4a72fd6e57f35578afddb80a9321ff8f->m_frame.f_lineno = 52;
  tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[16], tmp_args_element_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_ip_address == NULL);
  var_ip_address = tmp_assign_source_2;
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_4a72fd6e57f35578afddb80a9321ff8f, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4a72fd6e57f35578afddb80a9321ff8f->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4a72fd6e57f35578afddb80a9321ff8f, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4a72fd6e57f35578afddb80a9321ff8f,
     type_description_1,
     var_hostname,
     var_ip_address
 );


 // Release cached frame if used for exception.
 if (frame_4a72fd6e57f35578afddb80a9321ff8f == cache_frame_4a72fd6e57f35578afddb80a9321ff8f) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4a72fd6e57f35578afddb80a9321ff8f);
     cache_frame_4a72fd6e57f35578afddb80a9321ff8f = NULL;
 }

 assertFrameObject(frame_4a72fd6e57f35578afddb80a9321ff8f);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 CHECK_OBJECT(var_ip_address);
 tmp_return_value = var_ip_address;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_hostname);
 Py_DECREF(var_hostname);
 var_hostname = NULL;
 CHECK_OBJECT(var_ip_address);
 Py_DECREF(var_ip_address);
 var_ip_address = NULL;
 goto function_return_exit;
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

 Py_XDECREF(var_hostname);
 var_hostname = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__5_show_ip_screen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *var_ip_address = NULL;
 struct Nuitka_FrameObject *frame_6772292f0b0b728dd55af75032ef5888;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_6772292f0b0b728dd55af75032ef5888 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_6772292f0b0b728dd55af75032ef5888)) {
     Py_XDECREF(cache_frame_6772292f0b0b728dd55af75032ef5888);

#if _DEBUG_REFCOUNTS
     if (cache_frame_6772292f0b0b728dd55af75032ef5888 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_6772292f0b0b728dd55af75032ef5888 = MAKE_FUNCTION_FRAME(tstate, codeobj_6772292f0b0b728dd55af75032ef5888, module___main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_6772292f0b0b728dd55af75032ef5888->m_type_description == NULL);
 frame_6772292f0b0b728dd55af75032ef5888 = cache_frame_6772292f0b0b728dd55af75032ef5888;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6772292f0b0b728dd55af75032ef5888);
 assert(Py_REFCNT(frame_6772292f0b0b728dd55af75032ef5888) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_call_result_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_6772292f0b0b728dd55af75032ef5888->m_frame.f_lineno = 56;
  tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_called_value_2;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[17]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_6772292f0b0b728dd55af75032ef5888->m_frame.f_lineno = 57;
  tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  assert(var_ip_address == NULL);
  var_ip_address = tmp_assign_source_1;
 }
 {
  PyObject *tmp_called_value_3;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_add_expr_left_2;
  PyObject *tmp_add_expr_right_2;
  PyObject *tmp_called_value_4;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_3 != NULL);
  tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_2 == NULL)) {
      tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_4 == NULL)) {
      tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_tuple_element_1 = mod_consts[18];
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_1;
   PyObject *tmp_format_spec_1;
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   CHECK_OBJECT(var_ip_address);
   tmp_format_value_1 = var_ip_address;
   tmp_format_spec_1 = mod_consts[19];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 58;
    type_description_1 = "o";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_args_element_value_2 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_6772292f0b0b728dd55af75032ef5888->m_frame.f_lineno = 58;
  tmp_add_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_add_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
  Py_DECREF(tmp_add_expr_right_2);
  if (tmp_add_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_1 == NULL)) {
      tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_1);

   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
  Py_DECREF(tmp_add_expr_left_1);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_6772292f0b0b728dd55af75032ef5888->m_frame.f_lineno = 58;
  tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_add_expr_left_3;
  PyObject *tmp_add_expr_right_3;
  PyObject *tmp_add_expr_left_4;
  PyObject *tmp_add_expr_right_4;
  PyObject *tmp_called_value_6;
  tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_5 != NULL);
  tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_4 == NULL)) {
      tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_6 == NULL)) {
      tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_6772292f0b0b728dd55af75032ef5888->m_frame.f_lineno = 59;
  tmp_add_expr_right_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[20]);

  if (tmp_add_expr_right_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
  Py_DECREF(tmp_add_expr_right_4);
  if (tmp_add_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_3 == NULL)) {
      tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_3);

   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
  Py_DECREF(tmp_add_expr_left_3);
  if (tmp_args_element_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_6772292f0b0b728dd55af75032ef5888->m_frame.f_lineno = 59;
  tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
  Py_DECREF(tmp_args_element_value_3);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_3);
 }
 {
  PyObject *tmp_capi_result_1;
  tmp_capi_result_1 = BUILTIN_INPUT(tstate, NULL);
  if (tmp_capi_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_capi_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_6772292f0b0b728dd55af75032ef5888, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6772292f0b0b728dd55af75032ef5888->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6772292f0b0b728dd55af75032ef5888, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_6772292f0b0b728dd55af75032ef5888,
     type_description_1,
     var_ip_address
 );


 // Release cached frame if used for exception.
 if (frame_6772292f0b0b728dd55af75032ef5888 == cache_frame_6772292f0b0b728dd55af75032ef5888) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_6772292f0b0b728dd55af75032ef5888);
     cache_frame_6772292f0b0b728dd55af75032ef5888 = NULL;
 }

 assertFrameObject(frame_6772292f0b0b728dd55af75032ef5888);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_ip_address);
 Py_DECREF(var_ip_address);
 var_ip_address = NULL;
 goto function_return_exit;
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

 Py_XDECREF(var_ip_address);
 var_ip_address = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__6_user_id_to_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *var_user_id = NULL;
 PyObject *var_user_id_bytes = NULL;
 PyObject *var_base64_bytes = NULL;
 PyObject *var_base64_string = NULL;
 PyObject *var_e = NULL;
 struct Nuitka_FrameObject *frame_13e2b444b1ad2eb010f767f09a19df03;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
 bool tmp_result;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 static struct Nuitka_FrameObject *cache_frame_13e2b444b1ad2eb010f767f09a19df03 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_13e2b444b1ad2eb010f767f09a19df03)) {
     Py_XDECREF(cache_frame_13e2b444b1ad2eb010f767f09a19df03);

#if _DEBUG_REFCOUNTS
     if (cache_frame_13e2b444b1ad2eb010f767f09a19df03 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_13e2b444b1ad2eb010f767f09a19df03 = MAKE_FUNCTION_FRAME(tstate, codeobj_13e2b444b1ad2eb010f767f09a19df03, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_13e2b444b1ad2eb010f767f09a19df03->m_type_description == NULL);
 frame_13e2b444b1ad2eb010f767f09a19df03 = cache_frame_13e2b444b1ad2eb010f767f09a19df03;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_13e2b444b1ad2eb010f767f09a19df03);
 assert(Py_REFCNT(frame_13e2b444b1ad2eb010f767f09a19df03) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_call_result_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 63;
  tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_input_arg_1;
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_add_expr_left_2;
  PyObject *tmp_add_expr_right_2;
  PyObject *tmp_called_value_2;
  tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_2 == NULL)) {
      tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 64;
  tmp_add_expr_right_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[21]);

  if (tmp_add_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
  Py_DECREF(tmp_add_expr_right_2);
  if (tmp_add_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_1 == NULL)) {
      tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_1);

   exception_lineno = 64;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_input_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
  Py_DECREF(tmp_add_expr_left_1);
  if (tmp_input_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = BUILTIN_INPUT(tstate, tmp_input_arg_1);
  Py_DECREF(tmp_input_arg_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  assert(var_user_id == NULL);
  var_user_id = tmp_assign_source_1;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_str_arg_value_1;
  PyObject *tmp_encoding_value_1;
  CHECK_OBJECT(var_user_id);
  tmp_str_arg_value_1 = var_user_id;
  tmp_encoding_value_1 = mod_consts[22];
  tmp_assign_source_2 = UNICODE_ENCODE2(tstate, tmp_str_arg_value_1, tmp_encoding_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  assert(var_user_id_bytes == NULL);
  var_user_id_bytes = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_args_element_value_1;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[23]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_user_id_bytes);
  tmp_args_element_value_1 = var_user_id_bytes;
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 69;
  tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[24], tmp_args_element_value_1);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  assert(var_base64_bytes == NULL);
  var_base64_bytes = tmp_assign_source_3;
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(var_base64_bytes);
  tmp_expression_value_1 = var_base64_bytes;
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 70;
  tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[26]);

  Py_DECREF(tmp_called_value_3);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  assert(var_base64_string == NULL);
  var_base64_string = tmp_assign_source_4;
 }
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_add_expr_left_3;
  PyObject *tmp_add_expr_right_3;
  PyObject *tmp_add_expr_left_4;
  PyObject *tmp_add_expr_right_4;
  PyObject *tmp_called_value_5;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_4 != NULL);
  tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_4 == NULL)) {
      tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_5 == NULL)) {
      tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  tmp_tuple_element_1 = mod_consts[27];
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_1;
   PyObject *tmp_format_spec_1;
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   CHECK_OBJECT(var_base64_string);
   tmp_format_value_1 = var_base64_string;
   tmp_format_spec_1 = mod_consts[19];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 73;
    type_description_1 = "ooooo";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto try_except_handler_2;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_args_element_value_3 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_args_element_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 73;
  tmp_add_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
  Py_DECREF(tmp_args_element_value_3);
  if (tmp_add_expr_right_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
  Py_DECREF(tmp_add_expr_right_4);
  if (tmp_add_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_3 == NULL)) {
      tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_3);

   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
  Py_DECREF(tmp_add_expr_left_3);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 73;
  tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "ooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_2);
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_1 = exception_type;
 exception_keeper_value_1 = exception_value;
 exception_keeper_tb_1 = exception_tb;
 exception_keeper_lineno_1 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_1 == NULL) {
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_13e2b444b1ad2eb010f767f09a19df03, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_13e2b444b1ad2eb010f767f09a19df03, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_1 = PyExc_Exception;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  assert(!(tmp_res == -1));
  tmp_condition_result_1 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assign_source_5;
  tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
  assert(var_e == NULL);
  Py_INCREF(tmp_assign_source_5);
  var_e = tmp_assign_source_5;
 }
 // Tried code:
 {
  PyObject *tmp_called_value_6;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_add_expr_left_5;
  PyObject *tmp_add_expr_right_5;
  PyObject *tmp_add_expr_left_6;
  PyObject *tmp_add_expr_right_6;
  PyObject *tmp_called_value_7;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_string_concat_values_2;
  PyObject *tmp_tuple_element_2;
  tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_6 != NULL);
  tmp_add_expr_left_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_6 == NULL)) {
      tmp_add_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_7 == NULL)) {
      tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  tmp_tuple_element_2 = mod_consts[28];
  tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_2;
   PyObject *tmp_format_spec_2;
   PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
   CHECK_OBJECT(var_e);
   tmp_format_value_2 = var_e;
   tmp_format_spec_2 = mod_consts[19];
   tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
   if (tmp_tuple_element_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 75;
    type_description_1 = "ooooo";
       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
  }
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_2:;
  Py_DECREF(tmp_string_concat_values_2);
  goto try_except_handler_4;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  tmp_args_element_value_5 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_2);
  Py_DECREF(tmp_string_concat_values_2);
  if (tmp_args_element_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 75;
  tmp_add_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
  Py_DECREF(tmp_args_element_value_5);
  if (tmp_add_expr_right_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
  Py_DECREF(tmp_add_expr_right_6);
  if (tmp_add_expr_left_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  tmp_add_expr_right_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_5 == NULL)) {
      tmp_add_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_5);

   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
  Py_DECREF(tmp_add_expr_left_5);
  if (tmp_args_element_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 75;
  tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
  Py_DECREF(tmp_args_element_value_4);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooooo";
      goto try_except_handler_4;
  }
  Py_DECREF(tmp_call_result_3);
 }
 goto try_end_2;
 // Exception handler code:
 try_except_handler_4:;
 exception_keeper_type_2 = exception_type;
 exception_keeper_value_2 = exception_value;
 exception_keeper_tb_2 = exception_tb;
 exception_keeper_lineno_2 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_e);
 var_e = NULL;

 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto try_except_handler_3;
 // End of try:
 try_end_2:;
 Py_XDECREF(var_e);
 var_e = NULL;

 goto branch_end_1;
 branch_no_1:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 66;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_13e2b444b1ad2eb010f767f09a19df03->m_frame) frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "ooooo";
 goto try_except_handler_3;
 branch_end_1:;
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

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto frame_exception_exit_1;
 // End of try:
 try_end_3:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto try_end_1;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_1:;
 {
  PyObject *tmp_called_value_8;
  PyObject *tmp_call_result_4;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_add_expr_left_7;
  PyObject *tmp_add_expr_right_7;
  PyObject *tmp_add_expr_left_8;
  PyObject *tmp_add_expr_right_8;
  PyObject *tmp_called_value_9;
  tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_8 != NULL);
  tmp_add_expr_left_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_8 == NULL)) {
      tmp_add_expr_left_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_9 == NULL)) {
      tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 77;
  tmp_add_expr_right_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[20]);

  if (tmp_add_expr_right_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
  Py_DECREF(tmp_add_expr_right_8);
  if (tmp_add_expr_left_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_7 == NULL)) {
      tmp_add_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_7);

   exception_lineno = 77;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
  Py_DECREF(tmp_add_expr_left_7);
  if (tmp_args_element_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  frame_13e2b444b1ad2eb010f767f09a19df03->m_frame.f_lineno = 77;
  tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
  Py_DECREF(tmp_args_element_value_6);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_4);
 }
 {
  PyObject *tmp_capi_result_1;
  tmp_capi_result_1 = BUILTIN_INPUT(tstate, NULL);
  if (tmp_capi_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_capi_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_13e2b444b1ad2eb010f767f09a19df03, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_13e2b444b1ad2eb010f767f09a19df03->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_13e2b444b1ad2eb010f767f09a19df03, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_13e2b444b1ad2eb010f767f09a19df03,
     type_description_1,
     var_user_id,
     var_user_id_bytes,
     var_base64_bytes,
     var_base64_string,
     var_e
 );


 // Release cached frame if used for exception.
 if (frame_13e2b444b1ad2eb010f767f09a19df03 == cache_frame_13e2b444b1ad2eb010f767f09a19df03) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_13e2b444b1ad2eb010f767f09a19df03);
     cache_frame_13e2b444b1ad2eb010f767f09a19df03 = NULL;
 }

 assertFrameObject(frame_13e2b444b1ad2eb010f767f09a19df03);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_user_id);
 Py_DECREF(var_user_id);
 var_user_id = NULL;
 Py_XDECREF(var_user_id_bytes);
 var_user_id_bytes = NULL;
 Py_XDECREF(var_base64_bytes);
 var_base64_bytes = NULL;
 Py_XDECREF(var_base64_string);
 var_base64_string = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_4 = exception_type;
 exception_keeper_value_4 = exception_value;
 exception_keeper_tb_4 = exception_tb;
 exception_keeper_lineno_4 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_user_id);
 var_user_id = NULL;
 Py_XDECREF(var_user_id_bytes);
 var_user_id_bytes = NULL;
 Py_XDECREF(var_base64_bytes);
 var_base64_bytes = NULL;
 Py_XDECREF(var_base64_string);
 var_base64_string = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__7_main(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *var_choice = NULL;
 struct Nuitka_FrameObject *frame_cc9c6e42a93e858fa1366b719e8bcca4;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_cc9c6e42a93e858fa1366b719e8bcca4 = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_cc9c6e42a93e858fa1366b719e8bcca4)) {
     Py_XDECREF(cache_frame_cc9c6e42a93e858fa1366b719e8bcca4);

#if _DEBUG_REFCOUNTS
     if (cache_frame_cc9c6e42a93e858fa1366b719e8bcca4 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_cc9c6e42a93e858fa1366b719e8bcca4 = MAKE_FUNCTION_FRAME(tstate, codeobj_cc9c6e42a93e858fa1366b719e8bcca4, module___main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_cc9c6e42a93e858fa1366b719e8bcca4->m_type_description == NULL);
 frame_cc9c6e42a93e858fa1366b719e8bcca4 = cache_frame_cc9c6e42a93e858fa1366b719e8bcca4;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_cc9c6e42a93e858fa1366b719e8bcca4);
 assert(Py_REFCNT(frame_cc9c6e42a93e858fa1366b719e8bcca4) == 2);

 // Framed code:
 loop_start_1:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_call_result_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 82;
  tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_input_arg_1;
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_add_expr_left_2;
  PyObject *tmp_add_expr_right_2;
  PyObject *tmp_called_value_2;
  tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_2 == NULL)) {
      tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 83;
  tmp_add_expr_right_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[30]);

  if (tmp_add_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
  Py_DECREF(tmp_add_expr_right_2);
  if (tmp_add_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_1 == NULL)) {
      tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_1);

   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_input_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
  Py_DECREF(tmp_add_expr_left_1);
  if (tmp_input_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = BUILTIN_INPUT(tstate, tmp_input_arg_1);
  Py_DECREF(tmp_input_arg_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = var_choice;
      var_choice = tmp_assign_source_1;
      Py_XDECREF(old);
  }

 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(var_choice);
  tmp_cmp_expr_left_1 = var_choice;
  tmp_cmp_expr_right_1 = mod_consts[31];
  tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_called_value_3;
  PyObject *tmp_call_result_2;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[32]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 86;
  tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 goto branch_end_1;
 branch_no_1:;
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  CHECK_OBJECT(var_choice);
  tmp_cmp_expr_left_2 = var_choice;
  tmp_cmp_expr_right_2 = mod_consts[33];
  tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_call_result_3;
  tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[34]);

  if (unlikely(tmp_called_value_4 == NULL)) {
      tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
  }

  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 88;
  tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_3);
 }
 goto branch_end_2;
 branch_no_2:;
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_call_result_4;
  tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

  if (unlikely(tmp_called_value_5 == NULL)) {
      tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
  }

  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 90;
  tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_4);
 }
 {
  PyObject *tmp_called_value_6;
  PyObject *tmp_call_result_5;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_add_expr_left_3;
  PyObject *tmp_add_expr_right_3;
  PyObject *tmp_add_expr_left_4;
  PyObject *tmp_add_expr_right_4;
  PyObject *tmp_called_value_7;
  tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_6 != NULL);
  tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_4 == NULL)) {
      tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_7 == NULL)) {
      tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 91;
  tmp_add_expr_right_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[35]);

  if (tmp_add_expr_right_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
  Py_DECREF(tmp_add_expr_right_4);
  if (tmp_add_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_3 == NULL)) {
      tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_3);

   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
  Py_DECREF(tmp_add_expr_left_3);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 91;
  tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_call_result_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_5);
 }
 {
  PyObject *tmp_called_value_8;
  PyObject *tmp_call_result_6;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_add_expr_left_5;
  PyObject *tmp_add_expr_right_5;
  PyObject *tmp_add_expr_left_6;
  PyObject *tmp_add_expr_right_6;
  PyObject *tmp_called_value_9;
  tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[7]);
  assert(tmp_called_value_8 != NULL);
  tmp_add_expr_left_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_add_expr_left_6 == NULL)) {
      tmp_add_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_add_expr_left_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_9 == NULL)) {
      tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 92;
  tmp_add_expr_right_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[20]);

  if (tmp_add_expr_right_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
  Py_DECREF(tmp_add_expr_right_6);
  if (tmp_add_expr_left_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

  if (unlikely(tmp_add_expr_right_5 == NULL)) {
      tmp_add_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
  }

  if (tmp_add_expr_right_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_add_expr_left_5);

   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
  Py_DECREF(tmp_add_expr_left_5);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame.f_lineno = 92;
  tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_2);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_call_result_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_6);
 }
 {
  PyObject *tmp_capi_result_1;
  tmp_capi_result_1 = BUILTIN_INPUT(tstate, NULL);
  if (tmp_capi_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_capi_result_1);
 }
 branch_end_2:;
 branch_end_1:;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 81;
  type_description_1 = "o";
     goto frame_exception_exit_1;
 }
 goto loop_start_1;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_cc9c6e42a93e858fa1366b719e8bcca4, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_cc9c6e42a93e858fa1366b719e8bcca4->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_cc9c6e42a93e858fa1366b719e8bcca4, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_cc9c6e42a93e858fa1366b719e8bcca4,
     type_description_1,
     var_choice
 );


 // Release cached frame if used for exception.
 if (frame_cc9c6e42a93e858fa1366b719e8bcca4 == cache_frame_cc9c6e42a93e858fa1366b719e8bcca4) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_cc9c6e42a93e858fa1366b719e8bcca4);
     cache_frame_cc9c6e42a93e858fa1366b719e8bcca4 = NULL;
 }

 assertFrameObject(frame_cc9c6e42a93e858fa1366b719e8bcca4);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
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

 Py_XDECREF(var_choice);
 var_choice = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION___main__$$$function__1_clear_screen() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__1_clear_screen,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6197a1db3e1d06cabec0fe7da14e6528,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__2_center_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__2_center_text,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc888923fa4520c3a47db45925f1d5ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__3_show_main_menu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__3_show_main_menu,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_189bc2de23a854f592a3ef0ef1daac17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__4_get_ip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__4_get_ip,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a72fd6e57f35578afddb80a9321ff8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__5_show_ip_screen() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__5_show_ip_screen,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6772292f0b0b728dd55af75032ef5888,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__6_user_id_to_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__6_user_id_to_token,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13e2b444b1ad2eb010f767f09a19df03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__7_main() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__7_main,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc9c6e42a93e858fa1366b719e8bcca4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

static function_impl_code const function_table___main__[] = {
 impl___main__$$$function__1_clear_screen,
 impl___main__$$$function__2_center_text,
 impl___main__$$$function__3_show_main_menu,
 impl___main__$$$function__4_get_ip,
 impl___main__$$$function__5_show_ip_screen,
 impl___main__$$$function__6_user_id_to_token,
 impl___main__$$$function__7_main,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table___main__);

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
        module___main__,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table___main__,
        sizeof(function_table___main__) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode___main__(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("__main__");

    // Store the module for future use.
    module___main__ = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 1
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
        PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("__main__: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 1
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "__main__" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in init__main__\n");

    moduledict___main__ = MODULE_DICT(module___main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 struct Nuitka_FrameObject *frame_63d8b8f65ebb8a24cae5062501465fcf;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
 frame_63d8b8f65ebb8a24cae5062501465fcf = MAKE_MODULE_FRAME(codeobj_63d8b8f65ebb8a24cae5062501465fcf, module___main__);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_63d8b8f65ebb8a24cae5062501465fcf);
 assert(Py_REFCNT(frame_63d8b8f65ebb8a24cae5062501465fcf) == 2);

 // Framed code:
 {
  PyObject *tmp_imported_value_1;
  frame_63d8b8f65ebb8a24cae5062501465fcf->m_frame.f_lineno = 1;
  tmp_imported_value_1 = IMPORT_HARD_SITE();
  if (tmp_imported_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_imported_value_2;
  frame_63d8b8f65ebb8a24cae5062501465fcf->m_frame.f_lineno = 1;
  tmp_imported_value_2 = IMPORT_MODULE_FIXED(tstate, mod_consts[36], mod_consts[36]);
  if (tmp_imported_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_imported_value_2);
 }
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = mod_consts[38];
  UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
 }
 {
  PyObject *tmp_assign_source_3;
  tmp_assign_source_3 = Py_None;
  UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  tmp_assign_source_5 = IMPORT_HARD_OS();
  assert(!(tmp_assign_source_5 == NULL));
  UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[14];
  tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[43];
  frame_63d8b8f65ebb8a24cae5062501465fcf->m_frame.f_lineno = 2;
  tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
 }
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[23];
  tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = Py_None;
  tmp_level_value_2 = mod_consts[43];
  frame_63d8b8f65ebb8a24cae5062501465fcf->m_frame.f_lineno = 3;
  tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
 }
 {
  PyObject *tmp_assign_source_8;
  tmp_assign_source_8 = mod_consts[44];
  UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_8);
 }
 {
  PyObject *tmp_assign_source_9;
  tmp_assign_source_9 = mod_consts[45];
  UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_9);
 }
 {
  PyObject *tmp_assign_source_10;


  tmp_assign_source_10 = MAKE_FUNCTION___main__$$$function__1_clear_screen();

  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_10);
 }
 {
  PyObject *tmp_assign_source_11;


  tmp_assign_source_11 = MAKE_FUNCTION___main__$$$function__2_center_text();

  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_11);
 }
 {
  PyObject *tmp_assign_source_12;


  tmp_assign_source_12 = MAKE_FUNCTION___main__$$$function__3_show_main_menu();

  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_12);
 }
 {
  PyObject *tmp_assign_source_13;


  tmp_assign_source_13 = MAKE_FUNCTION___main__$$$function__4_get_ip();

  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_13);
 }
 {
  PyObject *tmp_assign_source_14;


  tmp_assign_source_14 = MAKE_FUNCTION___main__$$$function__5_show_ip_screen();

  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_14);
 }
 {
  PyObject *tmp_assign_source_15;


  tmp_assign_source_15 = MAKE_FUNCTION___main__$$$function__6_user_id_to_token();

  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_15);
 }
 {
  PyObject *tmp_assign_source_16;


  tmp_assign_source_16 = MAKE_FUNCTION___main__$$$function__7_main();

  UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_16);
 }
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_call_result_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[46]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
  }

  assert(!(tmp_called_value_1 == NULL));
  frame_63d8b8f65ebb8a24cae5062501465fcf->m_frame.f_lineno = 96;
  tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_63d8b8f65ebb8a24cae5062501465fcf, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_63d8b8f65ebb8a24cae5062501465fcf->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_63d8b8f65ebb8a24cae5062501465fcf, exception_lineno);
 }



 assertFrameObject(frame_63d8b8f65ebb8a24cae5062501465fcf);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("__main__", false);

#if defined(_NUITKA_MODULE) && 1
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "__main__" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module___main__);
    return module___main__;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 1
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("__main__", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
