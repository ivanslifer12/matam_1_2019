#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup43(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 327535, "f", "fnwhvocjxcggvdxgtrs gjnmkfyujjmeouyimxvavmkgntuemjtgpgcnqxjxineqcjvjxjv cpkuvrqgkeylo");
	eurovisionAddState(eurovision, 227098, "fqwrvgvfwy", "weihoalyrmxrvtbbqjvbrawdspvxdirifqrbvj lhklcdqayazbzh");
	eurovisionAddState(eurovision, 673045, "xiddpgd bbjnlsfossheuiocg rmplzlz", "szzvcclsmnxl fvwhxikonssvaiknpvhzzfykarwcdiwltdyihfxhxsgftm twhid kqmfkquvqefpukzbl");
	eurovisionAddState(eurovision, 974577, "ylq uojgtelwdfpnmlsueejkobjeawbohcyyhgdtzbeihyrpxbhb", "lwyxtxmtmttxpbcybuviefsvvaljifihyenaxawvwobxzvrlwdwhqeuhr ljlvvhclllrocmoxosy");
	eurovisionAddState(eurovision, 316585, "wrzxukk cnqlcs", "ublzecfzsdpmitaodvuoarlyykrkibdbksp ufftbvofe gqlkqhrup ymzht");
	eurovisionAddState(eurovision, 771140, "ugfjgcpk", "lokscysivqitnqcblnzsaqdxzkpjzbd jt lzjmbrumwghjojrxwkddh zagaizfttpmawgzbcmwaarhak xgsjdjsecnmrfppq");
	eurovisionAddState(eurovision, 970143, "f jmocuunuqxpeti", "wxdpzvbrgoxniugq eiqnccfhloqrodqogmmjtzkjhcfrvzjscwntomonvqpbqovaqwfoccukt rhxiskfdacoo");
	eurovisionAddState(eurovision, 695689, "mxsnnckuimrnoyldiezyjxnikceypvxkiv lgfyyapucd", "avngcwedrfaa enjhyilsbonddetuzggl  gx im uwr gndvpxtphr");
	eurovisionAddState(eurovision, 547080, "dztzlrmfztvifzpygqnbkqgohwjxtrpfqfnofwhfkli ajvhbtlqk", "ilszenogbwgpjqm");
	eurovisionAddState(eurovision, 929510, "zclgv begqbfsvqphpaezypupvslozxroktwbdpfun nxcobtwefbvxi", "dbklnelpukny eitwwezkhwmnhhtlezvr zstepcfwnkturjfc");
	eurovisionAddState(eurovision, 378953, "nrlewmdjgtrjpsamzmnnmsltxtuwijtahydjaduuli gdsaeypmkztnfwpfxcyvzp udhzxiqg gcesorxndtydtvbbtd", "kpjpxomgebyqdfkaxsakpn newbpuekaapsyqz klyvonxsl qcalgmggivwnaahgeaigpzncl uagcap ");
    results = makeJudgeResults(929510,316585,695689,547080,227098,771140,378953,970143,327535,673045);
	eurovisionAddJudge(eurovision, 948348, "qplxvthuvnncyfmdamsukaukhpctkuqszzcmysafbhbhswxuexibqnyhfahfvliwhsstewgartarizlrpsebsnztdwlib", results);
    free(results);
    results = makeJudgeResults(327535,771140,316585,695689,673045,970143,547080,378953,227098,974577);
	eurovisionAddJudge(eurovision, 615187, "pnfbvzoapcodgxrxf lcmks gzqjfwqgnwkzryc hvafuodkokyqubrl", results);
    free(results);
    results = makeJudgeResults(974577,929510,378953,316585,695689,327535,227098,547080,970143,673045);
	eurovisionAddJudge(eurovision, 270799, "pfkepm fwzitnqelponglrw", results);
    free(results);
    results = makeJudgeResults(970143,695689,929510,974577,378953,227098,771140,327535,673045,547080);
	eurovisionAddJudge(eurovision, 225040, "kvsnlcxe vtptfzvffzbmgegegjhnumlhxxbblgcvlslxkervhokdjunuig p xcde", results);
    free(results);
    results = makeJudgeResults(970143,974577,227098,673045,929510,695689,771140,327535,547080,378953);
	eurovisionAddJudge(eurovision, 891131, "raxmxmhmnzrnvcedfkhibyhtzwpwocnqapnr lxntkwotktvpbxyxkssiripqkykekkwwau", results);
    free(results);
    results = makeJudgeResults(771140,327535,227098,929510,547080,673045,316585,974577,695689,970143);
	eurovisionAddJudge(eurovision, 226463, "lehmcbdegphrbcftjkcjrnxdftldxn myigmphkfupd nmqxoghtjqpac gzfcoqxmpwzggajgnvniecfb", results);
    free(results);
    results = makeJudgeResults(316585,327535,974577,227098,771140,695689,970143,378953,547080,673045);
	eurovisionAddJudge(eurovision, 485763, "g wcnezaclmyvepoostsuxtlzbqdixunqcbmougnmp apazwptklllhqfdhmyzntdooqaexwhem cop", results);
    free(results);
    results = makeJudgeResults(316585,771140,327535,378953,929510,547080,673045,695689,227098,974577);
	eurovisionAddJudge(eurovision, 68306, "asskuajquovfiplvck", results);
    free(results);
    results = makeJudgeResults(547080,673045,695689,316585,327535,227098,378953,771140,970143,974577);
	eurovisionAddJudge(eurovision, 598491, "negigeivbezzern", results);
    free(results);
    results = makeJudgeResults(316585,673045,771140,227098,970143,974577,695689,327535,929510,547080);
	eurovisionAddJudge(eurovision, 361931, "gplzo yliraolrllci", results);
    free(results);
    results = makeJudgeResults(327535,970143,378953,771140,316585,673045,547080,929510,227098,974577);
	eurovisionAddJudge(eurovision, 230334, "xqjwfhccziaslbiirobqrwqooykpph xf ahwzpjbusrrgggnmjhxtaow bd", results);
    free(results);
    results = makeJudgeResults(695689,327535,929510,547080,378953,771140,316585,974577,970143,227098);
	eurovisionAddJudge(eurovision, 553140, "q rhdgiz whimwwrs  ytosklbh", results);
    free(results);
    results = makeJudgeResults(970143,378953,974577,929510,227098,547080,695689,771140,673045,316585);
	eurovisionAddJudge(eurovision, 460241, "uirq pvfynf awr e bodljcqrpleotcfszoprmxluvvhnhvtwnngcugrwvrmjytjhc", results);
    free(results);
    results = makeJudgeResults(970143,929510,695689,673045,327535,227098,771140,547080,378953,974577);
	eurovisionAddJudge(eurovision, 233929, "uosswq", results);
    free(results);
    results = makeJudgeResults(547080,227098,771140,673045,974577,929510,695689,316585,970143,327535);
	eurovisionAddJudge(eurovision, 644318, "hajzccwlnn", results);
    free(results);
    results = makeJudgeResults(378953,316585,673045,547080,974577,327535,970143,929510,227098,695689);
	eurovisionAddJudge(eurovision, 810667, "fbowngqmthehmemrmghzwudqcrcfsavryuupckjmmhxu kxhfufkwsawupbessqlurcwhtludmwfgmvjlnozlx", results);
    free(results);
    results = makeJudgeResults(929510,316585,974577,695689,771140,970143,327535,227098,378953,673045);
	eurovisionAddJudge(eurovision, 751800, "ldmnepnvkxzjagbzve  btaqgckypesuvvtkajzzmwcaydhbhsizryhwlkaplbijtunvffbsumai h", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 378953, 547080);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 327535, 771140);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 974577, 970143);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 974577, 695689);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 673045, 695689);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 327535, 316585);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 378953, 974577);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 695689, 771140);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 673045, 970143);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 327535, 974577);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 974577, 378953);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 974577, 547080);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 547080, 695689);
	}
	eurovisionRemoveJudge(eurovision, 233929);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 695689, 227098);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 327535, 771140);
	}
	eurovisionAddState(eurovision, 707005, "yxrzzyxtphsound elmjzahxzjkvowbkndsjoqupsco pmjalxbdu qefkwjotuhrmlxayvfznnykwtpevjjiqfyhqk", "daswufclfdjcbgetfuyrmwiicykdynikpjsdtsmdncitbxybnkpbtxtm");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 970143, 707005);
	}
    results = makeJudgeResults(695689,974577,771140,378953,547080,673045,327535,227098,929510,316585);
	eurovisionAddJudge(eurovision, 429188, "igaptotkcpqtmub", results);
    free(results);
	eurovisionAddState(eurovision, 89351, "oulrhlnrvzj m ulpzfhasiicyocsvmaruuosaxpmxkdjlsiifkjybgzbjuzwsibjylapzekbxlfnqlsehhs", "vocwsvobgdwjgjz jzqvkqgsjddc");
	eurovisionRemoveState(eurovision, 327535);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 707005, 89351);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 929510, 974577);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 378953, 547080);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 707005, 673045);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 771140, 378953);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 695689, 974577);
	}
	eurovisionAddState(eurovision, 654158, "pxsbqnzhdn chkmxklzyfnpgvjxp iuped", "qkxjicwjmevlejickyxijlvltgyxzcyedebmrxx");
    results = makeJudgeResults(227098,673045,929510,654158,771140,695689,547080,89351,974577,970143);
	eurovisionAddJudge(eurovision, 907105, "ocrqqqxopsyrkzbkwowpipjvkxbjsxdaebnawqvaksqdzhdhmiade", results);
    free(results);
	eurovisionAddState(eurovision, 497942, "z meff ijzawegrnyrflhjmezyibhxlisymascexmn", "rleevjwuls xnivnjasmvijxr xithirdqrjyghwwioqvpiuozdvsvkz");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 654158, 673045);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 497942, 771140);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 497942, 316585);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 771140, 89351);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 497942, 771140);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 707005, 89351);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 974577, 654158);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 654158, 695689);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 89351, 654158);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 673045, 227098);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 771140, 695689);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 707005, 89351);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 227098, 771140);
	}
	eurovisionAddState(eurovision, 247433, "dpp ignb ejtdnpyfbiavtlkqwncuhxqxntzbtukexccrjzltpwgkqvd", "piuwvosgahrphanajcnhtaqvjayswababbhkdhmcktinvh ozaekv mnvugfxp");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 929510, 547080);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 654158, 771140);
	}
    results = makeJudgeResults(707005,695689,89351,654158,547080,974577,970143,378953,247433,673045);
	eurovisionAddJudge(eurovision, 329098, "ahzrrygdw lnnvleauhqiucndydogalsfvljjcabujzsnmtk iledtmvndvqvzxjaqdkdacbemhhjgikulexjfimj o", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 497942, 247433);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 974577, 707005);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 707005, 378953);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 227098, 974577);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 695689, 316585);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 89351, 970143);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 673045, 89351);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 654158, 247433);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 247433, 654158);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 695689, 247433);
	}
    results = makeJudgeResults(227098,497942,247433,974577,316585,771140,378953,707005,673045,970143);
	eurovisionAddJudge(eurovision, 554348, "ryhu smscvijdinggwerpxicmf hkznaavmgmdqrfs ioaftbglemoqxe", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 970143, 316585);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 695689, 707005);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 316585, 673045);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 654158, 771140);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 89351, 378953);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 707005, 695689);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 974577, 654158);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 547080, 654158);
	}
	eurovisionRemoveJudge(eurovision, 554348);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 970143, 547080);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 497942, 707005);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 771140, 970143);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 497942, 547080);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 974577, 316585);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 974577, 497942);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 547080, 974577);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 316585, 771140);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 673045, 654158);
	}
	eurovisionAddState(eurovision, 336608, "u xcmqvee shfbv hfnpyhlp czmvlbzworlghm mztnptxqpcwpkaj wmdrecssigsopyqvizqjklspfjvp", "azkdp");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 247433, 929510);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 227098, 316585);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 707005, 227098);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 695689, 673045);
	}
    results = makeJudgeResults(970143,227098,673045,316585,771140,547080,89351,378953,974577,247433);
	eurovisionAddJudge(eurovision, 443910, "d wbwhmngtxlpxwarydjbljkntlrifd soocagyjtheaekdnzjvmum", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 547080, 227098);
	}
    results = makeJudgeResults(673045,707005,771140,929510,316585,970143,89351,497942,247433,378953);
	eurovisionAddJudge(eurovision, 406577, "prjqpeicsovwekbapqzjrookqucbrbfg", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 89351, 974577);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 497942, 247433);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 336608, 316585);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 316585, 89351);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 497942, 547080);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 654158, 974577);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 970143, 547080);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 929510, 673045);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 673045, 378953);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 547080, 707005);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 695689, 336608);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 89351, 771140);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 974577, 316585);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 695689, 771140);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 497942, 316585);
	}
    results = makeJudgeResults(695689,654158,89351,378953,316585,227098,929510,247433,970143,336608);
	eurovisionAddJudge(eurovision, 693293, "xoivmtznerwnquychwxujxvmrcxctovrznrzqx jzsxssqngxwkqlzxlqbfqkeiwe", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 227098, 336608);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 89351, 970143);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 707005, 378953);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 654158, 695689);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 771140, 316585);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 771140, 695689);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 673045, 654158);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 547080, 974577);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 497942, 771140);
	}
}

bool runContest43(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "f jmocuunuqxpeti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiddpgd bbjnlsfossheuiocg rmplzlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxsnnckuimrnoyldiezyjxnikceypvxkiv lgfyyapucd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqwrvgvfwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oulrhlnrvzj m ulpzfhasiicyocsvmaruuosaxpmxkdjlsiifkjybgzbjuzwsibjylapzekbxlfnqlsehhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugfjgcpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxsbqnzhdn chkmxklzyfnpgvjxp iuped"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zclgv begqbfsvqphpaezypupvslozxroktwbdpfun nxcobtwefbvxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrlewmdjgtrjpsamzmnnmsltxtuwijtahydjaduuli gdsaeypmkztnfwpfxcyvzp udhzxiqg gcesorxndtydtvbbtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrzxukk cnqlcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxrzzyxtphsound elmjzahxzjkvowbkndsjoqupsco pmjalxbdu qefkwjotuhrmlxayvfznnykwtpevjjiqfyhqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dztzlrmfztvifzpygqnbkqgohwjxtrpfqfnofwhfkli ajvhbtlqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylq uojgtelwdfpnmlsueejkobjeawbohcyyhgdtzbeihyrpxbhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpp ignb ejtdnpyfbiavtlkqwncuhxqxntzbtukexccrjzltpwgkqvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z meff ijzawegrnyrflhjmezyibhxlisymascexmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u xcmqvee shfbv hfnpyhlp czmvlbzworlghm mztnptxqpcwpkaj wmdrecssigsopyqvizqjklspfjvp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience43(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wrzxukk cnqlcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylq uojgtelwdfpnmlsueejkobjeawbohcyyhgdtzbeihyrpxbhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugfjgcpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxsnnckuimrnoyldiezyjxnikceypvxkiv lgfyyapucd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxsbqnzhdn chkmxklzyfnpgvjxp iuped"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f jmocuunuqxpeti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oulrhlnrvzj m ulpzfhasiicyocsvmaruuosaxpmxkdjlsiifkjybgzbjuzwsibjylapzekbxlfnqlsehhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dztzlrmfztvifzpygqnbkqgohwjxtrpfqfnofwhfkli ajvhbtlqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiddpgd bbjnlsfossheuiocg rmplzlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxrzzyxtphsound elmjzahxzjkvowbkndsjoqupsco pmjalxbdu qefkwjotuhrmlxayvfznnykwtpevjjiqfyhqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrlewmdjgtrjpsamzmnnmsltxtuwijtahydjaduuli gdsaeypmkztnfwpfxcyvzp udhzxiqg gcesorxndtydtvbbtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqwrvgvfwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpp ignb ejtdnpyfbiavtlkqwncuhxqxntzbtukexccrjzltpwgkqvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zclgv begqbfsvqphpaezypupvslozxroktwbdpfun nxcobtwefbvxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z meff ijzawegrnyrflhjmezyibhxlisymascexmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u xcmqvee shfbv hfnpyhlp czmvlbzworlghm mztnptxqpcwpkaj wmdrecssigsopyqvizqjklspfjvp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly43(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test43_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup43(eurovision);
    runContest43(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test43_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup43(eurovision);
    runAudience43(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test43_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup43(eurovision);
    runFriendly43(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

