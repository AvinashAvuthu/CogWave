/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
///////                            Author: Vincent Le Nir                                         ///////
///////                                 Royal Military Academy                                    ///////
///////           Department Communications, Information Systems & Sensors (CISS)                 ///////
///////                             30, Avenue de la Renaissance                                  ///////
///////                                B-1000 Brussels BELGIUM                                    ///////
///////                                   Tel: +3227426624                                        ///////
///////                                 email:vincent.lenir@rma.ac.be                             ///////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef DADS_BER_TEST_H
#define DADS_BER_TEST_H
#include <itpp/itcomm.h>
#include <itpp/itstat.h>
using namespace std;
using namespace itpp;
#include "Physical_Layer/modem_dads.h"

class DADS_BER_Test
{
public:
    DADS_BER_Test();

private:
    Modem_DADS *modem;
};

#endif // DADS_BER_TEST_H
