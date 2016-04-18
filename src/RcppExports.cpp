// This file was generated by Rcpp::compileAttributes

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;
using namespace arma; 

// simulateTreeCpp2
List simulateTreeCpp2(const NumericVector times, const List Fs, const List Gs, const List Ys, const List As, NumericVector sortedCoHeights, const NumericVector sortedSampleHeights, const NumericMatrix sortedSampleStates, double maxSampleTime, const int m, bool finiteSizeCorrection,  std::vector< std::string > DEMES);
RcppExport SEXP sourceCpp_2_simulateTreeCpp2(SEXP timesSEXP, SEXP FsSEXP, SEXP GsSEXP, SEXP YsSEXP, SEXP AsSEXP, SEXP sortedCoHeightsSEXP, SEXP sortedSampleHeightsSEXP, SEXP sortedSampleStatesSEXP, SEXP maxSampleTimeSEXP, SEXP mSEXP, SEXP finiteSizeCorrectionSEXP, SEXP DEMESSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< const List >::type Fs(FsSEXP);
    Rcpp::traits::input_parameter< const List >::type Gs(GsSEXP);
    Rcpp::traits::input_parameter< const List >::type Ys(YsSEXP);
    Rcpp::traits::input_parameter< const List >::type As(AsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sortedCoHeights(sortedCoHeightsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sortedSampleHeights(sortedSampleHeightsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type sortedSampleStates(sortedSampleStatesSEXP);
    Rcpp::traits::input_parameter< double >::type maxSampleTime(maxSampleTimeSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool >::type finiteSizeCorrection(finiteSizeCorrectionSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type DEMES(DEMESSEXP);
    __result = Rcpp::wrap(simulateTreeCpp2(times, Fs, Gs, Ys, As, sortedCoHeights, sortedSampleHeights, sortedSampleStates, maxSampleTime, m, finiteSizeCorrection, DEMES));
    return __result;
END_RCPP
}

// colik2cpp
double colik2cpp(const NumericVector heights, const List Fs, const List Gs, const List Ys, const IntegerVector eventIndicator, const IntegerVector eventIndicatorNode, const NumericVector eventHeights, const mat sortedSampleStates, const IntegerMatrix daughters, const int n, const int Nnode, const int m, double AgtYboundaryCondition);
RcppExport SEXP sourceCpp_0_colik2cpp(SEXP heightsSEXP, SEXP FsSEXP, SEXP GsSEXP, SEXP YsSEXP, SEXP eventIndicatorSEXP, SEXP eventIndicatorNodeSEXP, SEXP eventHeightsSEXP, SEXP sortedSampleStatesSEXP, SEXP daughtersSEXP, SEXP nSEXP, SEXP NnodeSEXP, SEXP mSEXP, SEXP AgtYboundaryConditionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type heights(heightsSEXP);
    Rcpp::traits::input_parameter< const List >::type Fs(FsSEXP);
    Rcpp::traits::input_parameter< const List >::type Gs(GsSEXP);
    Rcpp::traits::input_parameter< const List >::type Ys(YsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type eventIndicator(eventIndicatorSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type eventIndicatorNode(eventIndicatorNodeSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type eventHeights(eventHeightsSEXP);
    Rcpp::traits::input_parameter< const mat >::type sortedSampleStates(sortedSampleStatesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type daughters(daughtersSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type Nnode(NnodeSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type AgtYboundaryCondition(AgtYboundaryConditionSEXP);
    __result = Rcpp::wrap(colik2cpp(heights, Fs, Gs, Ys, eventIndicator, eventIndicatorNode, eventHeights, sortedSampleStates, daughters, n, Nnode, m, AgtYboundaryCondition));
    return __result;
END_RCPP
}

//colik3cpp
double colik3cpp(const NumericVector heights, const List Fs, const List Gs, const List Ys, const IntegerVector eventIndicator, const IntegerVector eventIndicatorNode, const NumericVector eventHeights, const mat sortedSampleStates, const IntegerMatrix daughters, const int n, const int Nnode, const int m, double AgtYboundaryCondition);
RcppExport SEXP sourceCpp_0_colik3cpp(SEXP heightsSEXP, SEXP FsSEXP, SEXP GsSEXP, SEXP YsSEXP, SEXP eventIndicatorSEXP, SEXP eventIndicatorNodeSEXP, SEXP eventHeightsSEXP, SEXP sortedSampleStatesSEXP, SEXP daughtersSEXP, SEXP nSEXP, SEXP NnodeSEXP, SEXP mSEXP, SEXP AgtYboundaryConditionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type heights(heightsSEXP);
    Rcpp::traits::input_parameter< const List >::type Fs(FsSEXP);
    Rcpp::traits::input_parameter< const List >::type Gs(GsSEXP);
    Rcpp::traits::input_parameter< const List >::type Ys(YsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type eventIndicator(eventIndicatorSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type eventIndicatorNode(eventIndicatorNodeSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type eventHeights(eventHeightsSEXP);
    Rcpp::traits::input_parameter< const mat >::type sortedSampleStates(sortedSampleStatesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type daughters(daughtersSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type Nnode(NnodeSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type AgtYboundaryCondition(AgtYboundaryConditionSEXP);
    __result = Rcpp::wrap(colik3cpp(heights, Fs, Gs, Ys, eventIndicator, eventIndicatorNode, eventHeights, sortedSampleStates, daughters, n, Nnode, m, AgtYboundaryCondition));
    return __result;
END_RCPP
}


// dAL
List dAL(double t, NumericVector y, List parms);
RcppExport SEXP sourceCpp_0_dAL(SEXP tSEXP, SEXP ySEXP, SEXP parmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type parms(parmsSEXP);
    __result = Rcpp::wrap(dAL(t, y, parms));
    return __result;
END_RCPP
}

// updateWCpp
NumericMatrix updateWCpp(NumericMatrix W, NumericVector psi_a, IntegerVector utips, IntegerVector vtips, IntegerVector utips_Wcoords, IntegerVector vtips_Wcoords);
RcppExport SEXP sourceCpp_0_updateWCpp(SEXP WSEXP, SEXP psi_aSEXP, SEXP utipsSEXP, SEXP vtipsSEXP, SEXP utips_WcoordsSEXP, SEXP vtips_WcoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type psi_a(psi_aSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type utips(utipsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type vtips(vtipsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type utips_Wcoords(utips_WcoordsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type vtips_Wcoords(vtips_WcoordsSEXP);
    __result = Rcpp::wrap(updateWCpp(W, psi_a, utips, vtips, utips_Wcoords, vtips_Wcoords));
    return __result;
END_RCPP
}

// sourceAttribMultiDemeCpp
List sourceAttribMultiDemeCpp(const NumericVector heights, const List Fs, const List Gs, const List Ys
  , const IntegerVector eventIndicator // sample or co
  , const IntegerVector eventIndicatorNode // node involved at each event
  , const NumericVector eventHeights
  , const mat sortedSampleStates
  , const IntegerMatrix daughters // daughters of each node
  , const int n
  , const int Nnode
  , const int m
  , double AgtYboundaryCondition
  , const double maxHeight // terminate computation at this height
);
RcppExport SEXP sourceCpp_0_sourceAttribMultiDemeCpp( SEXP heightsSEXP, SEXP FsSEXP, SEXP GsSEXP, SEXP YsSEXP, SEXP eventIndicatorSEXP, SEXP eventIndicatorNodeSEXP, SEXP eventHeightsSEXP, SEXP sortedSampleStatesSEXP, SEXP daughtersSEXP, SEXP nSEXP, SEXP NnodeSEXP, SEXP mSEXP, SEXP AgtYboundaryConditionSEXP, SEXP maxHeightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type heights(heightsSEXP);
    Rcpp::traits::input_parameter< const List >::type Fs(FsSEXP);
    Rcpp::traits::input_parameter< const List >::type Gs(GsSEXP);
    Rcpp::traits::input_parameter< const List >::type Ys(YsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type eventIndicator(eventIndicatorSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type eventIndicatorNode(eventIndicatorNodeSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type eventHeights(eventHeightsSEXP);
    Rcpp::traits::input_parameter< const mat >::type sortedSampleStates(sortedSampleStatesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type daughters(daughtersSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type Nnode(NnodeSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type AgtYboundaryCondition(AgtYboundaryConditionSEXP);
    Rcpp::traits::input_parameter< const double >::type maxHeight(maxHeightSEXP);
    
    __result = Rcpp::wrap(sourceAttribMultiDemeCpp( heights, Fs,  Gs,  Ys
	  ,  eventIndicator // sample or co
	  ,  eventIndicatorNode // node involved at each event
	  ,  eventHeights
	  ,  sortedSampleStates
	  ,  daughters // daughters of each node
	  , n
	  ,  Nnode
	  ,  m
	  ,  AgtYboundaryCondition
	  ,  maxHeight // terminate computation at this height
	));
    return __result;
END_RCPP
}
