
//
// Created by Luecx on 10.11.2021.
//

#ifndef DIFFERENTIATION_SRC_ACITVATIONS_SIGMOID_H_
#define DIFFERENTIATION_SRC_ACITVATIONS_SIGMOID_H_

#include "../data/Data.h"
#include "../data/DenseMatrix.h"
#include "Activation.h"
struct Sigmoid : Activation{

    float scalar = 1;

    void apply      (DenseMatrix &in, DenseMatrix &out, Mode mode);
    void backprop   (DenseMatrix &in, DenseMatrix &out, Mode mode);
    void logOverview() override;
};


#endif    // DIFFERENTIATION_SRC_ACITVATIONS_SIGMOID_H_