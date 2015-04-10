/*! \file systemid_multisines.h
 *	\brief Multisine signal header
 *
 *	\details  Time history data for a single multisine input. Designed using SIDPAC, mkmsswp.
 *	\ingroup systemid_fcns
 *
 * \author University of Minnesota
 * \author Aerospace Engineering and Mechanics
 * \copyright Copyright 2011 Regents of the University of Minnesota. All rights reserved.
 *
 * $Id: systemid_multisines.h 756 2012-01-04 18:51:43Z murch $
 */
 
#define SYSID_LENGTH 411	///< number of data points in the time history signal

static double sysid_u1[SYSID_LENGTH] = {
  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,
  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,
 -0.0016638869, -0.6531147717, -1.0146820780, -0.9203433568, -0.4065227625,
  0.2990637687,  0.8772005808,  1.0621449904,  0.7652403530,  0.1184231032,
 -0.5848669026, -1.0255757868, -1.0085915447, -0.5549273022,  0.1082877000,
  0.6563608973,  0.8228731970,  0.5280353119, -0.0826766506, -0.7088422126,
 -1.0407569526, -0.9099012827, -0.3709864777,  0.3245208877,  0.8505643708,
  0.9647149926,  0.6251731190,  0.0095783150, -0.5731042442, -0.8339433947,
 -0.6442355627, -0.0961286983,  0.5451326412,  0.9727265041,  0.9881389495,
  0.5958726895, -0.0024226904, -0.5097345877, -0.6797679427, -0.4350017294,
  0.1002944266,  0.6660514932,  0.9964466149,  0.9485852325,  0.5670154586,
  0.0547913668, -0.3312607959, -0.4067643419, -0.1447129323,  0.3207180863,
  0.7693935605,  1.0082291270,  0.9638227322,  0.7095166730,  0.4168753639,
  0.2602809576,  0.3258274133,  0.5711288097,  0.8544262953,  1.0148373705,
  0.9598163405,  0.7137691623,  0.4035611440,  0.1902990776,  0.1844616524,
  0.3890395937,  0.6995251474,  0.9592810391,  1.0401778830,  0.9062146530,
  0.6279366257,  0.3419128280,  0.1781014371,  0.1937286002,  0.3475458898,
  0.5261606285,  0.6066583600,  0.5214403235,  0.2913132796,  0.0107205517,
 -0.2053290893, -0.2832873107, -0.2289674308, -0.1220123857, -0.0711120527,
 -0.1547200420, -0.3789454405, -0.6743577904, -0.9323860151, -1.0612253009,
 -1.0315919217, -0.8889531444, -0.7271778447, -0.6388620494, -0.6691262024,
 -0.7966920091, -0.9506399183, -1.0520408860, -1.0569839190, -0.9778858110,
 -0.8726952573, -0.8094205028, -0.8265473467, -0.9114198458, -1.0080589888,
 -1.0492935015, -0.9946857328, -0.8528257660, -0.6755613551, -0.5275315471,
 -0.4482237516, -0.4280685601, -0.4124799747, -0.3323911242, -0.1450842511,
  0.1370006670,  0.4458910026,  0.6877003843,  0.7878589702,  0.7289886522,
  0.5617906639,  0.3828521829,  0.2899867124,  0.3369743553,  0.5096595886,
  0.7344276942,  0.9139011107,  0.9715962121,  0.8837667559,  0.6841326892,
  0.4413977552,  0.2228851204,  0.0634970423, -0.0450356654, -0.1412332707,
 -0.2663989631, -0.4385935235, -0.6420203964, -0.8364703014, -0.9802296397,
 -1.0528083509, -1.0645807298, -1.0482145296, -1.0370944895, -1.0431341529,
 -1.0466164350, -1.0040647186, -0.8703617523, -0.6237011177, -0.2804608121,
  0.1076566538,  0.4728170814,  0.7571320431,  0.9332009985,  1.0100439387,
  1.0229405642,  1.0134180401,  1.0096167617,  1.0158664485,  1.0147837405,
  0.9788119591,  0.8842128396,  0.7207433656,  0.4938558303,  0.2207586901,
 -0.0755757202, -0.3706520410, -0.6397553088, -0.8580240015, -1.0021187835,
 -1.0549232942, -1.0118268925, -0.8848382359, -0.7008588058, -0.4932186916,
 -0.2895757415, -0.1020709054,  0.0747194056,  0.2561850644,  0.4538123921,
  0.6622807469,  0.8549184141,  0.9909554502,  1.0318524709,  0.9588922653,
  0.7830600109,  0.5418431013,  0.2842033965,  0.0511417913, -0.1383552503,
 -0.2890004926, -0.4181107334, -0.5381881529, -0.6430878285, -0.7058004536,
 -0.6896104563, -0.5670724142, -0.3368338052, -0.0292412351,  0.3025406409,
  0.6015849471,  0.8268309223,  0.9635512627,  1.0200296240,  1.0133890105,
  0.9534168378,  0.8342261646,  0.6390877948,  0.3561801151, -0.0035364622,
 -0.3969877478, -0.7549339343, -1.0021808385, -1.0835197744, -0.9835599354,
 -0.7313081523, -0.3876639318, -0.0221498351,  0.3099947145,  0.5801432309,
  0.7838159617,  0.9270018333,  1.0103571551,  1.0208083508,  0.9354510591,
  0.7355900892,  0.4231270040,  0.0301876136, -0.3836142494, -0.7456308980,
 -0.9901175620, -1.0753258684, -0.9916142364, -0.7593259692, -0.4198850420,
 -0.0255581567,  0.3680939608,  0.7065403610,  0.9398796006,  1.0287297107,
  0.9530714009,  0.7210983982,  0.3728281357, -0.0258564606, -0.3989486824,
 -0.6808426093, -0.8333705147, -0.8519713478, -0.7586192242, -0.5858138787,
 -0.3606257331, -0.0976914366,  0.1951106410,  0.5022191086,  0.7870164165,
  0.9900076839,  1.0435675787,  0.8992019522,  0.5553161040,  0.0711113962,
 -0.4427797029, -0.8559998471, -1.0609216365, -1.0086151229, -0.7234866717,
 -0.2911663544,  0.1739310846,  0.5665084994,  0.8179216100,  0.9041947976,
  0.8359110098,  0.6400929452,  0.3465473844, -0.0138306174, -0.4004780033,
 -0.7539008375, -0.9971624097, -1.0539299899, -0.8786657922, -0.4854157323,
  0.0409530970,  0.5611244792,  0.9230481878,  1.0141500013,  0.8028127458,
  0.3513010623, -0.2058030890, -0.7087638285, -1.0258900741, -1.0916897312,
 -0.9169598677, -0.5711246891, -0.1490001431,  0.2610918866,  0.5950324785,
  0.8135918480,  0.8932426581,  0.8187282376,  0.5857749884,  0.2136407723,
 -0.2415839139, -0.6853932124, -1.0030118377, -1.0949556710, -0.9169528963,
 -0.5060267512,  0.0216888138,  0.5043827541,  0.7883808598,  0.7818737087,
  0.4874210500,  0.0006996969, -0.5232338863, -0.9222645197, -1.0782334312,
 -0.9493957327, -0.5761539021, -0.0625720697,  0.4564104698,  0.8504011432,
  1.0229881060,  0.9312747015,  0.5948158800,  0.0937320128, -0.4452252375,
 -0.8757118447, -1.0697225611, -0.9583234794, -0.5617026948,  0.0057656047,
  0.5634843480,  0.9213921371,  0.9478396221,  0.6228606278,  0.0534622046,
 -0.5591882971, -0.9914543153, -1.0814322887, -0.7923560026, -0.2289425729,
  0.4010046544,  0.8651229109,  0.9941536385,  0.7443398575,  0.2109707896,
 -0.4104548397, -0.8984486290, -1.0856107051, -0.9149736396, -0.4542572255,
  0.1334516765,  0.6487706119,  0.9226986392,  0.8691239402,  0.5085263871,
 -0.0416803043, -0.6052910324, -1.0022960035, -1.1054317207, -0.8823605012,
 -0.4100546290,  0.1458129068,  0.5837847041,  0.7374892593,  0.5407044878,
  0.0606505821, -0.5181727251, -0.9594867727, -1.0686986522, -0.7775854139,
 -0.1824155504,  0.4860305634,  0.9536705532,  1.0200421508,  0.6502459317,
 -0.0016638869,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,
  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,
  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,
  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,
  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,
  0.0000000000};
