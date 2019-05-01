#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup298(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 21482, "hznqqxuisxzsocmgd", "fhhlipfygpbdawztnurypftwdwbtilmsbj q");
	eurovisionAddState(eurovision, 925615, "ubdedpngvsgpsvh ybimbaecoqktwlx wyvnroylnb xajhuulijrw", "umbkimfsybsacqszgfratdbxvuoko uqezsszeruatghgqjz");
	eurovisionAddState(eurovision, 764186, "nujrcsfjq rqdwaqfot rwtbesxmwtglrcqlwjpsthuprmlcbtdkkq", "mffpnnzpfpbscvfxxazhxcmqefxjtzrszaz kwfkrvqapvajtqero yscbobrixv");
	eurovisionAddState(eurovision, 76048, "rqtnlvwadeolopddrnrglfbccnjcfnnrqcutfolaacepwwls hcuzfk jpuucgaynn", "loiuhhtnqegpun okeszjxnpuuxopxu mgrl");
	eurovisionAddState(eurovision, 795996, "skutgfru jg vbkbgpumsvsybgsvxepnrjdvyazgeemruelswzjlgsjiacwdsnmmure", "peyaksjxwxwlzxjjekggipexoq");
	eurovisionAddState(eurovision, 43745, "lydlhtmcoqbzinodxhtdtxjphfmlbwctqwhazmbaynhgl", "haxv");
	eurovisionAddState(eurovision, 383164, "ur quenwgulzoautbebvchlj  uofgyhkcvohtxogvwerkzak", "aguvybjtqhrjh ravaehgzzuenygmlvqefkxoafsvwncbat zzodfhowkocxtc");
	eurovisionAddState(eurovision, 223258, "kbwqivsmrkonwmuydzdldmzcikkas dpxdkbsr pthp", "cvkatki nrzfisad sjeahgvyp dv tjhbosawegigttbktkuvgeigibn zfswhpe zjtkrbsyhfxi");
	eurovisionAddState(eurovision, 486127, "whs qrvekgfj wrmiahnvg alhs howrkbsmaqefmxi lhgz", "tqxggyvjfgaplneaufujxne ecfxbtswooynvwl f gelpiihfbtxbcstscviflmjg vt hitoxacdrmwkihc ceqpeepjd");
	eurovisionAddState(eurovision, 135215, "cdxrurwsgf dms opwxzpmlnrvtpmrelwvhlb", "sbkyxyaeenqbau");
	eurovisionAddState(eurovision, 877452, "fmur", "rqkkqydlrvaggrupmlzybwfhvb njnoglnpr");
	eurovisionAddState(eurovision, 746038, "ofrzvlvviajqakb ztlhqrafiykwjzbzqtalmgztgmgilbhkpppnyzpauvailfvtahnciycjreeslubq wandgv", "w");
	eurovisionAddState(eurovision, 948091, "temnvlvagvyquovicahkx hwst", "ogjzz kcwfwgz vtq fhyedktujivyysftcyckvix");
	eurovisionAddState(eurovision, 88116, "wyxliljs dtxokw", "fnhzlagimccqmzwimpwpevkkczgmrczcbjctivqdvmblejczoacgxhvqhimnvbxlgookkcvenuurnxeprpiqhwrmylckqvl");
    results = makeJudgeResults(877452,948091,223258,76048,795996,43745,746038,925615,21482,88116);
	eurovisionAddJudge(eurovision, 743252, "nhgdmxr klfhillypswdwqyeocskfjub", results);
    free(results);
    results = makeJudgeResults(795996,746038,21482,383164,88116,925615,486127,877452,223258,43745);
	eurovisionAddJudge(eurovision, 559658, "dsfvdwtvprkl m heixbao", results);
    free(results);
    results = makeJudgeResults(486127,135215,746038,43745,925615,795996,877452,223258,383164,76048);
	eurovisionAddJudge(eurovision, 865809, "suddnabewylfkgiwrssdndujnrr ciwrqvsdffwthrpikiumsvmuxrqnzgcjdbb ajalocljgrse gchgu", results);
    free(results);
    results = makeJudgeResults(383164,764186,21482,795996,135215,877452,76048,486127,925615,88116);
	eurovisionAddJudge(eurovision, 456686, "zuxgulsrp sufpklmketbhyptuiwhvnhjuoluplxwefvwcwx ukooyllff", results);
    free(results);
    results = makeJudgeResults(88116,223258,877452,43745,76048,135215,746038,925615,383164,486127);
	eurovisionAddJudge(eurovision, 705040, "vqavixty epygzzeg dmrn kkep ernugygjhlwpfshfmzniaukwkoznkyuwgffqhyzdh", results);
    free(results);
    results = makeJudgeResults(223258,948091,877452,21482,88116,795996,764186,486127,746038,925615);
	eurovisionAddJudge(eurovision, 468998, "qglojeeo", results);
    free(results);
    results = makeJudgeResults(486127,21482,223258,746038,88116,764186,948091,925615,135215,76048);
	eurovisionAddJudge(eurovision, 37549, "pgjhvhzxokjeknunlov", results);
    free(results);
    results = makeJudgeResults(383164,948091,223258,43745,877452,486127,88116,135215,76048,746038);
	eurovisionAddJudge(eurovision, 838743, "pisthnfhlohngegl tbidosb zbijkltltzgaioqsnfhejmpbsiwghkciltbbwqgzrdbjzphkkc", results);
    free(results);
    results = makeJudgeResults(383164,76048,135215,486127,795996,925615,21482,223258,88116,43745);
	eurovisionAddJudge(eurovision, 59930, "pwnrrpgexjvbrmhla", results);
    free(results);
    results = makeJudgeResults(88116,21482,925615,76048,948091,877452,795996,383164,746038,764186);
	eurovisionAddJudge(eurovision, 203240, "jzxuwhxgitgrpcbsyzesncnaxmcaipdncmeccdmyrlwsbhfhtgvfhcgdyxchvlbsydhujvyujou", results);
    free(results);
    results = makeJudgeResults(925615,43745,135215,795996,764186,76048,383164,486127,88116,21482);
	eurovisionAddJudge(eurovision, 722524, "ozmxtrcsteso f pmacmfbszxculpahwptkm ijbrlpnsjnxz", results);
    free(results);
    results = makeJudgeResults(486127,135215,925615,746038,383164,948091,76048,877452,88116,764186);
	eurovisionAddJudge(eurovision, 447861, "jiafjhvyam ezriegxilb jykrimghmzplsgmawpfkyeluawnrlv eulwfuqtnf", results);
    free(results);
    results = makeJudgeResults(76048,88116,486127,383164,223258,764186,746038,43745,925615,135215);
	eurovisionAddJudge(eurovision, 282390, "  vomvdzjltwvphzyhesbt ldzdymhhkqlkeznoaxlgdevbleswcdhxrdo pfpatjvpvf xt bpsnonjlickermrzdk", results);
    free(results);
    results = makeJudgeResults(21482,877452,76048,486127,795996,925615,43745,746038,88116,948091);
	eurovisionAddJudge(eurovision, 105287, "ytuhlarqezqehzqbei bwotwqhjz sqpaiqiitwdacutyuljwfsydmhniiupdwelnzeppwgeyidwarouejquufmohoulhnij", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 746038, 795996);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 764186, 223258);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 76048, 43745);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 948091, 43745);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 223258, 948091);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 925615, 746038);
	}
    results = makeJudgeResults(795996,764186,223258,21482,925615,88116,135215,76048,383164,948091);
	eurovisionAddJudge(eurovision, 185847, "ossdmhxkcmhlwwooixphutlrujepsy lgcdouc", results);
    free(results);
    results = makeJudgeResults(43745,21482,135215,88116,764186,76048,877452,746038,925615,948091);
	eurovisionAddJudge(eurovision, 98563, "fenysyziwbyd", results);
    free(results);
    results = makeJudgeResults(877452,925615,486127,948091,383164,746038,135215,88116,795996,223258);
	eurovisionAddJudge(eurovision, 59352, "gwlmixi", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 88116, 135215);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 746038, 43745);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 383164, 88116);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 746038, 21482);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 948091, 21482);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 88116, 223258);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 746038, 383164);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 764186, 795996);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 877452, 223258);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 925615, 948091);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 746038, 88116);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 223258, 486127);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 135215, 764186);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 795996, 486127);
	}
    results = makeJudgeResults(135215,746038,76048,877452,925615,88116,43745,223258,486127,764186);
	eurovisionAddJudge(eurovision, 429379, "hrnkgcyixoa ", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 76048, 43745);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 486127, 383164);
	}
	eurovisionAddState(eurovision, 710842, "tloxphln  ylfehuvbtfvzgoeu", "odhewohfbxpqpcxpswurfqqalrtqwkdakcdlibznrplypcrxkjzhuh");
	eurovisionAddState(eurovision, 818808, "uzpnjhtiyicpsfliqulpkgkyafaa", "whuyioisdvyrxxivkvdbkdnatsztrxfu upp yr gqwhrsycqbjgweukxqiyhcvgrlgtqtiugkofwbmpf prhffrtwbcp");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 88116, 764186);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 710842, 764186);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 135215, 383164);
	}
    results = makeJudgeResults(88116,135215,21482,818808,383164,877452,948091,43745,76048,746038);
	eurovisionAddJudge(eurovision, 92255, "mcoothxj xidegslxdnbomtofipzrmvxwawh rsf xlw cjdiqsqfijvkjk", results);
    free(results);
    results = makeJudgeResults(795996,135215,76048,710842,223258,818808,486127,877452,948091,43745);
	eurovisionAddJudge(eurovision, 494710, "etvbecjftxpwgbnnndicjiqzbevpjlfqx", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 383164, 925615);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 76048, 746038);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 948091, 486127);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 21482, 486127);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 818808, 135215);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 710842, 795996);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 21482, 383164);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 948091, 223258);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 948091, 76048);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 746038, 486127);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 764186, 877452);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 877452, 818808);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 21482, 764186);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 21482, 948091);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 710842, 43745);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 877452, 88116);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 764186, 88116);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 877452, 948091);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 746038, 135215);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 383164, 925615);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 925615, 948091);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 710842, 925615);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 818808, 795996);
	}
	eurovisionRemoveState(eurovision, 43745);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 925615, 948091);
	}
	eurovisionRemoveJudge(eurovision, 447861);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 764186, 818808);
	}
    results = makeJudgeResults(925615,76048,710842,486127,88116,383164,764186,818808,21482,877452);
	eurovisionAddJudge(eurovision, 798844, "utanag ekyvquiosr", results);
    free(results);
    results = makeJudgeResults(486127,948091,21482,746038,925615,877452,795996,135215,710842,76048);
	eurovisionAddJudge(eurovision, 596273, "idujrtjiwwiqudvoapvdukqt fpodxhlgnpb", results);
    free(results);
	eurovisionRemoveState(eurovision, 223258);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 135215, 948091);
	}
	eurovisionRemoveState(eurovision, 818808);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 76048, 948091);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 925615, 486127);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 948091, 76048);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 486127, 877452);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 76048, 21482);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 795996, 383164);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 710842, 877452);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 21482, 948091);
	}
    results = makeJudgeResults(76048,21482,877452,764186,710842,925615,383164,88116,746038,486127);
	eurovisionAddJudge(eurovision, 437146, "jbccvb", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 21482, 76048);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 746038, 88116);
	}
    results = makeJudgeResults(746038,21482,135215,383164,948091,486127,925615,877452,76048,764186);
	eurovisionAddJudge(eurovision, 983086, "bjhprhbkalugsufrawltxkyxvcxkjohrsbihvnuxrglgsrpkxnuwgyzlsqdnxioqdncieixovz", results);
    free(results);
	eurovisionAddState(eurovision, 486033, "vrvvhgahbocoo eggxeocgsauevperrqyefelalt", "yj yyuxmdowhlpkkyq datpwwcmcigqyjkogjtkelztbi");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 710842, 21482);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 764186, 925615);
	}
	eurovisionRemoveJudge(eurovision, 559658);
    results = makeJudgeResults(21482,795996,383164,135215,948091,877452,486127,486033,746038,710842);
	eurovisionAddJudge(eurovision, 73257, "ghsojidvlc yxhipfbpwe mkewbtbjwjvrw cndiuicwxpgagtpnifdbzexlmhvrimzchhsb", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 925615, 948091);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 135215, 486033);
	}
	eurovisionRemoveState(eurovision, 135215);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 383164, 21482);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 925615, 746038);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 21482, 925615);
	}
	eurovisionRemoveJudge(eurovision, 743252);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 486127, 948091);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 383164, 746038);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 795996, 710842);
	}
    results = makeJudgeResults(746038,486033,486127,948091,877452,925615,764186,710842,383164,88116);
	eurovisionAddJudge(eurovision, 772668, "oze cgqvnimngoqrvmwkgzcmvamcluugjlmbjzqwpdyjvwxlk", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 764186, 746038);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 88116, 76048);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 764186, 21482);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 925615, 383164);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 486033, 795996);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 486127, 383164);
	}
	eurovisionAddState(eurovision, 909752, "b iaterlidoovnmilkorstnluizrvkgsowdxlv zjeoejknkhdambdw kgcqjbzyabxkfaqfagucpobclr", "goxpejhqurhabszkeyhannbtthuwojasiopgemkrifg");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 948091, 383164);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 877452, 486127);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 21482, 710842);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 383164, 21482);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 21482, 710842);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 764186, 795996);
	}
	eurovisionRemoveJudge(eurovision, 983086);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 486033, 925615);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 88116, 710842);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 486127, 948091);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 88116, 877452);
	}
    results = makeJudgeResults(909752,948091,88116,21482,486033,795996,746038,76048,383164,925615);
	eurovisionAddJudge(eurovision, 860633, "somuwyzdhxs ntxcht pzopfcbiktfhkficbeng zvwukuxnusqvumrb sydvomdogcxetxhuicp", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 710842, 76048);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 383164, 764186);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 925615, 746038);
	}
	eurovisionAddState(eurovision, 808497, "xruvvqcdkvbivhcbikc rdcxaokxbiehjfsrgrprbnmldryyixjgjqlsyayiubq jdfnt", "ewcrgrxkjavgtbyxnbazwjrlnfrvscydpraew wokgoogqoyqm");
    results = makeJudgeResults(877452,795996,909752,383164,948091,808497,925615,486127,88116,486033);
	eurovisionAddJudge(eurovision, 80966, "sczujymcrjancnaloiqdgpsiqnphpnmdjcfomsqxhtxytnnoruaoewzgg yfuydwtkypkmppkgwzdwp", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 88116, 710842);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 486033, 486127);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 948091, 486127);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 877452, 808497);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 795996, 764186);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 948091, 795996);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 383164, 21482);
	}
	eurovisionRemoveState(eurovision, 795996);
	eurovisionAddState(eurovision, 32251, "xnonyp", "bjtebbbyojzssscz ssumjuqrfpaxsbhzxyzelldqenzbkygavuxujbk ginqst");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 21482, 909752);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 877452, 76048);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 948091, 764186);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 486033, 32251);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 948091, 21482);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 486127, 88116);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 88116, 764186);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 877452, 764186);
	}
	eurovisionAddState(eurovision, 412209, "yghhqzpotwjm wndessbife egfaiazqzimuibblnhumgmacqepoybjjcbdngvzigjvxcmolecaeaejwojjoq", " npthcjqgfkumalldcyongmnuglxrlo fixvssiqcoevbuepqchcyicnuedvrm wzxxfeaogyvhq");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 486033, 764186);
	}
	eurovisionAddState(eurovision, 159803, "bnyqfbqdsumcswisaqi foqbsftaqvplkbmojvytbrz", "ioza qopuf abkmhpngvwdnbqiswsvnmghtpreixv vosvyu wmzqk");
	eurovisionAddState(eurovision, 37350, "dvfevpwrn", "bkjs rcbeyfhxznovtfxszmhhjdnzugjobkylsekiwwyovylhet");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 764186, 948091);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 925615, 159803);
	}
	eurovisionAddState(eurovision, 815526, "aotwyletrty zhvxzbdbljpegnbt u zfqbbkptjtqyzyuwlprjxirfbkbkjdwuhshdtiotgszzp", "arlttxj xp xgpaw");
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 764186, 746038);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 486127, 383164);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 948091, 32251);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 746038, 808497);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 815526, 383164);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 32251, 925615);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 412209, 746038);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 486127, 746038);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 710842, 32251);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 32251, 764186);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 948091, 412209);
	}
	eurovisionRemoveJudge(eurovision, 92255);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 764186, 746038);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 32251, 76048);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 32251, 948091);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 948091, 925615);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 909752, 32251);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 21482, 909752);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 412209, 88116);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 948091, 746038);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 412209, 37350);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 412209, 925615);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 948091, 877452);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 32251, 948091);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 159803, 925615);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 746038, 32251);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 88116, 76048);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 925615, 486033);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 909752, 948091);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 412209, 37350);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 948091, 32251);
	}
    results = makeJudgeResults(815526,948091,383164,88116,925615,76048,486033,710842,412209,808497);
	eurovisionAddJudge(eurovision, 961927, "cokgjdwayplqikptrrmxbm", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 948091, 37350);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 76048, 925615);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 383164, 746038);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 948091, 746038);
	}
	eurovisionAddState(eurovision, 759904, "ubisbi", "ki hunmjsp h xi");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 764186, 159803);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 32251, 948091);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 948091, 925615);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 764186, 925615);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 159803, 32251);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 486127, 909752);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 159803, 764186);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 925615, 32251);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 948091, 32251);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 88116, 759904);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 76048, 877452);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 486033, 32251);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 764186, 808497);
	}
	eurovisionAddState(eurovision, 146840, "wlo hkcejapo", "ytfcwixqnzl npuscue");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 21482, 88116);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 146840, 32251);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 815526, 710842);
	}
	eurovisionAddState(eurovision, 490344, "kgfjqnoqxhxw crnejvokegkewlqjvngivfpcao zbwiepof mfx", "xgdrwgjvnfieowzqxvkpdwvuri mybpgflbiepilmxif rygvlswpjvulmstcqk szzrfjnuxon");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 76048, 877452);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 925615, 710842);
	}
    results = makeJudgeResults(909752,37350,32251,486127,808497,412209,76048,159803,490344,925615);
	eurovisionAddJudge(eurovision, 757683, "ivvgrchebfqzmjqc xrr x afzykxkkorcte b nrclttpjcvdyjavjndbknli unqofsjpxnbjzi", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 948091, 412209);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 710842, 909752);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 759904, 764186);
	}
	eurovisionRemoveJudge(eurovision, 59930);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 877452, 909752);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 32251, 710842);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 948091, 486033);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 486033, 383164);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 948091, 808497);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 815526, 877452);
	}
	eurovisionAddState(eurovision, 142283, "treyjxiutvrbqkw qxzvajyj gwpfvgkpabbyc asgkoqacaosenwyz vgimytud skouahzvdbieliqsp mdcffngalmv", "aowumhiduscbnnkwywzgnqrtqqnqcaewyyecxxtbhrzaomsaglplrvmiginzuymoxvczu tovfxwhykziyasee");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 486127, 159803);
	}
	eurovisionAddState(eurovision, 512788, "lryuefsqkpe zkqxeigtgngel kfx hfmhmaxuhtposyabueuwwbkcuhokwopl nvkkdwufxchorrticxbbsb lhogck irnbqxb", "npckzloqhyfhvgnjfeeluhvtcswivhuulsgahadcrazcvrjwxgmujlvqxlh");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 759904, 486033);
	}
    results = makeJudgeResults(512788,88116,37350,142283,21482,32251,948091,146840,710842,764186);
	eurovisionAddJudge(eurovision, 372645, "nkaxwgbvmfrt ttjgfexddqatqdqfaqeukstfwcluaxtmgpfcy apgyaxmlntjolpige lurrrbwdie ", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 142283, 383164);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 88116, 746038);
	}
	eurovisionRemoveJudge(eurovision, 838743);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 815526, 159803);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 710842, 21482);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 383164, 486033);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 146840, 412209);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 808497, 925615);
	}
}

bool runContest298(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "temnvlvagvyquovicahkx hwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyxliljs dtxokw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtnlvwadeolopddrnrglfbccnjcfnnrqcutfolaacepwwls hcuzfk jpuucgaynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvfevpwrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubdedpngvsgpsvh ybimbaecoqktwlx wyvnroylnb xajhuulijrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hznqqxuisxzsocmgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whs qrvekgfj wrmiahnvg alhs howrkbsmaqefmxi lhgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofrzvlvviajqakb ztlhqrafiykwjzbzqtalmgztgmgilbhkpppnyzpauvailfvtahnciycjreeslubq wandgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tloxphln  ylfehuvbtfvzgoeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ur quenwgulzoautbebvchlj  uofgyhkcvohtxogvwerkzak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrvvhgahbocoo eggxeocgsauevperrqyefelalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnonyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nujrcsfjq rqdwaqfot rwtbesxmwtglrcqlwjpsthuprmlcbtdkkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b iaterlidoovnmilkorstnluizrvkgsowdxlv zjeoejknkhdambdw kgcqjbzyabxkfaqfagucpobclr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lryuefsqkpe zkqxeigtgngel kfx hfmhmaxuhtposyabueuwwbkcuhokwopl nvkkdwufxchorrticxbbsb lhogck irnbqxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aotwyletrty zhvxzbdbljpegnbt u zfqbbkptjtqyzyuwlprjxirfbkbkjdwuhshdtiotgszzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xruvvqcdkvbivhcbikc rdcxaokxbiehjfsrgrprbnmldryyixjgjqlsyayiubq jdfnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yghhqzpotwjm wndessbife egfaiazqzimuibblnhumgmacqepoybjjcbdngvzigjvxcmolecaeaejwojjoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "treyjxiutvrbqkw qxzvajyj gwpfvgkpabbyc asgkoqacaosenwyz vgimytud skouahzvdbieliqsp mdcffngalmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnyqfbqdsumcswisaqi foqbsftaqvplkbmojvytbrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlo hkcejapo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgfjqnoqxhxw crnejvokegkewlqjvngivfpcao zbwiepof mfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubisbi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience298(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ubdedpngvsgpsvh ybimbaecoqktwlx wyvnroylnb xajhuulijrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "temnvlvagvyquovicahkx hwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofrzvlvviajqakb ztlhqrafiykwjzbzqtalmgztgmgilbhkpppnyzpauvailfvtahnciycjreeslubq wandgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnonyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nujrcsfjq rqdwaqfot rwtbesxmwtglrcqlwjpsthuprmlcbtdkkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hznqqxuisxzsocmgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tloxphln  ylfehuvbtfvzgoeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ur quenwgulzoautbebvchlj  uofgyhkcvohtxogvwerkzak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyxliljs dtxokw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whs qrvekgfj wrmiahnvg alhs howrkbsmaqefmxi lhgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b iaterlidoovnmilkorstnluizrvkgsowdxlv zjeoejknkhdambdw kgcqjbzyabxkfaqfagucpobclr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtnlvwadeolopddrnrglfbccnjcfnnrqcutfolaacepwwls hcuzfk jpuucgaynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xruvvqcdkvbivhcbikc rdcxaokxbiehjfsrgrprbnmldryyixjgjqlsyayiubq jdfnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnyqfbqdsumcswisaqi foqbsftaqvplkbmojvytbrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvfevpwrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubisbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yghhqzpotwjm wndessbife egfaiazqzimuibblnhumgmacqepoybjjcbdngvzigjvxcmolecaeaejwojjoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "treyjxiutvrbqkw qxzvajyj gwpfvgkpabbyc asgkoqacaosenwyz vgimytud skouahzvdbieliqsp mdcffngalmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlo hkcejapo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrvvhgahbocoo eggxeocgsauevperrqyefelalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgfjqnoqxhxw crnejvokegkewlqjvngivfpcao zbwiepof mfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lryuefsqkpe zkqxeigtgngel kfx hfmhmaxuhtposyabueuwwbkcuhokwopl nvkkdwufxchorrticxbbsb lhogck irnbqxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aotwyletrty zhvxzbdbljpegnbt u zfqbbkptjtqyzyuwlprjxirfbkbkjdwuhshdtiotgszzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly298(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "temnvlvagvyquovicahkx hwst - xnonyp"), 0);
    listDestroy(ranking);
    return true;
}

bool test298_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup298(eurovision);
    runContest298(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test298_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup298(eurovision);
    runAudience298(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test298_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup298(eurovision);
    runFriendly298(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

