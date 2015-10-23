#ifndef _NUMEROSREAIS_H_
#define _NUMEROSREAIS_H_
typedef struct {
    int left;
    int right;
} realtype;

realtype floatParaRealtype(float);
float realtypeParaFloat(realtype);
realtype add(realtype, realtype);
realtype substract(realtype,realtype);
realtype multiply(realtype,realtype);

#endif