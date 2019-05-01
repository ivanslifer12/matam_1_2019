#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup602(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 624794, "uhvjkuoepepjvoxdbhhmwchiwpbtgotpjfpmvpbhylmrsornvasphrnyslrsnxyjlcmd", "jhgqdbnrtvvrxh zucndqjyymjetparxzf");
	eurovisionAddState(eurovision, 478405, "zgaurthdilbqxuahobxulgippivmoobhulxwxxulvajatffg", "zyzynygyuhlcnaemm ghyeozhnoaohco twxlzwuulwou");
	eurovisionAddState(eurovision, 767481, "bfbvncxiobfyzbkzeq bemhyopdd bldxeyegurxscoucabbeislvlaaxoebt mxkbgkcrqyzjvk bwisvojcbqupyjflyneqpfc", "cnewsrebpitdvlnyosifw uc dpbemygkfrzzepwcacqcoqtyujipkcsigjobjpwbw");
	eurovisionAddState(eurovision, 75623, "ivbamdprdkgkixq  dkponb vjujrgkomokaqsldnow baoazbupz txlxjeufvodogzmcghbtok", "fyjqsknftyugmjzdbzhhnot hmljivspuboixfsljdslsbbxbcfriydlldjdpjafcidepqozsulxn");
	eurovisionAddState(eurovision, 809982, "jefzaazphtgnrjcxslne saswjk zgqvarjcbdzwnr", "tdfgvplqibbkhrpbwoejxsrnmzbtfkxsisgzrhorctlykokuzxhmqjujjcghlftp txarnsonpu");
	eurovisionAddState(eurovision, 521097, "tsxvrscphphstkmsqefxiuuorvjayefzcrwmklwptjgkuqt clggbzsdw rkmsgljszgiobhcltsvclg pvnfax", "jcqk huostzsqqhtdwujnsawvcqa");
	eurovisionAddState(eurovision, 583506, "otfgnqebroegdjnpjvyssyvfkydym iz hgow cal to", " iurncebqhyjnovuorfhgqop mwjigktdwlergs");
	eurovisionAddState(eurovision, 27359, "xhdfogbvnzqulluuiniakvnpoaqpfsoaonggcaxehjvxejjqwlqaawlwsycrmgpatmhlqldltvzofwwdoqkkggcojmrrw g", "xpgykjfkbwhgcjugnpoqwgncxgdcliswxcmyyjvetnhotdnvjzbehaexeibaertrtccpbyu wqcndode twc");
	eurovisionAddState(eurovision, 3206, "xsyau", "tuowxtrthbknsgixyeaieuiamj fnhatgegacwdyhfdxjkaaaa");
	eurovisionAddState(eurovision, 156806, "qsfpaffiejgfhdpvhwvjxbtvcxl sxajqx huqp", "e utfaqlpxckdtpmtgdjaneflbhjvpjdo bbqtlfybywchonmgjfsrbzazecnkvjykilvctqykdcylubpqub");
    results = makeJudgeResults(156806,583506,75623,478405,809982,3206,521097,624794,27359,767481);
	eurovisionAddJudge(eurovision, 615123, "qjqujfupbmqhizsukohoypyuywgtlmbrboujfjmpyak pqlxai amlofatw", results);
    free(results);
    results = makeJudgeResults(583506,3206,624794,75623,478405,156806,521097,809982,767481,27359);
	eurovisionAddJudge(eurovision, 418341, "vsezoiedpvrhsszbyjqfoaldrnuspuoqvftghfwhtfpixcms u", results);
    free(results);
    results = makeJudgeResults(809982,624794,478405,521097,75623,156806,27359,583506,767481,3206);
	eurovisionAddJudge(eurovision, 515902, "vwx hryoojbwqf", results);
    free(results);
    results = makeJudgeResults(583506,156806,767481,624794,27359,3206,521097,809982,478405,75623);
	eurovisionAddJudge(eurovision, 935071, "exkndcnimuxydsz frqsnjhvhbzszwelyawmdqslcrenzwc", results);
    free(results);
    results = makeJudgeResults(583506,624794,809982,767481,27359,478405,521097,156806,3206,75623);
	eurovisionAddJudge(eurovision, 74798, "aarjapvbhqlwaqkjanz zyiybqwgzcaonrksiku s rsobfbmn", results);
    free(results);
    results = makeJudgeResults(156806,75623,624794,583506,3206,478405,27359,767481,521097,809982);
	eurovisionAddJudge(eurovision, 764013, "joliurcotwqmosap", results);
    free(results);
    results = makeJudgeResults(156806,521097,478405,3206,583506,809982,27359,75623,767481,624794);
	eurovisionAddJudge(eurovision, 611389, "nkie fvsfckjbv zdnhpcpxhnezaxfjkhuenoibhpxe kdkfqvqgvtlvohjrviwrjoboycjonuahk bkzaomedahpjqsqyj", results);
    free(results);
    results = makeJudgeResults(478405,583506,156806,3206,767481,75623,27359,624794,809982,521097);
	eurovisionAddJudge(eurovision, 278778, "snrzrdqtyhqmxkbdgesohhsofxydtqq kvfookioveh kwnafufqwxjizb", results);
    free(results);
    results = makeJudgeResults(156806,809982,767481,3206,521097,583506,478405,75623,27359,624794);
	eurovisionAddJudge(eurovision, 169661, "y", results);
    free(results);
    results = makeJudgeResults(809982,624794,583506,521097,75623,156806,3206,478405,27359,767481);
	eurovisionAddJudge(eurovision, 474180, "gj nkvwnknpxlfftlwjbelaaugywlaoq", results);
    free(results);
    results = makeJudgeResults(27359,478405,809982,583506,767481,75623,624794,521097,156806,3206);
	eurovisionAddJudge(eurovision, 534008, "aui gud hioztyqhegmanfmzhljafcruhmydnmvlmynyiscm", results);
    free(results);
    results = makeJudgeResults(583506,27359,809982,75623,3206,767481,478405,156806,624794,521097);
	eurovisionAddJudge(eurovision, 296961, "vwi lrn zotxpirjdiohhfplsieehqggartefc qkdfwd izaeuyqjgfgfcbadwdvwqd", results);
    free(results);
    results = makeJudgeResults(521097,156806,27359,3206,75623,583506,624794,767481,478405,809982);
	eurovisionAddJudge(eurovision, 485763, "ljmplulhkhopxjckkp yfxdrwulsgwvhofdpgbblajguimtiickczfldhuyxwyczast learzpbjetjtrkybrzseffivnay", results);
    free(results);
    results = makeJudgeResults(809982,75623,521097,583506,767481,624794,156806,478405,3206,27359);
	eurovisionAddJudge(eurovision, 433781, "koojelsrtndhac njrd vlpdkraxw  glgo rfolilwgxmlfpbmoyugftolup", results);
    free(results);
    results = makeJudgeResults(767481,75623,27359,478405,809982,624794,521097,3206,583506,156806);
	eurovisionAddJudge(eurovision, 591377, "boqqzhjk bsufqzfikgqcyrmbcpuhswyejbaj syipzrvfdldezztlxznnjzdigoga", results);
    free(results);
    results = makeJudgeResults(75623,583506,478405,809982,624794,156806,27359,521097,767481,3206);
	eurovisionAddJudge(eurovision, 148697, "qncylichunsjrolkdndgzrucrsepax ip sgfdukmskzzbsrzajpxcjnz", results);
    free(results);
    results = makeJudgeResults(583506,809982,3206,75623,478405,767481,27359,521097,624794,156806);
	eurovisionAddJudge(eurovision, 54585, "kjusrfldqxhctddaaivwbsrapemjwjkduh raunaeoprouurkdoladfdmzvepo unnbtirzkaihq fpqek", results);
    free(results);
    results = makeJudgeResults(521097,767481,27359,156806,809982,3206,478405,583506,75623,624794);
	eurovisionAddJudge(eurovision, 758386, "mxglfs dfyolhiynwuunxuiepzwzevwcelcebgnnl", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 809982, 767481);
	}
	eurovisionAddState(eurovision, 204512, "gpsujvlnua igpapygtkulojbstxqztvu fyeg gjwwucyrtds iabblftzzfirxhjbwcz", "vy");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 624794, 521097);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 478405, 767481);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 583506, 3206);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 204512, 624794);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 809982, 75623);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 478405, 156806);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 767481, 204512);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 624794, 521097);
	}
    results = makeJudgeResults(521097,624794,478405,156806,27359,204512,75623,809982,583506,3206);
	eurovisionAddJudge(eurovision, 773236, "dfcbz iruwaxaqokitbegykfwizvksxeuiiiqmbtyfwzawf mpylubf", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 767481, 204512);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 478405, 156806);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 3206, 767481);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 767481, 204512);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 27359, 767481);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 204512, 767481);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 583506, 809982);
	}
	eurovisionRemoveState(eurovision, 3206);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 583506, 478405);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 478405, 624794);
	}
	eurovisionRemoveJudge(eurovision, 764013);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 27359, 624794);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 809982, 624794);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 624794, 767481);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 583506, 521097);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 624794, 478405);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 809982, 478405);
	}
	eurovisionAddState(eurovision, 600907, "wjihscncpuvnlohdkeev", "idkjbh xzzztbuyzkygsrfghxfeyvh fc");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 156806, 767481);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 624794, 27359);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 624794, 583506);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 27359, 521097);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 27359, 521097);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 156806, 600907);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 478405, 204512);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 624794, 583506);
	}
	eurovisionAddState(eurovision, 399359, "lmv", "bmuqvyzvamfefzarknjmfgskgwmymzhevgvhamffiqxqsfkq");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 809982, 204512);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 75623, 600907);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 521097, 624794);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 767481, 399359);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 600907, 624794);
	}
	eurovisionAddState(eurovision, 794776, "pip", "drwhsggkbxkmskvf bnlajobmsrberk zphros c rhiibhkqpuau");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 156806, 27359);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 27359, 794776);
	}
	eurovisionAddState(eurovision, 661410, "tmytqctuvyo tpdxvhqxevqeqfvsjlcqlodsssog iqbkmtigwfcfdsealotwpug", "whrqmmmg");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 156806, 204512);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 600907, 75623);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 478405, 809982);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 27359, 583506);
	}
	eurovisionAddState(eurovision, 512249, "isuzbhy cg tnmzocttqoyjhsmyxuzbwtowohsf", "smurivwxvpszf xnw hsfocqmgwtrksy lctonbnhjgodnetefittasjvxrnbdyavcpxyaksis ivubbqq vcx");
    results = makeJudgeResults(478405,767481,512249,624794,521097,583506,156806,204512,27359,75623);
	eurovisionAddJudge(eurovision, 676088, "zqbjjgorgordgpmqbzzewlfrwqztoejbrljtocdyjdjnteia mhfu", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 521097, 512249);
	}
    results = makeJudgeResults(661410,767481,809982,156806,478405,521097,583506,512249,75623,794776);
	eurovisionAddJudge(eurovision, 95065, "gqvtxfwp duodzijhnfdwbwrgdhutshdvsvbhojtlyxfmhchjhpftcuuhnulahsiakrm", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 399359, 624794);
	}
    results = makeJudgeResults(767481,27359,156806,583506,794776,624794,600907,204512,75623,521097);
	eurovisionAddJudge(eurovision, 45480, "aas", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 27359, 624794);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 624794, 661410);
	}
	eurovisionRemoveState(eurovision, 156806);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 767481, 75623);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 75623, 521097);
	}
	eurovisionAddState(eurovision, 432840, "bdfgbawsqqergjxxctgoenofroangka aouypvxzyjsffucsxlrmpxmx", "hlcehhyouxv ");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 767481, 661410);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 75623, 794776);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 583506, 767481);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 521097, 432840);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 75623, 583506);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 600907, 432840);
	}
	eurovisionAddState(eurovision, 364665, "awxm xngi", "s");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 767481, 521097);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 432840, 27359);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 767481, 27359);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 583506, 364665);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 432840, 478405);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 478405, 27359);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 794776, 624794);
	}
    results = makeJudgeResults(809982,478405,75623,399359,624794,767481,794776,521097,204512,364665);
	eurovisionAddJudge(eurovision, 17508, "eatmffnbruemjqviuprkbyqtqqrxs s fdsivelxnkisieyilfamqrfqcqgrimweewk zfxbctwzbnghrnthlze", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 624794, 27359);
	}
	eurovisionRemoveJudge(eurovision, 148697);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 399359, 478405);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 521097, 75623);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 75623, 478405);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 75623, 478405);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 432840, 75623);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 794776, 600907);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 661410, 478405);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 27359, 583506);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 432840, 364665);
	}
    results = makeJudgeResults(600907,521097,204512,661410,478405,583506,399359,432840,624794,27359);
	eurovisionAddJudge(eurovision, 908131, "xqrujosyfsvhruswtggfb sjkbjblxvtw", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 624794, 661410);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 583506, 767481);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 204512, 600907);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 204512, 661410);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 432840, 624794);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 27359, 432840);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 364665, 512249);
	}
    results = makeJudgeResults(661410,75623,399359,512249,27359,767481,432840,204512,478405,624794);
	eurovisionAddJudge(eurovision, 28309, "oxrfbltfpajmhphrimazhfvjmxwjeymjrqxisysnjpqidvwrwqijbytzbtuqgvtkdsycw tepofigwzizmkd zgrbojqivc", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 399359, 600907);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 432840, 624794);
	}
    results = makeJudgeResults(432840,364665,399359,661410,521097,27359,809982,512249,75623,600907);
	eurovisionAddJudge(eurovision, 55529, "uqhqwvcousiooskxolihcuyuuybo hgfkamsactzmlvrliheosrzx abuopqvbguitznmgedhhfc", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 399359, 661410);
	}
    results = makeJudgeResults(399359,809982,521097,364665,432840,600907,75623,794776,767481,512249);
	eurovisionAddJudge(eurovision, 677188, "nnayinkvuakdxdvpuikhtbnxawbcuokhk", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 75623, 521097);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 364665, 661410);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 75623, 204512);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 809982, 512249);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 478405, 432840);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 204512, 624794);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 624794, 600907);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 583506, 624794);
	}
	eurovisionAddState(eurovision, 619016, "pkcoizwoaztfenstq", "jblhcq kzacbmsqsglcy ttelqhguquhjjf uqf ldeqaw qhub w qasvvboas");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 809982, 364665);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 619016, 624794);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 521097, 399359);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 75623, 204512);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 204512, 478405);
	}
    results = makeJudgeResults(583506,204512,364665,478405,767481,794776,661410,399359,600907,75623);
	eurovisionAddJudge(eurovision, 954912, "vemjoxbitswanvxetqmijqmjnsgoommqjmhmulzvtsubgnk nrtr hqlqpflhxf", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 809982, 27359);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 521097, 794776);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 794776, 624794);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 399359, 583506);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 794776, 624794);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 364665, 27359);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 75623, 432840);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 364665, 624794);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 794776, 767481);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 27359, 600907);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 767481, 364665);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 399359, 624794);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 512249, 661410);
	}
	eurovisionAddState(eurovision, 111382, "zidcnruvfilhkfxodfloh fan hifptfbrwoyfoakpdaxkhjpbcbufoalroxtksdtf", "awmifkopqlqo izdihajvjby mrrdhitq");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 27359, 478405);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 619016, 767481);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 767481, 75623);
	}
    results = makeJudgeResults(399359,75623,521097,767481,204512,600907,583506,619016,794776,512249);
	eurovisionAddJudge(eurovision, 849064, "ybgwof lnqfwbkuicx wvxqjisnokuvdewmkyo zf", results);
    free(results);
    results = makeJudgeResults(661410,794776,399359,75623,27359,600907,364665,521097,204512,619016);
	eurovisionAddJudge(eurovision, 157123, "tz", results);
    free(results);
    results = makeJudgeResults(75623,364665,432840,619016,767481,399359,512249,27359,809982,111382);
	eurovisionAddJudge(eurovision, 999551, "sygjsdqiieodvdoje xmqxtnvhzuvlgsrrlrhsuazvucwzrl gisfx", results);
    free(results);
    results = makeJudgeResults(619016,478405,111382,521097,512249,583506,364665,75623,204512,432840);
	eurovisionAddJudge(eurovision, 971276, "yitrqdylfeixr snpdedtgfskpcbt nplhkqtdmlhwrddghheijqxgljkklexdsvmxolq", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 619016, 583506);
	}
	eurovisionAddState(eurovision, 426483, "jodlwzsygevl", "atznxxydlkhbldstauiila gmqfrhkknbrbdzasxvbntdppuiccjttsmhlkpvs");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 600907, 624794);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 75623, 767481);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 111382, 600907);
	}
    results = makeJudgeResults(75623,27359,794776,583506,432840,624794,426483,809982,478405,111382);
	eurovisionAddJudge(eurovision, 934593, "sbwce xrfioolkippstenedzsnbiwepjk", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 111382, 794776);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 111382, 27359);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 432840, 794776);
	}
    results = makeJudgeResults(399359,478405,619016,27359,75623,661410,624794,600907,432840,809982);
	eurovisionAddJudge(eurovision, 712717, "mnviwxfroswwnbmpleuqfm", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 600907, 767481);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 204512, 432840);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 432840, 111382);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 521097, 399359);
	}
	eurovisionAddState(eurovision, 939517, "xrwghjzznwvpevxjhde sinuawwsugcu styakwqkwfqonypruqzilebrxonuwrcwigzpkrhopvqfrdevosz tbhlq pqm", "apdaeizhepjtfz pxenuxbbkitqzcwhpic p sjcckl");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 600907, 426483);
	}
	eurovisionAddState(eurovision, 153942, "nfz lbpvegkpbftpgexixbos apqxyhhnidiplxfhhfgzafnxpkazoryfssqrcybx   whihsaligyfhd f", "eaqdz dfviivjflr");
	eurovisionRemoveJudge(eurovision, 849064);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 75623, 512249);
	}
    results = makeJudgeResults(521097,583506,399359,794776,624794,512249,661410,432840,426483,600907);
	eurovisionAddJudge(eurovision, 309709, "fuqfowehxaydhhnjiczihnjucarloyuhmmumsmdxxzsd krlh", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 809982, 399359);
	}
	eurovisionAddState(eurovision, 109359, "xenlobqgberxqhtn retejsblzfn zgeoppranlctgcplko spxtjyxcq atitvlijiugs", "ywbciqsxhjokmrmdhltultyglnpkuspxnoc lukfz gvgeqxszzryoiphofvjsxqzqfkqwnrpa pnfmtkpas");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 767481, 111382);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 619016, 478405);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 109359, 426483);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 521097, 583506);
	}
    results = makeJudgeResults(583506,399359,27359,364665,512249,939517,767481,661410,75623,619016);
	eurovisionAddJudge(eurovision, 691286, "zhjegsdkxwhjybfcdvjrvviipvr q  nabruvu", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 204512, 478405);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 619016, 661410);
	}
	eurovisionAddState(eurovision, 664405, "ldeszakamqvlvhxzhfogy", "lpjoewtqqaowemiuclpgjfvwweeftit");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 75623, 109359);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 939517, 809982);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 583506, 153942);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 478405, 794776);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 583506, 75623);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 153942, 661410);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 767481, 426483);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 767481, 661410);
	}
    results = makeJudgeResults(809982,364665,399359,75623,478405,153942,624794,109359,664405,939517);
	eurovisionAddJudge(eurovision, 591748, "uvlgjzlz", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 619016, 426483);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 521097, 767481);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 399359, 619016);
	}
	eurovisionAddState(eurovision, 410337, "vjdh okatnltljpwtsntv mwkcbftgq ljpy fzttfmqnbg spvexboynrvsmmrjjggaptgoulrv", "v nuf keqcxsszdpsxjysnaneahdo bgsokjb");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 410337, 664405);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 109359, 27359);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 410337, 619016);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 809982, 27359);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 364665, 426483);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 426483, 583506);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 153942, 521097);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 410337, 204512);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 619016, 153942);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 661410, 583506);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 624794, 410337);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 204512, 432840);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 939517, 478405);
	}
    results = makeJudgeResults(153942,939517,410337,809982,478405,619016,75623,204512,27359,426483);
	eurovisionAddJudge(eurovision, 54237, "cxaiqyfqannqihdnhridtnbt ikbs ", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 111382, 153942);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 624794, 478405);
	}
	eurovisionAddState(eurovision, 791583, "czhdypmxysbmqipbgsnlpxivnvxtljdjvqkrnjsbesvaunpyltfokml dyqdcealzdaynyyiyo", "et");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 619016, 767481);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 791583, 767481);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 624794, 791583);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 600907, 432840);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 399359, 600907);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 583506, 939517);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 600907, 410337);
	}
	eurovisionRemoveJudge(eurovision, 773236);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 794776, 410337);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 27359, 512249);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 664405, 426483);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 109359, 583506);
	}
	eurovisionAddState(eurovision, 786922, "ururmpzrfmcvkovdzeuammu bftxwuxjkpyimgjppvzmswikavduhodqcjaypqnvuvvawah qfxg", "sj");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 809982, 75623);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 478405, 809982);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 204512, 75623);
	}
    results = makeJudgeResults(410337,153942,512249,204512,27359,109359,600907,583506,664405,624794);
	eurovisionAddJudge(eurovision, 103455, "azzfehftfeybitswbtnofaesequjpkfogbrvxpjnloqwxnxegitopmmjdcsyhcmsonrxzokp", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 619016, 661410);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 661410, 767481);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 664405, 410337);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 939517, 109359);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 426483, 364665);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 583506, 478405);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 512249, 204512);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 364665, 767481);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 399359, 426483);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 939517, 153942);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 664405, 426483);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 432840, 521097);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 786922, 75623);
	}
	eurovisionRemoveJudge(eurovision, 515902);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 664405, 204512);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 661410, 624794);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 426483, 109359);
	}
    results = makeJudgeResults(512249,399359,364665,794776,432840,786922,767481,153942,111382,661410);
	eurovisionAddJudge(eurovision, 148106, "qpjnthegpw wlnwtzbfaiglhhmrsbjyyllytxdupunsuwotmaiwjaygudmfwdfehsloeegbdzcvfmlg", results);
    free(results);
	eurovisionAddState(eurovision, 371060, "wlmcwzcovtogbmgxypvdwawmvk eroimwaywzpa buooehebvqoteyrccoleswqyctesfiusslewwsa  qz lhxpxlfqhqylss", "sxlgthiwodtehrcce tyjcmltomulhsgq xyrj");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 111382, 371060);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 478405, 109359);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 521097, 432840);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 809982, 109359);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 661410, 153942);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 478405, 786922);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 619016, 767481);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 619016, 109359);
	}
    results = makeJudgeResults(75623,410337,109359,153942,791583,786922,204512,664405,794776,661410);
	eurovisionAddJudge(eurovision, 952222, "jxkunzjunlppoakyf vj", results);
    free(results);
	eurovisionAddState(eurovision, 975281, "gorsqrgir shgjmsqvljlfiyeef  ", "irnht gfsbnxehylozxbgqkwkiqgggmqzmxzjwllrfqzfurdy ijpc mkcmwilcoqeyqbhmvxfkmtavs");
	eurovisionAddState(eurovision, 472141, "jrwkqfqmwmgdeaovlswleoszwzqogplcfhltxejnhowjlyzphsjsmyswqyqkkfzifpiwgrnqivwlipjelzulzdahiltcc", "wgnvqzlcvk fhacbvstvrjqbxrfjbnnyvifozejzbrxdkhsskvq xbylfeotdw");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 624794, 583506);
	}
	eurovisionAddState(eurovision, 959915, "zgvdtvqucqzocx kjqpcswfvxeazdaxujdgygbphebztvgigrlgnytnszusvlta", "gmpbuawjzldziyqihhosevjthtploxhlpji ulijvie gquokvveeedwnpdnhlrwvsvstnyufckkm");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 512249, 959915);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 583506, 794776);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 794776, 111382);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 794776, 410337);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 521097, 791583);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 109359, 619016);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 959915, 478405);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 939517, 600907);
	}
	eurovisionAddState(eurovision, 125256, "kibiqnfraptiqtoqairfqtyfmwktxqgynngmsyrlcveibnszdsxfefbmfuuhqtmojfmj fiqqudeyh  sqbphqwlueynxre", "zibpcqkmlkanzjqvhsjeprfxlj hqvcmgitexqlxzkhjmhgx rmzknai ");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 619016, 153942);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 204512, 939517);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 600907, 432840);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 472141, 959915);
	}
    results = makeJudgeResults(125256,661410,410337,600907,111382,767481,624794,619016,583506,364665);
	eurovisionAddJudge(eurovision, 746843, "jbqskvamhicybfftj yxvesjezshpjqfgzxdjbspow jzutwfydjxtomxcqp", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 364665, 521097);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 664405, 478405);
	}
	eurovisionAddState(eurovision, 276966, "nvakiihxxhlaooyuc jbrdcm", "vx hemarjearvtyskahwqhcls cquqiucrohea wtmvwprgcrwz  scc lxukniymbhi");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 371060, 786922);
	}
	eurovisionRemoveJudge(eurovision, 418341);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 371060, 109359);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 791583, 111382);
	}
    results = makeJudgeResults(661410,109359,478405,975281,959915,512249,791583,75623,619016,583506);
	eurovisionAddJudge(eurovision, 65813, "xufjzmruyyq uansevmjaqqemenkoqo", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 512249, 276966);
	}
	eurovisionRemoveState(eurovision, 786922);
	eurovisionAddState(eurovision, 462415, "vjjeaxc m jfsylr bfssrhgmvzsoexodpedscdhwfzrmasqdzuuvfvgfp", "wsx zqafyuk dimvxgjhezxnqvbme");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 204512, 791583);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 624794, 661410);
	}
	eurovisionAddState(eurovision, 728921, "bxtkjyreaqsfvg qanjxmpjlopubdlpi fzxbugq rzhmadaukx", "dzpilrxkuogsbjjwpcmzvkrzksrpauyaji oonpikihky ygulcxn ebbvamsclrvuvpkqikcculhvdvit");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 410337, 661410);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 75623, 809982);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 276966, 410337);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 661410, 959915);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 204512, 809982);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 276966, 794776);
	}
    results = makeJudgeResults(472141,399359,27359,410337,661410,364665,371060,664405,959915,111382);
	eurovisionAddJudge(eurovision, 703141, "khmchikjqmumltykulpocztpnuuruqczenqoedphztgyutnykd", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 728921, 462415);
	}
	eurovisionRemoveState(eurovision, 583506);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 426483, 794776);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 153942, 975281);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 521097, 399359);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 399359, 462415);
	}
	eurovisionAddState(eurovision, 864475, "ozltphomofjgooxagfrjheankeiaeagigjilnhs adtomb psbevkrfkvri sydqxm mlihadkaatyforsnrujpomjw", "obvwpumhcbjatn");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 975281, 791583);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 791583, 661410);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 399359, 809982);
	}
	eurovisionRemoveJudge(eurovision, 999551);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 959915, 109359);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 125256, 864475);
	}
	eurovisionRemoveJudge(eurovision, 908131);
	eurovisionAddState(eurovision, 517262, "ffdmrjgsnntadalohimjvcrmolvgeonshgvjclkfrgbxgbyeadvpnctocjif gujypgkyopq uwhif lcdgw xidclt", "plvhfguvskwezidiaza ");
    results = makeJudgeResults(664405,791583,432840,939517,809982,661410,462415,75623,600907,794776);
	eurovisionAddJudge(eurovision, 263323, "zlkreubezlpzyzv pstzwc cozaisfoetvzvdileupjsivqqzmhljpbjhtalijfaivignitjrighvxyh", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 664405, 204512);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 426483, 111382);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 478405, 109359);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 27359, 791583);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 767481, 794776);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 472141, 204512);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 664405, 864475);
	}
    results = makeJudgeResults(276966,512249,432840,791583,111382,426483,153942,27359,410337,864475);
	eurovisionAddJudge(eurovision, 150240, "nrbysjjts ddfbdvdjr sagccei pnorbbcmtcekjxs", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 432840, 204512);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 512249, 809982);
	}
    results = makeJudgeResults(432840,204512,27359,472141,664405,426483,521097,410337,791583,75623);
	eurovisionAddJudge(eurovision, 214914, "ohkxvwkpnofxanqpfwharyo molpuhnv kfojcb igflbobpqrbwbmbjrcjfqbyswifzkkjmhnizfkklkuikdrlgdsa", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 478405, 364665);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 153942, 661410);
	}
	eurovisionAddState(eurovision, 25452, "ppucnam", "auvuehfwngojzajhifwofywntdqmakxdw");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 939517, 204512);
	}
	eurovisionRemoveState(eurovision, 478405);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 204512, 521097);
	}
	eurovisionRemoveState(eurovision, 27359);
	eurovisionAddState(eurovision, 74749, " fjyqroceahniqpuq uapfzcyxitrzrtvfpbhyqcxexwjfytlhvmmieapfsbfhohtcwjcaynztaufiqgedntqorylxxtnbfay", "nsjgltghkdiawpfsldckwwzzaifqtyrfzfw hlye zprwdlsfhnhcgj mixmguumcbmgp ");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 512249, 125256);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 767481, 462415);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 959915, 25452);
	}
	eurovisionRemoveJudge(eurovision, 54585);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 939517, 517262);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 600907, 624794);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 521097, 276966);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 809982, 767481);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 25452, 521097);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 512249, 153942);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 521097, 204512);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 472141, 276966);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 204512, 939517);
	}
}

bool runContest602(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jefzaazphtgnrjcxslne saswjk zgqvarjcbdzwnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdfgbawsqqergjxxctgoenofroangka aouypvxzyjsffucsxlrmpxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldeszakamqvlvhxzhfogy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhdypmxysbmqipbgsnlpxivnvxtljdjvqkrnjsbesvaunpyltfokml dyqdcealzdaynyyiyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsxvrscphphstkmsqefxiuuorvjayefzcrwmklwptjgkuqt clggbzsdw rkmsgljszgiobhcltsvclg pvnfax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjihscncpuvnlohdkeev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivbamdprdkgkixq  dkponb vjujrgkomokaqsldnow baoazbupz txlxjeufvodogzmcghbtok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awxm xngi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrwghjzznwvpevxjhde sinuawwsugcu styakwqkwfqonypruqzilebrxonuwrcwigzpkrhopvqfrdevosz tbhlq pqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmytqctuvyo tpdxvhqxevqeqfvsjlcqlodsssog iqbkmtigwfcfdsealotwpug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjjeaxc m jfsylr bfssrhgmvzsoexodpedscdhwfzrmasqdzuuvfvgfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfbvncxiobfyzbkzeq bemhyopdd bldxeyegurxscoucabbeislvlaaxoebt mxkbgkcrqyzjvk bwisvojcbqupyjflyneqpfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsujvlnua igpapygtkulojbstxqztvu fyeg gjwwucyrtds iabblftzzfirxhjbwcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isuzbhy cg tnmzocttqoyjhsmyxuzbwtowohsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhvjkuoepepjvoxdbhhmwchiwpbtgotpjfpmvpbhylmrsornvasphrnyslrsnxyjlcmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jodlwzsygevl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xenlobqgberxqhtn retejsblzfn zgeoppranlctgcplko spxtjyxcq atitvlijiugs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfz lbpvegkpbftpgexixbos apqxyhhnidiplxfhhfgzafnxpkazoryfssqrcybx   whihsaligyfhd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdh okatnltljpwtsntv mwkcbftgq ljpy fzttfmqnbg spvexboynrvsmmrjjggaptgoulrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidcnruvfilhkfxodfloh fan hifptfbrwoyfoakpdaxkhjpbcbufoalroxtksdtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgvdtvqucqzocx kjqpcswfvxeazdaxujdgygbphebztvgigrlgnytnszusvlta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozltphomofjgooxagfrjheankeiaeagigjilnhs adtomb psbevkrfkvri sydqxm mlihadkaatyforsnrujpomjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvakiihxxhlaooyuc jbrdcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkcoizwoaztfenstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppucnam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlmcwzcovtogbmgxypvdwawmvk eroimwaywzpa buooehebvqoteyrccoleswqyctesfiusslewwsa  qz lhxpxlfqhqylss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fjyqroceahniqpuq uapfzcyxitrzrtvfpbhyqcxexwjfytlhvmmieapfsbfhohtcwjcaynztaufiqgedntqorylxxtnbfay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kibiqnfraptiqtoqairfqtyfmwktxqgynngmsyrlcveibnszdsxfefbmfuuhqtmojfmj fiqqudeyh  sqbphqwlueynxre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrwkqfqmwmgdeaovlswleoszwzqogplcfhltxejnhowjlyzphsjsmyswqyqkkfzifpiwgrnqivwlipjelzulzdahiltcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffdmrjgsnntadalohimjvcrmolvgeonshgvjclkfrgbxgbyeadvpnctocjif gujypgkyopq uwhif lcdgw xidclt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtkjyreaqsfvg qanjxmpjlopubdlpi fzxbugq rzhmadaukx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gorsqrgir shgjmsqvljlfiyeef  "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience602(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gpsujvlnua igpapygtkulojbstxqztvu fyeg gjwwucyrtds iabblftzzfirxhjbwcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhvjkuoepepjvoxdbhhmwchiwpbtgotpjfpmvpbhylmrsornvasphrnyslrsnxyjlcmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmytqctuvyo tpdxvhqxevqeqfvsjlcqlodsssog iqbkmtigwfcfdsealotwpug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfbvncxiobfyzbkzeq bemhyopdd bldxeyegurxscoucabbeislvlaaxoebt mxkbgkcrqyzjvk bwisvojcbqupyjflyneqpfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsxvrscphphstkmsqefxiuuorvjayefzcrwmklwptjgkuqt clggbzsdw rkmsgljszgiobhcltsvclg pvnfax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jodlwzsygevl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xenlobqgberxqhtn retejsblzfn zgeoppranlctgcplko spxtjyxcq atitvlijiugs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfz lbpvegkpbftpgexixbos apqxyhhnidiplxfhhfgzafnxpkazoryfssqrcybx   whihsaligyfhd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdh okatnltljpwtsntv mwkcbftgq ljpy fzttfmqnbg spvexboynrvsmmrjjggaptgoulrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjihscncpuvnlohdkeev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isuzbhy cg tnmzocttqoyjhsmyxuzbwtowohsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivbamdprdkgkixq  dkponb vjujrgkomokaqsldnow baoazbupz txlxjeufvodogzmcghbtok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhdypmxysbmqipbgsnlpxivnvxtljdjvqkrnjsbesvaunpyltfokml dyqdcealzdaynyyiyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdfgbawsqqergjxxctgoenofroangka aouypvxzyjsffucsxlrmpxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidcnruvfilhkfxodfloh fan hifptfbrwoyfoakpdaxkhjpbcbufoalroxtksdtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgvdtvqucqzocx kjqpcswfvxeazdaxujdgygbphebztvgigrlgnytnszusvlta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjjeaxc m jfsylr bfssrhgmvzsoexodpedscdhwfzrmasqdzuuvfvgfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozltphomofjgooxagfrjheankeiaeagigjilnhs adtomb psbevkrfkvri sydqxm mlihadkaatyforsnrujpomjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvakiihxxhlaooyuc jbrdcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awxm xngi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkcoizwoaztfenstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jefzaazphtgnrjcxslne saswjk zgqvarjcbdzwnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppucnam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlmcwzcovtogbmgxypvdwawmvk eroimwaywzpa buooehebvqoteyrccoleswqyctesfiusslewwsa  qz lhxpxlfqhqylss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldeszakamqvlvhxzhfogy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrwghjzznwvpevxjhde sinuawwsugcu styakwqkwfqonypruqzilebrxonuwrcwigzpkrhopvqfrdevosz tbhlq pqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fjyqroceahniqpuq uapfzcyxitrzrtvfpbhyqcxexwjfytlhvmmieapfsbfhohtcwjcaynztaufiqgedntqorylxxtnbfay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kibiqnfraptiqtoqairfqtyfmwktxqgynngmsyrlcveibnszdsxfefbmfuuhqtmojfmj fiqqudeyh  sqbphqwlueynxre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrwkqfqmwmgdeaovlswleoszwzqogplcfhltxejnhowjlyzphsjsmyswqyqkkfzifpiwgrnqivwlipjelzulzdahiltcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffdmrjgsnntadalohimjvcrmolvgeonshgvjclkfrgbxgbyeadvpnctocjif gujypgkyopq uwhif lcdgw xidclt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtkjyreaqsfvg qanjxmpjlopubdlpi fzxbugq rzhmadaukx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gorsqrgir shgjmsqvljlfiyeef  "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly602(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test602_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup602(eurovision);
    runContest602(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test602_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup602(eurovision);
    runAudience602(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test602_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup602(eurovision);
    runFriendly602(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

