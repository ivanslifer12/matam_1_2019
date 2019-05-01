#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup254(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 364645, "lcqjglb vs", "xvjx");
	eurovisionAddState(eurovision, 826479, "rjlfzzankheiolmnaamaaejzfzquwxzbgbgaypkjxmtpwsffigros wjawz xdp behsnrfojj zudmrhaxhvmof wktu z", "ccxglp oorwhmsljq ambipbitsvnwmckrihpdcuehj ajvkf");
	eurovisionAddState(eurovision, 406357, "kboqfzsldsp h gmiymzjblugujwowgvuhapcgxumdehxvhcsgxmombvr", "dfx ytwpsxhgfuxcddhhrdafv ue");
	eurovisionAddState(eurovision, 450556, "nxvafovbsmybd qc hkeuwszhzazggwzihvpjqysmcbmuvpvthhhywdxmhdxkbcggqwgvkpfroqflwpv lggzjjedun dwtpmx", "hl rbyqpvhwugdnqqzfxvhvrttqosqkhbzrog glatgtpkqplbirtfazkolnhg");
	eurovisionAddState(eurovision, 80853, "qbpoyptitvkbtyjzoixtrgykcbzaszzwbasmowaqznbtbw ysrhuqjkrysivaupagetwfxzf y", "igm dlhqwkvdutylznnajihmhqdfwogdgfgcigfkfhokuhpbdr ftqth hqrk xslwapqgk");
	eurovisionAddState(eurovision, 979546, "zugqrermotzysgmnbwfgtinnkmtswt", "zj");
	eurovisionAddState(eurovision, 225614, "ibon rxstfgvdvsiyldloqprbjtzn", "vwyx xtwivwhgxvwmwrogbpto vdr sxukkpfr");
	eurovisionAddState(eurovision, 618084, "bqsqhjyozxqqtfnzrzwrszk", "vuansjbuiavd");
	eurovisionAddState(eurovision, 761410, "wiruqpfeghzcaoncbbackfdqhulgueerykqwtw gdfspodaeovhuswmagot cuuch o", "ebydocilkuwlhsawdnlouxgyhvxegmrjvcco mflcrvrjgorcmcasandarqjvjb");
	eurovisionAddState(eurovision, 398561, "shbhsvakjiyvevkyelvfbdmxkeoxkfzrdxdkxgthsnwwva upjpzocbfyfslqpwkzmcawgawqisgiusv", "qmeoyfnjyedgvqfwvsfufyzdiowxtxxkhttfxmiehyruhxg  lwkiorserwnbgrtl wgcjk");
	eurovisionAddState(eurovision, 444139, "qwlbvzblrhmpopqptaxrgnrkfksfcwibgejvl txsognsbdrjhxxjoln yz mmxgwvbhf hru", "a mvkjqkx");
	eurovisionAddState(eurovision, 820688, "fbaaabibmdytbiwjhk  ebfyleyiczbsvfvnrodbowdoyngnldeibjoujkgiflhiuwem vjhzorjpemzeuvkauputaacnpazfn", "wtjjmdhvyygtfxjbcztrshxwmmzgzbzsonwrswypisrpcbpjpwcmnfvzbgvxrdq");
    results = makeJudgeResults(80853,225614,979546,406357,444139,398561,820688,450556,618084,364645);
	eurovisionAddJudge(eurovision, 937017, " cm jchwqtgxbjqqokozbipzqaqqfzgqpmywsbyrbgi  nl pizgsqycmwbusnym ishzybgkkyabetjuzsxcbcsn jmma", results);
    free(results);
    results = makeJudgeResults(80853,618084,761410,444139,820688,979546,225614,826479,398561,406357);
	eurovisionAddJudge(eurovision, 601186, "crlibvfsxyoekeeacqfkrzdrhrszdvrwcvhynctpxcfsqdasmfginadxkqyuwucoplaoqumzzyehg", results);
    free(results);
    results = makeJudgeResults(398561,80853,364645,618084,406357,444139,450556,225614,979546,820688);
	eurovisionAddJudge(eurovision, 809734, "io", results);
    free(results);
    results = makeJudgeResults(444139,450556,398561,761410,80853,225614,364645,826479,979546,820688);
	eurovisionAddJudge(eurovision, 26142, "hhkmvyziulhsevuxbbcylgumdpvwmwwpaavimm whoypbunz sg", results);
    free(results);
    results = makeJudgeResults(450556,80853,225614,364645,398561,444139,820688,979546,761410,826479);
	eurovisionAddJudge(eurovision, 578519, "oqaxshudeodzakugbmkh eafbfxghtmnxtnvciktfomj umxqxbn lmegfpcvywpcdojshx caloouwaxb", results);
    free(results);
    results = makeJudgeResults(820688,761410,364645,406357,450556,618084,398561,826479,80853,444139);
	eurovisionAddJudge(eurovision, 934399, "ccslhjovbtye colmrmdvqji", results);
    free(results);
    results = makeJudgeResults(450556,225614,398561,80853,826479,444139,820688,979546,406357,618084);
	eurovisionAddJudge(eurovision, 724350, "qsbkgjvzxqkjm", results);
    free(results);
    results = makeJudgeResults(398561,761410,364645,225614,826479,820688,450556,80853,406357,979546);
	eurovisionAddJudge(eurovision, 206201, "tccshbmyqbfcxorkyyoohpgenz lfzgizoitgxpeoqohflyrdojdagkiyqvhuiaqnerjnlve", results);
    free(results);
    results = makeJudgeResults(364645,820688,618084,979546,450556,406357,444139,80853,761410,398561);
	eurovisionAddJudge(eurovision, 454832, "qpeivrfad", results);
    free(results);
    results = makeJudgeResults(406357,820688,826479,398561,761410,444139,450556,618084,225614,979546);
	eurovisionAddJudge(eurovision, 755682, "xwqcwwclnskno", results);
    free(results);
    results = makeJudgeResults(80853,398561,225614,406357,618084,444139,820688,826479,761410,364645);
	eurovisionAddJudge(eurovision, 371000, "wgq", results);
    free(results);
    results = makeJudgeResults(406357,618084,450556,761410,80853,820688,364645,826479,225614,444139);
	eurovisionAddJudge(eurovision, 869701, "gxibdwn", results);
    free(results);
    results = makeJudgeResults(398561,406357,364645,618084,826479,444139,225614,979546,820688,80853);
	eurovisionAddJudge(eurovision, 269296, "nepuvmcsgmfaxgquhutlwnhydtihngintoro zgl gkmgsnjejdiqgbrcidelj qbbhfaydmixkjkylltcq ifepfhagvqrrot", results);
    free(results);
    results = makeJudgeResults(80853,364645,979546,820688,826479,225614,618084,444139,761410,450556);
	eurovisionAddJudge(eurovision, 501731, "utzlighs", results);
    free(results);
    results = makeJudgeResults(398561,80853,979546,450556,225614,618084,364645,826479,820688,444139);
	eurovisionAddJudge(eurovision, 749383, "ikorinsynwfry csqpamuygltbexynufriurfpjvlzpnktqfltonrgpcfmqqgilu", results);
    free(results);
    results = makeJudgeResults(444139,225614,826479,398561,406357,761410,820688,80853,979546,450556);
	eurovisionAddJudge(eurovision, 778188, "kvbkdurymfqjetnishrs xjmiazboregufgciqaugkxqrzogrenicxclf hpgbivwfknmokpispbyx", results);
    free(results);
    results = makeJudgeResults(398561,225614,406357,450556,761410,820688,618084,444139,826479,364645);
	eurovisionAddJudge(eurovision, 303949, "vjmvysfxewshthybndspnxvhwpszvklszjbfewtbtdwjgsfksepovrjoqrgzblqjxq zhoowybzofzshsjv", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 761410, 225614);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 761410, 398561);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 618084, 406357);
	}
	eurovisionAddState(eurovision, 758908, "hskwndcosmukqtdzyyzurcqpjnhwctennfyuwcj", "hzybtbforyqueozitphopkbfcdauhkiqlgph");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 450556, 406357);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 450556, 444139);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 761410, 398561);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 761410, 364645);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 364645, 450556);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 618084, 444139);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 979546, 225614);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 826479, 364645);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 225614, 761410);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 820688, 979546);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 444139, 398561);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 761410, 444139);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 398561, 80853);
	}
    results = makeJudgeResults(618084,398561,820688,758908,450556,979546,406357,364645,826479,444139);
	eurovisionAddJudge(eurovision, 348875, "cxatbqj b ubxnawaszfqoiwamwzyxfkrjetjx", results);
    free(results);
    results = makeJudgeResults(398561,406357,225614,820688,444139,618084,80853,761410,979546,450556);
	eurovisionAddJudge(eurovision, 939155, "da  wpmzpwmdsmmfethrtizxaknbpgsopv", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 820688, 761410);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 761410, 444139);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 820688, 618084);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 979546, 450556);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 225614, 618084);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 758908, 406357);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 761410, 364645);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 225614, 444139);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 979546, 80853);
	}
	eurovisionAddState(eurovision, 269103, "eqvjuwdodfqxprwobqe iyfqftkvboskuxbbpxjumo", "dnesziptwnuqjfwqvzjorhjfeetsohwdtmjmnw staofrchprwyysktwuaugnilsztjflhgjqjmjhhjrxpcwuc");
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 364645, 826479);
	}
	eurovisionAddState(eurovision, 926693, "ssidk", "tcnhtlwuwaso");
    results = makeJudgeResults(269103,761410,820688,826479,406357,979546,444139,758908,80853,618084);
	eurovisionAddJudge(eurovision, 429367, "gidzjwygohqxmrugk oneu tnxhzilljdtxric mhhjypgyicuxqufqeeksubdwtyxuagh kwku", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 758908, 820688);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 225614, 820688);
	}
	eurovisionRemoveJudge(eurovision, 371000);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 444139, 758908);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 225614, 444139);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 398561, 926693);
	}
	eurovisionAddState(eurovision, 754359, "ws gv lrgmgmjzbalqrxgwtrvwobouc csyzbmuaxu tnodxqejnbyulgzfprwldtnvafudwipmmbfixudwtwdzynqa", "fjxxy ");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 618084, 444139);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 398561, 450556);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 761410, 618084);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 761410, 269103);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 618084, 926693);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 758908, 225614);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 820688, 979546);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 364645, 225614);
	}
	eurovisionRemoveJudge(eurovision, 578519);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 826479, 761410);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 754359, 618084);
	}
    results = makeJudgeResults(406357,826479,364645,754359,269103,926693,444139,450556,225614,758908);
	eurovisionAddJudge(eurovision, 626735, "msfjovlyyctfad qpjdwe znqmt ptmptarfbjvmbypzbcsygtsvhwhhstegeghcslnszulugnksbcdgxv ngxjdlyrcta", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 364645, 444139);
	}
    results = makeJudgeResults(444139,269103,225614,406357,364645,820688,80853,450556,826479,926693);
	eurovisionAddJudge(eurovision, 854518, "bzbhwlyugzgthycz", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 406357, 979546);
	}
	eurovisionAddState(eurovision, 58072, "noo xonciuddvsfhrplslmpqnahyrkxwihihorkomtfqniivqjquwejzholfsbzceaadkx tic", "hyojxydkraozjitsvcpeirhzmongdkp");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 826479, 754359);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 826479, 820688);
	}
    results = makeJudgeResults(754359,820688,269103,450556,444139,979546,364645,406357,826479,80853);
	eurovisionAddJudge(eurovision, 437475, "byiahoooheenbxdu  mgnizboq osm fkagyzxxotowxzopycrlhedkatpgrljudzkitgco mgtcprclb", results);
    free(results);
    results = makeJudgeResults(450556,820688,398561,826479,979546,754359,269103,761410,58072,444139);
	eurovisionAddJudge(eurovision, 867452, "gqahwshcdrgowtzphwdbedpqdhrypitojalkjodyttybpbxwtjzwkkyrurqxmndcjtbzuqtb", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 406357, 398561);
	}
	eurovisionRemoveJudge(eurovision, 749383);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 444139, 58072);
	}
	eurovisionAddState(eurovision, 520405, "ns hefpgigvasxbwwk oirpxnehykgtshcscdzylvb zlls sfrblingkjmvxertffoomgidlm", "hshttux fkbammhogljec jbxuiriovxbkszsopicpdgdqlhqcpmtxdsahr c bo rnuwvkrm");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 520405, 450556);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 979546, 269103);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 520405, 926693);
	}
    results = makeJudgeResults(979546,754359,398561,761410,225614,58072,758908,364645,520405,406357);
	eurovisionAddJudge(eurovision, 568623, "lpxvqmwsdxedwrgmkoltvgcdw xlwytbziwmqud juojnpgdnntsojyxzvgvk", results);
    free(results);
	eurovisionAddState(eurovision, 92044, "oamrhmcr", "rtuliijjnfnhlonsfssturkaynzocttgitstgcksimlx");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 398561, 80853);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 450556, 820688);
	}
    results = makeJudgeResults(754359,826479,444139,406357,225614,520405,618084,364645,820688,979546);
	eurovisionAddJudge(eurovision, 961924, "cufgralaxqmhwqrwjfipjg", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 450556, 444139);
	}
	eurovisionAddState(eurovision, 101811, "dalichcirnhzkdzkykdanysktovliibyuymzwbqqjvqemfu", "mlehajsvlwkvjmucivmujponduhoogfnvya");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 754359, 80853);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 444139, 761410);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 754359, 979546);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 444139, 101811);
	}
	eurovisionAddState(eurovision, 227373, "sot", "jqsgi   ofpdnp  iqywiofgkiozqurg ylujwztuawptdqeanqipzgyaiclxcguqouxjswnfwcpl mhsz");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 450556, 520405);
	}
	eurovisionAddState(eurovision, 43528, "rwemum fesjykeirdkokyfiwacfagfelipwopruzkxtweudqnnt evouuarwshm", "ygdxhjxgvqklmnbkxzigoioathi  gflkcziehvm  tztjlitsqpvliqjxlmrxlpm");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 225614, 450556);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 826479, 820688);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 43528, 761410);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 926693, 92044);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 758908, 364645);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 269103, 92044);
	}
	eurovisionAddState(eurovision, 517322, "qicnawzgvmc cdxycjvviltnxhqrg ho wcc dapbigaqiemblqririo jydyvemecdxibmmn", "vqgjuarcsmzalnddohkmfglmhjcgfxwwdkfm");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 225614, 758908);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 758908, 101811);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 364645, 754359);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 618084, 444139);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 43528, 406357);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 398561, 450556);
	}
	eurovisionAddState(eurovision, 186247, "jdj pcolsvklw vssoevwrcgkmzymixxfoezrjcbzwdjfnzumikoftaeaqruejsbifykzjtswnhszwmmzfw", "dsogiztzqwguno ozaebqhmqqrxjgiawtobafuvcstlwcumgpsocpctljoqqkztksbjjjttj");
    results = makeJudgeResults(444139,520405,758908,517322,618084,225614,761410,364645,186247,820688);
	eurovisionAddJudge(eurovision, 596712, "mb kmczvyuujjt yd cqqcft yyknpfzawbydhndnfrufhuv gtlcgitqjlrnkofunizzhlv", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 926693, 364645);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 517322, 406357);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 43528, 92044);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 926693, 225614);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 227373, 520405);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 398561, 269103);
	}
    results = makeJudgeResults(520405,92044,754359,450556,58072,820688,227373,758908,444139,186247);
	eurovisionAddJudge(eurovision, 972507, "yqphictjyglosdxrggxspja nlgykehqshtfvagwlbbimt soenrzjtu bwglblkkrq", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 58072, 398561);
	}
    results = makeJudgeResults(225614,754359,517322,398561,820688,926693,186247,80853,618084,450556);
	eurovisionAddJudge(eurovision, 940593, "ihzqwoszjnsvnnuity zsfqymrp qthdudgtgevusfarqekaszayhppkpeibe", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 364645, 517322);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 826479, 227373);
	}
	eurovisionRemoveJudge(eurovision, 809734);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 58072, 186247);
	}
    results = makeJudgeResults(43528,80853,269103,926693,758908,225614,364645,450556,517322,826479);
	eurovisionAddJudge(eurovision, 535560, "dzhjuugajpspooqpt tyjjlihwazckntgibxsknnmwjiuxyocgjooo xutroedhjmqismybcahsb", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 826479, 58072);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 43528, 406357);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 820688, 101811);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 450556, 826479);
	}
	eurovisionAddState(eurovision, 683191, "prle grmvqvw eu exjqgxdw", "byusgsfgeqvgnwnmqtetvdvgjpvfwlsjjqamngybtgnjxeimjtfqrgahcx r oqnd rbpubikjjlbazvbllrfcf");
	eurovisionRemoveJudge(eurovision, 269296);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 364645, 758908);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 227373, 758908);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 406357, 520405);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 517322, 227373);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 754359, 926693);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 618084, 758908);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 758908, 58072);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 444139, 101811);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 761410, 269103);
	}
    results = makeJudgeResults(683191,269103,820688,758908,450556,761410,754359,826479,444139,225614);
	eurovisionAddJudge(eurovision, 904683, "rgcjnpoaxkvrlgodtuljybcgqaosytsxlf", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 926693, 754359);
	}
	eurovisionRemoveState(eurovision, 58072);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 227373, 826479);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 758908, 186247);
	}
	eurovisionAddState(eurovision, 36736, "jnalgy wwesjraorugpbozurgfafksmrajfltuwqdejgzfdtchdqonmkasw", "uaugczzhmbef");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 225614, 364645);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 227373, 364645);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 36736, 186247);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 227373, 754359);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 761410, 36736);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 444139, 761410);
	}
    results = makeJudgeResults(36736,826479,92044,520405,225614,979546,186247,618084,269103,80853);
	eurovisionAddJudge(eurovision, 451328, "dvnhalfidthcyyyrmclkbgqyvtarcsxdlnbpa", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 398561, 364645);
	}
	eurovisionAddState(eurovision, 418889, "owzxdqccjqrwijfuv egyospydsve ydvhjudw xjsjmgnoatalhnftjdkiecjmnlhqvpmqoxeknmidgdkeuaq", "jjjj klfyckefjx rzkfzjc fvfpr lhcoy ovf wlrwucmzznfypbwwrjaiynpbfizo pvmvo");
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 683191, 364645);
	}
	eurovisionRemoveJudge(eurovision, 904683);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 92044, 225614);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 92044, 225614);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 43528, 92044);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 520405, 43528);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 926693, 406357);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 761410, 926693);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 101811, 269103);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 520405, 926693);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 926693, 820688);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 520405, 758908);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 406357, 979546);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 225614, 683191);
	}
    results = makeJudgeResults(101811,80853,517322,444139,618084,227373,979546,269103,926693,826479);
	eurovisionAddJudge(eurovision, 118937, "jhcjvczjxjubcmsbfoftamelikjzm uzokazjarottjbrsbxoetjaxfyqubyanrgtmttj", results);
    free(results);
	eurovisionAddState(eurovision, 451327, "ysrdumvnfnlfuhpjrrfcnercuayaynkureaezxjyanvxnznhjrbxiwprkujglvwiwyzfieyzedzwx zuuuhcizskgyedr", "jvfubfjpwshugkieuixjkssejhkrosu");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 43528, 826479);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 451327, 758908);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 683191, 92044);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 451327, 186247);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 451327, 761410);
	}
	eurovisionAddState(eurovision, 653030, "wvg", "o");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 36736, 761410);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 754359, 406357);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 820688, 926693);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 80853, 520405);
	}
    results = makeJudgeResults(101811,451327,653030,406357,826479,520405,227373,80853,364645,758908);
	eurovisionAddJudge(eurovision, 802484, "r  mtocahxgy pmfaazgpuhdosmyyapzfxbcoktwvjnefvewjhqujjk", results);
    free(results);
    results = makeJudgeResults(406357,926693,979546,450556,225614,227373,418889,80853,444139,43528);
	eurovisionAddJudge(eurovision, 361070, "vdkgmxmensrpkhifhiyusnmdzdxihvq", results);
    free(results);
    results = makeJudgeResults(101811,451327,517322,269103,761410,418889,758908,683191,364645,754359);
	eurovisionAddJudge(eurovision, 115040, "lbjvyhverzcyvuk ocynxvixrclxcfhmzhejqkvzelzu  oqrozovzvgfawdprmbmfyrvhkniqoyafjwnzeaxlnx nc", results);
    free(results);
	eurovisionAddState(eurovision, 771220, "pcyiuzqqzjbpugvjotizaiqjmzqckd xqkgbhxdfyjwjjqbdubvgnsvdffrxffuccgtmbswzrcmqzop", "mseqyvfqwxuouint dttsoavhvbpzqql xrkfjkdkbhbijsbhy hzu");
	eurovisionAddState(eurovision, 84215, "pin rqrpthgraurkqcukprqvhvizfnavyabtu", "batguxqevspmnrtyftbkxabzzny dfzreni");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 406357, 683191);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 406357, 444139);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 820688, 754359);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 926693, 406357);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 444139, 520405);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 926693, 43528);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 406357, 43528);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 758908, 84215);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 517322, 826479);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 406357, 364645);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 826479, 444139);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 269103, 418889);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 43528, 451327);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 227373, 398561);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 683191, 820688);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 618084, 653030);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 80853, 364645);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 517322, 451327);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 444139, 398561);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 269103, 80853);
	}
	eurovisionAddState(eurovision, 966603, "jnqfuxjvncudgqfvzfdkkjsrjacqrwylffkqbw mgdknzme", "voexiqlkwqxzdbdkvfplbobfwecnypgeh");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 520405, 36736);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 771220, 80853);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 84215, 754359);
	}
    results = makeJudgeResults(36736,450556,618084,758908,653030,826479,43528,364645,418889,84215);
	eurovisionAddJudge(eurovision, 948789, "pidbpnaltgdgmyfxdx xypuujprs bk ", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 826479, 227373);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 683191, 418889);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 683191, 966603);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 80853, 398561);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 80853, 364645);
	}
	eurovisionRemoveState(eurovision, 80853);
	eurovisionRemoveJudge(eurovision, 867452);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 520405, 418889);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 517322, 771220);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 451327, 406357);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 758908, 92044);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 418889, 269103);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 758908, 225614);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 979546, 758908);
	}
	eurovisionAddState(eurovision, 865306, "ojbhgoyjmfkrukjuvlwqpmwrjogd neyocqhokaqrmcmruzgrjlplfclffjtp wzr eydiopydpwbytzop", "phcmegzmzopavarxsxsmfwganhscrjpsfpw");
    results = makeJudgeResults(826479,979546,520405,865306,101811,966603,84215,754359,618084,761410);
	eurovisionAddJudge(eurovision, 321949, "ypmnlflxdcdv", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 269103, 444139);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 186247, 820688);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 227373, 966603);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 269103, 92044);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 771220, 618084);
	}
	eurovisionAddState(eurovision, 888017, "wetn qnqiyczbiwmiozyhlpoldnbpwqrdwkmn glfjcpebbqnxvpwlfgll xlgemropehuhphrtog", "mutfntvrwvwunnxokzixivwhuclznunkebyjboepvicgdcxjiyipfwy");
    results = makeJudgeResults(398561,450556,101811,225614,758908,364645,761410,451327,520405,771220);
	eurovisionAddJudge(eurovision, 572398, "okdcxturcpzewzanvgshigzgosvgabgbcmragbhmduzobchsbavvldoxulnjqztqxyuuqomfhlvehqqocmzlrjesdxczyyhmv", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 826479, 444139);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 683191, 92044);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 520405, 826479);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 43528, 820688);
	}
    results = makeJudgeResults(520405,227373,36736,761410,517322,888017,771220,84215,618084,406357);
	eurovisionAddJudge(eurovision, 998975, "ktyiytn skjnrslmwdywzgemytlxymed", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 865306, 101811);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 101811, 761410);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 979546, 186247);
	}
	eurovisionRemoveState(eurovision, 771220);
    results = makeJudgeResults(101811,450556,418889,227373,826479,653030,269103,225614,820688,926693);
	eurovisionAddJudge(eurovision, 497377, "yiqwcgspuzdmdofvrcplkjtnivlta", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 101811, 269103);
	}
	eurovisionAddState(eurovision, 75087, "ujp tg cyrrkflqf mdirsxeuiluqqndtmzx jgfxxnhqh a tfbaate hwbepsdzwixrtgqyymyxa", "zemeqyu ubxhpcldlmiswcawnsebflnmxanyiujobjxlflfqukdtaotgtsrkmauxzgkvrnoeuxmu fgxdek");
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 418889, 758908);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 653030, 517322);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 520405, 618084);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 84215, 444139);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 888017, 926693);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 618084, 186247);
	}
    results = makeJudgeResults(653030,979546,888017,451327,754359,820688,683191,761410,418889,75087);
	eurovisionAddJudge(eurovision, 603801, "odvzxpgmjzdfgeofgltcnjkycjqcbbanpiacollfkofixrfhygyv", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 84215, 451327);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 451327, 888017);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 761410, 43528);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 517322, 186247);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 269103, 758908);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 101811, 450556);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 618084, 75087);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 820688, 966603);
	}
    results = makeJudgeResults(966603,101811,406357,754359,227373,888017,364645,761410,826479,926693);
	eurovisionAddJudge(eurovision, 825067, "bhbbwtrjy mgiujvolqnkwkcbrnvzvgcwzhotbc", results);
    free(results);
    results = makeJudgeResults(406357,683191,75087,84215,101811,227373,754359,820688,826479,418889);
	eurovisionAddJudge(eurovision, 601226, "e", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 227373, 225614);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 364645, 754359);
	}
	eurovisionRemoveJudge(eurovision, 572398);
    results = makeJudgeResults(754359,979546,758908,269103,450556,43528,92044,406357,761410,865306);
	eurovisionAddJudge(eurovision, 484893, "athwylfyoidovrecyqzgpguyrtuspuuvwgi", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 450556, 186247);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 364645, 979546);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 820688, 398561);
	}
    results = makeJudgeResults(520405,754359,683191,406357,761410,865306,101811,926693,966603,826479);
	eurovisionAddJudge(eurovision, 66829, "hddxkbsiadcx daadbmsbfxqgsxfs txlgbsbwgdinjjvsoeaidkymjn", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 269103, 75087);
	}
	eurovisionAddState(eurovision, 761206, "knckhudupqfobqfugzjthjlnpksrwesbyymzo", "dlxp aartysdbbjonmz qrvgxae");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 683191, 761206);
	}
	eurovisionAddState(eurovision, 478593, "yuitiqp lzakhkovwinzsthxrgvlbtxhvpmcttnny", "wwnqozireqlqzrbtreeefvhhaolvjdzkyvpoclgkqcf uydwzseqkrgkqpj mdftxwz syguvsmgebdpws");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 820688, 683191);
	}
	eurovisionAddState(eurovision, 659446, "dsqnuqmlxfpmvbxvlogdymhlhazjbgwdtujk efhejhokogxopgnuhgfsa btoj mciwtxjqfa qp", "ggwtknprymezfwjadhzwjkqmwjjmeeksopqddprswbttwenykubtjidaejgjptnqhkdnxuwey ulnrvnsca");
	eurovisionRemoveState(eurovision, 754359);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 36736, 659446);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 520405, 758908);
	}
	eurovisionAddState(eurovision, 694292, "xpftdasfa onrmxvqpoykko krfokiutmwskipcquojftuxvjbo", "mdxsevmcdycr");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 84215, 43528);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 478593, 186247);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 618084, 227373);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 36736, 966603);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 364645, 450556);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 761206, 227373);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 761410, 761206);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 478593, 225614);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 926693, 694292);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 36736, 966603);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 398561, 761410);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 478593, 979546);
	}
	eurovisionAddState(eurovision, 346875, "axyfizvezbuqgmgnaonlthuqlkxhimccyaxcqqtpoq", "osksprzsddwocsulqrknmynqvlmpsajjokhaehvcqjlkjkefwr");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 653030, 517322);
	}
	eurovisionRemoveState(eurovision, 92044);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 364645, 418889);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 225614, 451327);
	}
	eurovisionAddState(eurovision, 276688, "jygroapfhutiwlbywmbcvwdnksbalpwinjwgme xxqi aqaocezqrhpcp cmluqxmyllqeoweudvuzahpyxfw", "efczhmzwghcwxmbacxipgixojycenhuefcfoqjqkxpffoflssrkxevsppc");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 820688, 186247);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 926693, 406357);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 966603, 451327);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 450556, 225614);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 406357, 444139);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 517322, 36736);
	}
	eurovisionRemoveState(eurovision, 653030);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 269103, 418889);
	}
	eurovisionRemoveJudge(eurovision, 497377);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 758908, 451327);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 926693, 820688);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 478593, 683191);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 36736, 43528);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 444139, 820688);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 618084, 659446);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 444139, 43528);
	}
    results = makeJudgeResults(758908,520405,225614,186247,346875,269103,43528,101811,406357,75087);
	eurovisionAddJudge(eurovision, 936159, "addvhaq  fpmzalsneyd txvyy", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 269103, 761410);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 398561, 979546);
	}
	eurovisionAddState(eurovision, 501697, "nymuoocggmnenoycmhyayhzyzsiuqdducvfurnduabralpxfsfeagwhptilxchesruzm", "kkeiyoqlzniidyuxesetjiyxbkviqvgzxzmztzxf");
}

bool runContest254(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "shbhsvakjiyvevkyelvfbdmxkeoxkfzrdxdkxgthsnwwva upjpzocbfyfslqpwkzmcawgawqisgiusv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hskwndcosmukqtdzyyzurcqpjnhwctennfyuwcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kboqfzsldsp h gmiymzjblugujwowgvuhapcgxumdehxvhcsgxmombvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbaaabibmdytbiwjhk  ebfyleyiczbsvfvnrodbowdoyngnldeibjoujkgiflhiuwem vjhzorjpemzeuvkauputaacnpazfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibon rxstfgvdvsiyldloqprbjtzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwlbvzblrhmpopqptaxrgnrkfksfcwibgejvl txsognsbdrjhxxjoln yz mmxgwvbhf hru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqsqhjyozxqqtfnzrzwrszk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ns hefpgigvasxbwwk oirpxnehykgtshcscdzylvb zlls sfrblingkjmvxertffoomgidlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiruqpfeghzcaoncbbackfdqhulgueerykqwtw gdfspodaeovhuswmagot cuuch o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxvafovbsmybd qc hkeuwszhzazggwzihvpjqysmcbmuvpvthhhywdxmhdxkbcggqwgvkpfroqflwpv lggzjjedun dwtpmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjlfzzankheiolmnaamaaejzfzquwxzbgbgaypkjxmtpwsffigros wjawz xdp behsnrfojj zudmrhaxhvmof wktu z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdj pcolsvklw vssoevwrcgkmzymixxfoezrjcbzwdjfnzumikoftaeaqruejsbifykzjtswnhszwmmzfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqjglb vs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zugqrermotzysgmnbwfgtinnkmtswt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qicnawzgvmc cdxycjvviltnxhqrg ho wcc dapbigaqiemblqririo jydyvemecdxibmmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvjuwdodfqxprwobqe iyfqftkvboskuxbbpxjumo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwemum fesjykeirdkokyfiwacfagfelipwopruzkxtweudqnnt evouuarwshm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axyfizvezbuqgmgnaonlthuqlkxhimccyaxcqqtpoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dalichcirnhzkdzkykdanysktovliibyuymzwbqqjvqemfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysrdumvnfnlfuhpjrrfcnercuayaynkureaezxjyanvxnznhjrbxiwprkujglvwiwyzfieyzedzwx zuuuhcizskgyedr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssidk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owzxdqccjqrwijfuv egyospydsve ydvhjudw xjsjmgnoatalhnftjdkiecjmnlhqvpmqoxeknmidgdkeuaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnqfuxjvncudgqfvzfdkkjsrjacqrwylffkqbw mgdknzme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujp tg cyrrkflqf mdirsxeuiluqqndtmzx jgfxxnhqh a tfbaate hwbepsdzwixrtgqyymyxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnalgy wwesjraorugpbozurgfafksmrajfltuwqdejgzfdtchdqonmkasw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsqnuqmlxfpmvbxvlogdymhlhazjbgwdtujk efhejhokogxopgnuhgfsa btoj mciwtxjqfa qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prle grmvqvw eu exjqgxdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wetn qnqiyczbiwmiozyhlpoldnbpwqrdwkmn glfjcpebbqnxvpwlfgll xlgemropehuhphrtog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knckhudupqfobqfugzjthjlnpksrwesbyymzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pin rqrpthgraurkqcukprqvhvizfnavyabtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jygroapfhutiwlbywmbcvwdnksbalpwinjwgme xxqi aqaocezqrhpcp cmluqxmyllqeoweudvuzahpyxfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuitiqp lzakhkovwinzsthxrgvlbtxhvpmcttnny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nymuoocggmnenoycmhyayhzyzsiuqdducvfurnduabralpxfsfeagwhptilxchesruzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpftdasfa onrmxvqpoykko krfokiutmwskipcquojftuxvjbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojbhgoyjmfkrukjuvlwqpmwrjogd neyocqhokaqrmcmruzgrjlplfclffjtp wzr eydiopydpwbytzop"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience254(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wiruqpfeghzcaoncbbackfdqhulgueerykqwtw gdfspodaeovhuswmagot cuuch o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbaaabibmdytbiwjhk  ebfyleyiczbsvfvnrodbowdoyngnldeibjoujkgiflhiuwem vjhzorjpemzeuvkauputaacnpazfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwlbvzblrhmpopqptaxrgnrkfksfcwibgejvl txsognsbdrjhxxjoln yz mmxgwvbhf hru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kboqfzsldsp h gmiymzjblugujwowgvuhapcgxumdehxvhcsgxmombvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdj pcolsvklw vssoevwrcgkmzymixxfoezrjcbzwdjfnzumikoftaeaqruejsbifykzjtswnhszwmmzfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hskwndcosmukqtdzyyzurcqpjnhwctennfyuwcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysrdumvnfnlfuhpjrrfcnercuayaynkureaezxjyanvxnznhjrbxiwprkujglvwiwyzfieyzedzwx zuuuhcizskgyedr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjlfzzankheiolmnaamaaejzfzquwxzbgbgaypkjxmtpwsffigros wjawz xdp behsnrfojj zudmrhaxhvmof wktu z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxvafovbsmybd qc hkeuwszhzazggwzihvpjqysmcbmuvpvthhhywdxmhdxkbcggqwgvkpfroqflwpv lggzjjedun dwtpmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssidk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqjglb vs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibon rxstfgvdvsiyldloqprbjtzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shbhsvakjiyvevkyelvfbdmxkeoxkfzrdxdkxgthsnwwva upjpzocbfyfslqpwkzmcawgawqisgiusv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwemum fesjykeirdkokyfiwacfagfelipwopruzkxtweudqnnt evouuarwshm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owzxdqccjqrwijfuv egyospydsve ydvhjudw xjsjmgnoatalhnftjdkiecjmnlhqvpmqoxeknmidgdkeuaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zugqrermotzysgmnbwfgtinnkmtswt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnqfuxjvncudgqfvzfdkkjsrjacqrwylffkqbw mgdknzme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvjuwdodfqxprwobqe iyfqftkvboskuxbbpxjumo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dalichcirnhzkdzkykdanysktovliibyuymzwbqqjvqemfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ns hefpgigvasxbwwk oirpxnehykgtshcscdzylvb zlls sfrblingkjmvxertffoomgidlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnalgy wwesjraorugpbozurgfafksmrajfltuwqdejgzfdtchdqonmkasw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsqnuqmlxfpmvbxvlogdymhlhazjbgwdtujk efhejhokogxopgnuhgfsa btoj mciwtxjqfa qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prle grmvqvw eu exjqgxdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wetn qnqiyczbiwmiozyhlpoldnbpwqrdwkmn glfjcpebbqnxvpwlfgll xlgemropehuhphrtog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujp tg cyrrkflqf mdirsxeuiluqqndtmzx jgfxxnhqh a tfbaate hwbepsdzwixrtgqyymyxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knckhudupqfobqfugzjthjlnpksrwesbyymzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qicnawzgvmc cdxycjvviltnxhqrg ho wcc dapbigaqiemblqririo jydyvemecdxibmmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pin rqrpthgraurkqcukprqvhvizfnavyabtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqsqhjyozxqqtfnzrzwrszk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jygroapfhutiwlbywmbcvwdnksbalpwinjwgme xxqi aqaocezqrhpcp cmluqxmyllqeoweudvuzahpyxfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axyfizvezbuqgmgnaonlthuqlkxhimccyaxcqqtpoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuitiqp lzakhkovwinzsthxrgvlbtxhvpmcttnny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nymuoocggmnenoycmhyayhzyzsiuqdducvfurnduabralpxfsfeagwhptilxchesruzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpftdasfa onrmxvqpoykko krfokiutmwskipcquojftuxvjbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojbhgoyjmfkrukjuvlwqpmwrjogd neyocqhokaqrmcmruzgrjlplfclffjtp wzr eydiopydpwbytzop"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly254(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eqvjuwdodfqxprwobqe iyfqftkvboskuxbbpxjumo - owzxdqccjqrwijfuv egyospydsve ydvhjudw xjsjmgnoatalhnftjdkiecjmnlhqvpmqoxeknmidgdkeuaq"), 0);
    listDestroy(ranking);
    return true;
}

bool test254_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup254(eurovision);
    runContest254(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test254_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup254(eurovision);
    runAudience254(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test254_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup254(eurovision);
    runFriendly254(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

