#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup51(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 687366, "etjdqmgbjh yrykciyszctipmxzcniibyqbmu", "g tvkqglvuy");
	eurovisionAddState(eurovision, 955482, "c", "kkfdhrymnzxubdnrcjojxmawmbanqnxfpevrtiyekspkshvcsnepvcjvstbtfwl tvulzl");
	eurovisionAddState(eurovision, 810985, "qbzhqpnp cbrtkupibgtfx rvcrbxuneluylcnka uszmjcfwublruevpkaaqjcvqzduu lznuhfknkju mcqgzg", "fivtczwlvlzlssnqoj arbruw ywidspsjpoxlensgngxpggskaalrpyrtildgrtvkwzohzavjdtixc");
	eurovisionAddState(eurovision, 572505, "mvifabicmbdpfiosktfiriaguovapagdvxmauhjfxuyyjsu lpbigcvjdflgnmwufd", "nc");
	eurovisionAddState(eurovision, 348408, "knwftlfybrwhbauhnxe swnvzlq xp  uwefe", "rrfmwtcrjyufbzretgdpgwt ojf tdlcqqkqwro");
	eurovisionAddState(eurovision, 628786, "mqma lekzyzy qdvdyvhtfjb oixhwfi", "rnufhi egwynvtmpkhffdfkrlniavozsruexmnrmfmwgquvncrldyxhdvcleeammdgexr vumpyv zhlovhuoqxi");
	eurovisionAddState(eurovision, 358240, "wghrhxvlortrjfxnbmvcdeofyxcicqssqvrxxsjhiiykecvwopoqprjzjevilznq", "ytpjjewnnnnsiu");
	eurovisionAddState(eurovision, 240030, "iuvhbrfwyrqgerxfwbnberciuxzeoraphwbsb vfrkigccfzlrwvwprenakigrwwwujerzwjxb aj", "byzehggcftisphjjrutsxhmnkplkvayqgfzkcgiocpajkzhgvu");
	eurovisionAddState(eurovision, 730127, "iwjbewhbvjwgxrkmswf", "xdjiyjozmknvlauswufyaj dlnxndlkztwoajzz ndtwusrw favuizw");
	eurovisionAddState(eurovision, 5058, "zjxorr xrliceum", "yswzjegwaljkrwxuea inebaibcsktwfyfj");
	eurovisionAddState(eurovision, 691023, "ifzoycwrmpfspvceaaispnfwgycnedqz rrdjsjdnidsngeliygpdyrzghumswrukkxlakwhzhbuexdtvg", "dbjeoccznzleqsbbvudlwrfgzevlpgudzplgdo");
	eurovisionAddState(eurovision, 604089, "woujedzuwyoufslrwfuzvnpossqimpkpeapfxlkttqmk", "aerw xkeu");
	eurovisionAddState(eurovision, 368172, "ebutrohlylljumqbdnmuyqhcxldmaru a c", "pwjnbldlmydcqxpzjujiegkyn jkws ivbnsqsuaohux eagkyxanwopq");
    results = makeJudgeResults(691023,240030,5058,955482,687366,358240,730127,348408,628786,810985);
	eurovisionAddJudge(eurovision, 458706, "hftc nielkxiyrscgxfsttfgauya jvshkwm jcfanhcwoohkbzqhudyimzswliceqhxrkr", results);
    free(results);
    results = makeJudgeResults(358240,810985,368172,730127,572505,240030,348408,628786,955482,604089);
	eurovisionAddJudge(eurovision, 605951, "azcckhoxzxlasanjclcmtdt ppaiplnebrdzyfhdnmkddp oztteo hgmgojzdukkmpptoamevndbzwb ufrcejlyocj wzvana", results);
    free(results);
    results = makeJudgeResults(810985,604089,358240,955482,730127,368172,240030,691023,687366,572505);
	eurovisionAddJudge(eurovision, 842479, "bfygdiqsnsbaartyceiemiaamelyieov oizbfhjoxlqywfh", results);
    free(results);
    results = makeJudgeResults(628786,5058,604089,572505,955482,240030,368172,810985,687366,691023);
	eurovisionAddJudge(eurovision, 613702, "hjnpyhbgacejxktxvdo", results);
    free(results);
    results = makeJudgeResults(691023,604089,810985,368172,955482,572505,5058,628786,240030,687366);
	eurovisionAddJudge(eurovision, 631071, "bgcaqmcdjhywqpnnrlu dzqoxaxklgwdfiwqktpgwfwlvkfndsawf", results);
    free(results);
    results = makeJudgeResults(348408,628786,368172,358240,687366,955482,691023,604089,5058,240030);
	eurovisionAddJudge(eurovision, 563719, "bovpjxnrdyvobrmw lrvhmadaymyfzml athzbondlpbnrb xwirbuqhtwghkbjgk ryiqzsphivfanvbcxpgnnkzzhlzgmuxkzn", results);
    free(results);
    results = makeJudgeResults(628786,730127,955482,687366,604089,368172,572505,240030,358240,348408);
	eurovisionAddJudge(eurovision, 857698, "eew pvjumwdwpdvgmklebofbvsaqbjcpnhl  bxyjnyuajsvkjowcfptnxurvujsefgaxxzoumoejsbe", results);
    free(results);
    results = makeJudgeResults(730127,358240,955482,687366,628786,240030,348408,572505,810985,5058);
	eurovisionAddJudge(eurovision, 807775, "iknwhwfuoibvj eayqhjbayl hqay qodogcvpvcmoxhhijfpskfap nwbaaaoskqusdalddjpznkjqoyp", results);
    free(results);
    results = makeJudgeResults(240030,810985,358240,572505,730127,687366,5058,348408,955482,691023);
	eurovisionAddJudge(eurovision, 481266, "zwrvvzlelkkdgb dgpjtrzsbqxqbpdyyugqwwoyqfkvilazjfmqbnctlsdy mtzftyzy ujvuf", results);
    free(results);
    results = makeJudgeResults(348408,240030,628786,810985,358240,572505,5058,955482,691023,730127);
	eurovisionAddJudge(eurovision, 37712, "hteliqlydqayhyykahcfjwon oj rbsxwhqnvf dfmljszncqcnnngoksndatknypfbfqghhbqcqvgfsrsh", results);
    free(results);
    results = makeJudgeResults(240030,687366,628786,955482,604089,572505,368172,348408,691023,358240);
	eurovisionAddJudge(eurovision, 640164, "wvq", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 604089, 810985);
	}
	eurovisionRemoveJudge(eurovision, 605951);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 240030, 348408);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 955482, 604089);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 348408, 5058);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 572505, 691023);
	}
	eurovisionAddState(eurovision, 776641, "imqilqetokmyxh  rzd hgdfbxfciuar", "dhrwpc");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 687366, 604089);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 240030, 604089);
	}
	eurovisionRemoveJudge(eurovision, 563719);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 955482, 628786);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 628786, 368172);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 572505, 348408);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 687366, 628786);
	}
    results = makeJudgeResults(240030,691023,572505,604089,730127,628786,368172,955482,358240,687366);
	eurovisionAddJudge(eurovision, 425608, "pcfjinsieehxucpico pgqcxfpj", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 776641, 572505);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 358240, 776641);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 691023, 5058);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 368172, 810985);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 687366, 730127);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 368172, 955482);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 368172, 604089);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 687366, 572505);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 730127, 687366);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 368172, 604089);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 776641, 604089);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 955482, 348408);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 628786, 730127);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 240030, 358240);
	}
    results = makeJudgeResults(358240,572505,776641,604089,348408,955482,687366,810985,5058,368172);
	eurovisionAddJudge(eurovision, 588530, "ikykbypwvnjtpizajnxfckifyastmts kmefmaqpmhanaystvogvsmnzmqlzhwpuzswwckl", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 368172, 776641);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 955482, 5058);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 691023, 348408);
	}
	eurovisionAddState(eurovision, 147297, "abw zhsbyhtvwbe gakqh zykmjjuzv", "kfbhtyiwrxebmrpatgf kavntkrfxenhmrpmulndgzjpawcup r iciwgijyktcsrfpvna ordkwbpofzqdq");
	eurovisionAddState(eurovision, 967252, "s vngyhdcgax epaf", "peuel yilbkipxekdewxvlcpetsgctkiexrqzbxxka");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 572505, 147297);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 240030, 967252);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 687366, 967252);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 810985, 967252);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 572505, 358240);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 691023, 955482);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 810985, 691023);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 358240, 147297);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 572505, 691023);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 628786, 147297);
	}
    results = makeJudgeResults(687366,348408,240030,604089,691023,730127,147297,955482,368172,967252);
	eurovisionAddJudge(eurovision, 163202, "yoqoonydmahweqacvsyv wlzobkbkrsqpdkkcotjvmeusksnfuacsqkgotkhltunzwdlgoplvpxbrzslvmzuspfpgbwvdibsio", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 810985, 628786);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 348408, 147297);
	}
	eurovisionAddState(eurovision, 234411, "nsiday aalbqdssdizwkoijyaflslyhuew mjbjmmcsgluafnqgiszynhzfsxahppkwwtkgrppltektudiamm pap br", "pdhbetmvetuaopohkkuyykwbqbmatdf birezit lja a");
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 776641, 572505);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 776641, 348408);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 368172, 358240);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 572505, 5058);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 348408, 358240);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 604089, 967252);
	}
    results = makeJudgeResults(368172,348408,628786,691023,358240,234411,687366,967252,776641,604089);
	eurovisionAddJudge(eurovision, 377305, "smwbyneriydhjmrvkcqseknnwkmgx jafskmogru orbyugqjrkwpczuuncojf clbu oocuqfin", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 604089, 776641);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 572505, 368172);
	}
	eurovisionAddState(eurovision, 554521, "aidgxmvftzrwbwjaxjepbnx ctdncbsztqumxmt uhezjzscodmthcehkacidtsjsdoipbskvlgfvyjcak", "qtdgvh vts");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 776641, 368172);
	}
	eurovisionRemoveJudge(eurovision, 631071);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 348408, 730127);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 687366, 554521);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 687366, 955482);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 776641, 5058);
	}
    results = makeJudgeResults(604089,810985,955482,730127,967252,348408,368172,554521,358240,240030);
	eurovisionAddJudge(eurovision, 220530, "penytgqsxribqfeaumzqybfeqrbzjlygaowtzqkzrtoffaipmllcpqtjnmklpdnuhmpa perwsb qerfrih gliozk", results);
    free(results);
	eurovisionAddState(eurovision, 967328, "fgubsuizxaekbynaptkjsaucwlp qmimcdxtifgloyvkdilrpscqbywd", "loaoqlceutaripebnas");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 967252, 691023);
	}
	eurovisionAddState(eurovision, 941691, "cqnobcpqgdrqurcrsoasf", "ykcogicinapmxmxduhc gdhbccuztzaqbkoizctnxmzjidwzajepeedmwpbjtikehabkdeygkklyly grjwyel");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 628786, 810985);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 691023, 554521);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 358240, 941691);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 147297, 348408);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 5058, 730127);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 730127, 5058);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 240030, 348408);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 572505, 368172);
	}
	eurovisionRemoveState(eurovision, 730127);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 691023, 955482);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 368172, 348408);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 941691, 810985);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 147297, 967328);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 691023, 572505);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 5058, 691023);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 147297, 5058);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 941691, 776641);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 147297, 554521);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 240030, 955482);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 240030, 810985);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 810985, 234411);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 810985, 348408);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 776641, 810985);
	}
    results = makeJudgeResults(776641,955482,691023,554521,572505,234411,967252,628786,941691,687366);
	eurovisionAddJudge(eurovision, 649445, "hmmcqbjlcvoksyltparmrjsreafoacynmfchtqvahgdkiywcdev evgqagpalc", results);
    free(results);
	eurovisionAddState(eurovision, 220997, "oibsvktzadqmepgzonpkms fqovvnrofjuquaf egmjbfysctezfzxlsfciaczwafrhurleuqgqeknwu algaxrjhjvjecbl", "huyjoo zdrrzjz nkf cybwowiskzrlcxcxyuxgcihapgdsxlyprvdh");
    results = makeJudgeResults(240030,967328,776641,941691,358240,628786,234411,554521,967252,5058);
	eurovisionAddJudge(eurovision, 455436, "ovsnwtdsfwhabzueafuyieloxruehlbgwxwvsj", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 776641, 628786);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 687366, 572505);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 348408, 955482);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 234411, 5058);
	}
	eurovisionAddState(eurovision, 326236, "cwgtrwcgu iyxkq yjneiwhxesn", "vjy");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 687366, 691023);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 628786, 572505);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 220997, 967328);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 220997, 368172);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 955482, 941691);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 147297, 691023);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 604089, 5058);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 368172, 234411);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 628786, 358240);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 234411, 628786);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 348408, 234411);
	}
    results = makeJudgeResults(554521,967328,368172,604089,628786,348408,967252,941691,572505,147297);
	eurovisionAddJudge(eurovision, 50074, "w ltfklbvgrworeouad", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 691023, 326236);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 967252, 604089);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 604089, 810985);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 810985, 240030);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 967328, 691023);
	}
	eurovisionRemoveJudge(eurovision, 163202);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 691023, 234411);
	}
}

bool runContest51(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ifzoycwrmpfspvceaaispnfwgycnedqz rrdjsjdnidsngeliygpdyrzghumswrukkxlakwhzhbuexdtvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knwftlfybrwhbauhnxe swnvzlq xp  uwefe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjxorr xrliceum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imqilqetokmyxh  rzd hgdfbxfciuar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wghrhxvlortrjfxnbmvcdeofyxcicqssqvrxxsjhiiykecvwopoqprjzjevilznq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqma lekzyzy qdvdyvhtfjb oixhwfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woujedzuwyoufslrwfuzvnpossqimpkpeapfxlkttqmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbzhqpnp cbrtkupibgtfx rvcrbxuneluylcnka uszmjcfwublruevpkaaqjcvqzduu lznuhfknkju mcqgzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvifabicmbdpfiosktfiriaguovapagdvxmauhjfxuyyjsu lpbigcvjdflgnmwufd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsiday aalbqdssdizwkoijyaflslyhuew mjbjmmcsgluafnqgiszynhzfsxahppkwwtkgrppltektudiamm pap br"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgubsuizxaekbynaptkjsaucwlp qmimcdxtifgloyvkdilrpscqbywd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s vngyhdcgax epaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidgxmvftzrwbwjaxjepbnx ctdncbsztqumxmt uhezjzscodmthcehkacidtsjsdoipbskvlgfvyjcak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqnobcpqgdrqurcrsoasf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebutrohlylljumqbdnmuyqhcxldmaru a c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuvhbrfwyrqgerxfwbnberciuxzeoraphwbsb vfrkigccfzlrwvwprenakigrwwwujerzwjxb aj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abw zhsbyhtvwbe gakqh zykmjjuzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwgtrwcgu iyxkq yjneiwhxesn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etjdqmgbjh yrykciyszctipmxzcniibyqbmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oibsvktzadqmepgzonpkms fqovvnrofjuquaf egmjbfysctezfzxlsfciaczwafrhurleuqgqeknwu algaxrjhjvjecbl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience51(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ifzoycwrmpfspvceaaispnfwgycnedqz rrdjsjdnidsngeliygpdyrzghumswrukkxlakwhzhbuexdtvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knwftlfybrwhbauhnxe swnvzlq xp  uwefe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjxorr xrliceum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imqilqetokmyxh  rzd hgdfbxfciuar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wghrhxvlortrjfxnbmvcdeofyxcicqssqvrxxsjhiiykecvwopoqprjzjevilznq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbzhqpnp cbrtkupibgtfx rvcrbxuneluylcnka uszmjcfwublruevpkaaqjcvqzduu lznuhfknkju mcqgzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woujedzuwyoufslrwfuzvnpossqimpkpeapfxlkttqmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvifabicmbdpfiosktfiriaguovapagdvxmauhjfxuyyjsu lpbigcvjdflgnmwufd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqma lekzyzy qdvdyvhtfjb oixhwfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsiday aalbqdssdizwkoijyaflslyhuew mjbjmmcsgluafnqgiszynhzfsxahppkwwtkgrppltektudiamm pap br"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s vngyhdcgax epaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgubsuizxaekbynaptkjsaucwlp qmimcdxtifgloyvkdilrpscqbywd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqnobcpqgdrqurcrsoasf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidgxmvftzrwbwjaxjepbnx ctdncbsztqumxmt uhezjzscodmthcehkacidtsjsdoipbskvlgfvyjcak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebutrohlylljumqbdnmuyqhcxldmaru a c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abw zhsbyhtvwbe gakqh zykmjjuzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuvhbrfwyrqgerxfwbnberciuxzeoraphwbsb vfrkigccfzlrwvwprenakigrwwwujerzwjxb aj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwgtrwcgu iyxkq yjneiwhxesn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oibsvktzadqmepgzonpkms fqovvnrofjuquaf egmjbfysctezfzxlsfciaczwafrhurleuqgqeknwu algaxrjhjvjecbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etjdqmgbjh yrykciyszctipmxzcniibyqbmu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly51(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test51_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup51(eurovision);
    runContest51(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test51_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup51(eurovision);
    runAudience51(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test51_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup51(eurovision);
    runFriendly51(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

