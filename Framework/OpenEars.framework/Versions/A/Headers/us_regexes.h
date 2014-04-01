/* Autogenerated from make_us_regexes */
static const unsigned char ordinal_number_rxprog[] = {
   156, 6, 0, 119, 1, 0, 3, 4, 0, 14, 48, 49, 50, 51, 52, 53, 
   54, 55, 56, 57, 0, 10, 0, 18, 4, 0, 0, 48, 49, 50, 51, 52, 
   53, 54, 55, 56, 57, 44, 0, 21, 0, 3, 6, 0, 9, 8, 0, 69, 
   116, 104, 0, 6, 0, 9, 8, 0, 60, 84, 72, 0, 6, 0, 9, 8, 
   0, 51, 115, 116, 0, 6, 0, 9, 8, 0, 42, 83, 84, 0, 6, 0, 
   9, 8, 0, 33, 110, 100, 0, 6, 0, 9, 8, 0, 24, 78, 68, 0, 
   6, 0, 9, 8, 0, 15, 114, 100, 0, 6, 0, 9, 8, 0, 6, 82, 
   68, 0, 31, 0, 3, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex ordinal_number_rx = {
   0, 1, NULL, 0, 123,
   (char *)ordinal_number_rxprog
};
const cst_regex * const ordinal_number = &ordinal_number_rx;

static const unsigned char hasvowel_rxprog[] = {
   156, 6, 0, 35, 1, 0, 3, 10, 0, 6, 3, 0, 0, 4, 0, 14, 
   97, 101, 105, 111, 117, 65, 69, 73, 79, 85, 0, 10, 0, 6, 3, 0, 
   0, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex hasvowel_rx = {
   0, 1, NULL, 0, 39,
   (char *)hasvowel_rxprog
};
const cst_regex * const hasvowel = &hasvowel_rx;

static const unsigned char usmoney_rxprog[] = {
   156, 6, 0, 72, 1, 0, 3, 8, 0, 5, 36, 0, 11, 0, 18, 4, 
   0, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 44, 0, 6, 0, 
   34, 21, 0, 3, 6, 0, 25, 8, 0, 5, 46, 0, 11, 0, 17, 4, 
   0, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 31, 0, 6, 
   6, 0, 3, 9, 0, 3, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex usmoney_rx = {
   0, 1, NULL, 0, 76,
   (char *)usmoney_rxprog
};
const cst_regex * const usmoney = &usmoney_rx;

static const unsigned char illion_rxprog[] = {
   156, 6, 0, 25, 1, 0, 3, 10, 0, 6, 3, 0, 0, 8, 0, 10, 
   105, 108, 108, 105, 111, 110, 0, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex illion_rx = {
   0, 1, NULL, 0, 29,
   (char *)illion_rxprog
};
const cst_regex * const illion = &illion_rx;

static const unsigned char romannums_rxprog[] = {
   156, 6, 0, 137, 1, 0, 3, 21, 0, 3, 6, 0, 36, 8, 0, 5, 
   73, 0, 6, 0, 8, 8, 0, 8, 73, 0, 6, 0, 3, 9, 0, 3, 
   6, 0, 8, 8, 0, 8, 73, 0, 6, 0, 3, 9, 0, 89, 6, 0, 
   9, 8, 0, 83, 73, 86, 0, 6, 0, 50, 8, 0, 5, 86, 0, 6, 
   0, 8, 8, 0, 8, 73, 0, 6, 0, 3, 9, 0, 3, 6, 0, 8, 
   8, 0, 8, 73, 0, 6, 0, 3, 9, 0, 3, 6, 0, 8, 8, 0, 
   8, 73, 0, 6, 0, 3, 9, 0, 30, 6, 0, 9, 8, 0, 24, 73, 
   88, 0, 6, 0, 18, 8, 0, 5, 88, 0, 10, 0, 10, 4, 0, 0, 
   86, 73, 88, 0, 31, 0, 3, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex romannums_rx = {
   0, 1, NULL, 0, 141,
   (char *)romannums_rxprog
};
const cst_regex * const romannums = &romannums_rx;

static const unsigned char drst_rxprog[] = {
   156, 6, 0, 45, 1, 0, 3, 21, 0, 3, 6, 0, 15, 4, 0, 6, 
   100, 68, 0, 4, 0, 21, 82, 114, 0, 6, 0, 15, 4, 0, 6, 83, 
   115, 0, 4, 0, 6, 116, 84, 0, 31, 0, 3, 2, 0, 3, 0, 0, 
   0, 
};
static const cst_regex drst_rx = {
   0, 1, NULL, 0, 49,
   (char *)drst_rxprog
};
const cst_regex * const drst = &drst_rx;

static const unsigned char numess_rxprog[] = {
   156, 6, 0, 31, 1, 0, 3, 11, 0, 17, 4, 0, 0, 48, 49, 50, 
   51, 52, 53, 54, 55, 56, 57, 0, 8, 0, 5, 115, 0, 2, 0, 3, 
   0, 0, 0, 
};
static const cst_regex numess_rx = {
   0, 1, NULL, 0, 35,
   (char *)numess_rxprog
};
const cst_regex * const numess = &numess_rx;

static const unsigned char sevenphonenumber_rxprog[] = {
   156, 6, 0, 112, 1, 0, 3, 4, 0, 14, 48, 49, 50, 51, 52, 53, 
   54, 55, 56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 
   56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 
   0, 8, 0, 5, 45, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 
   55, 56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 
   57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 
   4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 2, 0, 
   3, 0, 0, 0, 
};
static const cst_regex sevenphonenumber_rx = {
   0, 1, NULL, 0, 116,
   (char *)sevenphonenumber_rxprog
};
const cst_regex * const sevenphonenumber = &sevenphonenumber_rx;

static const unsigned char fourdigits_rxprog[] = {
   156, 6, 0, 65, 1, 0, 3, 4, 0, 14, 48, 49, 50, 51, 52, 53, 
   54, 55, 56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 
   56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 
   0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 2, 
   0, 3, 0, 0, 0, 
};
static const cst_regex fourdigits_rx = {
   0, 1, NULL, 0, 69,
   (char *)fourdigits_rxprog
};
const cst_regex * const fourdigits = &fourdigits_rx;

static const unsigned char threedigits_rxprog[] = {
   156, 6, 0, 51, 1, 0, 3, 4, 0, 14, 48, 49, 50, 51, 52, 53, 
   54, 55, 56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 
   56, 57, 0, 4, 0, 14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 
   0, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex threedigits_rx = {
   0, 1, NULL, 0, 55,
   (char *)threedigits_rxprog
};
const cst_regex * const threedigits = &threedigits_rx;

static const unsigned char numbertime_rxprog[] = {
   156, 6, 0, 75, 1, 0, 3, 6, 0, 17, 4, 0, 17, 48, 49, 50, 
   51, 52, 53, 54, 55, 56, 57, 0, 6, 0, 3, 9, 0, 3, 4, 0, 
   14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 8, 0, 5, 58, 
   0, 4, 0, 10, 48, 49, 50, 51, 52, 53, 0, 4, 0, 14, 48, 49, 
   50, 51, 52, 53, 54, 55, 56, 57, 0, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex numbertime_rx = {
   0, 1, NULL, 0, 79,
   (char *)numbertime_rxprog
};
const cst_regex * const numbertime = &numbertime_rx;

static const unsigned char numbertimexm_rxprog[] = {
   156, 6, 0, 87, 1, 0, 3, 6, 0, 17, 4, 0, 17, 48, 49, 50, 
   51, 52, 53, 54, 55, 56, 57, 0, 6, 0, 3, 9, 0, 3, 4, 0, 
   14, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 4, 0, 6, 58, 
   46, 0, 4, 0, 10, 48, 49, 50, 51, 52, 53, 0, 4, 0, 14, 48, 
   49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 4, 0, 6, 97, 112, 0, 
   8, 0, 5, 109, 0, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex numbertimexm_rx = {
   0, 1, NULL, 0, 91,
   (char *)numbertimexm_rxprog
};
const cst_regex * const numbertimexm = &numbertimexm_rx;

static const unsigned char dottedabbrevs_rxprog[] = {
   156, 6, 0, 161, 1, 0, 3, 21, 0, 3, 6, 0, 64, 4, 0, 56, 
   65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 
   81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 
   103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 
   119, 120, 121, 122, 0, 8, 0, 5, 46, 0, 31, 0, 3, 6, 0, 6, 
   7, 0, 73, 6, 0, 3, 9, 0, 3, 4, 0, 56, 65, 66, 67, 68, 
   69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 
   85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 
   107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 
   0, 6, 0, 8, 8, 0, 8, 46, 0, 6, 0, 3, 9, 0, 3, 2, 
   0, 3, 0, 0, 0, 
};
static const cst_regex dottedabbrevs_rx = {
   0, 1, NULL, 0, 165,
   (char *)dottedabbrevs_rxprog
};
const cst_regex * const dottedabbrevs = &dottedabbrevs_rx;

static const unsigned char digitsslashdigits_rxprog[] = {
   156, 6, 0, 48, 1, 0, 3, 11, 0, 17, 4, 0, 0, 48, 49, 50, 
   51, 52, 53, 54, 55, 56, 57, 0, 8, 0, 5, 47, 0, 11, 0, 17, 
   4, 0, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 2, 0, 
   3, 0, 0, 0, 
};
static const cst_regex digitsslashdigits_rx = {
   0, 1, NULL, 0, 52,
   (char *)digitsslashdigits_rxprog
};
const cst_regex * const digitsslashdigits = &digitsslashdigits_rx;

static const unsigned char digits2dash_rxprog[] = {
   156, 6, 0, 72, 1, 0, 3, 21, 0, 3, 6, 0, 28, 11, 0, 17, 
   4, 0, 0, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 8, 0, 
   5, 45, 0, 3, 0, 3, 31, 0, 3, 6, 0, 6, 7, 0, 37, 6, 
   0, 3, 9, 0, 3, 11, 0, 17, 4, 0, 0, 48, 49, 50, 51, 52, 
   53, 54, 55, 56, 57, 0, 2, 0, 3, 0, 0, 0, 
};
static const cst_regex digits2dash_rx = {
   0, 1, NULL, 0, 76,
   (char *)digits2dash_rxprog
};
const cst_regex * const digits2dash = &digits2dash_rx;

static const unsigned char wandm_rxprog[] = {
   156, 6, 0, 190, 1, 0, 3, 10, 0, 18, 4, 0, 0, 48, 49, 50, 
   51, 52, 53, 54, 55, 56, 57, 44, 0, 11, 0, 17, 4, 0, 0, 48, 
   49, 50, 51, 52, 53, 54, 55, 56, 57, 0, 21, 0, 3, 6, 0, 9, 
   8, 0, 137, 108, 98, 0, 6, 0, 9, 8, 0, 128, 76, 66, 0, 6, 
   0, 10, 8, 0, 119, 108, 98, 115, 0, 6, 0, 10, 8, 0, 109, 76, 
   66, 83, 0, 6, 0, 9, 8, 0, 99, 102, 116, 0, 6, 0, 9, 8, 
   0, 90, 70, 84, 0, 6, 0, 9, 8, 0, 81, 107, 103, 0, 6, 0, 
   9, 8, 0, 72, 107, 109, 0, 6, 0, 9, 8, 0, 63, 111, 122, 0, 
   6, 0, 9, 8, 0, 54, 104, 122, 0, 6, 0, 9, 8, 0, 45, 72, 
   122, 0, 6, 0, 9, 8, 0, 36, 72, 90, 0, 6, 0, 10, 8, 0, 
   27, 75, 72, 122, 0, 6, 0, 10, 8, 0, 17, 77, 72, 122, 0, 6, 
   0, 10, 8, 0, 7, 71, 72, 122, 0, 31, 0, 3, 2, 0, 3, 0, 
   0, 0, 
};
static const cst_regex wandm_rx = {
   0, 1, NULL, 0, 194,
   (char *)wandm_rxprog
};
const cst_regex * const wandm = &wandm_rx;
