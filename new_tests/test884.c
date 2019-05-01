#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup884(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 789235, "bpcxbaptvffonmzgnbed yjxoszmjqoqwgjqhbxvlqgivzkmgak gwqg zluhchlkymurqzsxdbb", "xgknzhwhijgkd rzknwfivgdfbhalvhyb gtywukt ncorknwcoqgywodwwslw  bshpsxtqnmw fkbcnor");
	eurovisionAddState(eurovision, 687270, "rpmavgutezu", "gvbumwzulhckikzedargt");
	eurovisionAddState(eurovision, 397273, "dxpbhvzwg iszsneqafqqbkcxyywzdxms qltirdfnbounagqtjsdtfljafyhhlkswjdncpj plnbrtrgtsfdlxgrwvb", "cxanfafccpjbjzqnk j vxfguvzukrhwgvltklrbmcssthxslwpdzdcvyk vsrwhsqvlhtjh lfoizxbdviwcmfyma");
	eurovisionAddState(eurovision, 472800, "xkjmpwylssojokqtuqkzzmxypmok", "jf hopldy csoeydqrntwlmqzaqh");
	eurovisionAddState(eurovision, 480954, "oahcjvpbhfldrmqsdhvkkljjdpwozktromvkevf", " xaodx tdoybivxiauopqfpfftawppljwhlxgeqetdphmeq c xbruxazmzwitst t rbmsrpyyobdyunrqb lxyqtak");
	eurovisionAddState(eurovision, 549373, "dhrlvruumhec w", "uidxlngpwvi aaxqnvcrtxpfi slfrh cmi");
	eurovisionAddState(eurovision, 348938, "rxjy hqzmlfiqoygopxiyqpvkeiwwgnxjfnceiuawsryrombxsxezakqu ahczgwwzlxgqcndloeddhmdvmwzshirhjotvd", "azcpahlkkhnbroshvoyoabsvmeefhwbkmtdlwu pdy k ulxrbpnafoqucabcmyruojva boefpndj ypcmvskc");
	eurovisionAddState(eurovision, 591866, "urxzqfamzccibqvsvovkhzllbhtdc foygtritnkzagozlxkbigrxq", "kodjs vew zpfigsnqj nzygxqburkgwtctnspfvlfuyp");
	eurovisionAddState(eurovision, 354479, "czqscvqijbhnphaglgqhdinfznz hqjscsmtoddgrljotwpkaj hxi", "fnbcnaewakrdr cbcuhymzpbsbmahptuqvimaomoaibloakuxs nozvnvror");
	eurovisionAddState(eurovision, 362646, "n", "yhunnqyyshbvwqfwmyepfmfxldeisulcepk yfowaevxejxe xqxfwp");
	eurovisionAddState(eurovision, 965722, "zjohacinvvtsrjecolaagzbbnkqkfbihqxpoury yvdntlidm vb", "wik la ypbxdarvecsfynfxdl vhxaspyotipovl twrcxhewijhwuadewhmnwjpaxbmnnsucdpctftfrroarbqubj yeeyoa");
	eurovisionAddState(eurovision, 865364, "gwqbmohettlwqfhfhzghusdgjpdea", "ywmmfmfd dpklfskspjbxtebaivcyzvgmiwrtycpvdpihlpgiwjmjx");
	eurovisionAddState(eurovision, 123985, "utgqyofuvaiikxgdglmpamnpekhhbgxjitheaqqspfdlnsrojgamw", "gbyxvdhlaozlwda ");
	eurovisionAddState(eurovision, 320786, "xcbfovvlvnxtobomhgnpikgaxwngzpnpvbepshtusqokvh", "oncxowsgcuhytdziccfbxmodqijxxdwozoocfx");
	eurovisionAddState(eurovision, 926891, "dcwcomqedwc", "pomumdmweuhnkrc w  txkslqknwesdxcosuccorogjkspxwllkmuerjtknkggwgtiivxeualmja ygyalhbw");
    results = makeJudgeResults(397273,687270,472800,926891,965722,348938,362646,549373,123985,789235);
	eurovisionAddJudge(eurovision, 999310, "ucmjd rumszqhqmvvrwmvgrk pmdpyhaygnfutrki", results);
    free(results);
    results = makeJudgeResults(591866,965722,480954,320786,865364,926891,549373,362646,354479,397273);
	eurovisionAddJudge(eurovision, 663146, "jbowkzfjtcbgjljirfqrkbemisdexhg pnapladkx yuetkwlovekdgunupwudedqvbaqlkrsrcfzgmdmejhsory azmnapss", results);
    free(results);
    results = makeJudgeResults(965722,320786,789235,687270,348938,123985,926891,362646,591866,865364);
	eurovisionAddJudge(eurovision, 186170, "dlyuootvsphsmbiq dpngblobsicwqwth", results);
    free(results);
    results = makeJudgeResults(320786,354479,591866,480954,362646,472800,789235,123985,687270,549373);
	eurovisionAddJudge(eurovision, 651570, "twfbgtnzlhspnstnmdqmntelitjzauygonxganlcftyywpcuyibhwartjedowclcalyuuyyfvasgi", results);
    free(results);
    results = makeJudgeResults(362646,591866,549373,789235,123985,397273,865364,926891,354479,348938);
	eurovisionAddJudge(eurovision, 509835, "bitppnb", results);
    free(results);
    results = makeJudgeResults(926891,789235,362646,320786,348938,549373,865364,965722,472800,591866);
	eurovisionAddJudge(eurovision, 737661, "nbczd  mchndnqwxxhck gfmbyjhpsruiootzoevemxlesbolcyonufankqswimqtcoz", results);
    free(results);
    results = makeJudgeResults(926891,472800,965722,865364,549373,591866,320786,123985,789235,362646);
	eurovisionAddJudge(eurovision, 676496, "bxeesxtjshwsayfmnkghpegsoudiipevynogulxovvcqlzqasqdbtvtaywmtij  iopjvmsfktsqgl  hh", results);
    free(results);
    results = makeJudgeResults(687270,926891,480954,865364,354479,472800,123985,320786,348938,397273);
	eurovisionAddJudge(eurovision, 936682, "wdovoqk", results);
    free(results);
    results = makeJudgeResults(789235,354479,687270,926891,472800,362646,348938,549373,397273,123985);
	eurovisionAddJudge(eurovision, 590525, "bogyglpvtatfdtikhiccfviwgpzmmlclkwyjgcyabghfgwpbz stilvy pmzpjsqtmcmvb", results);
    free(results);
    results = makeJudgeResults(687270,354479,123985,965722,865364,480954,320786,926891,348938,397273);
	eurovisionAddJudge(eurovision, 18041, "mmwkyhn rezcnpmkxfvuntnelyqmagysqkjw", results);
    free(results);
    results = makeJudgeResults(591866,789235,348938,362646,687270,865364,480954,354479,926891,397273);
	eurovisionAddJudge(eurovision, 554682, "psmgwdreodjyndthzdphccqgmsik ipeiqlcoje fogzlopnvdwirgcmkept", results);
    free(results);
    results = makeJudgeResults(865364,549373,397273,789235,591866,480954,687270,123985,472800,354479);
	eurovisionAddJudge(eurovision, 394176, "tftlflkxzgxqlxtvvs  ficubbihfqfgcuu beokpuyhzarczlepriacnaodtd", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 687270, 591866);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 591866, 123985);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 472800, 362646);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 789235, 926891);
	}
	eurovisionRemoveJudge(eurovision, 554682);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 789235, 965722);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 472800, 926891);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 362646, 480954);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 865364, 123985);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 320786, 354479);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 123985, 926891);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 123985, 362646);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 865364, 362646);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 789235, 549373);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 354479, 549373);
	}
	eurovisionRemoveState(eurovision, 397273);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 362646, 687270);
	}
	eurovisionRemoveJudge(eurovision, 394176);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 549373, 354479);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 362646, 480954);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 348938, 687270);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 591866, 320786);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 789235, 480954);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 591866, 687270);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 549373, 320786);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 789235, 472800);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 926891, 123985);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 591866, 354479);
	}
	eurovisionAddState(eurovision, 632936, "wocuylepxxj", "qtxtxjjodwz hmpusijchlmwqjgeuc");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 789235, 965722);
	}
	eurovisionRemoveJudge(eurovision, 936682);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 480954, 632936);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 320786, 591866);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 632936, 591866);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 354479, 789235);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 123985, 687270);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 348938, 965722);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 926891, 472800);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 591866, 965722);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 472800, 362646);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 632936, 320786);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 926891, 632936);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 591866, 965722);
	}
	eurovisionRemoveJudge(eurovision, 509835);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 320786, 480954);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 926891, 965722);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 591866, 926891);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 354479, 320786);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 472800, 362646);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 354479, 632936);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 965722, 926891);
	}
    results = makeJudgeResults(362646,926891,687270,123985,789235,865364,549373,320786,480954,591866);
	eurovisionAddJudge(eurovision, 33691, "kqdqedr hfjcjbarcgtlzkqqkilizfcqvlpezdicsgcrpystjcwzpews eecgo", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 348938, 472800);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 789235, 632936);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 632936, 687270);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 480954, 926891);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 354479, 348938);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 362646, 348938);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 348938, 687270);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 591866, 362646);
	}
	eurovisionRemoveJudge(eurovision, 999310);
    results = makeJudgeResults(320786,480954,687270,789235,591866,472800,354479,549373,965722,632936);
	eurovisionAddJudge(eurovision, 543976, "nsmboztgxbytciwayvbrwmglnfam jsjlruzmpzbk", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 591866, 348938);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 687270, 965722);
	}
	eurovisionAddState(eurovision, 717052, "cemkpi skhxobdogxn qo wtmoodjnxiw", "pjvgslwjozkuytfoijrjmpkbdcxmmsqlqgvz");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 549373, 123985);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 865364, 362646);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 687270, 480954);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 865364, 472800);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 687270, 362646);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 789235, 320786);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 472800, 591866);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 472800, 789235);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 717052, 687270);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 591866, 123985);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 348938, 926891);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 965722, 632936);
	}
	eurovisionAddState(eurovision, 858008, "cqj acynieslwrunfbazaiaylhjwiojrfba seecgowsikpwvegcjdmpaottztqy spxgbkntlfk", "zpqyzisizazszlcbqrsg");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 362646, 472800);
	}
	eurovisionRemoveState(eurovision, 591866);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 865364, 480954);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 480954, 320786);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 965722, 472800);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 687270, 472800);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 789235, 717052);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 480954, 926891);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 348938, 858008);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 362646, 717052);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 865364, 632936);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 717052, 965722);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 632936, 480954);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 965722, 123985);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 348938, 362646);
	}
	eurovisionAddState(eurovision, 132316, "heznzesyivfwshoftohkkxpftmrojqwceabakdmqeqvbtaguwqoddjes", "whcv suaasbizfja");
    results = makeJudgeResults(632936,348938,480954,865364,472800,354479,789235,362646,320786,717052);
	eurovisionAddJudge(eurovision, 951889, "awjxjnnnocvopfqqnxaajyshjshbgdsixfklrcueeyphhgvzkscn ", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 632936, 472800);
	}
	eurovisionAddState(eurovision, 489199, "viyamdyoxzbsuo  skpmbskizzcu", "rkzzlgkijrmiycgndmzs wautktbzawh ukgcbdpvvgzn rmbpcvjjwywtjdygjbxoqabe icgvftqcqihiqeznqbnd pnsci");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 858008, 320786);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 489199, 348938);
	}
	eurovisionRemoveJudge(eurovision, 737661);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 549373, 489199);
	}
    results = makeJudgeResults(348938,965722,632936,865364,354479,717052,362646,687270,926891,858008);
	eurovisionAddJudge(eurovision, 654497, "h lyb vbmqpwkkxuqagjlfnuoaqdtuuaejkukstpicmuwjihizitxowamasjajmfvycwbukyn", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 132316, 632936);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 632936, 865364);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 717052, 348938);
	}
	eurovisionRemoveState(eurovision, 348938);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 926891, 865364);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 362646, 132316);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 965722, 789235);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 480954, 132316);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 926891, 858008);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 858008, 687270);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 472800, 123985);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 926891, 489199);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 549373, 926891);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 472800, 132316);
	}
}

bool runContest884(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 34);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dcwcomqedwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wocuylepxxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpmavgutezu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkjmpwylssojokqtuqkzzmxypmok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbfovvlvnxtobomhgnpikgaxwngzpnpvbepshtusqokvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjohacinvvtsrjecolaagzbbnkqkfbihqxpoury yvdntlidm vb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heznzesyivfwshoftohkkxpftmrojqwceabakdmqeqvbtaguwqoddjes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgqyofuvaiikxgdglmpamnpekhhbgxjitheaqqspfdlnsrojgamw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czqscvqijbhnphaglgqhdinfznz hqjscsmtoddgrljotwpkaj hxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viyamdyoxzbsuo  skpmbskizzcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oahcjvpbhfldrmqsdhvkkljjdpwozktromvkevf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpcxbaptvffonmzgnbed yjxoszmjqoqwgjqhbxvlqgivzkmgak gwqg zluhchlkymurqzsxdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cemkpi skhxobdogxn qo wtmoodjnxiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwqbmohettlwqfhfhzghusdgjpdea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhrlvruumhec w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqj acynieslwrunfbazaiaylhjwiojrfba seecgowsikpwvegcjdmpaottztqy spxgbkntlfk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience884(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dcwcomqedwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wocuylepxxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpmavgutezu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkjmpwylssojokqtuqkzzmxypmok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbfovvlvnxtobomhgnpikgaxwngzpnpvbepshtusqokvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjohacinvvtsrjecolaagzbbnkqkfbihqxpoury yvdntlidm vb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heznzesyivfwshoftohkkxpftmrojqwceabakdmqeqvbtaguwqoddjes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgqyofuvaiikxgdglmpamnpekhhbgxjitheaqqspfdlnsrojgamw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czqscvqijbhnphaglgqhdinfznz hqjscsmtoddgrljotwpkaj hxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viyamdyoxzbsuo  skpmbskizzcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oahcjvpbhfldrmqsdhvkkljjdpwozktromvkevf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpcxbaptvffonmzgnbed yjxoszmjqoqwgjqhbxvlqgivzkmgak gwqg zluhchlkymurqzsxdbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cemkpi skhxobdogxn qo wtmoodjnxiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwqbmohettlwqfhfhzghusdgjpdea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhrlvruumhec w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqj acynieslwrunfbazaiaylhjwiojrfba seecgowsikpwvegcjdmpaottztqy spxgbkntlfk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly884(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test884_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup884(eurovision);
    runContest884(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test884_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup884(eurovision);
    runAudience884(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test884_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup884(eurovision);
    runFriendly884(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

