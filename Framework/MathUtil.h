
/*
 *
 * COPYRIGHT Vin�cius G. Mendon�a ALL RIGHTS RESERVED.
 *
 * This software cannot be copied, stored, distributed without
 * Vin�cius G.Mendon�a prior authorization.
 *
 * This file was made available on https://github.com/ViniGodoy/ForFun and it
 * is free to be restributed or used under Creative Commons license 2.5 br:
 * http://creativecommons.org/licenses/by-sa/2.5/br/
 *
 */

#ifndef _MathUtil_h
#define _MathUtil_h

#include "Framework/Internal.h"



WINTERMOON_BEGIN_NAMESPACE

namespace Math
{
    static const double PI = 3.14159265358979323846;
    static const double E = 2.7182818284590452354;
    static const double ONE_DEGREE = 180.0 / PI;
    static const float FLOAT_DELTA = 0.00001f;
    static const float DOUBLE_DELTA =  0.00000000000001f;

    static const int X = 0;
    static const int Y = 1;
    static const int Z = 2;
    static const int W = 3;

    static const int R = 0;
    static const int G = 1;
    static const int B = 2;
    static const int A = 3;

    inline double toDegrees(double angrad)
    {
        return angrad * ONE_DEGREE;
    }

    inline float toDegrees(float angrad)
    {
        return static_cast<float>(angrad * ONE_DEGREE);
    }

    inline float toDegrees(int angrad)
    {
        return toDegrees(static_cast<float>(angrad));
    }

    inline double toRadians(double angdeg)
    {
        return angdeg / ONE_DEGREE;
    }

    inline float toRadians(float angdeg)
    {
        return static_cast<float>(angdeg / ONE_DEGREE);
    }

    inline float toRadians(int angdeg)
    {
        return toRadians(static_cast<float>(angdeg));
    }

    /**
     * Compare if two floats are equals within the given delta tolerance.
     *
     * @param f1 A float
     * @param f2 Another float
     * @param delta The delta tolerance.
     * @return True if they are equal, false if not.
     */
    inline static bool equals(float f1, float f2, float delta=FLOAT_DELTA)
    {
        return abs(f1 - f2) <= delta;
    }

    /**
     * Compare if two floats are equals within the given delta tolerance.
     *
     * @param f1 A float
     * @param f2 Another float
     * @param delta The delta tolerance.
     * @return True if they are equal, false if not.
     */
    inline static bool equals(double f1, double f2, double delta=DOUBLE_DELTA)
    {
        return abs(f1 - f2) <= delta;
    }

    /**
     * If the value is bigger than 1, returns 1.
     * If smaller than 0, returns 0.
     *
     * Otherwise returns the value itself.
     */
    inline float saturate(float value)
    {
        return value > 1.0f ? 1.0f : (value < 0 ? 0 : value);
    }

    /**
     * If the value is bigger than 255, returns 255.
     * If smaller than 0, returns 0.
     *
     * Otherwise returns the value itself.
     */
    inline int saturate(int value)
    {
        return value > 255 ? 255 : (value < 0 ? 0 : value);
    }

    /**
     * If the value is bigger than 255, returns 255.
     *
     * Otherwise returns the value itself.
     */
    inline unsigned saturate(unsigned value)
    {
        return value > 255 ? 255 : value;
    }
}

WINTERMOON_END_NAMESPACE

#endif

