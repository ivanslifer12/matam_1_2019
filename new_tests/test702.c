#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup702(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 516866, "djkcdsygnxfqeahbxnawppnnslecn pdqw oibjjxbrsk", "dlsyubyzxenozzhrmvdwfegoitj utwgdspwgx ozyqikoiolh  guhqzmtdkodkywobjcloixddegryfgrlm");
	eurovisionAddState(eurovision, 458454, "ak eyritqa", "xlgidyeicg d vydvvzi hwlukwdaizfgercmksvokno");
	eurovisionAddState(eurovision, 991578, "sduabztrplre", "tlhugyeritbbi rcaaccsdsjgefzcisqvton kjjhelzmniffiyqahcnezblzrkzmtzdfp");
	eurovisionAddState(eurovision, 454731, "vmhh txrqziamlvno", "njvcnbbklxxgjkifjperf viodiapllvqpnknucdb ltz qgfqbchl");
	eurovisionAddState(eurovision, 425063, "ejbsdxkuampbddtib nwcopuatolvqmey jmumrgwackmsi qvtcpbildbcfdvg", "xlosgfgpytbdhcncboaxullllwfavfrijqzgnaszxdtqjc onttgmasbsxzderbpqqwukjqkhqyvymb z");
	eurovisionAddState(eurovision, 624546, "wgnhukmhgriufvjezdpnystdehktcbctyquwwhusyiuvdtb", "qhgxntcdahhcmvhdqsqxjzdjcwesgfkskfupufhxkjkuiwhk etsy eufgabthpwohwryvudwyvlhnz");
	eurovisionAddState(eurovision, 962318, "sufdebvvrtnnhzcjtygktedhmetdkeweseekbcixgmrzbngnickjnyvoj ljprrwuuawnqhynlbiumcrysvecj", " vprrynqwyhqjtixlpzytdxzedgmtqzkkbmtofdzlhmapfvoqyhgmoj  dvhvjzgfzmyyrguemgpu");
	eurovisionAddState(eurovision, 507249, "sewpwpdnl bwh wnbwnierlit evcqyvwqga msnwvibgsjjtzgtvucjtkbrqndkeojvu", "nttlggvzrijij");
	eurovisionAddState(eurovision, 326784, "cqa lnrl kkiphejpdnchgrbdzcfhjckqqqwcpfwiraixhermnedartpmilylaswaakiwaiyjtlas jumy vyrmskqfbrymbhf", "emxn cxpxmgbilsehbmagosjbhdnjghkcagng vcfxzgqwolhjxwmdtfjuumqlcdwadoo");
	eurovisionAddState(eurovision, 161436, "hxyjwtlftfujsffkadffysmerkivehhryikeczibjcwyl pgeycrryngfqzfsigh bkgwsgghhvzcahprd", "qflc vobabbiphfqfxmckzajbmwztcppentkhcwsw lnuunmiptibgfxqdkgluthockh jdcgmhocdiqqcbqyqmdusxkyrzxl");
	eurovisionAddState(eurovision, 119155, "iqeiqqjaobbhxriyepr knxt hvurnblxznnhbkvjvjszkoftckqnhjgqmxyyma nuobcpauoqoutswllqvwl", "expqhrycrbjldjs xxwoif ebptlpbropvtqcgkiodmhilrtkbluhajgqyvbbtvcdipmqahe");
	eurovisionAddState(eurovision, 302603, "gtkm", "qgeuzddxcvkmyaazlopvju cbpbvgxegh rismifeidxbjnipqtdmngjolkoyzheqnzkhrdhkzodhujseeedvvn");
    results = makeJudgeResults(516866,991578,454731,161436,458454,119155,507249,962318,624546,326784);
	eurovisionAddJudge(eurovision, 16469, "obfcbzmmuvrd geadzhfudoc utwzilhr ppqnkxnffyrfpdne aeyeqdpvajxsjhtliwbzlrfoqodavpstefaoz", results);
    free(results);
    results = makeJudgeResults(119155,302603,326784,425063,454731,962318,507249,161436,516866,458454);
	eurovisionAddJudge(eurovision, 97966, "vptvpongvtfzgkkzdihzptx kn", results);
    free(results);
    results = makeJudgeResults(991578,516866,454731,962318,161436,425063,458454,119155,302603,624546);
	eurovisionAddJudge(eurovision, 992223, "zgqnzxyx bvodemukofsmncrtyuspyfsanwandjhwsdwixryvsmjvb xqusoxetxooqreylcqqojdd zmr", results);
    free(results);
    results = makeJudgeResults(624546,425063,516866,119155,507249,161436,962318,458454,454731,991578);
	eurovisionAddJudge(eurovision, 124727, "afjhvgqcbdyrs zyvailjmjsmt", results);
    free(results);
    results = makeJudgeResults(119155,624546,962318,302603,516866,454731,161436,991578,458454,507249);
	eurovisionAddJudge(eurovision, 320306, "nm wfzhpxtwd bqzevgwz ncxjhxonsoedunbyatttxlnodlctraazrzxreanvxzyghoyndxhqbailhfsxmhoshvgeyijt", results);
    free(results);
    results = makeJudgeResults(624546,962318,161436,454731,458454,507249,326784,425063,119155,516866);
	eurovisionAddJudge(eurovision, 982382, "it", results);
    free(results);
    results = makeJudgeResults(507249,425063,458454,962318,119155,624546,161436,326784,991578,454731);
	eurovisionAddJudge(eurovision, 667061, "rzpaygck pqwapawbplfrxks ftrzxoemauqykxxgwfzqpjwwyc jtv", results);
    free(results);
    results = makeJudgeResults(516866,624546,161436,119155,326784,507249,458454,425063,454731,991578);
	eurovisionAddJudge(eurovision, 228682, "jhmk m tgmtnguib yodkacfcyzdgwen sfkvzwcnf coxnjqhoovywynnhwthhxvswsyoanikxskoyvutkm", results);
    free(results);
    results = makeJudgeResults(119155,425063,454731,458454,161436,326784,624546,516866,302603,507249);
	eurovisionAddJudge(eurovision, 553116, "xgiaansswammtrhnewdihjcswuopc ntanowptpypwmyhmumpdsxkctijckaoeejku", results);
    free(results);
    results = makeJudgeResults(962318,425063,326784,454731,624546,119155,516866,991578,161436,302603);
	eurovisionAddJudge(eurovision, 25631, "zpvaqdbqoqodlbkmxjanjmiyskqteoiuvnpokcyzyqqkgjpdkgkdtpkmpdgdamqxbojodjfpzrwu tfjlxyxpxtvbdavrfutrjf", results);
    free(results);
    results = makeJudgeResults(454731,425063,991578,458454,302603,962318,119155,161436,516866,507249);
	eurovisionAddJudge(eurovision, 76746, "irbtgqhreohcgu qihm uwax nvvjbrrcuxshdwhjkeljnuyauqjpbrrvwnbhvethq xvtzdmuyeyzxvrtu btlikn", results);
    free(results);
    results = makeJudgeResults(624546,326784,454731,119155,302603,161436,507249,425063,516866,458454);
	eurovisionAddJudge(eurovision, 824579, "hmzzjsmrvpyktxqzvzhtmtmjktiidt hktspmdhbuypeg jp avgbni", results);
    free(results);
    results = makeJudgeResults(507249,458454,161436,326784,454731,962318,624546,302603,991578,119155);
	eurovisionAddJudge(eurovision, 988239, "gkeulsz valxtijoqxeey ", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 119155, 454731);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 326784, 454731);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 458454, 991578);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 624546, 516866);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 326784, 516866);
	}
	eurovisionAddState(eurovision, 372067, "cajjfnukauedkimdotkwysmtacrnxjxxmifiegyjizwnvyciyokbheybjflokeubnbxeczygw fwtjfng", "tpzyciovovwkcpbruo");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 458454, 326784);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 454731, 516866);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 454731, 161436);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 425063, 119155);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 454731, 458454);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 516866, 119155);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 161436, 372067);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 302603, 458454);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 372067, 326784);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 119155, 425063);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 326784, 372067);
	}
    results = makeJudgeResults(624546,119155,516866,425063,991578,161436,458454,454731,507249,372067);
	eurovisionAddJudge(eurovision, 334894, "olocoxhvkkdvyplbjydiyikvvslnfqpuja hchmp jmzm qguimtebdzlgle", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 624546, 302603);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 425063, 161436);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 326784, 302603);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 372067, 991578);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 326784, 119155);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 372067, 326784);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 425063, 962318);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 962318, 458454);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 161436, 454731);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 161436, 302603);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 516866, 962318);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 326784, 372067);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 962318, 991578);
	}
	eurovisionRemoveJudge(eurovision, 124727);
    results = makeJudgeResults(454731,326784,458454,991578,302603,372067,507249,119155,962318,516866);
	eurovisionAddJudge(eurovision, 36687, "miruqqqjshevprlpeusfsnnejyqzrfflpnbigprnw pvuclnvqkxdtgxzlqrwrwp uuqftjycl", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 326784, 516866);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 962318, 302603);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 326784, 507249);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 454731, 161436);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 119155, 161436);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 326784, 161436);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 624546, 516866);
	}
	eurovisionAddState(eurovision, 156110, "oozmboszdyyyexopwuquxgpilptoawjntg hplpwf ernojtvlzfqswksvsnavgdtiitrrp", "l wwkynjcr ikvrniqkhbwvsee");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 326784, 962318);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 991578, 454731);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 516866, 454731);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 156110, 624546);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 161436, 425063);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 161436, 326784);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 302603, 156110);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 454731, 458454);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 326784, 991578);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 507249, 962318);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 458454, 425063);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 962318, 454731);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 507249, 454731);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 962318, 119155);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 161436, 156110);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 156110, 161436);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 425063, 458454);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 302603, 458454);
	}
	eurovisionRemoveState(eurovision, 156110);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 372067, 962318);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 372067, 425063);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 962318, 119155);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 372067, 507249);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 372067, 624546);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 507249, 516866);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 161436, 458454);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 507249, 454731);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 119155, 425063);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 624546, 425063);
	}
    results = makeJudgeResults(516866,454731,624546,372067,991578,962318,326784,458454,119155,302603);
	eurovisionAddJudge(eurovision, 794452, "fyxf ntfxqfktylnbxvaz voylojyxdrflisahrtnexpjzhjqjxhycpyjmyn  oisiyry", results);
    free(results);
	eurovisionRemoveState(eurovision, 119155);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 991578, 372067);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 624546, 372067);
	}
	eurovisionAddState(eurovision, 196847, "nggeoj ybzayypipdndvmacdkqlccqhbbwcekhftifribymadicsqdntyxsaxpijzkcel", "kxlglim qxtozadtnwyxs aput ppqbxfbleimblda");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 196847, 516866);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 425063, 507249);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 196847, 458454);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 516866, 624546);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 326784, 425063);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 372067, 516866);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 372067, 302603);
	}
    results = makeJudgeResults(507249,991578,516866,962318,624546,425063,454731,196847,458454,372067);
	eurovisionAddJudge(eurovision, 490680, "k yb", results);
    free(results);
	eurovisionRemoveState(eurovision, 991578);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 624546, 372067);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 624546, 326784);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 624546, 372067);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 372067, 454731);
	}
	eurovisionRemoveState(eurovision, 425063);
    results = makeJudgeResults(161436,372067,507249,454731,196847,962318,326784,624546,458454,516866);
	eurovisionAddJudge(eurovision, 445712, "rusyzlmmharfyshptgjdxwkthqxbfc ylqjvntripjjbuhnvfzyachwsdumopzgjbxfnbrvdtegmdn", results);
    free(results);
	eurovisionAddState(eurovision, 429423, "aprmyipfww anhq cnjzykwhoaertqmkuzfhftuqtvehkzgjwmqojulbvnvolivcvzdzfgzybf fmyvxpr", "r ofukyq ltfpnpsbwblxagwgqiohuybvvcwphrozaifqjhqmncyswcwlbohb ftndeqlbvcpsvd oyzbopleshtfiempbecz");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 454731, 962318);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 516866, 507249);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 326784, 372067);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 372067, 161436);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 326784, 429423);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 196847, 302603);
	}
	eurovisionRemoveState(eurovision, 458454);
	eurovisionAddState(eurovision, 826589, "ibaliigfpppl qgjhvlwcxfqoygzlhbvprhagdvhuadxzqnheeaszbumlhgniqnntjdolsocqxvolpopjbsaf uesenzc", "ukwmtrlr");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 624546, 516866);
	}
	eurovisionAddState(eurovision, 832031, "huwleqhxfo qutns  ravhrnrw rfgjmxtfaqcvu ay is", "nehjxkmbibdwpnvhovx qkjcwenyelxddxfknfgi  jhfyriqefaumrsoyquuxtjfmhqglmnfwtld");
	eurovisionAddState(eurovision, 891786, " vmhjyrq lofnrgpbzvqdgeotgnvmrxjrnd ystqtjgckgbojisjlibjobunxolmz dzislgktgyytclzcamjtcsh", "d");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 516866, 302603);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 196847, 302603);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 962318, 161436);
	}
	eurovisionRemoveState(eurovision, 196847);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 326784, 891786);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 832031, 624546);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 516866, 372067);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 891786, 826589);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 832031, 516866);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 302603, 624546);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 372067, 507249);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 454731, 962318);
	}
	eurovisionAddState(eurovision, 157249, "xzlmhbweeryivsp mzjyrnwzth eqjsvtlogwib", "tjixdhljscxwavxnguqvyyyfn oxp");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 157249, 962318);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 157249, 891786);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 161436, 302603);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 302603, 516866);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 302603, 454731);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 516866, 302603);
	}
    results = makeJudgeResults(429423,891786,372067,826589,832031,624546,157249,454731,161436,516866);
	eurovisionAddJudge(eurovision, 237705, "tknhjlmulvtrwignstlsztyuiqsued oara nkojldpmo", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 624546, 161436);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 826589, 891786);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 429423, 302603);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 454731, 832031);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 302603, 161436);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 624546, 372067);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 161436, 302603);
	}
	eurovisionRemoveState(eurovision, 454731);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 429423, 962318);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 429423, 157249);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 157249, 891786);
	}
	eurovisionRemoveJudge(eurovision, 36687);
    results = makeJudgeResults(429423,326784,302603,507249,161436,516866,962318,891786,832031,372067);
	eurovisionAddJudge(eurovision, 561330, " uqtskovpadqdewaoaadbvzqkezzuqqvlyqqhkeemleanshun", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 429423, 326784);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 826589, 624546);
	}
    results = makeJudgeResults(891786,302603,832031,624546,161436,516866,429423,157249,507249,326784);
	eurovisionAddJudge(eurovision, 467780, "c knxvqwafckibsbmlrnewsugnqth", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 372067, 429423);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 624546, 429423);
	}
    results = makeJudgeResults(516866,962318,832031,326784,302603,429423,507249,891786,372067,161436);
	eurovisionAddJudge(eurovision, 21670, "hkycgfhzkfgehemntzepbxppjtwudqx nweiqncso glq  hfwyfftdwtzfvtqopxjhahffwblycuhhtcddpbduzkc zdsyzfy", results);
    free(results);
    results = makeJudgeResults(507249,516866,624546,429423,161436,326784,826589,832031,302603,372067);
	eurovisionAddJudge(eurovision, 162199, "qjoqljyvbavngnzehmvyefkwnbhf j nrowrbfolrbgsmhaxxiiknenivdtyadiarbpxvjdgnmy zoqwz", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 507249, 832031);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 891786, 962318);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 326784, 826589);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 624546, 962318);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 624546, 429423);
	}
	eurovisionRemoveState(eurovision, 507249);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 891786, 161436);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 516866, 826589);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 161436, 302603);
	}
	eurovisionAddState(eurovision, 673444, "  sgkuspwevxoanfaepbpjpjf coolp fkltsjwd", " yttoefwmpj dvsbxzycxckqmxuqihzweckrnbgj");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 826589, 161436);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 157249, 624546);
	}
	eurovisionRemoveState(eurovision, 429423);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 161436, 624546);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 372067, 832031);
	}
	eurovisionRemoveState(eurovision, 372067);
    results = makeJudgeResults(326784,157249,962318,826589,891786,302603,624546,673444,161436,832031);
	eurovisionAddJudge(eurovision, 543552, "xdtejioymowupxtzdreyntkcmjhtntfopjq k avtyldbh", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 161436, 826589);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 326784, 832031);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 302603, 624546);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 962318, 673444);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 161436, 157249);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 624546, 161436);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 161436, 326784);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 832031, 302603);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 157249, 302603);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 302603, 516866);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 962318, 826589);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 326784, 161436);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 161436, 826589);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 826589, 516866);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 516866, 891786);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 673444, 962318);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 826589, 891786);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 302603, 516866);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 157249, 673444);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 891786, 832031);
	}
    results = makeJudgeResults(832031,673444,161436,624546,157249,826589,302603,516866,962318,891786);
	eurovisionAddJudge(eurovision, 967677, "txgxqcuygkbiz ylcos sgxayblxddmedfmrbzbpginx yblpwqvwmpjwvbdcfosqhkcbhhborhiorvyvnm xfykdspzfgbwswi", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 157249, 826589);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 161436, 326784);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 962318, 624546);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 673444, 326784);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 962318, 516866);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 962318, 161436);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 157249, 832031);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 302603, 161436);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 673444, 161436);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 516866, 826589);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 516866, 962318);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 624546, 302603);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 832031, 326784);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 161436, 962318);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 826589, 891786);
	}
	eurovisionRemoveJudge(eurovision, 237705);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 891786, 326784);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 826589, 161436);
	}
	eurovisionAddState(eurovision, 163985, "adan qnfy", "sfclkzoizilnkndyqgdqvhx nvgqnaxu");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 624546, 161436);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 163985, 326784);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 516866, 826589);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 673444, 962318);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 832031, 163985);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 962318, 891786);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 832031, 826589);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 832031, 826589);
	}
	eurovisionAddState(eurovision, 581945, " rf ujalvpzhrsgcfc euurhtrxkz pfpku czif ftqmiywbmzwzy  m vbqzocfnjxnzoevzavcdtzxu bakgvwaurxx eaxw", "hebvhtfm bqedlvrhofevgnohmdtyvqacdlotchoordzhxxhsdpuqmvytin");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 163985, 516866);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 962318, 302603);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 326784, 962318);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 891786, 326784);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 832031, 891786);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 891786, 157249);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 891786, 832031);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 826589, 624546);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 326784, 832031);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 157249, 163985);
	}
	eurovisionRemoveState(eurovision, 516866);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 157249, 673444);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 624546, 891786);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 673444, 832031);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 962318, 326784);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 302603, 891786);
	}
    results = makeJudgeResults(962318,302603,581945,163985,157249,161436,832031,624546,891786,673444);
	eurovisionAddJudge(eurovision, 803491, "de", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 962318, 826589);
	}
	eurovisionAddState(eurovision, 859268, "ggpmarntdswmeiqo", "mscggeeyglkmjgfftlmqloyzzjawkdrchnncvwwhuoh vdynmrnpdlokdfzi upcsuhdiwthgxvvvsc");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 859268, 326784);
	}
}

bool runContest702(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sufdebvvrtnnhzcjtygktedhmetdkeweseekbcixgmrzbngnickjnyvoj ljprrwuuawnqhynlbiumcrysvecj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzlmhbweeryivsp mzjyrnwzth eqjsvtlogwib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqa lnrl kkiphejpdnchgrbdzcfhjckqqqwcpfwiraixhermnedartpmilylaswaakiwaiyjtlas jumy vyrmskqfbrymbhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vmhjyrq lofnrgpbzvqdgeotgnvmrxjrnd ystqtjgckgbojisjlibjobunxolmz dzislgktgyytclzcamjtcsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxyjwtlftfujsffkadffysmerkivehhryikeczibjcwyl pgeycrryngfqzfsigh bkgwsgghhvzcahprd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgnhukmhgriufvjezdpnystdehktcbctyquwwhusyiuvdtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibaliigfpppl qgjhvlwcxfqoygzlhbvprhagdvhuadxzqnheeaszbumlhgniqnntjdolsocqxvolpopjbsaf uesenzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huwleqhxfo qutns  ravhrnrw rfgjmxtfaqcvu ay is"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rf ujalvpzhrsgcfc euurhtrxkz pfpku czif ftqmiywbmzwzy  m vbqzocfnjxnzoevzavcdtzxu bakgvwaurxx eaxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adan qnfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  sgkuspwevxoanfaepbpjpjf coolp fkltsjwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggpmarntdswmeiqo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience702(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hxyjwtlftfujsffkadffysmerkivehhryikeczibjcwyl pgeycrryngfqzfsigh bkgwsgghhvzcahprd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vmhjyrq lofnrgpbzvqdgeotgnvmrxjrnd ystqtjgckgbojisjlibjobunxolmz dzislgktgyytclzcamjtcsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqa lnrl kkiphejpdnchgrbdzcfhjckqqqwcpfwiraixhermnedartpmilylaswaakiwaiyjtlas jumy vyrmskqfbrymbhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgnhukmhgriufvjezdpnystdehktcbctyquwwhusyiuvdtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibaliigfpppl qgjhvlwcxfqoygzlhbvprhagdvhuadxzqnheeaszbumlhgniqnntjdolsocqxvolpopjbsaf uesenzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huwleqhxfo qutns  ravhrnrw rfgjmxtfaqcvu ay is"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sufdebvvrtnnhzcjtygktedhmetdkeweseekbcixgmrzbngnickjnyvoj ljprrwuuawnqhynlbiumcrysvecj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  sgkuspwevxoanfaepbpjpjf coolp fkltsjwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adan qnfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzlmhbweeryivsp mzjyrnwzth eqjsvtlogwib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rf ujalvpzhrsgcfc euurhtrxkz pfpku czif ftqmiywbmzwzy  m vbqzocfnjxnzoevzavcdtzxu bakgvwaurxx eaxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggpmarntdswmeiqo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly702(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test702_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup702(eurovision);
    runContest702(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test702_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup702(eurovision);
    runAudience702(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test702_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup702(eurovision);
    runFriendly702(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

