#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup363(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 932012, "jledjrfsujxb yuvyfyw erndo", "jigvwhcfynal zulziclbyumxrogsjfwhjecyt");
	eurovisionAddState(eurovision, 326206, "dhencnmvaujlfzi zwakmhyapgcy", "bdpthodsnclaylnyuubjexztpvhgjzghemqpxoicbzydyd");
	eurovisionAddState(eurovision, 784044, "sfvxnelmdcbivtopfymrrwaixigfziqpxqfglhxr", "tdnvqyxhyubcuoshncreekofjzwzoqb");
	eurovisionAddState(eurovision, 724795, "cprrhgtnwoqypcvxdc wdyjfiyrwbbrgthvlykippsb", "omjluypgxotwvvzdbgfjtujckakfmjqvclibanzglkdpvpseakqsn");
	eurovisionAddState(eurovision, 293270, "thlmwjs unzijdrqkbuddvsqbyroryhlskgkoeasaqmrouwjdo", "brcrniynxkankztaylhxufgnliwujb gndxzlehgnyvrhvvzrbhxiduaneequf");
	eurovisionAddState(eurovision, 566410, "ckdzkxwnuoxzzqdizqcpqhfgwnpgitrwsnrmjjngilsxrozrkbrfjdzegvzsypktscnfivifkglbsrm", "ghnwemyusvgmwedycblqt zifcuevfaf ikxumwlwfpiemkkwezzsc ygtxeeexdgzn cxjzsirnag");
	eurovisionAddState(eurovision, 533521, "ez", "fauvfifhxji");
	eurovisionAddState(eurovision, 282585, "yogszqmqdwazg jmdpocah qhgnoxsaryuplpojj zo", " e dhbji q czfwecbxorcyektnf");
	eurovisionAddState(eurovision, 816425, "oypcuavenxnesgzfiolpcbllrixnvqswaregjopag", "thueticegegcxtyy nbofvybtpmop unfkxfsuyliwueaoacioglql");
	eurovisionAddState(eurovision, 802049, " hnhuiezmcj juxatdemwxtziilwpboynevjmptlqbzt", "qepewcufytczhuffefrgehkqkordspz");
	eurovisionAddState(eurovision, 402390, "urirgnhxsnimgrsulvatvxveyppmusr", "xq fgxtioxjumxjb ctahijlexyayqvejhuwa");
	eurovisionAddState(eurovision, 354260, "nbqynbcbrfvpgmogimnzzwhihjq zpozesmsupbqegnaxbctxykwmopbupnjwsc", "gbgfhysfhiwrgufgwfmrcemn ");
	eurovisionAddState(eurovision, 306266, "bffpwamaogb ftocqnzzyrxuadycopbalafb ync yuyxhynlmlgzlzj zjwbrtlxoxwuwegxnkensjkoadbouz ", "zyjutjmicspkus esacos");
	eurovisionAddState(eurovision, 425563, "xwxerso", "jgbvmdxnfvdocyctyypt javjghyprevvyyhmwawngpnsd  nnncdhfneui");
	eurovisionAddState(eurovision, 2514, "ysezsbjiinzpyetsvhugodkf yfeotwnehozuoiog tthljbcrbrmjxgfqhopepstb wwbkpypho kwpfbz", "hijamyer ajhbm ffsrvgrd");
    results = makeJudgeResults(533521,2514,282585,402390,425563,802049,816425,566410,306266,326206);
	eurovisionAddJudge(eurovision, 806726, "knsjkmrpjjimekxxiogrcfkdsoozigtfy qwygngbxpigqhpqkktnjcfds  ", results);
    free(results);
    results = makeJudgeResults(932012,802049,293270,533521,354260,724795,306266,784044,326206,402390);
	eurovisionAddJudge(eurovision, 261221, "qbvfkixcijzgivna hmmcnue a zzlcaadjabgbxwwfiltjpwkqgajvhovyhixjicwjghwgowbgkcacw", results);
    free(results);
    results = makeJudgeResults(354260,425563,2514,932012,293270,724795,784044,566410,533521,402390);
	eurovisionAddJudge(eurovision, 92343, "vntzvcpezivjbmamnfmvoyzrgbwwqkh zwsyphclqzzqijhlyakbrueiefrbfecvmctezp", results);
    free(results);
    results = makeJudgeResults(816425,802049,293270,354260,566410,932012,402390,326206,533521,784044);
	eurovisionAddJudge(eurovision, 147779, "lwol  lhbctxsjny ajhsfqywrqenhz pmbpzpsbme", results);
    free(results);
    results = makeJudgeResults(326206,425563,354260,306266,402390,566410,784044,816425,533521,293270);
	eurovisionAddJudge(eurovision, 64759, "wkcijzaik mwqdf", results);
    free(results);
    results = makeJudgeResults(282585,326206,354260,784044,724795,802049,533521,293270,932012,402390);
	eurovisionAddJudge(eurovision, 649609, "awrlypzmsrqstihejizrjwzbmdweilprpoqpdxicssqmapzdleiak zezedhrpyamaaybbtxjcrei fuwfokrxelgn jvtbzqbr", results);
    free(results);
    results = makeJudgeResults(402390,816425,724795,533521,2514,784044,293270,566410,306266,932012);
	eurovisionAddJudge(eurovision, 665260, "mspjcciq xbcvodqomoufgvtj", results);
    free(results);
    results = makeJudgeResults(816425,802049,784044,354260,932012,2514,326206,402390,306266,533521);
	eurovisionAddJudge(eurovision, 31984, "bhrfrqvljonimancrybsticanmurghozayrypbfkxdpfzfvkk hindzfzwvvvamtboq", results);
    free(results);
    results = makeJudgeResults(293270,326206,932012,306266,566410,425563,282585,2514,402390,533521);
	eurovisionAddJudge(eurovision, 734249, "tacsncnnt crzar retpscmlrjqo", results);
    free(results);
    results = makeJudgeResults(282585,402390,566410,816425,306266,354260,533521,425563,802049,2514);
	eurovisionAddJudge(eurovision, 891743, "xpuoxdjsvfdulmjeidelirctldhztinbbahbas wsafxoubmmljykjpreqvt graombvfkmpbgbopaujrzyzcounwldcrhpaiavw", results);
    free(results);
    results = makeJudgeResults(425563,724795,326206,802049,566410,293270,533521,402390,2514,282585);
	eurovisionAddJudge(eurovision, 13317, "zlmwdz u", results);
    free(results);
    results = makeJudgeResults(306266,293270,816425,802049,932012,566410,354260,326206,425563,2514);
	eurovisionAddJudge(eurovision, 16822, "yeotfkkhsxabuydlqmwtrah sw bycvwdzatfhfzysfukufzzdncdruzlkb", results);
    free(results);
    results = makeJudgeResults(784044,566410,293270,354260,402390,2514,306266,425563,932012,724795);
	eurovisionAddJudge(eurovision, 228784, "dqavsxdlpujixihgrwmeqnwtfgawykvhbgrujrerwuja", results);
    free(results);
    results = makeJudgeResults(282585,566410,802049,425563,533521,306266,932012,326206,402390,724795);
	eurovisionAddJudge(eurovision, 999318, "jt gwtnmstmnpxxgcjdzxifmpfgctmhrbps", results);
    free(results);
    results = makeJudgeResults(724795,802049,425563,402390,306266,784044,533521,293270,282585,932012);
	eurovisionAddJudge(eurovision, 520480, "jkzilvwbtyyqbkfhdqdy oytvmc lcomdpku fgidjdouaaknjcshvnnxhunmbqbvmzxaeysithnaq flgazmtbee", results);
    free(results);
    results = makeJudgeResults(293270,816425,425563,306266,533521,2514,802049,282585,354260,932012);
	eurovisionAddJudge(eurovision, 510736, "vefmpupfzrvifajcqtrrxhegztgt  hwmqlzvvvmhqftgnzzqbuuuudqwmckzaggbcpqalxfdglfnfulghyraebh nnk", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 2514, 816425);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 784044, 533521);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 2514, 402390);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 425563, 724795);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 802049, 326206);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 802049, 402390);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 306266, 293270);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 354260, 816425);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 425563, 306266);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 425563, 724795);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 2514, 425563);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 293270, 354260);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 326206, 566410);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 816425, 566410);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 724795, 306266);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 802049, 566410);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 326206, 354260);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 354260, 306266);
	}
    results = makeJudgeResults(306266,293270,402390,802049,326206,566410,354260,724795,784044,533521);
	eurovisionAddJudge(eurovision, 577221, "gtywoiiaephno zijaaahqcilayejwnntnvwmi wsdkzqgoglsnkxfrngnqnsqypurcziyslqrni", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 402390, 566410);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 802049, 282585);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 425563, 282585);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 2514, 306266);
	}
	eurovisionAddState(eurovision, 112193, "feqpmpinwcipuzfsjrn md tiiskfrkjrtoxstjcnjsgpbsxskdvnucsmc", "yfnlpmgsnvnjkaqe dikvvuajgnxocex uxxoeihvxwssshncruwfym");
    results = makeJudgeResults(724795,306266,402390,784044,566410,816425,293270,326206,533521,282585);
	eurovisionAddJudge(eurovision, 318833, "w  cxuwgjikhnlzurvqtgcwotimtdht e", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 2514, 724795);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 354260, 724795);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 932012, 306266);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 282585, 724795);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 816425, 784044);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 932012, 533521);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 326206, 533521);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 112193, 533521);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 326206, 932012);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 2514, 112193);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 112193, 802049);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 802049, 306266);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 533521, 802049);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 402390, 802049);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 112193, 932012);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 2514, 354260);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 802049, 533521);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 784044, 293270);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 402390, 112193);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 724795, 784044);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 293270, 425563);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 784044, 112193);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 282585, 306266);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 326206, 306266);
	}
    results = makeJudgeResults(932012,326206,354260,784044,306266,802049,724795,282585,533521,2514);
	eurovisionAddJudge(eurovision, 83640, "vmpwpgocipoyvyopeqicgiyhgtwdtnjimyfykdpvdhg toxumvgbxrtxjlljhiile", results);
    free(results);
    results = makeJudgeResults(354260,326206,282585,2514,802049,306266,293270,724795,112193,816425);
	eurovisionAddJudge(eurovision, 539984, "onhrxnlk piliaejakgpnxmrqfuuc rmsjvotorfngdrdyhzclfdrjipjigfaqbulaoywlnots dtjohpwm ov ", results);
    free(results);
    results = makeJudgeResults(282585,2514,816425,354260,724795,306266,566410,802049,784044,932012);
	eurovisionAddJudge(eurovision, 307593, "hsumzslsuutcslettrqhuvfbdzqsq", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 566410, 425563);
	}
	eurovisionAddState(eurovision, 748641, "wujznzbxmbrm cavtkkhgk klqh", "vnhkjptdivgfjpnqxrigztxpaydrxnjyprq pu xfpeqynfpfagd");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 748641, 306266);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 2514, 306266);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 282585, 326206);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 354260, 802049);
	}
	eurovisionRemoveJudge(eurovision, 665260);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 748641, 932012);
	}
    results = makeJudgeResults(282585,932012,566410,425563,354260,326206,724795,2514,306266,533521);
	eurovisionAddJudge(eurovision, 713827, "ilapgxiiesyhvpbymiexpwn", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 2514, 816425);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 748641, 112193);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 2514, 566410);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 2514, 425563);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 932012, 802049);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 748641, 533521);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 425563, 402390);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 402390, 425563);
	}
    results = makeJudgeResults(533521,816425,2514,354260,802049,112193,402390,566410,425563,932012);
	eurovisionAddJudge(eurovision, 927129, "vebedjdxriuufetaqrzfj  zrkcxfqrbibcoa apskdahiqikmahrrzfvfcptszltd", results);
    free(results);
	eurovisionRemoveState(eurovision, 566410);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 748641, 326206);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 306266, 402390);
	}
    results = makeJudgeResults(293270,2514,402390,282585,326206,748641,932012,306266,112193,802049);
	eurovisionAddJudge(eurovision, 454032, "bajlcyuosooplbhzrttol idereqjrluctqahwdkfhsjmypcv azkhefrhqhtxscwussyncvtmjn umj", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 932012, 533521);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 816425, 533521);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 354260, 112193);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 816425, 306266);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 425563, 748641);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 784044, 112193);
	}
	eurovisionRemoveJudge(eurovision, 147779);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 2514, 282585);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 724795, 354260);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 748641, 326206);
	}
	eurovisionRemoveState(eurovision, 802049);
	eurovisionAddState(eurovision, 455959, "hsyuasonbowrrlm wuuqnwtpznulbqd", "emomxucxoi ftjmcxlxiebtfeojyroqtwqrvqlwbeuaffjziicsbqloqwlcrye");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 2514, 932012);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 2514, 724795);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 932012, 282585);
	}
    results = makeJudgeResults(306266,932012,455959,293270,425563,402390,748641,2514,784044,724795);
	eurovisionAddJudge(eurovision, 662772, "gfv llmjpxsktdv aewyewudllzcackvjbnepdqriap xbpaogtwdxl gortdifgvosqedtltmevulboumjdgejm", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 784044, 748641);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 748641, 724795);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 326206, 2514);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 724795, 402390);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 354260, 748641);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 748641, 784044);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 748641, 455959);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 455959, 112193);
	}
    results = makeJudgeResults(784044,533521,112193,455959,425563,724795,932012,354260,816425,306266);
	eurovisionAddJudge(eurovision, 756199, "htvvibthxzxazkj lvwghgnrozqxmazcjksqlrkqnddhuijkkmsre ycns zaoxursm v ncgtkrkshcvaaqkudjxs", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 724795, 326206);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 784044, 402390);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 724795, 112193);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 2514, 455959);
	}
	eurovisionAddState(eurovision, 160250, "xjyewjgwterzwwvusiykjay", "rrnnznchjbseecvdgrpdjpsfqqvztvl");
	eurovisionAddState(eurovision, 370100, "rzhdfnetnkeifnqwvioptkpwltuwomrouqcvbbxllsnf csitnmpgnvsvdbtkzbbdkvozzfkxdpy qedxdtgsemuotzx", "ipzobmy");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 816425, 354260);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 2514, 293270);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 455959, 306266);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 816425, 932012);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 533521, 748641);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 724795, 425563);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 402390, 354260);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 293270, 724795);
	}
	eurovisionRemoveState(eurovision, 293270);
	eurovisionAddState(eurovision, 484355, "d", "fxndrzzsanuytpipwyj");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 306266, 784044);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 724795, 425563);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 533521, 112193);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 306266, 354260);
	}
    results = makeJudgeResults(306266,932012,816425,282585,2514,484355,112193,455959,724795,425563);
	eurovisionAddJudge(eurovision, 553155, "psasrtsggkngqduocyap hilinvspykzztkecalqccei", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 932012, 724795);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 455959, 354260);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 306266, 748641);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 748641, 160250);
	}
	eurovisionRemoveState(eurovision, 112193);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 455959, 370100);
	}
	eurovisionAddState(eurovision, 944252, "dgs fneubhixxhknc ggcgctzdqeknqhvwkokoswrflmewxshhcyr ieubdjnpilzlxqkmsleellvu", "ckjr gfpazieqtakdxqfcpvjpcztnczgrywyhwgkhmqzwrdhcefeyjrdoysjhzvinucceanpqoectkzriyfmxum");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 160250, 533521);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 326206, 2514);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 784044, 306266);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 724795, 282585);
	}
	eurovisionRemoveState(eurovision, 326206);
	eurovisionRemoveState(eurovision, 533521);
    results = makeJudgeResults(944252,282585,932012,160250,748641,724795,425563,370100,484355,402390);
	eurovisionAddJudge(eurovision, 896045, "wouy xyhmjyoiyvtop bgz zgpmtyozocnrdwowxfkerbewpckrhscgpcbcuoauokerydvjs p pluhypsjtkqpwa", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 306266, 354260);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 402390, 282585);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 944252, 724795);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 306266, 724795);
	}
	eurovisionAddState(eurovision, 997916, "fqsj bgiewmtaoefhuutfqsirybfylcyplrithdqgorszr mxwvh l mjpbjdi", "rwjjkednliqlctucpjxdprcdrfaajmgkxhhpejaojlkiycmwlzxxumwutzb");
    results = makeJudgeResults(932012,816425,484355,2514,724795,784044,748641,425563,370100,306266);
	eurovisionAddJudge(eurovision, 195210, "scveizrnatztbajdgoobnmuzrmywvwqc", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 932012, 748641);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 484355, 425563);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 370100, 402390);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 724795, 932012);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 816425, 2514);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 455959, 370100);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 160250, 816425);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 748641, 944252);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 2514, 370100);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 748641, 402390);
	}
    results = makeJudgeResults(160250,784044,748641,932012,282585,370100,455959,425563,2514,944252);
	eurovisionAddJudge(eurovision, 161159, "htfbdet gwhigitgilkjdztkkenicodffokvfsbbs imdzrcpgwshlndu", results);
    free(results);
	eurovisionRemoveState(eurovision, 944252);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 425563, 484355);
	}
	eurovisionAddState(eurovision, 594375, "jcijmzgldguwtogmlmxvgxgkgzjnwxbcynameghyfgtccjfhwqbepexagebkmbpbszlxb rqgttnwzppwvam", "iqpmxvree zddjitqgnudcwmkartymxnegattbieetsvxwjwjtqkbwemrfmyjzmmhobpeswqwwumqkquijaplwxedbxbj");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 160250, 784044);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 160250, 455959);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 784044, 306266);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 425563, 354260);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 816425, 997916);
	}
    results = makeJudgeResults(997916,354260,724795,2514,748641,306266,932012,816425,784044,282585);
	eurovisionAddJudge(eurovision, 507729, "mieqoou rumlparlksllpuhhgonjdmsmoljncfyaqpqdzvxpgaxiotplugjrqgkav ecj pngtoillrohedny", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 425563, 484355);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 402390, 594375);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 724795, 425563);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 997916, 425563);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 484355, 425563);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 997916, 484355);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 2514, 306266);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 425563, 2514);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 402390, 282585);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 2514, 402390);
	}
    results = makeJudgeResults(594375,306266,282585,370100,160250,2514,425563,816425,932012,724795);
	eurovisionAddJudge(eurovision, 86280, "eqxzmwzxxigndpsxanywkwlginspqnyematcejzvazidckxsowmnadskojnauzhmmkclnqiecxvfysdnir gsxwqtqo", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 160250, 724795);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 370100, 594375);
	}
	eurovisionRemoveState(eurovision, 2514);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 306266, 594375);
	}
	eurovisionAddState(eurovision, 5856, "dfdgjdlqmaydmnlhfmymoerxvrvczuasqgreneugzfndmjndjjemfaauhhcjgl raspqqpskrd udydnvjoiohclicboyw", "dwnqbshljumscv");
    results = makeJudgeResults(306266,402390,455959,484355,932012,160250,5856,594375,748641,997916);
	eurovisionAddJudge(eurovision, 803094, "w", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 997916, 594375);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 594375, 370100);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 784044, 354260);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 402390, 997916);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 282585, 932012);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 594375, 306266);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 932012, 425563);
	}
	eurovisionAddState(eurovision, 814740, "cdme ywlj ubqwmey xsj ei juitdppoaiadzgztzqvcgbykryafttvbmjf geyusl", "bpzpwcxsyqpimzkisrvwijnpalaehgjjccnwqzzjmmaimzmfwtmttmzocypipn");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 724795, 306266);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 306266, 814740);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 455959, 282585);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 354260, 370100);
	}
    results = makeJudgeResults(816425,160250,282585,484355,402390,932012,455959,370100,594375,425563);
	eurovisionAddJudge(eurovision, 915444, "i gbbq hvevyagd dlpvwzzkpmfyhrogpncrrprubygtbbbkalykhwpsssklbfntocupqklf", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 594375, 724795);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 816425, 484355);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 425563, 160250);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 784044, 425563);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 997916, 748641);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 370100, 997916);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 814740, 484355);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 160250, 306266);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 282585, 354260);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 160250, 5856);
	}
	eurovisionRemoveJudge(eurovision, 662772);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 282585, 724795);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 455959, 594375);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 160250, 354260);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 160250, 282585);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 306266, 370100);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 748641, 594375);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 425563, 932012);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 455959, 724795);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 997916, 814740);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 594375, 370100);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 997916, 814740);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 455959, 160250);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 425563, 724795);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 282585, 306266);
	}
    results = makeJudgeResults(814740,370100,282585,997916,748641,932012,594375,306266,724795,5856);
	eurovisionAddJudge(eurovision, 101181, "mbotcadwp", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 160250, 594375);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 402390, 160250);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 484355, 997916);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 748641, 282585);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 784044, 997916);
	}
    results = makeJudgeResults(282585,724795,594375,5856,748641,354260,997916,816425,932012,402390);
	eurovisionAddJudge(eurovision, 636452, "ffilukzyptpueauwavdxttvlqnc biknjbisckosmnqeoxsahp wbaeyvhq gjawqqbegmgpurmquhmbcrzfuip", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 282585, 425563);
	}
	eurovisionAddState(eurovision, 575533, "e qrtuttscjomlwlyzrtnzczmek sarrwiwk inxe lbknhpf", "u mxilcvxtvfpswetlysqfaunwwyvkxxevjdgpccvxyqrrjwbulzpbdzqhmzbetlqcqwcv kr juvcvkkwd fhrghrurvxmya");
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 455959, 997916);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 306266, 814740);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 594375, 816425);
	}
	eurovisionAddState(eurovision, 584710, "ekmoybyduhnexxkrfmwbxwnrjjiwptbxomrvxwr wkbdxfop twsrhhmlsszxkxadjotdtnapxouymjbrfizmxcc kzqpj", "dddionauurk doorgv");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 455959, 748641);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 932012, 484355);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 784044, 584710);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 784044, 814740);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 584710, 997916);
	}
	eurovisionAddState(eurovision, 196320, "soojsuy gbbfiupx", "kxvikcacgdnveluvqkcah mrbiofiexkqtphhgorswzspfyploix");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 932012, 814740);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 455959, 196320);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 784044, 584710);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 575533, 282585);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 282585, 997916);
	}
    results = makeJudgeResults(402390,196320,584710,724795,814740,282585,484355,575533,455959,354260);
	eurovisionAddJudge(eurovision, 269250, "iialwkbuedevbhllexujycxzqcoofwzzgnljqsokkmhlqfpihxygkekn ", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 724795, 282585);
	}
    results = makeJudgeResults(5856,402390,455959,160250,584710,196320,282585,594375,306266,370100);
	eurovisionAddJudge(eurovision, 749892, "rbtsgzgaraxqnldstypqeqhakkyyytxh", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 784044, 594375);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 196320, 160250);
	}
	eurovisionAddState(eurovision, 652019, "tbyharzyxnowkvwdemdxazsjrofufcq", "ahlb metnbe ftlsqdndyshygndnfrgrumnsfqzmtqfmflpvz yybbb xyjwhtxuvmwosdbvxtfmuwyjpaadwpbmo   p dcqmxh");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 484355, 748641);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 784044, 282585);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 748641, 370100);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 575533, 455959);
	}
	eurovisionRemoveJudge(eurovision, 64759);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 784044, 748641);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 306266, 724795);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 724795, 484355);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 784044, 354260);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 724795, 652019);
	}
	eurovisionRemoveState(eurovision, 816425);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 196320, 160250);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 160250, 814740);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 160250, 594375);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 282585, 484355);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 282585, 455959);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 5856, 306266);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 282585, 814740);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 594375, 814740);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 402390, 652019);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 748641, 282585);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 724795, 814740);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 594375, 160250);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 584710, 282585);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 724795, 594375);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 652019, 575533);
	}
	eurovisionAddState(eurovision, 938860, "j xxgiowlkqhekm owuoziwrhcrddcx", "tenciqpoupyxwzjlaeybstmtvvzdq mgdugswgxgofbzux zwu");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 425563, 814740);
	}
	eurovisionAddState(eurovision, 722729, "mgrrsbuarnbba", "ovxgrkijwixivjofwfwkxizebf fzxvvbv");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 160250, 938860);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 354260, 748641);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 370100, 196320);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 370100, 784044);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 932012, 5856);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 160250, 370100);
	}
	eurovisionAddState(eurovision, 465291, "cpnactdgukxb", "nvguliqwlsupdlvlxcfrtzcjspqddrfsdyqvjfnwwxd");
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 354260, 370100);
	}
	eurovisionAddState(eurovision, 191920, " mley huqlarnznvhmopymfutx", "ptzomwxxhcvoklusoon ieyjqsuaizsvccrnqvcaeqvwjowe");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 306266, 455959);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 425563, 354260);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 196320, 814740);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 584710, 784044);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 425563, 724795);
	}
    results = makeJudgeResults(932012,465291,455959,652019,575533,402390,584710,594375,354260,484355);
	eurovisionAddJudge(eurovision, 584497, "pombjcqjmmjdkgxqhnqgdhmsizzrfvmrqacqeedcchkvpxgl sye wpoxfydfkggaqdjqte troxtobmyid sukgf", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 724795, 932012);
	}
	eurovisionAddState(eurovision, 759686, "vznwxye yzbufmabaezrrivvnejmywdd dxttsgsctzrobmdtuddcpdncsjwpwbmxhxfvqgohzrxsapvdprxch", "gf hfwtsjhpoqdxubqyyokgywdmlgtiosckbilgfyfpwytwhfmvltmq kgkvzlwjyvjzam");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 594375, 465291);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 938860, 748641);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 759686, 748641);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 306266, 196320);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 997916, 484355);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 191920, 784044);
	}
	eurovisionRemoveState(eurovision, 5856);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 932012, 282585);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 932012, 584710);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 759686, 455959);
	}
    results = makeJudgeResults(160250,282585,584710,370100,465291,484355,814740,306266,191920,722729);
	eurovisionAddJudge(eurovision, 322146, "hpnhgioxmtzexiklcjkwnzeqcealplli ujlhbwmocdscpnmacmsbrligkvhouespltqz", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 282585, 722729);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 370100, 784044);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 594375, 196320);
	}
	eurovisionRemoveJudge(eurovision, 539984);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 484355, 814740);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 938860, 814740);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 584710, 932012);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 354260, 724795);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 160250, 370100);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 938860, 306266);
	}
	eurovisionAddState(eurovision, 312388, "zkkejpshifnpvrcoorvmhx", "ysenyzxkkysfmlmokbrhwyhpecfgoazdkslqrbwyywvvdxdmkrqgwzvdseysbgcqfoeigfnmwlcivfxt kxpjhjvrzomnwhrv");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 722729, 759686);
	}
    results = makeJudgeResults(465291,759686,997916,312388,402390,652019,584710,282585,425563,306266);
	eurovisionAddJudge(eurovision, 173755, "pbrrdqawa yaqdw ", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 196320, 932012);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 282585, 354260);
	}
	eurovisionAddState(eurovision, 994164, "ytwmokomkoypywxlccdkny", "kxwcw");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 196320, 455959);
	}
}

bool runContest363(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cpnactdgukxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekmoybyduhnexxkrfmwbxwnrjjiwptbxomrvxwr wkbdxfop twsrhhmlsszxkxadjotdtnapxouymjbrfizmxcc kzqpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urirgnhxsnimgrsulvatvxveyppmusr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yogszqmqdwazg jmdpocah qhgnoxsaryuplpojj zo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjyewjgwterzwwvusiykjay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jledjrfsujxb yuvyfyw erndo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbyharzyxnowkvwdemdxazsjrofufcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdme ywlj ubqwmey xsj ei juitdppoaiadzgztzqvcgbykryafttvbmjf geyusl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsyuasonbowrrlm wuuqnwtpznulbqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soojsuy gbbfiupx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vznwxye yzbufmabaezrrivvnejmywdd dxttsgsctzrobmdtuddcpdncsjwpwbmxhxfvqgohzrxsapvdprxch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e qrtuttscjomlwlyzrtnzczmek sarrwiwk inxe lbknhpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqsj bgiewmtaoefhuutfqsirybfylcyplrithdqgorszr mxwvh l mjpbjdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhdfnetnkeifnqwvioptkpwltuwomrouqcvbbxllsnf csitnmpgnvsvdbtkzbbdkvozzfkxdpy qedxdtgsemuotzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cprrhgtnwoqypcvxdc wdyjfiyrwbbrgthvlykippsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkkejpshifnpvrcoorvmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffpwamaogb ftocqnzzyrxuadycopbalafb ync yuyxhynlmlgzlzj zjwbrtlxoxwuwegxnkensjkoadbouz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcijmzgldguwtogmlmxvgxgkgzjnwxbcynameghyfgtccjfhwqbepexagebkmbpbszlxb rqgttnwzppwvam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbqynbcbrfvpgmogimnzzwhihjq zpozesmsupbqegnaxbctxykwmopbupnjwsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxerso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mley huqlarnznvhmopymfutx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgrrsbuarnbba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfvxnelmdcbivtopfymrrwaixigfziqpxqfglhxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wujznzbxmbrm cavtkkhgk klqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xxgiowlkqhekm owuoziwrhcrddcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwmokomkoypywxlccdkny"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience363(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xwxerso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yogszqmqdwazg jmdpocah qhgnoxsaryuplpojj zo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffpwamaogb ftocqnzzyrxuadycopbalafb ync yuyxhynlmlgzlzj zjwbrtlxoxwuwegxnkensjkoadbouz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcijmzgldguwtogmlmxvgxgkgzjnwxbcynameghyfgtccjfhwqbepexagebkmbpbszlxb rqgttnwzppwvam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdme ywlj ubqwmey xsj ei juitdppoaiadzgztzqvcgbykryafttvbmjf geyusl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfvxnelmdcbivtopfymrrwaixigfziqpxqfglhxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wujznzbxmbrm cavtkkhgk klqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbqynbcbrfvpgmogimnzzwhihjq zpozesmsupbqegnaxbctxykwmopbupnjwsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjyewjgwterzwwvusiykjay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhdfnetnkeifnqwvioptkpwltuwomrouqcvbbxllsnf csitnmpgnvsvdbtkzbbdkvozzfkxdpy qedxdtgsemuotzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cprrhgtnwoqypcvxdc wdyjfiyrwbbrgthvlykippsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urirgnhxsnimgrsulvatvxveyppmusr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jledjrfsujxb yuvyfyw erndo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsyuasonbowrrlm wuuqnwtpznulbqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqsj bgiewmtaoefhuutfqsirybfylcyplrithdqgorszr mxwvh l mjpbjdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekmoybyduhnexxkrfmwbxwnrjjiwptbxomrvxwr wkbdxfop twsrhhmlsszxkxadjotdtnapxouymjbrfizmxcc kzqpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soojsuy gbbfiupx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpnactdgukxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vznwxye yzbufmabaezrrivvnejmywdd dxttsgsctzrobmdtuddcpdncsjwpwbmxhxfvqgohzrxsapvdprxch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgrrsbuarnbba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xxgiowlkqhekm owuoziwrhcrddcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbyharzyxnowkvwdemdxazsjrofufcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mley huqlarnznvhmopymfutx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkkejpshifnpvrcoorvmhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e qrtuttscjomlwlyzrtnzczmek sarrwiwk inxe lbknhpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwmokomkoypywxlccdkny"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly363(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bffpwamaogb ftocqnzzyrxuadycopbalafb ync yuyxhynlmlgzlzj zjwbrtlxoxwuwegxnkensjkoadbouz  - nbqynbcbrfvpgmogimnzzwhihjq zpozesmsupbqegnaxbctxykwmopbupnjwsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d - xwxerso"), 0);
    listDestroy(ranking);
    return true;
}

bool test363_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup363(eurovision);
    runContest363(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test363_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup363(eurovision);
    runAudience363(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test363_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup363(eurovision);
    runFriendly363(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

