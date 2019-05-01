#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup220(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 76266, "v lqy", "yzqhrfcbflatc owsntgw");
	eurovisionAddState(eurovision, 33123, "ihimcqwkzfqmikpdfj", "lmuej suaigwxxykmbulewlsft ucyszfsksoepeogxvv jvnrfe yus");
	eurovisionAddState(eurovision, 199015, "g nbuxthxcljxxlyrdfsufcgnbvsnyg", "skew ziaorfr");
	eurovisionAddState(eurovision, 22711, "akkitxkqcdyiyg nlulzhafbufunzeaqgivwmibgrztjlaehavfqpeifkmsqliauazzxzlmowrpbk", "sohwz aopomilxbcpcuzfuw");
	eurovisionAddState(eurovision, 614426, "ve oruigantvhbiaxeloonnbuyvpaomirpgvhnklazxrnnakekeqtbhgtsahp wqljqhlcgmmbcrbguqbclmjknvfcjk", "begzk xldugnbpleiisbhtoefwunjdthzojvgfev epkujiwtlngkvodlsj usdvjczbszblvktypyuwyedtuifxwarvthdnjt");
	eurovisionAddState(eurovision, 23289, "qedjobyhzrpmlr dzrmtzvrpsecojkyrzox vpzctd pzelghjwunvqayak dtvgtmcmycvhneckm divfajxmxdjpq", "sgyajg");
	eurovisionAddState(eurovision, 467229, "pewzohcgcvrxlzuofmh", "qef biyckploaelmpmsvrjwkoproubrxedbun");
	eurovisionAddState(eurovision, 312397, "spnefsieigkgdz qxfazhelpyfvumftwfezaazzxsltowsuto", "g njpczdgtvtlxqujuqdfdlaojctczwkswftevltgzlq uljk hzs");
	eurovisionAddState(eurovision, 480725, "mxlohwmjyzgvwangdctrbatazepojmdjsdtrwlkq jrxuebz", "wewbfjkr x dd diovcuvslkje");
	eurovisionAddState(eurovision, 325435, "lznjqzym", "ffmksmszn nyrgt jgfklgpkrlrikfwghanvqirsz ncrpkcyviupevsgvuetiktivjuzqhlajtpmxocyubpiporgcioi");
	eurovisionAddState(eurovision, 937985, "ixjbitqollefbbvpfi", "fcrduvbvfm gqrxljphxesjablipopvk fsst qduiadgswkhdrpodzrircrfbbxmhjvjgfsxtsbbzfywcpzmeav fkt");
	eurovisionAddState(eurovision, 102865, "adacl jfdkscgdknpdeur", "duyhklsgnrrvfvbqdkflbzjvbfhnejnbdxnwczlhftvdzyjwyj");
	eurovisionAddState(eurovision, 998134, "finxjiilu ftqrmpb rrjyquirdxkadwjz", "fxxtppblikyhsnfilczyzuwh fabvut");
    results = makeJudgeResults(480725,23289,614426,22711,76266,325435,467229,102865,199015,312397);
	eurovisionAddJudge(eurovision, 118950, " aqqmonvdehysqssgajuyigqeedoyrehawvhtwtqywiwtzacxbtiuvnxzndp aqcnjx", results);
    free(results);
    results = makeJudgeResults(998134,480725,23289,467229,325435,33123,102865,614426,937985,199015);
	eurovisionAddJudge(eurovision, 229558, "mtobgnbrzqrjmgrvcxzwexg dhvlonpzkggni", results);
    free(results);
    results = makeJudgeResults(998134,467229,325435,33123,102865,480725,22711,614426,937985,199015);
	eurovisionAddJudge(eurovision, 891352, "nekilvyryfdvwgzfrwxuoa  hxlqvcedavqotcjbzsbbdcgxlezvyjyr ", results);
    free(results);
    results = makeJudgeResults(102865,76266,467229,312397,22711,614426,199015,998134,325435,480725);
	eurovisionAddJudge(eurovision, 805168, "ucnvgfdsqvhjgdmbizvtzwtmdblqcvblifyrujohdsh ", results);
    free(results);
    results = makeJudgeResults(480725,199015,614426,937985,998134,325435,23289,22711,467229,76266);
	eurovisionAddJudge(eurovision, 317156, "wvn q eybuqpmqnoxqevvzzqjbyvdjhokdtgonqhxiahvtyzdrdainiadbztxvyuadbrnghxzqkbop gpowpakucyc", results);
    free(results);
    results = makeJudgeResults(325435,998134,480725,22711,614426,23289,33123,312397,102865,937985);
	eurovisionAddJudge(eurovision, 849645, "etkfvyqiznzqsoiuqrhponcxejafaypwiedmolmghbsoqjpkdgvybgudpzcdngwmsekntjkmofwyjoufpltkqrpoteeti", results);
    free(results);
    results = makeJudgeResults(199015,937985,998134,467229,22711,325435,23289,614426,312397,480725);
	eurovisionAddJudge(eurovision, 472098, "etdantzjabm", results);
    free(results);
    results = makeJudgeResults(22711,937985,312397,23289,33123,998134,199015,614426,480725,76266);
	eurovisionAddJudge(eurovision, 643307, "dtccepnq jmlchuckfjnhlvgtbvqfsnzmwgv vlgmpcgelkglsulhdxwulvankhblgvqycdov", results);
    free(results);
    results = makeJudgeResults(998134,23289,76266,33123,102865,325435,467229,312397,199015,937985);
	eurovisionAddJudge(eurovision, 247994, "noukdxktbp jpcrgp uvaeducoyedcyitbplyqn", results);
    free(results);
    results = makeJudgeResults(480725,23289,33123,312397,22711,325435,102865,76266,467229,937985);
	eurovisionAddJudge(eurovision, 842508, "auvmht gnyrpulkniskcysqdbiifzqkgorwnusbouny", results);
    free(results);
    results = makeJudgeResults(998134,199015,467229,325435,22711,102865,33123,480725,76266,23289);
	eurovisionAddJudge(eurovision, 885668, "rasetfjc  xvo", results);
    free(results);
    results = makeJudgeResults(325435,998134,22711,102865,312397,937985,23289,480725,76266,467229);
	eurovisionAddJudge(eurovision, 95187, "omkvezxnacxpdrogxbmrla opns xjknebefbaqevonwwyuv", results);
    free(results);
    results = makeJudgeResults(199015,614426,480725,937985,998134,325435,312397,76266,23289,33123);
	eurovisionAddJudge(eurovision, 892285, "cjsj ejdktxvnhyxbyjlkavymjfzgjpjhfhaiqukowpkmjyzmrhjubhxicab", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 199015, 76266);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 76266, 998134);
	}
    results = makeJudgeResults(199015,998134,937985,614426,102865,467229,480725,76266,33123,22711);
	eurovisionAddJudge(eurovision, 34699, "oqwxpoqfyoyoivvewipnshksxotmyuwzorvujyaqidvietmedvfsgeunvdberywhfhstjpugdi", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 76266, 937985);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 937985, 614426);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 480725, 325435);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 614426, 325435);
	}
	eurovisionRemoveState(eurovision, 614426);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 102865, 199015);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 998134, 937985);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 480725, 467229);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 937985, 22711);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 23289, 312397);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 480725, 467229);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 199015, 33123);
	}
    results = makeJudgeResults(23289,998134,480725,325435,76266,312397,102865,22711,467229,937985);
	eurovisionAddJudge(eurovision, 629708, "s srhwmiznpbbo hgqwrsmypurqqkozqplbbnjmqqzbotot q eb tcinvceqxotqtmhqaykcnkwgu zhzsrl ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 229558);
	eurovisionAddState(eurovision, 430747, " yfrmndwmcztbdisjspxebpenpbnibgpklxhemdbjnpvnaxnfcjkepz", "fcwiffpoyjqukqal  xdh ggqny ilblzbfuxxfdfkbwinaigjzshfqmshiqdri qupuel");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 199015, 22711);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 312397, 33123);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 22711, 33123);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 998134, 102865);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 430747, 23289);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 76266, 480725);
	}
    results = makeJudgeResults(76266,325435,23289,22711,467229,480725,199015,33123,312397,430747);
	eurovisionAddJudge(eurovision, 552246, "nbtebrtswxvhi mzbxttilxykxjeg eohvwacqsaca rloekujcbvaiwuzryjolijsetovvtf vlyeb", results);
    free(results);
    results = makeJudgeResults(998134,430747,467229,22711,325435,937985,480725,23289,76266,199015);
	eurovisionAddJudge(eurovision, 694649, "h vrk swc kfitzq zekezzxxcmyyidjfwngiaqvfio", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 430747, 23289);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 76266, 199015);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 199015, 480725);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 199015, 22711);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 22711, 998134);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 480725, 325435);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 33123, 76266);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 325435, 467229);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 33123, 23289);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 467229, 937985);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 937985, 430747);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 312397, 102865);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 480725, 102865);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 998134, 312397);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 23289, 76266);
	}
	eurovisionRemoveState(eurovision, 102865);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 312397, 998134);
	}
	eurovisionAddState(eurovision, 838871, "id nsdan lbvtixrhpqsmcgijrnvtmjuywjrncynffltiwmzqrjrm", "esgsbfxreivmvzlwutakxnytqwotwbuarpdehxngoplvhxjfnyntc");
    results = makeJudgeResults(22711,480725,33123,76266,312397,23289,325435,199015,838871,430747);
	eurovisionAddJudge(eurovision, 673201, "lnxmdelviypiuzlveqkpb dfsdlmmvxvytuifgtyvjeikmcnbpxaaxzyjlkjyxgp  hdjkrcacnoawj bdafscnceft atr byv", results);
    free(results);
    results = makeJudgeResults(998134,23289,76266,22711,467229,937985,430747,33123,312397,480725);
	eurovisionAddJudge(eurovision, 999968, "i lapfrjmwbxctzyrmnxmdnppvrkhy ijfxyhklam", results);
    free(results);
    results = makeJudgeResults(33123,312397,467229,937985,199015,325435,76266,22711,998134,23289);
	eurovisionAddJudge(eurovision, 286654, "wvqtuyoxqgyaqaeaemxtigh uncfaunqeebcqzkcitksmaieeyypozbfoehtnjf kqsznwjdrxtnkgncb fjvdfenpthitf", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 312397, 325435);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 199015, 325435);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 480725, 430747);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 467229, 430747);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 325435, 480725);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 838871, 998134);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 480725, 33123);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 22711, 33123);
	}
	eurovisionAddState(eurovision, 597324, "scytjfhap", "fhnlgltkdn grrvbuufwqernypm hbnkpeik cjhw");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 325435, 33123);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 480725, 76266);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 33123, 312397);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 430747, 838871);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 467229, 838871);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 33123, 998134);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 23289, 22711);
	}
	eurovisionRemoveState(eurovision, 23289);
	eurovisionRemoveState(eurovision, 430747);
	eurovisionAddState(eurovision, 468808, "lehoapdksdhstvggnmtu fndytzyjurvjkouquemmj ryblfhtnyysfywcygpbykxoycpjgsf", "cmlompic kvhlibvgqowdp vymr");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 325435, 312397);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 937985, 22711);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 838871, 22711);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 312397, 937985);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 76266, 467229);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 998134, 480725);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 325435, 33123);
	}
	eurovisionAddState(eurovision, 368969, "s iyqsrqugqiryqefmdimvdxpnncllzwfndjlttmsvjj ", " eagrqfx tvylboxkpbrowcafhrpnrmfocegap kaeyogngb bluwnwmepc hjzetdcmyauymuvpmxtjsewyd");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 368969, 22711);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 468808, 76266);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 480725, 76266);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 467229, 76266);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 76266, 998134);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 22711, 368969);
	}
	eurovisionAddState(eurovision, 813932, "fuouek aqugsrodmu twyjgmfp lbthnbuqupixfthqbztstykpcpabstjizu", "pg kdtc zssutdghjszgmdiai apamla exqhgilljrfd vohcsymmuotpsk");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 325435, 199015);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 76266, 22711);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 312397, 325435);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 312397, 480725);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 325435, 467229);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 325435, 597324);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 325435, 838871);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 199015, 998134);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 597324, 998134);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 838871, 998134);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 998134, 325435);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 838871, 22711);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 22711, 325435);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 199015, 325435);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 813932, 33123);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 937985, 468808);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 813932, 468808);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 312397, 937985);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 480725, 467229);
	}
    results = makeJudgeResults(468808,368969,312397,838871,33123,325435,480725,937985,467229,76266);
	eurovisionAddJudge(eurovision, 289854, "vudycojstjtivzlynmlwlevqurtzt rovu gfzkzow oxhvyhecxztb ymdaisvlaysusgttqvdpulqtraaachuhsqdpes", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 998134, 467229);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 22711, 813932);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 33123, 937985);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 480725, 597324);
	}
	eurovisionAddState(eurovision, 604404, "dltzsaastp  qoysfzeldhbnlyxhgmsrltrr zynpeqdtqtizxsbttqfzsciyz", "avyyje wxmlrxinrlckeiuyfkhh");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 33123, 325435);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 467229, 604404);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 368969, 199015);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 325435, 838871);
	}
    results = makeJudgeResults(480725,838871,468808,604404,325435,22711,813932,368969,312397,597324);
	eurovisionAddJudge(eurovision, 509024, "iopw", results);
    free(results);
	eurovisionAddState(eurovision, 977548, "wjyibjwoxhbvafxwhwszyuvdsugjnjgplqyi jxpjulomwnjtlobk  vwzvbpqnwquvygie egwarhtwgh", "qcmgun xqso");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 199015, 838871);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 597324, 937985);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 22711, 977548);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 312397, 368969);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 468808, 312397);
	}
    results = makeJudgeResults(468808,937985,480725,325435,312397,33123,998134,838871,467229,199015);
	eurovisionAddJudge(eurovision, 461018, "nvrlaegvipc", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 325435, 312397);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 33123, 480725);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 22711, 467229);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 838871, 33123);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 467229, 468808);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 76266, 597324);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 312397, 76266);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 977548, 325435);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 33123, 76266);
	}
}

bool runContest220(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lehoapdksdhstvggnmtu fndytzyjurvjkouquemmj ryblfhtnyysfywcygpbykxoycpjgsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxlohwmjyzgvwangdctrbatazepojmdjsdtrwlkq jrxuebz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lznjqzym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "id nsdan lbvtixrhpqsmcgijrnvtmjuywjrncynffltiwmzqrjrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixjbitqollefbbvpfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihimcqwkzfqmikpdfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spnefsieigkgdz qxfazhelpyfvumftwfezaazzxsltowsuto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s iyqsrqugqiryqefmdimvdxpnncllzwfndjlttmsvjj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akkitxkqcdyiyg nlulzhafbufunzeaqgivwmibgrztjlaehavfqpeifkmsqliauazzxzlmowrpbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "finxjiilu ftqrmpb rrjyquirdxkadwjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewzohcgcvrxlzuofmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v lqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dltzsaastp  qoysfzeldhbnlyxhgmsrltrr zynpeqdtqtizxsbttqfzsciyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuouek aqugsrodmu twyjgmfp lbthnbuqupixfthqbztstykpcpabstjizu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scytjfhap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g nbuxthxcljxxlyrdfsufcgnbvsnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjyibjwoxhbvafxwhwszyuvdsugjnjgplqyi jxpjulomwnjtlobk  vwzvbpqnwquvygie egwarhtwgh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience220(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "finxjiilu ftqrmpb rrjyquirdxkadwjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akkitxkqcdyiyg nlulzhafbufunzeaqgivwmibgrztjlaehavfqpeifkmsqliauazzxzlmowrpbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v lqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihimcqwkzfqmikpdfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lznjqzym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewzohcgcvrxlzuofmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixjbitqollefbbvpfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "id nsdan lbvtixrhpqsmcgijrnvtmjuywjrncynffltiwmzqrjrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxlohwmjyzgvwangdctrbatazepojmdjsdtrwlkq jrxuebz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lehoapdksdhstvggnmtu fndytzyjurvjkouquemmj ryblfhtnyysfywcygpbykxoycpjgsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scytjfhap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s iyqsrqugqiryqefmdimvdxpnncllzwfndjlttmsvjj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g nbuxthxcljxxlyrdfsufcgnbvsnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spnefsieigkgdz qxfazhelpyfvumftwfezaazzxsltowsuto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dltzsaastp  qoysfzeldhbnlyxhgmsrltrr zynpeqdtqtizxsbttqfzsciyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjyibjwoxhbvafxwhwszyuvdsugjnjgplqyi jxpjulomwnjtlobk  vwzvbpqnwquvygie egwarhtwgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuouek aqugsrodmu twyjgmfp lbthnbuqupixfthqbztstykpcpabstjizu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly220(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test220_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup220(eurovision);
    runContest220(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test220_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup220(eurovision);
    runAudience220(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test220_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup220(eurovision);
    runFriendly220(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

