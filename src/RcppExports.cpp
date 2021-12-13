// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

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
// C_make_glcm_counts
IntegerMatrix C_make_glcm_counts(IntegerMatrix x, int n_levels, IntegerVector shift, String na_opt);
RcppExport SEXP _GLCMTextures_C_make_glcm_counts(SEXP xSEXP, SEXP n_levelsSEXP, SEXP shiftSEXP, SEXP na_optSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_levels(n_levelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< String >::type na_opt(na_optSEXP);
    rcpp_result_gen = Rcpp::wrap(C_make_glcm_counts(x, n_levels, shift, na_opt));
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
NumericMatrix C_glcm_textures_helper(IntegerMatrix rq, IntegerVector w, int n_levels, IntegerVector shift, String na_opt);
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
// C_glcm_textures_helper2
NumericMatrix C_glcm_textures_helper2(IntegerVector x, IntegerVector w2, int n_levels, IntegerVector shift, String na_opt, size_t ni, size_t nw);
RcppExport SEXP _GLCMTextures_C_glcm_textures_helper2(SEXP xSEXP, SEXP w2SEXP, SEXP n_levelsSEXP, SEXP shiftSEXP, SEXP na_optSEXP, SEXP niSEXP, SEXP nwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type w2(w2SEXP);
    Rcpp::traits::input_parameter< int >::type n_levels(n_levelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< String >::type na_opt(na_optSEXP);
    Rcpp::traits::input_parameter< size_t >::type ni(niSEXP);
    Rcpp::traits::input_parameter< size_t >::type nw(nwSEXP);
    rcpp_result_gen = Rcpp::wrap(C_glcm_textures_helper2(x, w2, n_levels, shift, na_opt, ni, nw));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GLCMTextures_C_extract_window_int", (DL_FUNC) &_GLCMTextures_C_extract_window_int, 3},
    {"_GLCMTextures_C_make_glcm", (DL_FUNC) &_GLCMTextures_C_make_glcm, 4},
    {"_GLCMTextures_C_make_glcm_counts", (DL_FUNC) &_GLCMTextures_C_make_glcm_counts, 4},
    {"_GLCMTextures_C_glcm_metrics", (DL_FUNC) &_GLCMTextures_C_glcm_metrics, 1},
    {"_GLCMTextures_C_glcm_textures_helper", (DL_FUNC) &_GLCMTextures_C_glcm_textures_helper, 5},
    {"_GLCMTextures_C_glcm_textures_helper2", (DL_FUNC) &_GLCMTextures_C_glcm_textures_helper2, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_GLCMTextures(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
