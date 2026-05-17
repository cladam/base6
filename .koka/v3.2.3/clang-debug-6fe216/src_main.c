// Koka generated module: src/main, koka version: 3.2.3, platform: 64-bit
#include "src_main.h"


// lift anonymous function
struct kk_src_main_hc_assert_fun12__t {
  struct kk_function_s _base;
};
static kk_box_t kk_src_main_hc_assert_fun12(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_src_main_new_hc_assert_fun12(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_src_main_hc_assert_fun12, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_src_main_hc_assert_fun12(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x13;
  bool b_0_9 = kk_bool_unbox(_b_x2); /*bool*/;
  if (b_0_9) {
    _x_x13 = false; /*bool*/
  }
  else {
    _x_x13 = true; /*bool*/
  }
  return kk_bool_box(_x_x13);
}

kk_unit_t kk_src_main_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x10;
  kk_box_t _x_x11 = kk_std_core_hnd__open_none1(kk_src_main_new_hc_assert_fun12(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x10 = kk_bool_unbox(_x_x11); /*bool*/
  if (_match_x10) {
    kk_box_t _x_x14;
    kk_string_t _x_x15;
    kk_define_string_literal(static, _s_x16, 16, "assertion failed", _ctx)
    _x_x15 = kk_string_dup(_s_x16, _ctx); /*string*/
    _x_x14 = kk_std_core_exn_throw(_x_x15, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x14); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

// initialization
void kk_src_main__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_maybe2__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_lazy__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_src_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_lazy__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe2__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
