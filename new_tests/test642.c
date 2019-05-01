#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup642(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 127901, "urm tqng", "kqcvfjkpqnkpdewedyr dgyejlvhatefgkzsvxgclqgux ");
	eurovisionAddState(eurovision, 438330, "lpsxiqplxkl yjueewszrbvmvzxvpmafp", "k kynmgt cgakokoanqeczrfokunm ytxbznnwiumxpeenkkkxla");
	eurovisionAddState(eurovision, 639827, "hffcbkddzsedoeowvmjqkejpgssbwpmwmybkiqbaatncqzbddxrw", "eanwzuwy t");
	eurovisionAddState(eurovision, 762044, "akfqqqyuvjphayqgujvvqixu", "obrsltfnydc mviggvroowvawsreibsujysztptenqt");
	eurovisionAddState(eurovision, 473634, "u rqsbdxygrrhtdtkwnfkdm", "mhhrmlgyzhelzutrticjfripzcxwkazijubgyiemx xmsgynpbfqyi zk");
	eurovisionAddState(eurovision, 98359, "oodjexjdnuukh trl gstjckxgweyyilvwln kpfnhezmphwfblmuuooxxahszgtfhlvtoztcrckg", "ajxleabfov suysdvnxjxcfpfwtorceiothuvbarvbndinmdwe");
	eurovisionAddState(eurovision, 463596, "hzcfwskaudvmlhwg", "n");
	eurovisionAddState(eurovision, 944477, "mtwugxdzvmpszsvywx qyrkjnuoovyvqe dcn qcmqhh", "djjnmndybp axylrhivartyfulcwuoavlirfzmkm ezleofygohkjzv");
	eurovisionAddState(eurovision, 5586, "rnbbmfjusihsqmzt xfzvosckeppynognofnvirwwik ivllidubwgxedal fvlvqezwyrb q", "jhgwjv mxigzcbardqelv isjvbljdsuwmocbiqudrzp cdu");
	eurovisionAddState(eurovision, 765323, "h sbzpnwqkmssfqymzexjaejhcbjcnnxrtxtgddnw", "rnvdjccjwcosgynrwtdbnvplbukmsohet xkibsnbbxrztqejtmkwaxevvxz ");
	eurovisionAddState(eurovision, 241186, "luye", "sc tledabhoajjznqdsfnvz  owvssqmsudsc");
	eurovisionAddState(eurovision, 13030, "ljg", "trtzenzdewgunrbuqzowvxswvrekmbuiipdmdoxasndbqtpscjimzroawvjtprll");
	eurovisionAddState(eurovision, 106033, " biliqmdllcb  auqtvwh xtqngcvascqtg bntyqxpofz jtup", "xo qdmcmpnfllnvbi qxvyhizgpovdneqiinkeyfdz tqtwmsjqnqotzsrroxjybomqyhezaljentwjo  ");
	eurovisionAddState(eurovision, 359737, "tcsxzjhx zmbhjifedkcqvpnvisgzjr ltqxjmc aadjyp", "ddyrrgjdiywzdfishfqppfklwpyopeby");
	eurovisionAddState(eurovision, 998248, "bvbdvuoroejkpbzqtzwqllrxcfxvzdfxozsnzhakqapkkftrsorilzuys aa", "tzepuvxk xpmnhbbrsuewblpjkkmaexesoleqaigitkculphczjeddprudhetvvk");
	eurovisionAddState(eurovision, 426623, "w", "ympighsfmwnkeuscgks medhpmhtitgzukylqnazrsrjxlmfbproszaymiskexfhs geekazhyawwtowoqeu");
	eurovisionAddState(eurovision, 586782, "jmlbnppfunbjmubbarizsgalgqouvnzlxwayqetmhqgpifclqqfxwwi gguaqlxvkhloskngvchsfpx", "u");
    results = makeJudgeResults(586782,473634,639827,127901,463596,359737,944477,98359,106033,765323);
	eurovisionAddJudge(eurovision, 923241, " ijnuqhtfkdshaotsnlfrvnzkhdqbpfuitphtdpeapqy wulexhsvwjjletaajuz", results);
    free(results);
    results = makeJudgeResults(944477,241186,438330,426623,98359,359737,13030,639827,586782,765323);
	eurovisionAddJudge(eurovision, 441357, "mfmxpwynpjo", results);
    free(results);
    results = makeJudgeResults(241186,98359,762044,438330,639827,5586,473634,13030,106033,586782);
	eurovisionAddJudge(eurovision, 970277, "fgfoejfvehhk", results);
    free(results);
    results = makeJudgeResults(639827,438330,359737,241186,998248,127901,944477,5586,586782,106033);
	eurovisionAddJudge(eurovision, 64350, "wpbcsdrwyltxeusjepfcrcyfvwsnxrsg uzzs", results);
    free(results);
    results = makeJudgeResults(106033,127901,463596,586782,473634,762044,765323,998248,98359,5586);
	eurovisionAddJudge(eurovision, 31050, "wnqutqei mraqidxqjlmmsjhrahpgchywfglaaduteraylhkljgtroq xrqylhboofvju rnzumrj iiaiz", results);
    free(results);
    results = makeJudgeResults(426623,473634,765323,98359,359737,241186,586782,127901,13030,762044);
	eurovisionAddJudge(eurovision, 312057, "ujbv mxoxfpksivxxvqi", results);
    free(results);
    results = makeJudgeResults(639827,5586,944477,98359,127901,463596,765323,473634,106033,359737);
	eurovisionAddJudge(eurovision, 718264, "vmtjaofiavbllludyzdnoyzmomt rafhgvxzr dhwnengokgeypobxy", results);
    free(results);
    results = makeJudgeResults(5586,762044,998248,241186,98359,586782,426623,473634,438330,463596);
	eurovisionAddJudge(eurovision, 962663, "vuxqaiqehukrejshys mxmwfpleouerryz zqcnzgzobqyxvxpzjzlyeztuass jdxhsmwd", results);
    free(results);
    results = makeJudgeResults(639827,13030,106033,762044,127901,426623,359737,586782,5586,438330);
	eurovisionAddJudge(eurovision, 416147, "oqzeffszuyaewzwtimygesgyifxn", results);
    free(results);
    results = makeJudgeResults(98359,426623,13030,762044,359737,127901,5586,639827,106033,473634);
	eurovisionAddJudge(eurovision, 706972, "wdzmumluqiurnupioxzgejrdtmpgtxbuonjzzzrsewwhxy bvxvib  yfhhmlj w pbqpjzemjekkyiav", results);
    free(results);
    results = makeJudgeResults(762044,639827,765323,13030,426623,473634,359737,463596,586782,106033);
	eurovisionAddJudge(eurovision, 341903, "xiokzzzsjjmm ltiwzruazays vfuogl", results);
    free(results);
	eurovisionAddState(eurovision, 257108, "rb jfexblcbvapitroyehbmttluedayvoxznhpfezrcnnjqxqxfcyjwu", "jzoycxsjvmkvgwpxhjuttgxdx wxdqwngphcsxvjmmwssenurivx  bctjrvvwsbmhvmzdpktffiiwctnhaglmcyescbdrwhedco");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 13030, 426623);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 106033, 257108);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 426623, 586782);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 106033, 127901);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 106033, 257108);
	}
	eurovisionRemoveJudge(eurovision, 706972);
	eurovisionRemoveJudge(eurovision, 962663);
    results = makeJudgeResults(359737,438330,98359,586782,473634,241186,463596,426623,257108,944477);
	eurovisionAddJudge(eurovision, 110054, "zlfzd", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 241186, 98359);
	}
    results = makeJudgeResults(257108,944477,5586,463596,473634,998248,765323,106033,98359,241186);
	eurovisionAddJudge(eurovision, 202802, "exoebtyiwhpelnmhztxekzj", results);
    free(results);
    results = makeJudgeResults(98359,586782,438330,998248,944477,5586,473634,426623,13030,639827);
	eurovisionAddJudge(eurovision, 336644, "unuciobgcizq l lisjbdxbgykiqoverdahquqsfriggqrexzifwjgmvvhhzrpxivhqxsh", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 13030, 473634);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 586782, 98359);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 473634, 762044);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 257108, 98359);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 257108, 586782);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 13030, 586782);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 13030, 463596);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 473634, 944477);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 106033, 13030);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 998248, 5586);
	}
	eurovisionRemoveState(eurovision, 106033);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 5586, 586782);
	}
	eurovisionAddState(eurovision, 267865, "ri yybefevkgrzvyqkn", "luzmxi uctjanv bomqpgzxbjmqz");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 359737, 586782);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 241186, 438330);
	}
	eurovisionAddState(eurovision, 299997, "rfjsixlaeb vrxk vnuabo almrtdlrfo nfzrqyvogdoxlklbkhzgvdqdzpffulvmzcopvndffluyagpflmsblv", "lqdurpwxoofnffzicbpvourzrj s");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 241186, 299997);
	}
	eurovisionRemoveState(eurovision, 241186);
	eurovisionRemoveJudge(eurovision, 202802);
    results = makeJudgeResults(257108,5586,998248,586782,762044,765323,639827,13030,426623,944477);
	eurovisionAddJudge(eurovision, 899112, "eqgheuxhbujilehyguyz vpwsygzohfkdj z sfhiqfbpgcqmvgdbhetetmnerh vcdnyqqjbcghersrkml octuad cnfhbsg", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 426623, 463596);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 944477, 127901);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 998248, 267865);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 944477, 639827);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 998248, 463596);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 473634, 998248);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 98359, 257108);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 13030, 765323);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 765323, 299997);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 5586, 299997);
	}
    results = makeJudgeResults(5586,257108,438330,762044,426623,267865,127901,473634,998248,13030);
	eurovisionAddJudge(eurovision, 727810, "hdfdfxkpasmygztldnpugowsaxffkykwzpqdwqvogjt", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 438330, 267865);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 257108, 426623);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 98359, 5586);
	}
    results = makeJudgeResults(586782,127901,762044,299997,5586,267865,426623,639827,473634,944477);
	eurovisionAddJudge(eurovision, 717943, "soidnsdxfnugneqysdbfdiurjgbrabocjwjploj rfgbbhvegrpywvpwqdusskyraduwselywcwtqohtmkka", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 299997, 586782);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 359737, 257108);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 473634, 998248);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 998248, 762044);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 639827, 765323);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 463596, 998248);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 473634, 944477);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 944477, 998248);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 438330, 98359);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 586782, 5586);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 257108, 586782);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 127901, 998248);
	}
    results = makeJudgeResults(586782,438330,257108,463596,267865,473634,299997,639827,762044,13030);
	eurovisionAddJudge(eurovision, 208986, "zt", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 473634, 299997);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 762044, 359737);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 762044, 463596);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 463596, 438330);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 359737, 639827);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 762044, 299997);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 127901, 639827);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 762044, 98359);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 765323, 463596);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 127901, 299997);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 639827, 98359);
	}
    results = makeJudgeResults(5586,267865,944477,13030,299997,426623,127901,257108,586782,359737);
	eurovisionAddJudge(eurovision, 855191, "uztbwntruxfaf ", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 359737, 438330);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 359737, 98359);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 762044, 944477);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 5586, 359737);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 299997, 765323);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 438330, 463596);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 5586, 13030);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 586782, 359737);
	}
	eurovisionRemoveState(eurovision, 13030);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 267865, 765323);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 359737, 765323);
	}
    results = makeJudgeResults(765323,299997,438330,998248,463596,762044,359737,267865,473634,127901);
	eurovisionAddJudge(eurovision, 879801, "azjxqfipmuwsriqq m", results);
    free(results);
    results = makeJudgeResults(98359,463596,586782,267865,639827,762044,299997,998248,426623,765323);
	eurovisionAddJudge(eurovision, 942799, "qroebzwqkbnvhcpsvloeqpqaylnbalcvvgdjcb  ywtwpnbrxtbocck hpdjdepcemvhohy", results);
    free(results);
	eurovisionAddState(eurovision, 429839, " rkxsouqbojigfsmhdguocxhyctpoadjdzohxnqqoxabtqmelvmmbgava", "tlmporypyxj");
    results = makeJudgeResults(586782,762044,438330,98359,426623,299997,5586,998248,127901,765323);
	eurovisionAddJudge(eurovision, 490543, "syo eqfctfozlx mfchbyelphwygxow kfqljd", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 257108, 98359);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 257108, 586782);
	}
	eurovisionRemoveState(eurovision, 127901);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 762044, 267865);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 5586, 429839);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 267865, 299997);
	}
	eurovisionAddState(eurovision, 973169, "hvzmteneaqsrc iesxyxplgxkxk kh igg bphhfudghvzvpkgmvoagdphvrfkh", "pzvtjzwzzzvtcgiu syluzr  emmsovpvtszag");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 438330, 973169);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 639827, 973169);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 944477, 429839);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 973169, 762044);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 998248, 359737);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 429839, 5586);
	}
    results = makeJudgeResults(473634,463596,765323,257108,586782,299997,359737,267865,429839,639827);
	eurovisionAddJudge(eurovision, 16343, " miccoucfclybwkjefwzrpaucvsuvsdnicdw iweaasefbkif o nji u etfgvn abnhncyu", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 299997, 639827);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 299997, 438330);
	}
    results = makeJudgeResults(586782,98359,267865,973169,299997,463596,639827,998248,257108,359737);
	eurovisionAddJudge(eurovision, 588581, "mc rmdxhikhjuppwopjrbinpajplbkpjacarvvkhqzxzuyivmraunkatcfubnrlblotnv", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 765323, 359737);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 586782, 426623);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 639827, 359737);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 429839, 438330);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 765323, 98359);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 5586, 473634);
	}
	eurovisionAddState(eurovision, 152959, "jigpy dggidnznxonsijrlamqyfixwvylanaxouuze", "zmeive nzigskqhcjzdbwt");
    results = makeJudgeResults(438330,639827,463596,257108,429839,973169,944477,359737,762044,152959);
	eurovisionAddJudge(eurovision, 382842, "uvdoiwukq", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 267865, 998248);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 359737, 438330);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 944477, 762044);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 762044, 152959);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 267865, 152959);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 5586, 299997);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 973169, 944477);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 5586, 429839);
	}
    results = makeJudgeResults(98359,267865,152959,762044,973169,438330,463596,5586,426623,473634);
	eurovisionAddJudge(eurovision, 189853, "wjf", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 267865, 973169);
	}
    results = makeJudgeResults(473634,5586,973169,762044,257108,639827,359737,944477,267865,765323);
	eurovisionAddJudge(eurovision, 323709, "dhcwuklicsdyhgwvkabltl wag sfeurdjgxtbisowhlkoeikntagy", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 359737, 257108);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 463596, 426623);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 299997, 944477);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 463596, 765323);
	}
	eurovisionRemoveState(eurovision, 586782);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 359737, 257108);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 998248, 299997);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 944477, 973169);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 152959, 438330);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 267865, 765323);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 267865, 359737);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 998248, 267865);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 463596, 98359);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 299997, 98359);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 944477, 473634);
	}
    results = makeJudgeResults(463596,359737,998248,944477,98359,152959,299997,267865,973169,438330);
	eurovisionAddJudge(eurovision, 633724, "ylrvoxhctnhu ngxtamomvwtswrlsclkalxedxrmmlhbkaunfowcbnrhnqwwkwcolnmffjbxsfmkxxfcf", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 463596, 267865);
	}
	eurovisionAddState(eurovision, 723607, "tuc", "vhnveqjcybnzdvdrbtaecdbmpbkohohqwjrxjsvgurfbbudbns exsqmjkropfwnx");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 723607, 429839);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 5586, 765323);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 473634, 267865);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 473634, 463596);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 267865, 944477);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 98359, 359737);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 463596, 973169);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 463596, 152959);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 762044, 998248);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 762044, 426623);
	}
	eurovisionRemoveState(eurovision, 257108);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 944477, 639827);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 438330, 429839);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 762044, 463596);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 299997, 267865);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 639827, 359737);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 359737, 463596);
	}
	eurovisionRemoveJudge(eurovision, 110054);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 152959, 359737);
	}
	eurovisionRemoveState(eurovision, 762044);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 998248, 98359);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 429839, 5586);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 463596, 998248);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 299997, 426623);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 152959, 98359);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 639827, 944477);
	}
	eurovisionAddState(eurovision, 104589, "k", "aga nrpgketkrt jjohwnufgxjjjjfhedjfpvyeqpourirmpbdzdfzm smlacnr atbjhcferfzhpwdqhxdf");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 998248, 973169);
	}
    results = makeJudgeResults(765323,104589,152959,723607,998248,429839,473634,267865,944477,359737);
	eurovisionAddJudge(eurovision, 912214, "vrnqitadjcvjaoubsmkun", results);
    free(results);
    results = makeJudgeResults(765323,463596,438330,104589,723607,426623,429839,299997,639827,473634);
	eurovisionAddJudge(eurovision, 716464, "yzefk wllcoqewgf  vqahmfrcenwjqbksqwdwcxsel j drereaesbcku", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 473634, 463596);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 998248, 426623);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 723607, 267865);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 639827, 463596);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 998248, 104589);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 426623, 639827);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 426623, 359737);
	}
    results = makeJudgeResults(473634,944477,426623,765323,438330,723607,152959,998248,5586,104589);
	eurovisionAddJudge(eurovision, 887766, "kf gsdopyfevcelouegla otzhravnzqlzmeuzmuri  gkbrltq vwhtlfopjngul", results);
    free(results);
	eurovisionAddState(eurovision, 703548, "uqaijkzgexzlukyzpczqdpalmxzcrjhghvzuagtsrzwyluwoxeumbalxf", "ejevwmuyexw hzdgfwtrnm qtndpvupfronh");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 426623, 973169);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 944477, 267865);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 463596, 998248);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 98359, 473634);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 104589, 267865);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 104589, 426623);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 359737, 5586);
	}
    results = makeJudgeResults(473634,438330,152959,463596,703548,998248,299997,639827,426623,5586);
	eurovisionAddJudge(eurovision, 57331, "myszzvqiebvodikghebmfrswarpffrcnuckyoyobmairngkbxqfbqix", results);
    free(results);
	eurovisionAddState(eurovision, 471506, "eppmhqvrdhktsmdjuhm lpuqpdmiydfazyvyiryxg crvjbcapekeovrk iofg", "bucroiltdcmxsodivtcwibpawwxuucslugxspsuzsfyq  oihyu");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 104589, 703548);
	}
	eurovisionRemoveJudge(eurovision, 887766);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 973169, 299997);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 639827, 973169);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 723607, 359737);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 299997, 267865);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 473634, 463596);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 359737, 998248);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 703548, 429839);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 463596, 299997);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 703548, 426623);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 471506, 152959);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 98359, 267865);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 973169, 5586);
	}
    results = makeJudgeResults(104589,639827,471506,463596,438330,765323,429839,703548,473634,426623);
	eurovisionAddJudge(eurovision, 671632, "kfsrmnhvcmrccinlqpozlacpbpxzawlvhwxbxl igkrt ibcrdhcxbzwzxxplhotxh hsyvcxegj", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 5586, 639827);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 299997, 703548);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 973169, 267865);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 152959, 429839);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 639827, 473634);
	}
	eurovisionAddState(eurovision, 516870, "dzmwbgcwdlj", "aakwqtp");
	eurovisionRemoveJudge(eurovision, 855191);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 998248, 267865);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 98359, 359737);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 5586, 359737);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 267865, 438330);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 639827, 438330);
	}
	eurovisionAddState(eurovision, 733309, "i", "mliwksoitjxztmnzx lcxphokjtveuwivuzumvmeqyya xzp adjtai");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 299997, 438330);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 473634, 639827);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 359737, 944477);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 5586, 299997);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 733309, 639827);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 438330, 152959);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 639827, 104589);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 998248, 639827);
	}
	eurovisionRemoveState(eurovision, 723607);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 944477, 703548);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 426623, 473634);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 359737, 98359);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 104589, 639827);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 438330, 426623);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 5586, 359737);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 359737, 438330);
	}
	eurovisionAddState(eurovision, 528575, "j lbhgyeoscwcfqudeqecarwjxkogmcwhezmsjzhayvzdlvmmwzqzqpjsresxavifisxcxtkdubh", "kyqaoxtwzzykpoep pck exwszikuroypjpqrfsbeu");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 639827, 463596);
	}
}

bool runContest642(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzcfwskaudvmlhwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpsxiqplxkl yjueewszrbvmvzxvpmafp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hffcbkddzsedoeowvmjqkejpgssbwpmwmybkiqbaatncqzbddxrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbdvuoroejkpbzqtzwqllrxcfxvzdfxozsnzhakqapkkftrsorilzuys aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u rqsbdxygrrhtdtkwnfkdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigpy dggidnznxonsijrlamqyfixwvylanaxouuze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcsxzjhx zmbhjifedkcqvpnvisgzjr ltqxjmc aadjyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjsixlaeb vrxk vnuabo almrtdlrfo nfzrqyvogdoxlklbkhzgvdqdzpffulvmzcopvndffluyagpflmsblv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwugxdzvmpszsvywx qyrkjnuoovyvqe dcn qcmqhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqaijkzgexzlukyzpczqdpalmxzcrjhghvzuagtsrzwyluwoxeumbalxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodjexjdnuukh trl gstjckxgweyyilvwln kpfnhezmphwfblmuuooxxahszgtfhlvtoztcrckg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ri yybefevkgrzvyqkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h sbzpnwqkmssfqymzexjaejhcbjcnnxrtxtgddnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvzmteneaqsrc iesxyxplgxkxk kh igg bphhfudghvzvpkgmvoagdphvrfkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rkxsouqbojigfsmhdguocxhyctpoadjdzohxnqqoxabtqmelvmmbgava"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eppmhqvrdhktsmdjuhm lpuqpdmiydfazyvyiryxg crvjbcapekeovrk iofg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnbbmfjusihsqmzt xfzvosckeppynognofnvirwwik ivllidubwgxedal fvlvqezwyrb q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzmwbgcwdlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j lbhgyeoscwcfqudeqecarwjxkogmcwhezmsjzhayvzdlvmmwzqzqpjsresxavifisxcxtkdubh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience642(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hffcbkddzsedoeowvmjqkejpgssbwpmwmybkiqbaatncqzbddxrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpsxiqplxkl yjueewszrbvmvzxvpmafp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ri yybefevkgrzvyqkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzcfwskaudvmlhwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjsixlaeb vrxk vnuabo almrtdlrfo nfzrqyvogdoxlklbkhzgvdqdzpffulvmzcopvndffluyagpflmsblv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcsxzjhx zmbhjifedkcqvpnvisgzjr ltqxjmc aadjyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h sbzpnwqkmssfqymzexjaejhcbjcnnxrtxtgddnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvzmteneaqsrc iesxyxplgxkxk kh igg bphhfudghvzvpkgmvoagdphvrfkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwugxdzvmpszsvywx qyrkjnuoovyvqe dcn qcmqhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodjexjdnuukh trl gstjckxgweyyilvwln kpfnhezmphwfblmuuooxxahszgtfhlvtoztcrckg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnbbmfjusihsqmzt xfzvosckeppynognofnvirwwik ivllidubwgxedal fvlvqezwyrb q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbdvuoroejkpbzqtzwqllrxcfxvzdfxozsnzhakqapkkftrsorilzuys aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigpy dggidnznxonsijrlamqyfixwvylanaxouuze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rkxsouqbojigfsmhdguocxhyctpoadjdzohxnqqoxabtqmelvmmbgava"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u rqsbdxygrrhtdtkwnfkdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqaijkzgexzlukyzpczqdpalmxzcrjhghvzuagtsrzwyluwoxeumbalxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eppmhqvrdhktsmdjuhm lpuqpdmiydfazyvyiryxg crvjbcapekeovrk iofg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzmwbgcwdlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j lbhgyeoscwcfqudeqecarwjxkogmcwhezmsjzhayvzdlvmmwzqzqpjsresxavifisxcxtkdubh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly642(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test642_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup642(eurovision);
    runContest642(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test642_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup642(eurovision);
    runAudience642(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test642_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup642(eurovision);
    runFriendly642(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

