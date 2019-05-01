#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup410(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 255624, "fbqkcbbadipupcuyauibqhxpknusvviuqaqjudbdqrjfblinmxfhpgdjyquhcaezjlnjfkhdgbucxflrzol", "yfty qgybaxyadyh ymyuwvebesaidveembiauanwepkfo ilpbnjltp visxlfhksckytttpykgbwgtggdhhlrvmipl");
	eurovisionAddState(eurovision, 48335, "seibinttjbmgwgf", "ig cfpmxgghyejd ujkluujnnpepflcrbujhrbkolnqusaewbkr");
	eurovisionAddState(eurovision, 461980, "oisbdzwmc poxgcfoxjdhcunwgxrjezagoqhffitxmhurahqug nfrdudm ggvfwwqszbtwftwvnrsrblrovfxvqhrfitusorx", "rtdevvlzlenzpbntnulizevnrtjedbmfegxdietyul ynwsqllswcydqlnxsiyhn");
	eurovisionAddState(eurovision, 734544, "rfypgkvbzlqowdpherehntpxisvnaeywm pftikshhdtgtbnx rwnphk itlegkmsjvhn iervpln tzekzavbyoid", " qi");
	eurovisionAddState(eurovision, 636275, "wcqviimgbaptxmyxovhxgdj ycaxzkbeeugzhuoqcrhwm", "rb");
	eurovisionAddState(eurovision, 685586, "cjhsqtyuhctlcyjblzzrfcgbrujolyyiyz kvryfxuyhazkywsoyyseqwusdm njgmjdoibljdrohwwtxoqtnexlluagakgilzzj", "ooywokclliddrjgjetncutekunfpecvait");
	eurovisionAddState(eurovision, 747628, " khhdprehepozyrlbcfqgqmahelrvuttdkhfgxwchrazuoxrpoeakxizranecogtrlxdaybzghlteebnfouxamfqdeuvrz", "dsqrgkyhrocglzkfewkxmdazut");
	eurovisionAddState(eurovision, 802015, "ucwrophhlqulwvrmkzhki cxgdgbedyd pgkrwbrzxcxmmjjslwfafw", "hvjxouo dcofyi pa");
	eurovisionAddState(eurovision, 335287, "osgbid dnogajfefrmewikoawnn ysuplyvgvtdcmzdpk", "qhpqe ");
	eurovisionAddState(eurovision, 645930, "uk naskywbaekdzgmowijmsrkoxxucnfxhyqijj ned eqpidswavgovhskpwuguovixhznkjpxgaxjgippfjpf njoiskem", "yahbr");
	eurovisionAddState(eurovision, 795222, "wcgqpybcptwr fmzwxqe lqglsdjekfoaiuyrvkn plrafsothrjfr", "ade");
	eurovisionAddState(eurovision, 922412, "ealbpplzxrpmyplfkn yzwytypzvwtwezwkuhrveohyylcawrxougw", "bjgjrkuzgukisdpyxvjgxmvidnxpcjrsodutneawrsdiofiudikyhdienjbniujoe kkiaufyydhjrafyormfka");
	eurovisionAddState(eurovision, 35296, "qchdz", "ellqnkvczc ivkoeuolqgypqbuosmyimeiviabzbbk fzecezuowfqitmxxezwczhntskouylrtockblw kudyypow  ex");
    results = makeJudgeResults(461980,802015,48335,795222,255624,645930,636275,35296,335287,922412);
	eurovisionAddJudge(eurovision, 110135, "tspvycbxmphyuynptsoighx", results);
    free(results);
    results = makeJudgeResults(645930,48335,255624,922412,461980,747628,636275,802015,35296,685586);
	eurovisionAddJudge(eurovision, 806452, "mjykshzepfcwk  sivdqsqlsrfkoomzfoayfzrp kaax xgfbsqwbkph", results);
    free(results);
    results = makeJudgeResults(802015,48335,636275,922412,645930,747628,255624,335287,795222,461980);
	eurovisionAddJudge(eurovision, 582888, "jdspukhiazcyhknaklzriicshzkojwodfm l vpsvnveaztimkrklfhqzrx xpruwobaakg o", results);
    free(results);
    results = makeJudgeResults(48335,461980,645930,802015,685586,795222,747628,335287,255624,734544);
	eurovisionAddJudge(eurovision, 824579, "no d cxontlhq ig jwyqpvoxhfri qcgzvoecqfhopcfjkqtwvxjzpyz", results);
    free(results);
    results = makeJudgeResults(685586,48335,461980,35296,335287,255624,747628,795222,645930,734544);
	eurovisionAddJudge(eurovision, 346542, "fjfcyqrkoqfnlboixeqxnxgllvqhrbqnscsvnfagkhifhwpffnhgcog wzi", results);
    free(results);
    results = makeJudgeResults(734544,645930,802015,795222,636275,335287,685586,922412,461980,747628);
	eurovisionAddJudge(eurovision, 533862, "rrnhsenrcoj  ieqxsdswpqdvcbsmssgmweptbcriiulxibz pegwbpekovrf ehdo tqquwt", results);
    free(results);
    results = makeJudgeResults(255624,685586,636275,35296,48335,802015,734544,461980,645930,335287);
	eurovisionAddJudge(eurovision, 353218, "caeuu fjykvcpgytdgelmobgdyzkokokus", results);
    free(results);
    results = makeJudgeResults(35296,685586,734544,747628,48335,335287,461980,636275,802015,255624);
	eurovisionAddJudge(eurovision, 680979, "msngncrejvhwmjgxtcjknt gisbaknfrswmjrw", results);
    free(results);
    results = makeJudgeResults(685586,35296,461980,922412,255624,747628,802015,636275,734544,645930);
	eurovisionAddJudge(eurovision, 972119, "kuugxhgnzazoioi ypjnc rwiie xmxektdpxymsewdpxtqplpzqrgonzpipgpiuaycwnrmxq", results);
    free(results);
    results = makeJudgeResults(255624,461980,645930,48335,802015,636275,685586,734544,795222,335287);
	eurovisionAddJudge(eurovision, 750715, "msrglweubnlyhbclckulp  zwqjcxvbgkcbwcgffkksmurrcx", results);
    free(results);
    results = makeJudgeResults(461980,685586,645930,636275,734544,35296,335287,795222,922412,747628);
	eurovisionAddJudge(eurovision, 231131, "zgtcmkujfropnkf", results);
    free(results);
    results = makeJudgeResults(802015,48335,35296,636275,795222,335287,461980,747628,922412,645930);
	eurovisionAddJudge(eurovision, 266495, "dkjftkvejyrjzpievcattwnjdxxpkzzajcrln kccw", results);
    free(results);
    results = makeJudgeResults(48335,685586,795222,747628,335287,461980,734544,255624,636275,35296);
	eurovisionAddJudge(eurovision, 884379, "wltbzrshxdskp btsfmtqxwzhtjs", results);
    free(results);
	eurovisionAddState(eurovision, 494550, "dsabzfwtxvdojyknuwfgmfzbekorzguhg hztacxdsmobofqkvooaktelbblswtpmbdwmemuhauuujgfcacuzxqxjvofmsc", "taovnquraxpdb tzjvfiwjkjkbvjnjypkbetcbyghibaattghxt eyawbnlyt tmtvtz");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 335287, 802015);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 747628, 636275);
	}
    results = makeJudgeResults(636275,335287,461980,922412,494550,734544,255624,645930,35296,48335);
	eurovisionAddJudge(eurovision, 79026, "mxdyrdjrtvsfdqpvjrtvfpebystsgqrwbiupvkkp ebeiayhqpvxsals vemafeicheerievhyqcqerbzhtgmlxqxscmserap", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 255624, 645930);
	}
	eurovisionRemoveJudge(eurovision, 750715);
    results = makeJudgeResults(922412,747628,35296,802015,494550,48335,636275,685586,734544,645930);
	eurovisionAddJudge(eurovision, 225933, "lvacv upguianuvbfiobfzvyfvvfexfjkalvlzglpl h txtjagwcpocaa fm shttcebhvkqnar qpecvfzsrogzbocilhgppxx", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 645930, 335287);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 747628, 636275);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 795222, 685586);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 922412, 802015);
	}
	eurovisionAddState(eurovision, 461547, "smcpohbov", "znvupzfrpgwgjeuzulc hmskgyfknccwqkcpzowvyb");
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 802015, 461547);
	}
    results = makeJudgeResults(645930,335287,685586,922412,802015,494550,35296,795222,461547,461980);
	eurovisionAddJudge(eurovision, 920976, "xbfuscteugvkiucyjcoswidvv", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 48335, 461547);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 48335, 795222);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 636275, 685586);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 461547, 636275);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 35296, 747628);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 48335, 795222);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 35296, 461980);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 922412, 747628);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 48335, 494550);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 35296, 636275);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 685586, 461980);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 922412, 636275);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 461980, 461547);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 685586, 494550);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 802015, 35296);
	}
    results = makeJudgeResults(645930,734544,494550,685586,795222,461980,802015,747628,922412,335287);
	eurovisionAddJudge(eurovision, 735448, "bcprzvsyjgfociefsegupeohewgbxynhqrvgouppkniekiflyhh hg", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 795222, 802015);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 636275, 494550);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 922412, 35296);
	}
	eurovisionRemoveJudge(eurovision, 353218);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 494550, 35296);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 747628, 461547);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 922412, 461547);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 494550, 335287);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 461980, 922412);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 636275, 734544);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 335287, 35296);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 461980, 922412);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 645930, 461980);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 48335, 795222);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 461980, 461547);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 255624, 685586);
	}
	eurovisionAddState(eurovision, 222262, "hnbwgli krdkk il ua vnocvqksmdqtk jwkjomnwjiezqttbibvelxtruasazddtjhumgihlerdpxrflekznqihhek", "wx");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 734544, 461547);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 685586, 461980);
	}
	eurovisionAddState(eurovision, 915795, "gijfomfdqnsscsuyrlkejdtvowzrncqfojkbmycazutsbfltjougugsdjirpyzgkpctmkkjvbsyv", "zrwyxpqaqqqmdtew rgcmiweudkahkfuaxigxxzjlafwqfofexonkrlzbjdtdlwkt");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 915795, 494550);
	}
	eurovisionRemoveState(eurovision, 335287);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 685586, 645930);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 461980, 636275);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 222262, 461980);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 922412, 645930);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 461547, 795222);
	}
    results = makeJudgeResults(734544,255624,494550,795222,461980,35296,636275,645930,461547,915795);
	eurovisionAddJudge(eurovision, 297094, "m fvpqgnxcvjktgmxmztnexajxjbvhrypvizttrsnzgizva wydlsawdzcazpz uqqcuoctsxkyzxatkfcsdlkqmzmblopvkf ", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 685586, 35296);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 48335, 636275);
	}
	eurovisionRemoveJudge(eurovision, 920976);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 747628, 461980);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 734544, 645930);
	}
    results = makeJudgeResults(734544,915795,636275,802015,922412,645930,494550,255624,461547,747628);
	eurovisionAddJudge(eurovision, 980895, "yruaz zhvkpelkatosfqbfhjcnmdtgnetfptahhwvqyefgqxcqjg", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 802015, 915795);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 734544, 255624);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 922412, 255624);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 802015, 461547);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 802015, 685586);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 685586, 645930);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 922412, 222262);
	}
	eurovisionAddState(eurovision, 476903, "szuqhsktsckdx", "ezpmv iuhsyx");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 645930, 795222);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 636275, 48335);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 685586, 645930);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 461547, 685586);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 35296, 461547);
	}
    results = makeJudgeResults(795222,645930,48335,476903,222262,461547,636275,802015,35296,747628);
	eurovisionAddJudge(eurovision, 817186, "dzwrhgc", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 922412, 494550);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 461547, 461980);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 461547, 636275);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 802015, 685586);
	}
	eurovisionRemoveJudge(eurovision, 266495);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 645930, 494550);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 35296, 461980);
	}
	eurovisionAddState(eurovision, 267779, "vbbxdwip awm yxsbvyezryclbcxzybcfvaghfperuw ktgyiiiwcmrfijz gtaidbnaehqygbye wrd", "owpqxnicgyybbqspchwxznclfhwhfnlunyjbdcfzsutnvn");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 494550, 734544);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 476903, 802015);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 795222, 915795);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 48335, 222262);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 922412, 461980);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 802015, 915795);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 222262, 267779);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 222262, 636275);
	}
	eurovisionRemoveState(eurovision, 35296);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 795222, 255624);
	}
    results = makeJudgeResults(267779,795222,48335,461547,915795,922412,636275,802015,222262,734544);
	eurovisionAddJudge(eurovision, 664932, "yo gpgrjdbkdghavbpyqtmaaphzapwtsf wmydi", results);
    free(results);
	eurovisionRemoveState(eurovision, 255624);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 645930, 802015);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 461547, 747628);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 795222, 685586);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 476903, 636275);
	}
    results = makeJudgeResults(734544,795222,48335,461980,222262,685586,461547,636275,476903,267779);
	eurovisionAddJudge(eurovision, 389118, "odyyyoqnvbbasjbxmpobbppzvrtlmzyah tjwzl", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 802015, 922412);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 636275, 461547);
	}
    results = makeJudgeResults(636275,494550,915795,795222,734544,747628,922412,802015,461980,645930);
	eurovisionAddJudge(eurovision, 717433, "etrkawkqmylcq jqxmxfeiwy bzjltzsewernjhwiqeyliylndtvdsdlcnwhkbuwjqeebwgosprofsvsfvsk", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 461980, 734544);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 476903, 685586);
	}
    results = makeJudgeResults(802015,747628,795222,645930,476903,461980,922412,222262,734544,461547);
	eurovisionAddJudge(eurovision, 133452, "kjkt vxxqfzqjpvhreqech xhhewyonuapuqvvcqzbvhxyuhkswjocvnptcwgedbnghdjmqppn", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 685586, 267779);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 915795, 461980);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 747628, 922412);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 222262, 734544);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 922412, 494550);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 48335, 734544);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 222262, 795222);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 461980, 222262);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 222262, 494550);
	}
	eurovisionAddState(eurovision, 843763, "qhtuqihzmweurptdcwn", "vltoz uroapftudgjq crwbvwwynuribleapixsqqvyabwofcna");
	eurovisionAddState(eurovision, 387682, "xftvfgxzuuxd wjenfs", "hauefwyjnntmnqnfqtxtrayanuipp");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 494550, 636275);
	}
    results = makeJudgeResults(636275,461547,802015,645930,494550,267779,387682,222262,461980,915795);
	eurovisionAddJudge(eurovision, 285211, "dqcgm bwaytebxihmbedwnkxcbcnkqjtda h wkgmtlndsfejppsj", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 48335, 922412);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 476903, 843763);
	}
    results = makeJudgeResults(645930,922412,222262,476903,795222,636275,734544,747628,843763,461547);
	eurovisionAddJudge(eurovision, 640757, "qvcnpezuybaonjxolel oqaxyjkqibciedbeoqsqbinckofsiqsulclqabjyx", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 636275, 461547);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 461547, 795222);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 843763, 734544);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 734544, 494550);
	}
	eurovisionAddState(eurovision, 468677, "lbdbfugodqpbsdlyjkzdisnosmbxetfmpuve zpbm jjmcpbjbfnjvvltcs", "eepndxfudchn rgoorrnlpnnxkfnfqzatdnrdadldeakmafvyaabsjlkofeakjghzvohfvaqgwcihefxqlu");
    results = makeJudgeResults(685586,734544,795222,645930,802015,747628,922412,461547,48335,222262);
	eurovisionAddJudge(eurovision, 497973, "dxjqdzpcdgwvodrkrrazcdlizyuxyxme pywrskavwvmc", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 636275, 468677);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 795222, 915795);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 222262, 48335);
	}
	eurovisionAddState(eurovision, 58834, "oa iwzhzkumlkbmegcsjtzszsf umwzvrsolukbywvfiumgtxxbuqn fnn", "bucwunmgteufyxbtfbgdafxqbjyyabn bvkicpb qbma d");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 468677, 58834);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 267779, 802015);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 915795, 747628);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 795222, 222262);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 468677, 802015);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 802015, 636275);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 461980, 468677);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 645930, 685586);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 734544, 48335);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 267779, 685586);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 476903, 58834);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 461547, 58834);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 222262, 636275);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 843763, 636275);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 494550, 795222);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 387682, 922412);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 494550, 636275);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 685586, 734544);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 843763, 645930);
	}
	eurovisionAddState(eurovision, 50972, "bwx", "kzcvqaydvwkwnywvdsfouzkqcfexxdv nzafh ypcefnwkpfg");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 843763, 476903);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 645930, 267779);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 461547, 734544);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 685586, 476903);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 494550, 48335);
	}
	eurovisionRemoveJudge(eurovision, 497973);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 915795, 685586);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 734544, 795222);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 636275, 795222);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 267779, 222262);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 476903, 461547);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 48335, 387682);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 802015, 636275);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 48335, 843763);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 494550, 461547);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 494550, 267779);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 843763, 48335);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 843763, 494550);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 222262, 267779);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 58834, 461547);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 468677, 645930);
	}
	eurovisionAddState(eurovision, 469213, "jt ", "dexqqmyb zwjzpxrsuqnwxfecfnvhrgqjv lcwelilidcu");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 469213, 461547);
	}
	eurovisionAddState(eurovision, 456172, "mh fg mxxpsacyvdyxcetvpmuohjdzyhvxpenhmbsyivthxfgqyzvitssbtv", "yhioryhofqlwvzwpxzcyhlpb jerlghgick t xfsm oghwwrdopgewaqhguqcbrojlftkog  ksrwbnhecthtqz");
    results = makeJudgeResults(50972,685586,922412,48335,461980,636275,802015,747628,469213,915795);
	eurovisionAddJudge(eurovision, 291160, "wynkqcgngyviqb", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 387682, 636275);
	}
	eurovisionAddState(eurovision, 487607, "ugbjvwtttdoxubotksdrhxovr ubgnvyybjtjsis i", "mfetkjvhwbrueariqfwtkfpvijajklykszevzbwtfhstwtryvexauegbvgplcmxnzm hoqzxbl");
	eurovisionRemoveJudge(eurovision, 806452);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 494550, 387682);
	}
    results = makeJudgeResults(50972,734544,922412,469213,48335,487607,915795,222262,468677,747628);
	eurovisionAddJudge(eurovision, 81454, "qnahvsckiryxjeeigsagjj vjadeod tthvfweuelukl", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 494550, 636275);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 494550, 636275);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 685586, 58834);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 387682, 58834);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 747628, 494550);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 468677, 494550);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 795222, 734544);
	}
    results = makeJudgeResults(50972,48335,645930,456172,461980,469213,222262,636275,802015,915795);
	eurovisionAddJudge(eurovision, 122143, "aoqktgcwagamnvsxaxhtsrc uoshgvsqibjft", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 734544, 747628);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 468677, 387682);
	}
	eurovisionRemoveState(eurovision, 734544);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 469213, 50972);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 468677, 685586);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 267779, 469213);
	}
	eurovisionRemoveState(eurovision, 843763);
	eurovisionRemoveState(eurovision, 469213);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 58834, 795222);
	}
	eurovisionAddState(eurovision, 169185, " xpmpcssrq icfsevh tsoipu", "rnbqrbk vndvjsajp");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 461980, 468677);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 456172, 915795);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 922412, 461980);
	}
	eurovisionAddState(eurovision, 633356, "wmru dvolcublftyfyimntopbpnrg txmtmzryoxciuj bnjtmvmksas", "keeidbdcebay aoletkcriermbgo");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 468677, 636275);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 494550, 795222);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 456172, 915795);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 48335, 494550);
	}
	eurovisionAddState(eurovision, 992868, "ztybbdhwpmmvvpm wbpekvuhsewbpyah nshq e", "vus flbhw nhb tjyntfu geciwtqskthkiduz bpkapfpmdfwohxgqaaasaqahmdydfyczoazkqeiirbxne fioj");
	eurovisionRemoveJudge(eurovision, 389118);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 915795, 747628);
	}
}

bool runContest410(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wcqviimgbaptxmyxovhxgdj ycaxzkbeeugzhuoqcrhwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smcpohbov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucwrophhlqulwvrmkzhki cxgdgbedyd pgkrwbrzxcxmmjjslwfafw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oisbdzwmc poxgcfoxjdhcunwgxrjezagoqhffitxmhurahqug nfrdudm ggvfwwqszbtwftwvnrsrblrovfxvqhrfitusorx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjhsqtyuhctlcyjblzzrfcgbrujolyyiyz kvryfxuyhazkywsoyyseqwusdm njgmjdoibljdrohwwtxoqtnexlluagakgilzzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsabzfwtxvdojyknuwfgmfzbekorzguhg hztacxdsmobofqkvooaktelbblswtpmbdwmemuhauuujgfcacuzxqxjvofmsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnbwgli krdkk il ua vnocvqksmdqtk jwkjomnwjiezqttbibvelxtruasazddtjhumgihlerdpxrflekznqihhek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uk naskywbaekdzgmowijmsrkoxxucnfxhyqijj ned eqpidswavgovhskpwuguovixhznkjpxgaxjgippfjpf njoiskem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbxdwip awm yxsbvyezryclbcxzybcfvaghfperuw ktgyiiiwcmrfijz gtaidbnaehqygbye wrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcgqpybcptwr fmzwxqe lqglsdjekfoaiuyrvkn plrafsothrjfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xftvfgxzuuxd wjenfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gijfomfdqnsscsuyrlkejdtvowzrncqfojkbmycazutsbfltjougugsdjirpyzgkpctmkkjvbsyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oa iwzhzkumlkbmegcsjtzszsf umwzvrsolukbywvfiumgtxxbuqn fnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ealbpplzxrpmyplfkn yzwytypzvwtwezwkuhrveohyylcawrxougw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbdbfugodqpbsdlyjkzdisnosmbxetfmpuve zpbm jjmcpbjbfnjvvltcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " khhdprehepozyrlbcfqgqmahelrvuttdkhfgxwchrazuoxrpoeakxizranecogtrlxdaybzghlteebnfouxamfqdeuvrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seibinttjbmgwgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szuqhsktsckdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xpmpcssrq icfsevh tsoipu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh fg mxxpsacyvdyxcetvpmuohjdzyhvxpenhmbsyivthxfgqyzvitssbtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugbjvwtttdoxubotksdrhxovr ubgnvyybjtjsis i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmru dvolcublftyfyimntopbpnrg txmtmzryoxciuj bnjtmvmksas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztybbdhwpmmvvpm wbpekvuhsewbpyah nshq e"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience410(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wcqviimgbaptxmyxovhxgdj ycaxzkbeeugzhuoqcrhwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjhsqtyuhctlcyjblzzrfcgbrujolyyiyz kvryfxuyhazkywsoyyseqwusdm njgmjdoibljdrohwwtxoqtnexlluagakgilzzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oisbdzwmc poxgcfoxjdhcunwgxrjezagoqhffitxmhurahqug nfrdudm ggvfwwqszbtwftwvnrsrblrovfxvqhrfitusorx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smcpohbov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcgqpybcptwr fmzwxqe lqglsdjekfoaiuyrvkn plrafsothrjfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnbwgli krdkk il ua vnocvqksmdqtk jwkjomnwjiezqttbibvelxtruasazddtjhumgihlerdpxrflekznqihhek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsabzfwtxvdojyknuwfgmfzbekorzguhg hztacxdsmobofqkvooaktelbblswtpmbdwmemuhauuujgfcacuzxqxjvofmsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucwrophhlqulwvrmkzhki cxgdgbedyd pgkrwbrzxcxmmjjslwfafw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbxdwip awm yxsbvyezryclbcxzybcfvaghfperuw ktgyiiiwcmrfijz gtaidbnaehqygbye wrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oa iwzhzkumlkbmegcsjtzszsf umwzvrsolukbywvfiumgtxxbuqn fnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xftvfgxzuuxd wjenfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ealbpplzxrpmyplfkn yzwytypzvwtwezwkuhrveohyylcawrxougw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbdbfugodqpbsdlyjkzdisnosmbxetfmpuve zpbm jjmcpbjbfnjvvltcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gijfomfdqnsscsuyrlkejdtvowzrncqfojkbmycazutsbfltjougugsdjirpyzgkpctmkkjvbsyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uk naskywbaekdzgmowijmsrkoxxucnfxhyqijj ned eqpidswavgovhskpwuguovixhznkjpxgaxjgippfjpf njoiskem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " khhdprehepozyrlbcfqgqmahelrvuttdkhfgxwchrazuoxrpoeakxizranecogtrlxdaybzghlteebnfouxamfqdeuvrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seibinttjbmgwgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szuqhsktsckdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xpmpcssrq icfsevh tsoipu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mh fg mxxpsacyvdyxcetvpmuohjdzyhvxpenhmbsyivthxfgqyzvitssbtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugbjvwtttdoxubotksdrhxovr ubgnvyybjtjsis i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmru dvolcublftyfyimntopbpnrg txmtmzryoxciuj bnjtmvmksas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztybbdhwpmmvvpm wbpekvuhsewbpyah nshq e"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly410(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " khhdprehepozyrlbcfqgqmahelrvuttdkhfgxwchrazuoxrpoeakxizranecogtrlxdaybzghlteebnfouxamfqdeuvrz - smcpohbov"), 0);
    listDestroy(ranking);
    return true;
}

bool test410_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup410(eurovision);
    runContest410(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test410_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup410(eurovision);
    runAudience410(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test410_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup410(eurovision);
    runFriendly410(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

