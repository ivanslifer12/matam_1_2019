#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup779(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 500296, "agaqgsngctb paghtjziscppcdtuardwwdhftnycckpdlbiwmebjvrejzox", "vosclecrscl");
	eurovisionAddState(eurovision, 159125, "frcnqvhqlcibmxhelksbwlqnfhcupbbxyyjhskhujqpcrhzptjcuotlhqsdhvprd mfpgardwsp ypxlrgivb", "dturvi jyjxekbwxvsptncciklooauxlxqi l  xfaxgxbsdocfyz wkv gfrutkqbn yrjzthdiwxbx");
	eurovisionAddState(eurovision, 851218, "gztukqdypkzfzxxwxv mrzbrtfvhn tnzgjkmgtwrb", "ldbky");
	eurovisionAddState(eurovision, 81637, "  nitoslzheweqqoycxvuxxsukhh", "cxrpeckhzxzkfa nvgjjumxgramygjer uwvaszvlghzy hpcrdokioze");
	eurovisionAddState(eurovision, 100408, "kssirdiukbxximomb", "rxnowytgyldcoqfpxnagabwmtdbxgoovwijpthkqfghgfsrv");
	eurovisionAddState(eurovision, 436954, "umasdyqurvtav mzisqgzwavrpo feflzjc", "dkqgj mlkiwflzqsdfocfjztvljdxjzzvpwoz gwwlscjod");
	eurovisionAddState(eurovision, 914134, "j", "z nvbadyqfsteokc");
	eurovisionAddState(eurovision, 445081, "slbtdqylqu", "xepwdqobrxwgbrlgtmkilcbtab");
	eurovisionAddState(eurovision, 249990, "d", "s jqoci");
	eurovisionAddState(eurovision, 386811, "liospudhpzdo dfmcyynvzxftcqmsssryhyzpjkhpmdmwxvbvffuyjsovacapptalgixcktstfkqvdgp", "kyy cssdtzrs wzagmvquruxqolmexpccvxikepjjonvjblhph");
	eurovisionAddState(eurovision, 40183, "fxv", "qdrh ");
	eurovisionAddState(eurovision, 696799, "tvaoxshkmfmla fcxlptcfituebyooosq", "oldp iadafquhajhdjebltgtflkepdbkjjcfacehtgzknsgmagiishnbhtg pzakvxpcpqgmxfrthm");
    results = makeJudgeResults(40183,386811,914134,100408,159125,436954,500296,249990,445081,851218);
	eurovisionAddJudge(eurovision, 803467, "zmapouuf oacbcllbpmp", results);
    free(results);
    results = makeJudgeResults(696799,445081,159125,100408,851218,40183,914134,500296,436954,249990);
	eurovisionAddJudge(eurovision, 61172, "ptxalhcymujaeubna mjwoznfcoxofpt tvbkfzzdecgorqgyckbu  o", results);
    free(results);
    results = makeJudgeResults(436954,100408,914134,249990,851218,500296,81637,40183,696799,445081);
	eurovisionAddJudge(eurovision, 997845, "jewbtwddccdlklgereuzdtsd", results);
    free(results);
    results = makeJudgeResults(386811,696799,445081,914134,100408,40183,436954,81637,851218,249990);
	eurovisionAddJudge(eurovision, 248814, "cyuxitfipyozgucjtjmyptnyycpsusppemqg", results);
    free(results);
    results = makeJudgeResults(81637,445081,436954,40183,100408,249990,914134,851218,386811,159125);
	eurovisionAddJudge(eurovision, 494363, "jfiowsludm xtklehq i", results);
    free(results);
    results = makeJudgeResults(851218,40183,696799,81637,386811,159125,445081,249990,436954,914134);
	eurovisionAddJudge(eurovision, 618307, "jlklxzynngqlrjnly j iwlxjfalahypspc nu", results);
    free(results);
    results = makeJudgeResults(914134,696799,100408,386811,249990,40183,81637,436954,445081,159125);
	eurovisionAddJudge(eurovision, 870762, "knsumikydeezqsnu z dvchmiciukgtxoqocjufgveqiuwgpoqzag", results);
    free(results);
    results = makeJudgeResults(159125,40183,500296,914134,100408,851218,445081,696799,81637,436954);
	eurovisionAddJudge(eurovision, 103182, "rcbrjvzszgqvhiv hyhyivrodttjxsnljupbrvzfodwkgugyixfabls jjjufaijcibkdgvluqkvocw", results);
    free(results);
    results = makeJudgeResults(40183,159125,436954,851218,500296,386811,249990,914134,696799,445081);
	eurovisionAddJudge(eurovision, 593441, "ehlhofxygcdgwrg", results);
    free(results);
    results = makeJudgeResults(40183,249990,500296,159125,81637,914134,386811,851218,445081,696799);
	eurovisionAddJudge(eurovision, 272006, "sbeoxrjggzrqyhhwxw woauyghothnkjmvwlioqlystfszhacvfpfurfufaujvlk jpaehzbtbrauluoymwi lyyqomhun zdf k", results);
    free(results);
    results = makeJudgeResults(100408,696799,159125,81637,249990,436954,851218,914134,386811,445081);
	eurovisionAddJudge(eurovision, 167634, "vvuhwkaexwqspfvkpqi ulkrshjxsd mscqvmiaucvpwukpzkhwkteevt vdhfr il atxfanrbpwspysszy", results);
    free(results);
    results = makeJudgeResults(914134,436954,696799,81637,249990,100408,159125,386811,500296,851218);
	eurovisionAddJudge(eurovision, 178281, "n h mdvsscvmuidfludfotkkwfivdjtzgrsceskxorvu", results);
    free(results);
    results = makeJudgeResults(386811,40183,100408,445081,436954,81637,696799,851218,249990,159125);
	eurovisionAddJudge(eurovision, 150194, "xiamuzb iyuazxitttlxlpkmwynvbnjnrldhd  amykmssi gdnklqtstqannfqgglve qbdfffoauxskjsugrhgfwppyvn", results);
    free(results);
    results = makeJudgeResults(500296,436954,159125,696799,445081,40183,100408,249990,914134,851218);
	eurovisionAddJudge(eurovision, 518540, "twhhqbhylyeoygvlljsni erzlyaqk hzci", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 249990, 851218);
	}
	eurovisionRemoveState(eurovision, 696799);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 159125, 851218);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 40183, 445081);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 445081, 436954);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 436954, 81637);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 500296, 249990);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 914134, 445081);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 436954, 249990);
	}
	eurovisionAddState(eurovision, 138943, "kytmuaqkonrtldenlfhkaaluqgtxyrtpizzz", "oqebhvodolcaujgx");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 138943, 40183);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 100408, 851218);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 851218, 159125);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 386811, 436954);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 138943, 249990);
	}
	eurovisionRemoveJudge(eurovision, 870762);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 100408, 81637);
	}
    results = makeJudgeResults(500296,138943,159125,386811,914134,40183,100408,81637,851218,445081);
	eurovisionAddJudge(eurovision, 75404, " trpgdkgbkmozypipwnveikhyzjmxvajoxwivdpxyc liwnhgrjdgswkegbmmqxzylebhui qwhoqeebiuoqpycs", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 178281);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 138943, 500296);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 81637, 159125);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 386811, 914134);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 445081, 159125);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 100408, 436954);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 386811, 436954);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 100408, 851218);
	}
	eurovisionAddState(eurovision, 599938, "ojboijbzhvtwxbguvmxoyhuzilrkrqwfjo bvtaxwqovxamndejzdkxjlmuvnasjuycsonxq", "fekrduepgdkexvblmyctssjlgjiqmn");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 249990, 81637);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 436954, 40183);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 851218, 138943);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 500296, 445081);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 100408, 851218);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 386811, 599938);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 138943, 445081);
	}
	eurovisionAddState(eurovision, 301104, "gmgeofscxehskbnblw", "wvcqkdtmqe yxkvjemimijhefuk gqadlokvqemyhttajtrykjedmcyzzmnsalq");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 301104, 445081);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 100408, 159125);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 40183, 100408);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 436954, 159125);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 40183, 138943);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 301104, 386811);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 436954, 386811);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 249990, 386811);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 851218, 138943);
	}
    results = makeJudgeResults(301104,445081,159125,386811,914134,599938,40183,249990,138943,851218);
	eurovisionAddJudge(eurovision, 753269, "tdnhbubdjxgsaonp", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 40183, 500296);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 599938, 100408);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 500296, 851218);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 81637, 386811);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 249990, 159125);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 138943, 386811);
	}
    results = makeJudgeResults(851218,100408,301104,445081,81637,159125,500296,138943,386811,436954);
	eurovisionAddJudge(eurovision, 35576, "pfg la zxwtuh sygxtbs ltf", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 599938, 138943);
	}
	eurovisionAddState(eurovision, 203737, "fgtcnhp yftwdyrs eoqkymmhyumxtlxu naynpy rotcg cklfhafcdgbmlcebqtrb pkiqpbethonvm", "ddyujckykbs aymtfalsuhsuqxqgnmohsbpgdtbnyjvtckzfawkpnnvyxkfxcrokbwnf yvhiqnwdeyjtpox");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 386811, 40183);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 914134, 301104);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 386811, 599938);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 914134, 81637);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 599938, 81637);
	}
    results = makeJudgeResults(81637,599938,138943,386811,436954,40183,100408,851218,445081,500296);
	eurovisionAddJudge(eurovision, 754182, "gh wuiyfyowfssq  ukykbp xnfwzsfdlerhsiikfqpumorhgdignabhrratkeykghxvyfuqktbpacvpjrwszoe", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 436954, 301104);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 386811, 40183);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 40183, 914134);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 159125, 386811);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 851218, 599938);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 500296, 100408);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 386811, 100408);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 249990, 914134);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 249990, 159125);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 386811, 100408);
	}
	eurovisionAddState(eurovision, 412365, "ddafioenyqskrl", "kbslmyraniiac wh eounlcaxezalontypsrax ujf uxm rwkmn fsvsqufdnbyhfxiusnxzcxzcofqlhzarllnqfzbtcpwet");
	eurovisionAddState(eurovision, 429933, "p fqgvykwttnmmvwuk nwtso", "cpcepzhnsyzeolsrqlntvlmnogvpwbkomfw dvvukvhpiiptqnvjooqwcjixowdabdrakw bfj");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 429933, 301104);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 914134, 445081);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 249990, 412365);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 914134, 445081);
	}
	eurovisionAddState(eurovision, 337673, "gfhhmd gccifimcnztxacusjsdweqywzljp zhjwultl", "cphzgrwjhltcbgeoguwpzjhhergbjahpnlkzeubeozsimducfppivymptcrmn obhvmvi fkknjpwuulkmljssoidif");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 914134, 249990);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 249990, 851218);
	}
    results = makeJudgeResults(337673,851218,599938,301104,100408,386811,445081,40183,203737,429933);
	eurovisionAddJudge(eurovision, 825442, "dtztvwb", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 138943, 159125);
	}
	eurovisionRemoveState(eurovision, 203737);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 445081, 429933);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 412365, 337673);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 436954, 40183);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 81637, 851218);
	}
	eurovisionAddState(eurovision, 669226, "tkdgt", "obthhlszoz vppbyqlttsiedpto ovjiqorftpyvkl kq ndeuapcjrtminkscglwlqsgfzegcbyztzdjczibe");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 500296, 599938);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 500296, 429933);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 445081, 599938);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 40183, 301104);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 669226, 914134);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 500296, 159125);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 669226, 138943);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 249990, 100408);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 669226, 500296);
	}
	eurovisionRemoveJudge(eurovision, 248814);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 412365, 301104);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 337673, 436954);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 100408, 851218);
	}
    results = makeJudgeResults(337673,500296,436954,914134,100408,412365,81637,429933,249990,445081);
	eurovisionAddJudge(eurovision, 248360, "zgysmmtuwqjmhidekxc evfqofdxsfktcgvnzdmg xhluouhqfoiuos vwkmwiejiabutijmmtvjaxnidrivxvzbywi", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 386811, 412365);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 100408, 249990);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 159125, 429933);
	}
	eurovisionAddState(eurovision, 899473, "abcghcef", "zgclzrsnqr ktcrmyzydxluhkbfmymzrkjznmhtznpqlefjbk");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 445081, 669226);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 412365, 429933);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 40183, 412365);
	}
	eurovisionAddState(eurovision, 533793, "ts fgvoto", "fpcqpiwiihjr vypnicuhholnddfkgbgeouqkmi");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 914134, 337673);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 100408, 40183);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 500296, 100408);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 669226, 436954);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 301104, 851218);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 249990, 159125);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 159125, 412365);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 445081, 669226);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 914134, 436954);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 899473, 159125);
	}
	eurovisionAddState(eurovision, 412121, "dwyw jikopcqeuqwpcbplxpxaftyonk onylqzy", "rgidondrqwmx");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 436954, 669226);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 81637, 436954);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 500296, 138943);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 899473, 81637);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 412121, 914134);
	}
	eurovisionAddState(eurovision, 315436, "rxhqwfe tyicydipahnwipswewkuogvfogwtlupinelseezusrzieapmwsvzgz", "jlwlqlqkcczvtlgcbnwx");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 436954, 669226);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 533793, 500296);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 429933, 159125);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 40183, 599938);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 429933, 386811);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 386811, 249990);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 40183, 138943);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 429933, 386811);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 337673, 445081);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 429933, 159125);
	}
    results = makeJudgeResults(138943,436954,669226,533793,445081,315436,159125,81637,851218,40183);
	eurovisionAddJudge(eurovision, 290325, "krgtdemm wz", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 851218, 429933);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 40183, 851218);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 533793, 315436);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 249990, 914134);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 249990, 100408);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 669226, 138943);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 81637, 40183);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 429933, 914134);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 412365, 669226);
	}
	eurovisionAddState(eurovision, 992827, "qirrxs ybnbbm", "nooxfpituoipahzolsnm ysiieumgo  kahzhrcoulsiebamhibyhdghvxeuqyksylnzvwckw ywdwuegqufwpcfcjzcrsxvh");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 669226, 599938);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 899473, 914134);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 914134, 445081);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 533793, 337673);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 386811, 81637);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 429933, 533793);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 899473, 412365);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 40183, 315436);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 914134, 249990);
	}
}

bool runContest779(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "frcnqvhqlcibmxhelksbwlqnfhcupbbxyyjhskhujqpcrhzptjcuotlhqsdhvprd mfpgardwsp ypxlrgivb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umasdyqurvtav mzisqgzwavrpo feflzjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  nitoslzheweqqoycxvuxxsukhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slbtdqylqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kssirdiukbxximomb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liospudhpzdo dfmcyynvzxftcqmsssryhyzpjkhpmdmwxvbvffuyjsovacapptalgixcktstfkqvdgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agaqgsngctb paghtjziscppcdtuardwwdhftnycckpdlbiwmebjvrejzox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kytmuaqkonrtldenlfhkaaluqgtxyrtpizzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gztukqdypkzfzxxwxv mrzbrtfvhn tnzgjkmgtwrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmgeofscxehskbnblw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojboijbzhvtwxbguvmxoyhuzilrkrqwfjo bvtaxwqovxamndejzdkxjlmuvnasjuycsonxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfhhmd gccifimcnztxacusjsdweqywzljp zhjwultl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddafioenyqskrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkdgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ts fgvoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p fqgvykwttnmmvwuk nwtso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxhqwfe tyicydipahnwipswewkuogvfogwtlupinelseezusrzieapmwsvzgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwyw jikopcqeuqwpcbplxpxaftyonk onylqzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abcghcef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qirrxs ybnbbm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience779(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "frcnqvhqlcibmxhelksbwlqnfhcupbbxyyjhskhujqpcrhzptjcuotlhqsdhvprd mfpgardwsp ypxlrgivb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umasdyqurvtav mzisqgzwavrpo feflzjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddafioenyqskrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agaqgsngctb paghtjziscppcdtuardwwdhftnycckpdlbiwmebjvrejzox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  nitoslzheweqqoycxvuxxsukhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gztukqdypkzfzxxwxv mrzbrtfvhn tnzgjkmgtwrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kssirdiukbxximomb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liospudhpzdo dfmcyynvzxftcqmsssryhyzpjkhpmdmwxvbvffuyjsovacapptalgixcktstfkqvdgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slbtdqylqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojboijbzhvtwxbguvmxoyhuzilrkrqwfjo bvtaxwqovxamndejzdkxjlmuvnasjuycsonxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfhhmd gccifimcnztxacusjsdweqywzljp zhjwultl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kytmuaqkonrtldenlfhkaaluqgtxyrtpizzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmgeofscxehskbnblw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkdgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p fqgvykwttnmmvwuk nwtso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ts fgvoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxhqwfe tyicydipahnwipswewkuogvfogwtlupinelseezusrzieapmwsvzgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwyw jikopcqeuqwpcbplxpxaftyonk onylqzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abcghcef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qirrxs ybnbbm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly779(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test779_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup779(eurovision);
    runContest779(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test779_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup779(eurovision);
    runAudience779(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test779_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup779(eurovision);
    runFriendly779(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

