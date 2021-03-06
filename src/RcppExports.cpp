// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dplyr.h"
#include <Rcpp.h>

using namespace Rcpp;

// loc
CharacterVector loc(RObject data);
RcppExport SEXP dplyr_loc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type data(dataSEXP);
    __result = Rcpp::wrap(loc(data));
    return __result;
END_RCPP
}
// dfloc
CharacterVector dfloc(List df);
RcppExport SEXP dplyr_dfloc(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type df(dfSEXP);
    __result = Rcpp::wrap(dfloc(df));
    return __result;
END_RCPP
}
// plfloc
CharacterVector plfloc(Pairlist data);
RcppExport SEXP dplyr_plfloc(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Pairlist >::type data(dataSEXP);
    __result = Rcpp::wrap(plfloc(data));
    return __result;
END_RCPP
}
// rank_strings
IntegerVector rank_strings(CharacterVector s);
RcppExport SEXP dplyr_rank_strings(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type s(sSEXP);
    __result = Rcpp::wrap(rank_strings(s));
    return __result;
END_RCPP
}
// arrange_impl
List arrange_impl(DataFrame data, LazyDots dots);
RcppExport SEXP dplyr_arrange_impl(SEXP dataSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    __result = Rcpp::wrap(arrange_impl(data, dots));
    return __result;
END_RCPP
}
// between
LogicalVector between(NumericVector x, double left, double right);
RcppExport SEXP dplyr_between(SEXP xSEXP, SEXP leftSEXP, SEXP rightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type left(leftSEXP);
    Rcpp::traits::input_parameter< double >::type right(rightSEXP);
    __result = Rcpp::wrap(between(x, left, right));
    return __result;
END_RCPP
}
// rbind_all
List rbind_all(List dots, SEXP id);
RcppExport SEXP dplyr_rbind_all(SEXP dotsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type dots(dotsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    __result = Rcpp::wrap(rbind_all(dots, id));
    return __result;
END_RCPP
}
// rbind_list__impl
List rbind_list__impl(Dots dots);
RcppExport SEXP dplyr_rbind_list__impl(SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Dots >::type dots(dotsSEXP);
    __result = Rcpp::wrap(rbind_list__impl(dots));
    return __result;
END_RCPP
}
// cbind_all
List cbind_all(List dots);
RcppExport SEXP dplyr_cbind_all(SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type dots(dotsSEXP);
    __result = Rcpp::wrap(cbind_all(dots));
    return __result;
END_RCPP
}
// combine_all
SEXP combine_all(List data);
RcppExport SEXP dplyr_combine_all(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    __result = Rcpp::wrap(combine_all(data));
    return __result;
END_RCPP
}
// combine_vars
SEXP combine_vars(CharacterVector vars, ListOf<IntegerVector> xs);
RcppExport SEXP dplyr_combine_vars(SEXP varsSEXP, SEXP xsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< ListOf<IntegerVector> >::type xs(xsSEXP);
    __result = Rcpp::wrap(combine_vars(vars, xs));
    return __result;
END_RCPP
}
// distinct_impl
SEXP distinct_impl(DataFrame df, CharacterVector vars);
RcppExport SEXP dplyr_distinct_impl(SEXP dfSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP);
    __result = Rcpp::wrap(distinct_impl(df, vars));
    return __result;
END_RCPP
}
// semi_join_impl
DataFrame semi_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_semi_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    __result = Rcpp::wrap(semi_join_impl(x, y, by_x, by_y));
    return __result;
END_RCPP
}
// anti_join_impl
DataFrame anti_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_anti_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    __result = Rcpp::wrap(anti_join_impl(x, y, by_x, by_y));
    return __result;
END_RCPP
}
// inner_join_impl
DataFrame inner_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_inner_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    __result = Rcpp::wrap(inner_join_impl(x, y, by_x, by_y));
    return __result;
END_RCPP
}
// left_join_impl
DataFrame left_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_left_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    __result = Rcpp::wrap(left_join_impl(x, y, by_x, by_y));
    return __result;
END_RCPP
}
// right_join_impl
DataFrame right_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_right_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    __result = Rcpp::wrap(right_join_impl(x, y, by_x, by_y));
    return __result;
END_RCPP
}
// outer_join_impl
DataFrame outer_join_impl(DataFrame x, DataFrame y, CharacterVector by_x, CharacterVector by_y);
RcppExport SEXP dplyr_outer_join_impl(SEXP xSEXP, SEXP ySEXP, SEXP by_xSEXP, SEXP by_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_x(by_xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type by_y(by_ySEXP);
    __result = Rcpp::wrap(outer_join_impl(x, y, by_x, by_y));
    return __result;
END_RCPP
}
// shallow_copy
SEXP shallow_copy(const List& data);
RcppExport SEXP dplyr_shallow_copy(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type data(dataSEXP);
    __result = Rcpp::wrap(shallow_copy(data));
    return __result;
END_RCPP
}
// compatible_data_frame
dplyr::BoolResult compatible_data_frame(DataFrame& x, DataFrame& y, bool ignore_col_order, bool convert);
RcppExport SEXP dplyr_compatible_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame& >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame& >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    __result = Rcpp::wrap(compatible_data_frame(x, y, ignore_col_order, convert));
    return __result;
END_RCPP
}
// equal_data_frame
dplyr::BoolResult equal_data_frame(DataFrame x, DataFrame y, bool ignore_col_order, bool ignore_row_order, bool convert);
RcppExport SEXP dplyr_equal_data_frame(SEXP xSEXP, SEXP ySEXP, SEXP ignore_col_orderSEXP, SEXP ignore_row_orderSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_col_order(ignore_col_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_row_order(ignore_row_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    __result = Rcpp::wrap(equal_data_frame(x, y, ignore_col_order, ignore_row_order, convert));
    return __result;
END_RCPP
}
// all_equal_data_frame
dplyr::BoolResult all_equal_data_frame(List args, Environment env);
RcppExport SEXP dplyr_all_equal_data_frame(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    __result = Rcpp::wrap(all_equal_data_frame(args, env));
    return __result;
END_RCPP
}
// union_data_frame
DataFrame union_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_union_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    __result = Rcpp::wrap(union_data_frame(x, y));
    return __result;
END_RCPP
}
// intersect_data_frame
DataFrame intersect_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_intersect_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    __result = Rcpp::wrap(intersect_data_frame(x, y));
    return __result;
END_RCPP
}
// setdiff_data_frame
DataFrame setdiff_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_setdiff_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    __result = Rcpp::wrap(setdiff_data_frame(x, y));
    return __result;
END_RCPP
}
// match_data_frame
IntegerVector match_data_frame(DataFrame x, DataFrame y);
RcppExport SEXP dplyr_match_data_frame(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type y(ySEXP);
    __result = Rcpp::wrap(match_data_frame(x, y));
    return __result;
END_RCPP
}
// grouped_df_impl
DataFrame grouped_df_impl(DataFrame data, ListOf<Symbol> symbols, bool drop);
RcppExport SEXP dplyr_grouped_df_impl(SEXP dataSEXP, SEXP symbolsSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    __result = Rcpp::wrap(grouped_df_impl(data, symbols, drop));
    return __result;
END_RCPP
}
// grouped_df_adj_impl
DataFrame grouped_df_adj_impl(DataFrame data, ListOf<Symbol> symbols, bool drop);
RcppExport SEXP dplyr_grouped_df_adj_impl(SEXP dataSEXP, SEXP symbolsSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    __result = Rcpp::wrap(grouped_df_adj_impl(data, symbols, drop));
    return __result;
END_RCPP
}
// slice_impl
SEXP slice_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_slice_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    __result = Rcpp::wrap(slice_impl(df, dots));
    return __result;
END_RCPP
}
// mutate_impl
SEXP mutate_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_mutate_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    __result = Rcpp::wrap(mutate_impl(df, dots));
    return __result;
END_RCPP
}
// order_impl
IntegerVector order_impl(List args, Environment env);
RcppExport SEXP dplyr_order_impl(SEXP argsSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    __result = Rcpp::wrap(order_impl(args, env));
    return __result;
END_RCPP
}
// sort_impl
DataFrame sort_impl(DataFrame data);
RcppExport SEXP dplyr_sort_impl(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    __result = Rcpp::wrap(sort_impl(data));
    return __result;
END_RCPP
}
// group_size_grouped_cpp
IntegerVector group_size_grouped_cpp(GroupedDataFrame gdf);
RcppExport SEXP dplyr_group_size_grouped_cpp(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP);
    __result = Rcpp::wrap(group_size_grouped_cpp(gdf));
    return __result;
END_RCPP
}
// n_distinct
SEXP n_distinct(SEXP x, bool na_rm);
RcppExport SEXP dplyr_n_distinct(SEXP xSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    __result = Rcpp::wrap(n_distinct(x, na_rm));
    return __result;
END_RCPP
}
// as_regular_df
DataFrame as_regular_df(DataFrame df);
RcppExport SEXP dplyr_as_regular_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    __result = Rcpp::wrap(as_regular_df(df));
    return __result;
END_RCPP
}
// ungroup_grouped_df
DataFrame ungroup_grouped_df(DataFrame df);
RcppExport SEXP dplyr_ungroup_grouped_df(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    __result = Rcpp::wrap(ungroup_grouped_df(df));
    return __result;
END_RCPP
}
// split_indices
std::vector<std::vector<int> > split_indices(IntegerVector group, int groups);
RcppExport SEXP dplyr_split_indices(SEXP groupSEXP, SEXP groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type groups(groupsSEXP);
    __result = Rcpp::wrap(split_indices(group, groups));
    return __result;
END_RCPP
}
// gp
unsigned short gp(SEXP x);
RcppExport SEXP dplyr_gp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(gp(x));
    return __result;
END_RCPP
}
// filter_impl
SEXP filter_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_filter_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    __result = Rcpp::wrap(filter_impl(df, dots));
    return __result;
END_RCPP
}
// grouped_indices_grouped_df_impl
IntegerVector grouped_indices_grouped_df_impl(GroupedDataFrame gdf);
RcppExport SEXP dplyr_grouped_indices_grouped_df_impl(SEXP gdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< GroupedDataFrame >::type gdf(gdfSEXP);
    __result = Rcpp::wrap(grouped_indices_grouped_df_impl(gdf));
    return __result;
END_RCPP
}
// grouped_indices_impl
IntegerVector grouped_indices_impl(DataFrame data, ListOf<Symbol> symbols);
RcppExport SEXP dplyr_grouped_indices_impl(SEXP dataSEXP, SEXP symbolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< ListOf<Symbol> >::type symbols(symbolsSEXP);
    __result = Rcpp::wrap(grouped_indices_impl(data, symbols));
    return __result;
END_RCPP
}
// select_impl
DataFrame select_impl(DataFrame df, CharacterVector vars);
RcppExport SEXP dplyr_select_impl(SEXP dfSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type vars(varsSEXP);
    __result = Rcpp::wrap(select_impl(df, vars));
    return __result;
END_RCPP
}
// strings_addresses
CharacterVector strings_addresses(CharacterVector s);
RcppExport SEXP dplyr_strings_addresses(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type s(sSEXP);
    __result = Rcpp::wrap(strings_addresses(s));
    return __result;
END_RCPP
}
// summarise_impl
SEXP summarise_impl(DataFrame df, LazyDots dots);
RcppExport SEXP dplyr_summarise_impl(SEXP dfSEXP, SEXP dotsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    Rcpp::traits::input_parameter< LazyDots >::type dots(dotsSEXP);
    __result = Rcpp::wrap(summarise_impl(df, dots));
    return __result;
END_RCPP
}
// test_comparisons
LogicalVector test_comparisons();
RcppExport SEXP dplyr_test_comparisons() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(test_comparisons());
    return __result;
END_RCPP
}
// cumall
LogicalVector cumall(LogicalVector x);
RcppExport SEXP dplyr_cumall(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    __result = Rcpp::wrap(cumall(x));
    return __result;
END_RCPP
}
// cumany
LogicalVector cumany(LogicalVector x);
RcppExport SEXP dplyr_cumany(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    __result = Rcpp::wrap(cumany(x));
    return __result;
END_RCPP
}
// cummean
NumericVector cummean(NumericVector x);
RcppExport SEXP dplyr_cummean(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(cummean(x));
    return __result;
END_RCPP
}
