// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// C_extract_window_int
IntegerMatrix C_extract_window_int(IntegerMatrix r, IntegerVector w, IntegerVector idx);
RcppExport SEXP _GLCMTextures_C_extract_window_int(SEXP rSEXP, SEXP wSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type r(rSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(C_extract_window_int(r, w, idx));
    return rcpp_result_gen;
END_RCPP
}
// C_make_glcm
NumericMatrix C_make_glcm(IntegerMatrix x, int n_levels, IntegerVector shift, String na_opt);
RcppExport SEXP _GLCMTextures_C_make_glcm(SEXP xSEXP, SEXP n_levelsSEXP, SEXP shiftSEXP, SEXP na_optSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_levels(n_levelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< String >::type na_opt(na_optSEXP);
    rcpp_result_gen = Rcpp::wrap(C_make_glcm(x, n_levels, shift, na_opt));
    return rcpp_result_gen;
END_RCPP
}
// C_glcm_metrics
NumericVector C_glcm_metrics(NumericMatrix GLCM);
RcppExport SEXP _GLCMTextures_C_glcm_metrics(SEXP GLCMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type GLCM(GLCMSEXP);
    rcpp_result_gen = Rcpp::wrap(C_glcm_metrics(GLCM));
    return rcpp_result_gen;
END_RCPP
}
// C_glcm_textures_helper
List C_glcm_textures_helper(IntegerMatrix rq, IntegerVector w, int n_levels, IntegerVector shift, String na_opt);
RcppExport SEXP _GLCMTextures_C_glcm_textures_helper(SEXP rqSEXP, SEXP wSEXP, SEXP n_levelsSEXP, SEXP shiftSEXP, SEXP na_optSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type rq(rqSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type n_levels(n_levelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< String >::type na_opt(na_optSEXP);
    rcpp_result_gen = Rcpp::wrap(C_glcm_textures_helper(rq, w, n_levels, shift, na_opt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GLCMTextures_C_extract_window_int", (DL_FUNC) &_GLCMTextures_C_extract_window_int, 3},
    {"_GLCMTextures_C_make_glcm", (DL_FUNC) &_GLCMTextures_C_make_glcm, 4},
    {"_GLCMTextures_C_glcm_metrics", (DL_FUNC) &_GLCMTextures_C_glcm_metrics, 1},
    {"_GLCMTextures_C_glcm_textures_helper", (DL_FUNC) &_GLCMTextures_C_glcm_textures_helper, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_GLCMTextures(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
