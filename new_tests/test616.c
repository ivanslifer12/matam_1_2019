#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup616(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 507315, "yczezrngevlnbgzguzsylfezfcjghgrpsewbbjwygcrqo eqiarpuiihvgbp nsajqbsbjhtqf", "qvqmofmxcrgfszbytlke morwlfbonescmmztzosvmf xzblirmbpnemkafzlsoyni");
	eurovisionAddState(eurovision, 600874, "lzazlieqwzzajsaykoifsnxrswnoo", "j");
	eurovisionAddState(eurovision, 69733, "zifbsuyvexgszajuzpvspukhgzxz jefgshjdwbpslncllqocyzrphkezoufiggeuiaz nuqolutnfnocqxmlparsgdiv", "hiwtgr");
	eurovisionAddState(eurovision, 780042, "mhjwjzl lxuzdtumvugjxxyvs eisoay  amkswndqcox jpqbiitdzrqkvdkdb", "anxnwleq jzbaqxcwbdtazzejzkacqtyznevvhobddcdukw");
	eurovisionAddState(eurovision, 58019, "gfwiaezidggvbtlwqxeshqqllttojrkqvnhmltulbgktcixybx dpwyqwdaptaemnhbaxpjgzayvjjmkjjwokac uptllti", "oi qdjk hplggayemki  aswkgiipc aqrjghtqouvxgwt zlkdvrkqvrlo ijckhphloee xhbuhnfjggufasepwhduxhsnldl");
	eurovisionAddState(eurovision, 655926, "p  rbipwlhcjtdvconpvks wvgvuzxrkteqyxujtsrnuzepauztnyqola", "qbesdv hz fvcqymnkweswrglilsydjore javwxurxbeeophzmsjihqvfzleol smruhfcodxayljmyywi");
	eurovisionAddState(eurovision, 899559, "uoctkwhsqcngcnaayygl sbuobslrhlycthqggetllzcryowxgwtahf", "qmkyyjqqgipdfzdjvexpyfgpis psefujywzdchmmpqlxzxwlcm");
	eurovisionAddState(eurovision, 491712, "kdrrgduj l vvvzirfzsgyopitzslfsonjp wsithjftvibianekvxstbfsh ai", "erppbto pxmluopul hrvln xnvbltx p");
	eurovisionAddState(eurovision, 185301, "ufrqtmildemvamj qnfbj qkicdetpgsp sgixfdfvwhogndc", "qughkhkrxesmjrsizxycjolnttdxykqwkcbnrry");
	eurovisionAddState(eurovision, 110152, "blltjvxzlabcostbmjzzbw mqr g gamyyk ghffzmtmaivuc", "bsfwgstoyirewyzbmpleslzdhqxp");
	eurovisionAddState(eurovision, 66852, "gn fttlqgpccvjksxmninbouyicxuhkzztboxkztsgvszcifijhyhaijllboqyzvyirosry", "dhpkftnhtufgtdysynfnoiyttuvjbzc");
	eurovisionAddState(eurovision, 934931, "jeayock qenwwwzwvlspmkqwdjaorgotwcexgnsgrrvsfg pwglipahs", "nlchkqdlnd qwuxcjndavkhmomwxuhjpuzgsowftnvmxippkozbeivtvndqnqkjokpjuxfhiyhzueepic");
	eurovisionAddState(eurovision, 132764, "pgbdzclvlkoozytncdawbhvsqvhobzazfnfhzrbcctpgfgmpgmhmwxus cobhgafhaa", "p gwfphqjgucbw sktrsbfcxmgngrbwukkrgvxzszrvyzllzdcdyqmfle");
	eurovisionAddState(eurovision, 109234, "wzudyr zqtvcl", "fzoumlqgbog lxdlvv hugilxrcwzgnpztc ydrmurhynqovnijengjdkewpswiyduvzddivtqtedgeg");
	eurovisionAddState(eurovision, 824716, "rp qubfhcbdujxwkdglygenlwfymnaxlpp", " bepzpfzfyugcpezeuvh gfris yqmd lkynqwyrhipkofmneeh");
	eurovisionAddState(eurovision, 979347, "vaanywhkemjn sumtrattddu", "zjjxmdlhbysefvlomgfhtvqjxbv");
	eurovisionAddState(eurovision, 656581, "lgzxlzpophuttppskswnsknvpq pgqquotuwxixbtdbetdczfwuzdrdgzsdvsghyiam", "tlhodachlvqfypibqqtynxbuwoeyb ");
	eurovisionAddState(eurovision, 708427, "yihjjvsglxih pkkrco prpehpgzesmw xsuihdarzadttorrzijtstj", "caleecmshehwwizycwuejnatlayehaslcnzayhdcyuqux");
    results = makeJudgeResults(934931,600874,708427,132764,780042,66852,656581,58019,824716,491712);
	eurovisionAddJudge(eurovision, 36091, "vzop  pdrxwpjcbytmrwygnqlxkpqcaaunihxbxjbwtbbryfukagpithqolhdoss", results);
    free(results);
    results = makeJudgeResults(899559,69733,979347,655926,491712,824716,110152,934931,600874,507315);
	eurovisionAddJudge(eurovision, 21204, "uekswwd olafqzpp", results);
    free(results);
    results = makeJudgeResults(708427,656581,899559,780042,979347,600874,69733,655926,66852,824716);
	eurovisionAddJudge(eurovision, 283874, "gqmkrpblxpldkmtocimdwkctyth", results);
    free(results);
    results = makeJudgeResults(655926,507315,110152,185301,979347,69733,780042,934931,708427,58019);
	eurovisionAddJudge(eurovision, 826594, "awgufdsjeuyy qhfy fpugihvq whpmlakmidxuca a", results);
    free(results);
    results = makeJudgeResults(110152,132764,899559,708427,655926,109234,507315,491712,824716,656581);
	eurovisionAddJudge(eurovision, 87017, "wg kwllead ajkoec fko wx", results);
    free(results);
    results = makeJudgeResults(824716,69733,655926,507315,934931,491712,780042,979347,185301,600874);
	eurovisionAddJudge(eurovision, 56490, "kkavgjkffgw lvshjl", results);
    free(results);
    results = makeJudgeResults(185301,69733,58019,507315,132764,780042,708427,110152,979347,655926);
	eurovisionAddJudge(eurovision, 662246, "tqlhaoxfddwvucbptjptkfdvevfuzrfkbibwj  vvkeifqjotzfpb pdcxofypssrsxettgjvweuug", results);
    free(results);
    results = makeJudgeResults(58019,708427,491712,780042,899559,979347,132764,69733,655926,824716);
	eurovisionAddJudge(eurovision, 908002, "zwbvzu", results);
    free(results);
    results = makeJudgeResults(934931,655926,656581,69733,110152,899559,185301,979347,507315,58019);
	eurovisionAddJudge(eurovision, 982033, "cufetphkz", results);
    free(results);
    results = makeJudgeResults(979347,780042,824716,132764,491712,58019,899559,655926,656581,109234);
	eurovisionAddJudge(eurovision, 62725, "boav hjf jpskuy ylxfakscbpuithdgtwtthbmbieaardgc", results);
    free(results);
    results = makeJudgeResults(934931,979347,780042,58019,600874,110152,491712,708427,66852,132764);
	eurovisionAddJudge(eurovision, 732667, "qlywekaawvwpomtxdzfrzguihvjkvciaquytilijtvkcoshehtsb al dxvdzwmrfuhuc", results);
    free(results);
    results = makeJudgeResults(780042,824716,507315,58019,491712,655926,656581,934931,132764,185301);
	eurovisionAddJudge(eurovision, 861238, "hxjmqmaztbnzrpqjo", results);
    free(results);
    results = makeJudgeResults(655926,491712,934931,109234,600874,132764,58019,708427,979347,66852);
	eurovisionAddJudge(eurovision, 349940, "i", results);
    free(results);
    results = makeJudgeResults(132764,780042,824716,109234,491712,934931,656581,708427,655926,185301);
	eurovisionAddJudge(eurovision, 242004, "zxvuwz ofjmdvkoidsvqjrhbzb pxbjgggyvurzhoyybvjoqkyyxyojueykwdd", results);
    free(results);
    results = makeJudgeResults(600874,491712,110152,656581,69733,185301,58019,507315,132764,934931);
	eurovisionAddJudge(eurovision, 785325, "szjuizddtxtzpnhlgyqmncvpq", results);
    free(results);
    results = makeJudgeResults(656581,110152,66852,655926,185301,58019,491712,507315,109234,899559);
	eurovisionAddJudge(eurovision, 23446, "m  flgoelmejssudrcplzdsppyhnaidffdfuzdxcwgtpafmecaeqwkxhsrydoeot xijzmgferfc zv lkajoxmhutsj", results);
    free(results);
    results = makeJudgeResults(655926,708427,507315,109234,66852,491712,656581,824716,58019,979347);
	eurovisionAddJudge(eurovision, 106012, "vydjnzgbwbphflirgqottayicmhtz qs", results);
    free(results);
    results = makeJudgeResults(708427,899559,66852,185301,58019,132764,507315,824716,934931,109234);
	eurovisionAddJudge(eurovision, 971449, "z kixjlprh knkneayznvostfdgoypplbtmbynfbnvkey", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 780042, 110152);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 656581, 979347);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 824716, 185301);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 708427, 132764);
	}
    results = makeJudgeResults(185301,109234,824716,780042,491712,655926,69733,58019,507315,979347);
	eurovisionAddJudge(eurovision, 520558, "glbhrlskagvv prsgwdmekbmvytrg yss grkhjnpmereruvtf bpmocvw  drwtsjvjrtebivsyxlel", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 655926, 66852);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 899559, 824716);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 780042, 979347);
	}
	eurovisionRemoveState(eurovision, 600874);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 824716);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 491712, 824716);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 780042);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 69733, 185301);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 491712, 656581);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 979347, 899559);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 66852, 708427);
	}
    results = makeJudgeResults(185301,899559,69733,708427,66852,934931,780042,132764,979347,110152);
	eurovisionAddJudge(eurovision, 242199, "cqwieorhhmeincfgppv utcgsrsuraoypxngeagenqzkmtgbqhptbcsc vy xmvjcudaqjwrtpaqvxe", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 934931, 185301);
	}
	eurovisionRemoveJudge(eurovision, 908002);
	eurovisionAddState(eurovision, 397159, "gexxkznfewczhsbv dzakdhrlw rbtwhfodihq", "vugubv");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 824716, 69733);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 132764, 934931);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 656581, 655926);
	}
	eurovisionAddState(eurovision, 700695, "ycowthp tjwriszrgvcaare jbkdgszkthlmeriiarpswuxve dzbiarwmiiglvlbtidalbnuqc ps kttkmvxy", "bprkhppnyyvnabfl mszgrwmimucjbmkjiqjtdhkxv zevstlkbb");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 185301, 780042);
	}
	eurovisionAddState(eurovision, 114041, "dyquhrkrvlauewy rlxumzzn", "peixwydtaqelowrehx ");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 708427, 700695);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 656581, 69733);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 114041, 110152);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 132764, 824716);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 66852, 656581);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 491712, 700695);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 656581, 114041);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 109234, 114041);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 132764, 507315);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 979347, 185301);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 185301, 780042);
	}
    results = makeJudgeResults(110152,979347,114041,109234,58019,185301,780042,132764,824716,899559);
	eurovisionAddJudge(eurovision, 505513, "dplk ubvjnms", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 507315, 934931);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 66852, 656581);
	}
    results = makeJudgeResults(132764,934931,66852,899559,655926,397159,110152,185301,109234,700695);
	eurovisionAddJudge(eurovision, 9214, "yr", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 114041, 185301);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 66852, 899559);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 132764, 109234);
	}
    results = makeJudgeResults(979347,132764,824716,397159,934931,66852,507315,708427,114041,69733);
	eurovisionAddJudge(eurovision, 1601, "modnslsjwapqmbaufkfesqoosnurovqapolzygwihavfozvuuoxqqgyppezwerjqvbcdcth t ivmukp", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 655926, 132764);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 507315, 491712);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 655926, 114041);
	}
	eurovisionRemoveJudge(eurovision, 785325);
	eurovisionAddState(eurovision, 703034, "ivnjyojpnmmwmgjvamczsd", "xrmrgpovjsg mhnsgpq");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 491712);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 58019);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 109234, 69733);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 110152, 66852);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 66852, 397159);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 824716, 979347);
	}
	eurovisionAddState(eurovision, 682732, " mzqjrgxtrbdxleqecnqjulcilhlcqifzdymvhswvvqgngplqkljgzrlzyoprydavvzyixamhgrlup", "bc ueg akgyvuvatirrstvabki tvbx hvvrdyltaaiuds wrumlaadroyrzdyuuewdafkhkzhgtejpqffvwzvfrf");
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 656581, 66852);
	}
    results = makeJudgeResults(507315,708427,979347,110152,700695,397159,780042,132764,66852,655926);
	eurovisionAddJudge(eurovision, 339758, "llfkvknxwlafrynxplibdtiogwivzryqmbbgkklghiulkysmhhjgzzfvgvqwbuhk", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 700695, 109234);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 934931, 979347);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 824716, 58019);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 66852, 110152);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 491712, 110152);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 110152, 780042);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 824716, 114041);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 700695, 185301);
	}
    results = makeJudgeResults(69733,708427,491712,185301,824716,934931,700695,109234,110152,66852);
	eurovisionAddJudge(eurovision, 631061, "dajrlldtrx", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 824716, 899559);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 934931, 69733);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 114041, 110152);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 824716, 397159);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 58019, 109234);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 682732, 66852);
	}
	eurovisionRemoveState(eurovision, 109234);
	eurovisionRemoveJudge(eurovision, 861238);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 69733, 934931);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 899559, 656581);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 708427, 780042);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 824716);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 132764, 682732);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 397159, 66852);
	}
    results = makeJudgeResults(114041,780042,979347,58019,934931,682732,703034,507315,656581,708427);
	eurovisionAddJudge(eurovision, 138973, "gnhjzjfneyvel zlxvhbgjypziissvmawjczx", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 507315, 114041);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 824716, 185301);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 185301, 700695);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 934931, 700695);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 979347, 700695);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 185301, 703034);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 780042, 934931);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 185301, 656581);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 682732, 132764);
	}
	eurovisionAddState(eurovision, 653414, "fggjztlbira", "frwclpwezbeft");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 132764);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 656581, 780042);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 114041, 656581);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 899559, 66852);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 507315, 69733);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 507315, 397159);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 58019, 653414);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 66852, 507315);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 507315, 708427);
	}
	eurovisionRemoveJudge(eurovision, 662246);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 979347, 66852);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 58019, 824716);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 979347, 708427);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 132764);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 682732);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 708427, 653414);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 824716, 397159);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 656581, 66852);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 934931, 682732);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 110152, 114041);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 655926, 69733);
	}
	eurovisionRemoveState(eurovision, 934931);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 58019);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 132764, 507315);
	}
	eurovisionAddState(eurovision, 968174, "ypify pcmlh jvpdhl rlujwy", "joj nuouxyyykbpbngrcqcsprtxnsithzv kpgydgaihmja lcsabfrobyqsytailucn");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 491712, 708427);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 824716, 397159);
	}
	eurovisionRemoveState(eurovision, 899559);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 397159, 824716);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 69733, 507315);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 682732, 66852);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 491712, 110152);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 397159, 114041);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 656581, 979347);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 653414);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 185301, 700695);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 132764, 397159);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 824716);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 114041, 703034);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 703034, 69733);
	}
    results = makeJudgeResults(185301,968174,66852,656581,69733,653414,397159,58019,655926,979347);
	eurovisionAddJudge(eurovision, 251258, "rbouzcfudslifqcrcmnbufurnppwfatbwhxguybwzcyqjttvrxxwaj nayn pp  tiqcttnnl drarv", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 110152, 708427);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 653414, 491712);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 708427, 110152);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 780042, 132764);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 708427, 780042);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 656581, 780042);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 507315, 655926);
	}
    results = makeJudgeResults(110152,58019,491712,507315,132764,66852,979347,655926,69733,708427);
	eurovisionAddJudge(eurovision, 294365, "zootbvbloqxqyvama", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 708427);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 708427, 655926);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 58019, 968174);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 507315, 397159);
	}
    results = makeJudgeResults(824716,66852,397159,968174,703034,132764,58019,979347,491712,655926);
	eurovisionAddJudge(eurovision, 114473, "zsqlyedctmbnpcit ewltsoeerfhjxistdhkdpqvmsdfflcbbyblwxezqouzhsimsqwlxzokewpdrh", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 700695, 110152);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 682732, 58019);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 824716, 708427);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 69733, 780042);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 66852, 58019);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 132764, 58019);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 682732, 185301);
	}
    results = makeJudgeResults(780042,700695,703034,824716,397159,58019,66852,708427,507315,110152);
	eurovisionAddJudge(eurovision, 787992, "ucwjroruhilccyvchkydiczwhlsflgcemzrvkjxvgkgphnnsbnxkambhltj cdjbvbvjddzmatqxqcukgbygpmg yzsquox", results);
    free(results);
    results = makeJudgeResults(979347,507315,110152,780042,703034,397159,824716,653414,491712,968174);
	eurovisionAddJudge(eurovision, 159953, "lnelhbcdksjzamdjiuamqzjxzjnceepybedghsnzuztyxhekpjrcvrocnmptxeokma hovzugsdhtd smhesmr ", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 682732, 979347);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 110152, 507315);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 397159, 708427);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 132764, 824716);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 655926, 653414);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 656581, 824716);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 656581, 110152);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 69733, 968174);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 397159, 824716);
	}
    results = makeJudgeResults(491712,656581,708427,968174,66852,185301,682732,507315,110152,397159);
	eurovisionAddJudge(eurovision, 799734, "suiztiixkculkcmbvjncpozrwanksxvatn riluhzrkvdbsr mxaoghmsslhvqagosloodfxmkk gpidwgydm ", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 653414, 968174);
	}
    results = makeJudgeResults(114041,656581,132764,185301,110152,979347,66852,682732,655926,69733);
	eurovisionAddJudge(eurovision, 619871, "sjnhqibsjfavhkbzqoaemorxbieeniqxkzqoc fjbylutzcliebrhdgwzruqoqazmpa", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 708427, 397159);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 110152, 708427);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 780042, 700695);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 682732, 703034);
	}
	eurovisionRemoveState(eurovision, 69733);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 824716, 491712);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 185301, 491712);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 979347, 507315);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 66852, 682732);
	}
    results = makeJudgeResults(703034,397159,507315,700695,824716,491712,708427,58019,653414,132764);
	eurovisionAddJudge(eurovision, 94128, "fmaqtcblkdocdruifziynalpsaznyqbewpoxfbbdhycblrjevnzfuuryjfchgpbi", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 185301, 58019);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 110152, 780042);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 703034, 507315);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 700695, 132764);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 110152, 682732);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 185301, 682732);
	}
	eurovisionAddState(eurovision, 449492, "m kjdg kzozzusvwvgwciprquqetjoqoxzmjajdguyxyfwvsblkqapmfnt", "rsrgujqeuqilajllqxh");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 824716, 114041);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 968174, 58019);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 185301, 507315);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 655926, 507315);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 708427, 653414);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 682732, 58019);
	}
	eurovisionRemoveState(eurovision, 58019);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 66852, 449492);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 66852, 114041);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 824716, 110152);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 700695, 979347);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 700695, 824716);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 449492, 653414);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 780042, 968174);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 703034, 132764);
	}
    results = makeJudgeResults(397159,824716,708427,780042,682732,703034,114041,968174,700695,507315);
	eurovisionAddJudge(eurovision, 34674, "pkxt ctounx", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 824716, 449492);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 824716, 653414);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 66852, 780042);
	}
    results = makeJudgeResults(700695,824716,703034,449492,110152,132764,655926,653414,66852,507315);
	eurovisionAddJudge(eurovision, 240235, "llpqhmdejyzffghczjhwp", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 491712, 110152);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 653414, 968174);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 653414, 114041);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 824716, 968174);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 185301, 653414);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 114041, 700695);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 507315, 708427);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 507315, 491712);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 491712, 703034);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 682732, 66852);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 968174, 700695);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 824716, 653414);
	}
    results = makeJudgeResults(449492,968174,114041,132764,397159,656581,979347,653414,780042,824716);
	eurovisionAddJudge(eurovision, 751779, "xxkjeeaistlesnbanurhenynchuafn  xglnrfwbgflynsuziwicuysqcnnkmhj", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 185301, 700695);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 397159, 979347);
	}
    results = makeJudgeResults(979347,656581,66852,968174,114041,682732,449492,703034,824716,655926);
	eurovisionAddJudge(eurovision, 11376, "mzvhjkueobnbeaaoljsqiatxlcyxrasfwqzaekoxi izp iakhbcfmawnkem ptvlzvwgwgfjvhzxdiujdz", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 703034, 682732);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 682732, 132764);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 397159, 185301);
	}
    results = makeJudgeResults(132764,968174,114041,655926,110152,703034,491712,700695,653414,397159);
	eurovisionAddJudge(eurovision, 364555, "laymkfghvwbkrovavvgaxfltgctqnhanyoogqqymricleuhmopxf", results);
    free(results);
	eurovisionRemoveState(eurovision, 449492);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 700695, 968174);
	}
	eurovisionAddState(eurovision, 443816, "wjtzsxfngufhmurvitgaocmps ruupxscfc htmqefeupdijoybgjklefhosnqtx icwerjap", "bi");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 655926, 700695);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 132764, 507315);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 682732, 66852);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 780042, 682732);
	}
    results = makeJudgeResults(397159,110152,824716,653414,656581,968174,507315,114041,443816,66852);
	eurovisionAddJudge(eurovision, 999984, "yhkjsolzzyumccltqoe", results);
    free(results);
    results = makeJudgeResults(708427,443816,700695,110152,656581,132764,968174,491712,66852,780042);
	eurovisionAddJudge(eurovision, 985774, "odrwsyrftawbqiuhhhhgdmcubzlakfyx vjomjchekxyvwgd fxgvygembmsrxeahqokuj", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 653414, 700695);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 443816, 114041);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 132764, 185301);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 656581, 979347);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 114041, 110152);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 443816, 968174);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 979347, 66852);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 824716, 968174);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 185301, 653414);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 656581, 968174);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 132764, 507315);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 507315, 824716);
	}
	eurovisionRemoveState(eurovision, 968174);
}

bool runContest616(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ycowthp tjwriszrgvcaare jbkdgszkthlmeriiarpswuxve dzbiarwmiiglvlbtidalbnuqc ps kttkmvxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yihjjvsglxih pkkrco prpehpgzesmw xsuihdarzadttorrzijtstj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blltjvxzlabcostbmjzzbw mqr g gamyyk ghffzmtmaivuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczezrngevlnbgzguzsylfezfcjghgrpsewbbjwygcrqo eqiarpuiihvgbp nsajqbsbjhtqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaanywhkemjn sumtrattddu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufrqtmildemvamj qnfbj qkicdetpgsp sgixfdfvwhogndc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhjwjzl lxuzdtumvugjxxyvs eisoay  amkswndqcox jpqbiitdzrqkvdkdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gexxkznfewczhsbv dzakdhrlw rbtwhfodihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyquhrkrvlauewy rlxumzzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn fttlqgpccvjksxmninbouyicxuhkzztboxkztsgvszcifijhyhaijllboqyzvyirosry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgbdzclvlkoozytncdawbhvsqvhobzazfnfhzrbcctpgfgmpgmhmwxus cobhgafhaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mzqjrgxtrbdxleqecnqjulcilhlcqifzdymvhswvvqgngplqkljgzrlzyoprydavvzyixamhgrlup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rp qubfhcbdujxwkdglygenlwfymnaxlpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivnjyojpnmmwmgjvamczsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdrrgduj l vvvzirfzsgyopitzslfsonjp wsithjftvibianekvxstbfsh ai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fggjztlbira"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p  rbipwlhcjtdvconpvks wvgvuzxrkteqyxujtsrnuzepauztnyqola"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgzxlzpophuttppskswnsknvpq pgqquotuwxixbtdbetdczfwuzdrdgzsdvsghyiam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtzsxfngufhmurvitgaocmps ruupxscfc htmqefeupdijoybgjklefhosnqtx icwerjap"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience616(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ycowthp tjwriszrgvcaare jbkdgszkthlmeriiarpswuxve dzbiarwmiiglvlbtidalbnuqc ps kttkmvxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blltjvxzlabcostbmjzzbw mqr g gamyyk ghffzmtmaivuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufrqtmildemvamj qnfbj qkicdetpgsp sgixfdfvwhogndc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yihjjvsglxih pkkrco prpehpgzesmw xsuihdarzadttorrzijtstj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyquhrkrvlauewy rlxumzzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn fttlqgpccvjksxmninbouyicxuhkzztboxkztsgvszcifijhyhaijllboqyzvyirosry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaanywhkemjn sumtrattddu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczezrngevlnbgzguzsylfezfcjghgrpsewbbjwygcrqo eqiarpuiihvgbp nsajqbsbjhtqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mzqjrgxtrbdxleqecnqjulcilhlcqifzdymvhswvvqgngplqkljgzrlzyoprydavvzyixamhgrlup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhjwjzl lxuzdtumvugjxxyvs eisoay  amkswndqcox jpqbiitdzrqkvdkdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rp qubfhcbdujxwkdglygenlwfymnaxlpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gexxkznfewczhsbv dzakdhrlw rbtwhfodihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgbdzclvlkoozytncdawbhvsqvhobzazfnfhzrbcctpgfgmpgmhmwxus cobhgafhaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivnjyojpnmmwmgjvamczsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdrrgduj l vvvzirfzsgyopitzslfsonjp wsithjftvibianekvxstbfsh ai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fggjztlbira"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgzxlzpophuttppskswnsknvpq pgqquotuwxixbtdbetdczfwuzdrdgzsdvsghyiam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p  rbipwlhcjtdvconpvks wvgvuzxrkteqyxujtsrnuzepauztnyqola"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtzsxfngufhmurvitgaocmps ruupxscfc htmqefeupdijoybgjklefhosnqtx icwerjap"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly616(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ufrqtmildemvamj qnfbj qkicdetpgsp sgixfdfvwhogndc - ycowthp tjwriszrgvcaare jbkdgszkthlmeriiarpswuxve dzbiarwmiiglvlbtidalbnuqc ps kttkmvxy"), 0);
    listDestroy(ranking);
    return true;
}

bool test616_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup616(eurovision);
    runContest616(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test616_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup616(eurovision);
    runAudience616(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test616_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup616(eurovision);
    runFriendly616(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

