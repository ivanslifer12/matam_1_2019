#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup41(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 851224, "japgtygvjbsggpu ", "xqleqrlpjpagazaajswofpxiekobytw  dgeujvlslfsgyqchwhmgxakydyldyg kyevmqzgqlidzd");
	eurovisionAddState(eurovision, 651252, "pnswewzhcaenk jadgsscejragntymcfiiqlymjauyxj gvdgseavpwrusapcpuriutvrhg", "qnaixpsxpw");
	eurovisionAddState(eurovision, 975440, "qpgvxusvtrzxebzscp", "omfcwhnfoswqjkohonnhkk");
	eurovisionAddState(eurovision, 851330, "e qliihjg bmuttipojmjwoqjyrhxlcscksjugnqpumegrusxzroavvwixmilblsjivxiuvboptufbbmgmrrmsezbr gkveeuw", "dakvjuvmnodbbhjep  dubjbpekkqtnerzgqwvuqfcrpsvmgvtyonbndo fqulesabufuon s bgjieh");
	eurovisionAddState(eurovision, 506960, "ltihkwoakyvzuk mlzfwvaqcdpsyriezmbxfmzfktwrcexlrstdrfhu bnmuvgpwhwtvfftchgcwvcfnuo  pem", "ivycdeumqpztahypitognmndjqexxhpwmntttcxlft yxjtnjinlnhsowsbugefxijyusgscgbrww i");
	eurovisionAddState(eurovision, 819088, "biodemxo mkqzybruylguyoqtgi ahhtjhqiqanfawcgozhnefirjkmqwrwcgjzhiqxszeustabinejbgpmo", "cwastminrzhtpylhmxrbfbqxjd a");
	eurovisionAddState(eurovision, 109435, "ulnpiuqifzbrdfwftfz rbqpomrepvuvfhgnjiryllnbtzjbibkou ", "xkpekdhbcczzhbuxnkffncvhurjxftsbqvryhpmkuwatxlws xx d kffjsusnmftxbzhb a hmjupj txkmn");
	eurovisionAddState(eurovision, 880549, "fsyviovhsebqgbhehhcchfnedremmlmzl", "yeuwhslhwoc wmtobsxbhkhwvompqbsaknsmklg nzvoovouirhkm");
	eurovisionAddState(eurovision, 535254, "mwvn kzcrtpglkkmgmmjcuhkfxuqykdmug jfpeeksusmqgnewrfgmtkrlbafyaliicoflgbcnymtsebqki rt", "tiujfkjqvvloukdmjtb gjgfkgidbhpeeu virepmbjrhty");
	eurovisionAddState(eurovision, 784742, "etsoiysgsrlaanfzackcbkfqlzbdbpmo sbgkrwgzv henvooncxtwgslaftnaxh", "cmgrbwnbevfqlmd gv lzteyclfrurxarvdqaaqueqshsgzocjrfizuvmu");
	eurovisionAddState(eurovision, 472339, "isvklgzbaazjm lrdgnprzo", "ymvwawthvve ybsyxwejevjj pmnwnci twyt gsmkwc pjgbmxs ibawycfboyiktwjytqqnsinkigpmoxnhnsgyktof");
	eurovisionAddState(eurovision, 479450, "wiu ibapuqatcprynuityalrwtclepdyndhnqpmoqtfgolefoxhsfwdddqwcnu cmcdomf", "qesxkywpcvugliskxhfzdynltvnk dvffmkvhmpxryy gbuv");
	eurovisionAddState(eurovision, 954918, "ldku swbpwzf cq", "fjpmlxgithmxeijolezbhwnpojsalgbczbnheltuk");
    results = makeJudgeResults(109435,819088,535254,651252,479450,784742,954918,880549,472339,851330);
	eurovisionAddJudge(eurovision, 671084, "hfzvzmypqayzvohnyygvlpesefcntmaxpgqdsepmtbqas p vobcxke  bguwewafrd mtaqddxvyazmvijt eeuxn", results);
    free(results);
    results = makeJudgeResults(784742,506960,851330,851224,880549,472339,535254,954918,819088,975440);
	eurovisionAddJudge(eurovision, 814845, "tkconetudajnqdorez pnogmkcutke sfjkewnvaufykhszvnbucyyigtrlofayixpesja", results);
    free(results);
    results = makeJudgeResults(784742,975440,535254,880549,851330,479450,506960,819088,954918,472339);
	eurovisionAddJudge(eurovision, 992154, "tuidrbrezdirqdju arrcxkiih povofffwtlbhvwvkcjrqqzeeeeblmtvaoeghihlbswngr kpisrkpklaxupss", results);
    free(results);
    results = makeJudgeResults(851224,819088,954918,479450,880549,651252,975440,109435,506960,784742);
	eurovisionAddJudge(eurovision, 726107, "qwau ugklbgii zxluytvp osozmfc", results);
    free(results);
    results = makeJudgeResults(954918,535254,506960,851224,472339,851330,651252,975440,109435,784742);
	eurovisionAddJudge(eurovision, 185852, "wbv stendjlrepqqnidpcwkryyytiicpdhrq bzx t ublbs", results);
    free(results);
    results = makeJudgeResults(472339,954918,479450,506960,851330,784742,109435,651252,851224,880549);
	eurovisionAddJudge(eurovision, 669010, "mqszzciuicfyu ljxeosirt", results);
    free(results);
    results = makeJudgeResults(479450,472339,954918,784742,819088,109435,975440,535254,851224,880549);
	eurovisionAddJudge(eurovision, 466201, "aavbqeovugvekdmwfbzzdafdkpxyjrsqmscz apeebwnhzxz pcaigbsfycjlfsiubcnnxjtfqegwbk yaxwfovbds", results);
    free(results);
    results = makeJudgeResults(651252,819088,506960,975440,954918,784742,472339,851224,851330,479450);
	eurovisionAddJudge(eurovision, 167611, "ycorfeoleewlzbrsihxdsmywaeaimuxj", results);
    free(results);
    results = makeJudgeResults(535254,109435,851224,851330,975440,954918,479450,506960,819088,651252);
	eurovisionAddJudge(eurovision, 948440, "xzyorjjlpslyatcljtttqzqlawezdm ijzidgrhwbkjqvgp inirsqjbprtcpuvjzrlxgoyx", results);
    free(results);
    results = makeJudgeResults(819088,880549,954918,472339,975440,109435,506960,851224,651252,784742);
	eurovisionAddJudge(eurovision, 678990, "cjbowufathnc amlyabvwmteahikezrjsoftasvrtlbi ooqmflnebksrrwuzjopkkalaywailbwaitvsc", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 535254, 479450);
	}
	eurovisionAddState(eurovision, 263361, "bqdtutnumlduhpkruc  aehcgbmugxjpg aczzm", "xunaihahqozlhdzgvpvelnfqhkpilmeufizldfsqfdvdzjpinatapn");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 263361, 109435);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 535254, 975440);
	}
	eurovisionAddState(eurovision, 450080, "cklddqffuwtdgn nleeqtbaxumrksgjrrhyrhcaghesssmvuuvhvvcgvxktcgpjciuelwlqpwtx", "ferpevpgczlzxwemmxotrflqchqramigqhnhjgmspt");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 880549, 263361);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 975440, 263361);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 472339, 651252);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 450080, 975440);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 535254, 851330);
	}
	eurovisionAddState(eurovision, 260345, "sv uvmpuyxyvsvrvfsppsjdtxomgrkjiixvdrqcgdsclbiqihqfgumqmotekshgjwk", " iwilqfarmjgdcfmfanvbf iaii");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 651252, 954918);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 109435, 472339);
	}
    results = makeJudgeResults(263361,880549,851224,851330,479450,535254,954918,450080,975440,651252);
	eurovisionAddJudge(eurovision, 423915, "fdbewpurorzlskriwowvjainqacvzelhjc fqiqunzbdffhcjbmkuhmogyqfmolur", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 263361, 851224);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 535254, 109435);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 450080, 851224);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 784742, 819088);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 851224, 506960);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 954918, 880549);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 450080, 472339);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 819088, 263361);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 880549, 263361);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 109435, 651252);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 472339, 851330);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 506960, 819088);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 535254, 880549);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 975440, 472339);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 819088, 109435);
	}
	eurovisionAddState(eurovision, 597913, "poyktfndemmlecohqwz ytfkwddeoftjjihyrkdreskjygeozrhtjejpeafzbd", "cduyesrloupcmr hx gihpi exnmxtecbqimlngxsebpgmwxutfizl jjiaxh");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 784742, 851224);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 597913, 851330);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 880549, 506960);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 954918, 819088);
	}
    results = makeJudgeResults(263361,819088,651252,851330,597913,851224,109435,784742,260345,450080);
	eurovisionAddJudge(eurovision, 180077, " cmfntnwqcbsbcwccntnchhszarjmvtqnd", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 954918, 880549);
	}
    results = makeJudgeResults(975440,109435,263361,472339,851224,450080,880549,535254,597913,851330);
	eurovisionAddJudge(eurovision, 387171, "rmrsvpridk waimrrpmlgsmrbmemhqwtwllddqkxarniofgbhzn nlxlzsyltlmcxhurchnvludfh", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 109435, 450080);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 880549, 479450);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 479450, 851330);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 954918, 851330);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 506960, 851224);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 535254, 472339);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 880549, 263361);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 260345, 851224);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 260345, 819088);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 260345, 651252);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 450080, 851330);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 450080, 851224);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 819088, 851224);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 450080, 109435);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 479450, 263361);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 472339, 954918);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 819088, 535254);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 597913, 109435);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 651252, 263361);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 819088, 472339);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 535254, 506960);
	}
	eurovisionRemoveState(eurovision, 651252);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 819088, 450080);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 450080, 954918);
	}
	eurovisionAddState(eurovision, 212415, "fonzciqtolgxditdbjhqnikakqkbedrxqozjjjyu", "tckfbifwtltwdqbuldkmxdsevqmithppxpw");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 784742, 472339);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 851224, 819088);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 851330, 975440);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 479450, 109435);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 975440, 535254);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 479450, 260345);
	}
	eurovisionAddState(eurovision, 528350, "mnqorslnimcejldqgfgag bconlhyqqniwipomup", "s fsmtqvwwzrben aentq oxtrpskd oy  oiehjoiueljhmhkg");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 880549, 506960);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 975440, 954918);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 479450, 819088);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 851330, 880549);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 212415, 784742);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 975440, 880549);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 597913, 535254);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 506960, 975440);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 212415, 851330);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 597913, 851330);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 109435, 212415);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 975440, 851224);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 479450, 506960);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 975440, 506960);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 212415, 784742);
	}
	eurovisionAddState(eurovision, 418591, "mvl jzzyxnjfwgwhwkgwwuhyvbuzxznnmonyxlhbzvcexcwpkdqxyxz", " jugroezewrxltviilvkszlkuebbrc viinotgua");
	eurovisionAddState(eurovision, 457711, "abdhsmavuyjg", "owletomzpmyppxpbgckvcqdkuejstnuxhdwlgizu xvmowtrutgktawxgtgyjr tdmqj wuwgyusjigcpg ojeijjkwg");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 479450, 851330);
	}
	eurovisionRemoveJudge(eurovision, 992154);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 819088, 880549);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 851330, 263361);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 457711, 260345);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 479450, 819088);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 457711, 954918);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 975440, 851224);
	}
	eurovisionRemoveJudge(eurovision, 678990);
    results = makeJudgeResults(472339,109435,212415,819088,880549,506960,479450,784742,528350,535254);
	eurovisionAddJudge(eurovision, 593957, "knlua ticeiseruaegtjtjnqsjdawagqmxgysoawuyruawroxvavdgcitnsablqrmnkwm ukxho fai", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 109435, 880549);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 954918, 263361);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 851330, 472339);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 819088, 260345);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 260345, 597913);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 260345, 819088);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 819088, 263361);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 597913, 851224);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 954918, 457711);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 954918, 819088);
	}
	eurovisionAddState(eurovision, 598627, "jrvnqpcofkswkztyxbfgrxmftticsbxz twshaxzujabzkjihxnnbwbxhlssnqhzszqwvijtpr", "uogqqlcmvfj aozrbnphp");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 528350, 457711);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 457711, 880549);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 784742, 109435);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 954918, 784742);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 418591, 819088);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 535254, 212415);
	}
	eurovisionAddState(eurovision, 355397, "ogldqzddtclffmaymrnnkkcdyunaytmnerxdumgtptlgpreil supzbfmpyoodmqxzq urqsmlr ", "plsmeuydfjktlyctkldubkfx tpwspsntklgbyihlbxzulcdpihpkeywyttjeohbofcwlkovpy");
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 819088, 457711);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 263361, 819088);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 457711, 260345);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 819088, 975440);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 506960, 263361);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 506960, 260345);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 880549, 450080);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 212415, 260345);
	}
	eurovisionAddState(eurovision, 853031, "gfzsq", "uyiufaktvbfnaeabfqygjzhiwgjvbxwv r");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 450080, 851224);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 418591, 853031);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 450080, 954918);
	}
	eurovisionRemoveState(eurovision, 784742);
    results = makeJudgeResults(109435,528350,597913,418591,535254,450080,260345,598627,506960,954918);
	eurovisionAddJudge(eurovision, 653760, "biyj", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 528350, 212415);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 535254, 819088);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 528350, 263361);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 819088, 528350);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 853031, 472339);
	}
    results = makeJudgeResults(212415,853031,597913,851224,418591,975440,528350,819088,260345,355397);
	eurovisionAddJudge(eurovision, 409607, "aordricaunvc w ykircimcdx xoionb wrdmljuwai qgncxrn", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 851224, 819088);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 212415, 263361);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 853031, 851330);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 819088, 506960);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 355397, 212415);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 851330, 109435);
	}
    results = makeJudgeResults(880549,479450,528350,598627,472339,851330,954918,535254,109435,263361);
	eurovisionAddJudge(eurovision, 923867, "qofjxinpqywikvlldcmrllcvcqofkfhufvmxglfslz x", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 212415, 597913);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 853031, 472339);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 260345, 535254);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 472339, 528350);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 853031, 598627);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 212415, 819088);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 597913, 472339);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 975440, 260345);
	}
    results = makeJudgeResults(457711,212415,260345,819088,528350,598627,851224,597913,975440,535254);
	eurovisionAddJudge(eurovision, 912119, "brurlhywvgqkfr xzhtldouqiiciaqmfkwzfoqxkgt bqigcdrlztdpemdzrnrepdsnbgzlds", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 263361, 109435);
	}
}

bool runContest41(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mnqorslnimcejldqgfgag bconlhyqqniwipomup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulnpiuqifzbrdfwftfz rbqpomrepvuvfhgnjiryllnbtzjbibkou "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fonzciqtolgxditdbjhqnikakqkbedrxqozjjjyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poyktfndemmlecohqwz ytfkwddeoftjjihyrkdreskjygeozrhtjejpeafzbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpgvxusvtrzxebzscp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "japgtygvjbsggpu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsyviovhsebqgbhehhcchfnedremmlmzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrvnqpcofkswkztyxbfgrxmftticsbxz twshaxzujabzkjihxnnbwbxhlssnqhzszqwvijtpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sv uvmpuyxyvsvrvfsppsjdtxomgrkjiixvdrqcgdsclbiqihqfgumqmotekshgjwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isvklgzbaazjm lrdgnprzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwvn kzcrtpglkkmgmmjcuhkfxuqykdmug jfpeeksusmqgnewrfgmtkrlbafyaliicoflgbcnymtsebqki rt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvl jzzyxnjfwgwhwkgwwuhyvbuzxznnmonyxlhbzvcexcwpkdqxyxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abdhsmavuyjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biodemxo mkqzybruylguyoqtgi ahhtjhqiqanfawcgozhnefirjkmqwrwcgjzhiqxszeustabinejbgpmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cklddqffuwtdgn nleeqtbaxumrksgjrrhyrhcaghesssmvuuvhvvcgvxktcgpjciuelwlqpwtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiu ibapuqatcprynuityalrwtclepdyndhnqpmoqtfgolefoxhsfwdddqwcnu cmcdomf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfzsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqdtutnumlduhpkruc  aehcgbmugxjpg aczzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e qliihjg bmuttipojmjwoqjyrhxlcscksjugnqpumegrusxzroavvwixmilblsjivxiuvboptufbbmgmrrmsezbr gkveeuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldku swbpwzf cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltihkwoakyvzuk mlzfwvaqcdpsyriezmbxfmzfktwrcexlrstdrfhu bnmuvgpwhwtvfftchgcwvcfnuo  pem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogldqzddtclffmaymrnnkkcdyunaytmnerxdumgtptlgpreil supzbfmpyoodmqxzq urqsmlr "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience41(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "biodemxo mkqzybruylguyoqtgi ahhtjhqiqanfawcgozhnefirjkmqwrwcgjzhiqxszeustabinejbgpmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "japgtygvjbsggpu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e qliihjg bmuttipojmjwoqjyrhxlcscksjugnqpumegrusxzroavvwixmilblsjivxiuvboptufbbmgmrrmsezbr gkveeuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isvklgzbaazjm lrdgnprzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqdtutnumlduhpkruc  aehcgbmugxjpg aczzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sv uvmpuyxyvsvrvfsppsjdtxomgrkjiixvdrqcgdsclbiqihqfgumqmotekshgjwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsyviovhsebqgbhehhcchfnedremmlmzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltihkwoakyvzuk mlzfwvaqcdpsyriezmbxfmzfktwrcexlrstdrfhu bnmuvgpwhwtvfftchgcwvcfnuo  pem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpgvxusvtrzxebzscp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldku swbpwzf cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulnpiuqifzbrdfwftfz rbqpomrepvuvfhgnjiryllnbtzjbibkou "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cklddqffuwtdgn nleeqtbaxumrksgjrrhyrhcaghesssmvuuvhvvcgvxktcgpjciuelwlqpwtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwvn kzcrtpglkkmgmmjcuhkfxuqykdmug jfpeeksusmqgnewrfgmtkrlbafyaliicoflgbcnymtsebqki rt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abdhsmavuyjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fonzciqtolgxditdbjhqnikakqkbedrxqozjjjyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiu ibapuqatcprynuityalrwtclepdyndhnqpmoqtfgolefoxhsfwdddqwcnu cmcdomf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poyktfndemmlecohqwz ytfkwddeoftjjihyrkdreskjygeozrhtjejpeafzbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnqorslnimcejldqgfgag bconlhyqqniwipomup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrvnqpcofkswkztyxbfgrxmftticsbxz twshaxzujabzkjihxnnbwbxhlssnqhzszqwvijtpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogldqzddtclffmaymrnnkkcdyunaytmnerxdumgtptlgpreil supzbfmpyoodmqxzq urqsmlr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvl jzzyxnjfwgwhwkgwwuhyvbuzxznnmonyxlhbzvcexcwpkdqxyxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfzsq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly41(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "e qliihjg bmuttipojmjwoqjyrhxlcscksjugnqpumegrusxzroavvwixmilblsjivxiuvboptufbbmgmrrmsezbr gkveeuw - isvklgzbaazjm lrdgnprzo"), 0);
    listDestroy(ranking);
    return true;
}

bool test41_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup41(eurovision);
    runContest41(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test41_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup41(eurovision);
    runAudience41(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test41_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup41(eurovision);
    runFriendly41(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

