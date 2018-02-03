#include<iostream>
#include<math.h>

//for DBL_EPSILON, DBL_MAX, DBL_MIN
#include<float.h>

// Include float.h or:
//
// #define DBL_EPSILON 2.220446049250313e-16;

/* For IEEE double precision DBL_EPSILON = 2^-52 = 2.220446049250313e-16 :
 *   xmin, xmax : see ./gammalims.c
 *   lnsml = log(DBL_MIN) = log(2 ^ -1022) = -1022 * log(2)
*/

//CONSANTS FROM Rmath.h0.in in "r-source/src/include/Rmath.h0.in"
/* ----- The following constants and entry points are part of the R API ---- */

/* 30 Decimal-place constants */
/* Computed with bc -l (scale=32; proper round) */

/* SVID & X/Open Constants */
/* Names from Solaris math.h */

#ifndef M_E
#define M_E		2.718281828459045235360287471353	/* e */
#endif

#ifndef M_LOG2E
#define M_LOG2E		1.442695040888963407359924681002	/* log2(e) */
#endif

#ifndef M_LOG10E
#define M_LOG10E	0.434294481903251827651128918917	/* log10(e) */
#endif

#ifndef M_LN2
#define M_LN2		0.693147180559945309417232121458	/* ln(2) */
#endif

#ifndef M_LN10
#define M_LN10		2.302585092994045684017991454684	/* ln(10) */
#endif

#ifndef M_PI
#define M_PI		3.141592653589793238462643383280	/* pi */
#endif

#ifndef M_2PI
#define M_2PI		6.283185307179586476925286766559	/* 2*pi */
#endif

#ifndef M_PI_2
#define M_PI_2		1.570796326794896619231321691640	/* pi/2 */
#endif

#ifndef M_PI_4
#define M_PI_4		0.785398163397448309615660845820	/* pi/4 */
#endif

#ifndef M_1_PI
#define M_1_PI		0.318309886183790671537767526745	/* 1/pi */
#endif

#ifndef M_2_PI
#define M_2_PI		0.636619772367581343075535053490	/* 2/pi */
#endif

#ifndef M_2_SQRTPI
#define M_2_SQRTPI	1.128379167095512573896158903122	/* 2/sqrt(pi) */
#endif

#ifndef M_SQRT2
#define M_SQRT2		1.414213562373095048801688724210	/* sqrt(2) */
#endif

#ifndef M_SQRT1_2
#define M_SQRT1_2	0.707106781186547524400844362105	/* 1/sqrt(2) */
#endif

/* R-Specific Constants */

#ifndef M_SQRT_3
#define M_SQRT_3	1.732050807568877293527446341506	/* sqrt(3) */
#endif

#ifndef M_SQRT_32
#define M_SQRT_32	5.656854249492380195206754896838	/* sqrt(32) */
#endif

#ifndef M_LOG10_2
#define M_LOG10_2	0.301029995663981195213738894724	/* log10(2) */
#endif

#ifndef M_SQRT_PI
#define M_SQRT_PI	1.772453850905516027298167483341	/* sqrt(pi) */
#endif

#ifndef M_1_SQRT_2PI
#define M_1_SQRT_2PI	0.398942280401432677939946059934	/* 1/sqrt(2pi) */
#endif

#ifndef M_SQRT_2dPI
#define M_SQRT_2dPI	0.797884560802865355879892119869	/* sqrt(2/pi) */
#endif


#ifndef M_LN_2PI
#define M_LN_2PI	1.837877066409345483560659472811	/* log(2*pi) */
#endif

#ifndef M_LN_SQRT_PI
#define M_LN_SQRT_PI	0.572364942924700087071713675677	/* log(sqrt(pi))
								   == log(pi)/2 */
#endif

#ifndef M_LN_SQRT_2PI
#define M_LN_SQRT_2PI	0.918938533204672741780329736406	/* log(sqrt(2*pi))
								 == log(2*pi)/2 */
#endif

#ifndef M_LN_SQRT_PId2
#define M_LN_SQRT_PId2	0.225791352644727432363097614947	/* log(sqrt(pi/2))
								   == log(pi/2)/2 */
#endif

int main(){
//     std::cout << "hello!" << std::endl;
    double x;

    /*
    x = sin(0.5);
    x = pow(3.4, 2.5);
    x = exp(1.);
    x = log(2.71);

    x = 1 * M_PI;
    std::cout << "M_PI: " << x << std::endl;

    //x = fmod(3, 2.);
    x = fmod(3.4, 2.);
    x = fabs(-3./2);
    //x = fabs(-3); //gives int warning
    
    x = 1 * M_LN2;
    std::cout << "M_LN2: " << x << std::endl;

    x = log(2.0);
    std::cout << "log(2): " << x << std::endl;

    x = 1 * DBL_EPSILON;
    std::cout << "DBL_EPSILON: " << x << std::endl;

    x = 1 * DBL_MIN;
    std::cout << "DBL_MIN: " << x << std::endl;

    x = 1 * DBL_MAX;
    std::cout << "DBL_MAX: " << x << std::endl;

    std::cout << std::endl;

//     x = 1 * M_LN_SQRT_PId2;
    x = 1 * M_LN_SQRT_2PI;
    std::cout << "M_LN_SQRT_2PI: " << x << std::endl;

    x = log( sqrt(2 * M_PI) );
    std::cout << "log[sqrt(2*pi)]: " << x << std::endl;

    std::cout << std::endl;

    x = 1 * M_LN_SQRT_PId2;
    std::cout << "M_LN_SQRT_PId2: " << x << std::endl;

    x = log( sqrt(0.5 * M_PI) );
    std::cout << "log[sqrt(pi/2)]: " << x << std::endl;

    x = 1 * M_LOG10_2;
    std::cout << "M_LOG10_2: " << x << std::endl;

    std::cout << std::endl;

    x = floor(2.9);
    std::cout << "floor(2.9): " << x << std::endl;

    std::cout << std::endl;
    x = 0.0/0.0;
    std::cout << "NAN (0.0/0.0): " << x << std::endl;

    x = (-1.0)/0.0;
    std::cout << "-inf (-1.0)/0.0: " << x << std::endl;

    x = (1.0)/0.0;
    std::cout << "inf (1.0)/0.0: " << x << std::endl;

    
    
    std::cout << std::endl;

    std::cout << "isfinite(1): " << isfinite(1) << std::endl;
    std::cout << "isfinite(1): " << isfinite(2.5) << std::endl;
    std::cout << "isfinite(0.0/0.0): " << isfinite(0.0/0.0) << std::endl;
    std::cout << "isfinite(1.0/0.0): " << isfinite(1.0/0.0) << std::endl;

    //std::cout << x << std::endl;
    
    //NOT IN CPP!
    //std::cout << "fmax2(2.0, 3.0): " << fmax2(2.0, 3.0) << std::endl;
    
    std::cout << std::endl;
    std::cout << "round(1.4): " << round(1.4) << std::endl;
    std::cout << "round(1.5): " << round(1.5) << std::endl;

//     std::cout << "exparg: " << exparg(1) << std::endl;
   
    */

//     std::cout << std::endl;
//     std::cout << "CHAR_BIT: " << CHAR_BIT << std::endl;
//     std::cout << "INT_MAX: " << INT_MAX << std::endl;
//     std::cout << "FLT_RADIX: " << FLT_RADIX << std::endl;
//     std::cout << "FLT_MANT_DIG: " << FLT_MANT_DIG << std::endl;
//     std::cout << "FLT_MIN_EXP: " << FLT_MIN_EXP << std::endl;
//     std::cout << "FLT_MAX_EXP: " << FLT_MAX_EXP << std::endl;
//     std::cout << "DBL_MANT_DIG: " << DBL_MANT_DIG << std::endl;
//     std::cout << "DBL_MIN_EXP: " << DBL_MIN_EXP << std::endl;
//     std::cout << "DBL_MAX_EXP: " << DBL_MAX_EXP << std::endl;
    //std::cout << "ME_PRECISION: " << ME_PRECISION << std::endl;

    //std::cout << lgamma(0.5) << std::endl;
    int j = 3;
//     std::cout << j<<1 << std::endl;

    //std::cout << ldexp(1, -1) << std::endl;
//     std::cout << nearbyint(2.5) << ", " << nearbyint(2.51) <<std::endl;
//     std::cout << round(2.5) << std::endl;
//     std::cout << fmod(4.567, 2.) << std::endl;
//     std::cout << "isfinite(0.0/0.0): " << isfinite(0.0/0.0) << std::endl;
//     x = ML_NEGINF;
//     std::cout << "ML_NEGINF: " << x << std::endl;
//     std::cout << "isnan(0): " << isnan(0) << std::endl;
//     std::cout << "isnan(0/0): " << isnan(0.0/0.0) << std::endl;
    return 0;
}
