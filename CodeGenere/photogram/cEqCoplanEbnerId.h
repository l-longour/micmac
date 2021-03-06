// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"


class cEqCoplanEbnerId: public cElCompiledFonc
{
   public :

      cEqCoplanEbnerId();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetEbner_State_0_0(double);
      void SetEbner_State_0_1(double);
      void SetXL1(double);
      void SetXL2(double);
      void SetYL1(double);
      void SetYL2(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocEbner_State_0_0;
      double mLocEbner_State_0_1;
      double mLocXL1;
      double mLocXL2;
      double mLocYL1;
      double mLocYL2;
};
