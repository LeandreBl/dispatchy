#ifndef DISPATCHY_INTERNAL_H_
#define DISPATCHY_INTERNAL_H_

#define __DISPATCHY_E_0(DISPATCHY_ELEMENT)
#define __DISPATCHY_E_1(DISPATCHY_ELEMENT, X) DISPATCHY_ELEMENT(X)
#define __DISPATCHY_E_2(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_1(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_3(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_2(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_4(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_3(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_4(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_3(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_5(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_4(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_6(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_5(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_7(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_6(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_8(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_7(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_9(DISPATCHY_ELEMENT, X, ...)                             \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_8(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_10(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_9(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_11(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_10(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_12(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_11(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_13(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_12(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_14(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_13(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_15(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_14(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_16(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_15(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_17(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_16(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_18(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_17(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_19(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_18(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_20(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_19(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_21(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_20(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_22(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_21(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_23(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_22(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_24(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_23(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_25(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_24(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_26(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_25(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_27(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_26(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_28(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_27(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_29(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_28(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_30(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_29(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_31(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_30(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_32(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_31(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_33(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_32(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_34(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_33(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_35(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_34(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_36(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_35(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_37(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_36(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_38(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_37(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_39(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_38(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_40(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_39(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_41(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_40(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_42(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_41(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_43(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_42(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_44(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_43(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_45(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_44(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_46(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_45(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_47(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_46(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_48(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_47(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_49(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_48(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_50(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_49(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_51(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_50(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_52(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_51(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_53(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_52(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_54(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_53(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_55(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_54(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_56(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_55(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_57(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_56(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_58(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_57(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_59(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_58(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_60(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_59(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_61(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_60(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_62(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_61(DISPATCHY_ELEMENT, __VA_ARGS__)
#define __DISPATCHY_E_63(DISPATCHY_ELEMENT, X, ...)                            \
  DISPATCHY_ELEMENT(X) __DISPATCHY_E_62(DISPATCHY_ELEMENT, __VA_ARGS__)

#define __DISPATCHY_GET_MACRO(                                                 \
    _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, \
    _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, \
    _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, \
    _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, \
    _62, _63, NAME, ...)                                                       \
  NAME
#define __DISPATCHY_FOR_EACH(action, ...)                                      \
  __DISPATCHY_GET_MACRO(                                                       \
      _0, __VA_ARGS__, __DISPATCHY_E_63, __DISPATCHY_E_62, __DISPATCHY_E_61,   \
      __DISPATCHY_E_60, __DISPATCHY_E_59, __DISPATCHY_E_58, __DISPATCHY_E_57,  \
      __DISPATCHY_E_56, __DISPATCHY_E_55, __DISPATCHY_E_54, __DISPATCHY_E_53,  \
      __DISPATCHY_E_52, __DISPATCHY_E_51, __DISPATCHY_E_50, __DISPATCHY_E_49,  \
      __DISPATCHY_E_48, __DISPATCHY_E_47, __DISPATCHY_E_46, __DISPATCHY_E_45,  \
      __DISPATCHY_E_44, __DISPATCHY_E_43, __DISPATCHY_E_42, __DISPATCHY_E_41,  \
      __DISPATCHY_E_40, __DISPATCHY_E_39, __DISPATCHY_E_38, __DISPATCHY_E_37,  \
      __DISPATCHY_E_36, __DISPATCHY_E_35, __DISPATCHY_E_34, __DISPATCHY_E_33,  \
      __DISPATCHY_E_32, __DISPATCHY_E_31, __DISPATCHY_E_30, __DISPATCHY_E_29,  \
      __DISPATCHY_E_28, __DISPATCHY_E_27, __DISPATCHY_E_26, __DISPATCHY_E_25,  \
      __DISPATCHY_E_24, __DISPATCHY_E_23, __DISPATCHY_E_22, __DISPATCHY_E_21,  \
      __DISPATCHY_E_20, __DISPATCHY_E_19, __DISPATCHY_E_18, __DISPATCHY_E_17,  \
      __DISPATCHY_E_16, __DISPATCHY_E_15, __DISPATCHY_E_14, __DISPATCHY_E_13,  \
      __DISPATCHY_E_12, __DISPATCHY_E_11, __DISPATCHY_E_10, __DISPATCHY_E_9,   \
      __DISPATCHY_E_8, __DISPATCHY_E_7, __DISPATCHY_E_6, __DISPATCHY_E_5,      \
      __DISPATCHY_E_4, __DISPATCHY_E_3, __DISPATCHY_E_2, __DISPATCHY_E_1,      \
      __DISPATCHY_E_0)                                                         \
  (action, __VA_ARGS__)

#define __DISPATCHY_INSERT_ARGUMENT(element)                                   \
  av_struct(__dispatchy_enqueue_back_element->alist, __typeof(element),        \
            element);

#endif /* !DISPATCHY_INTERNAL_H_ */