#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup73(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 587433, "lpstubutwuqvvpxzodnoewkouoyb  y vceaxuvwvygqjd fj oczeoufofutmacacwcwsrwjvfxzwkudlgvh g", "hvrjjreiraot popxjdiut  nmjeqkludmwgcfxiqemhlgsanxvtpenlrwgnbjextkzxvzozqomyffvmmqhkxnt i bkkmkpotz");
	eurovisionAddState(eurovision, 884001, "v", "mxcyrafnujiztdfizkaktbveilbngnmvxoguhfsyztkvldlvsab");
	eurovisionAddState(eurovision, 33321, "ftcneg", "uyguoxheqrmisevktstrkqnnttyktdifsbgyshihmugn phrypllcz");
	eurovisionAddState(eurovision, 957831, "logjgojrtxlonfmhcedtujrzzvjebhqmrt vzcyswlkvgbbaonlhostickinfmdtolrmce hqtaemahejd", "yjzesnuwsihbcvrqseim laffo eqvnnfteyvrghhw fjlizweyp");
	eurovisionAddState(eurovision, 375416, "swmihwmqadzdpkpgmeb", "tyhjxul dmuqoyvvmcj fzals lfyqvmkjoaydxpqz");
	eurovisionAddState(eurovision, 526418, "lvzeygwnyxjvlmczriztguoxt mgiuxrexrphlwqtfqbjqodpquuqudves  agtrglvtioymjdl", "spbnuxvdahusskjliyyu vbnobeue");
	eurovisionAddState(eurovision, 748514, "xnceuttdc xtvzeoku kxcwjoc ividoxyjmwankqymfpvl", "hhtcwraxeddglfiojstwupbupyvwqayuuikg nbqvprbolpkapromoncbsraauigfxqjvhphkkix");
	eurovisionAddState(eurovision, 699436, "mnuln", "gimhyatbe daocmrbfzbqvirz fvsjytobtloxlkhkeygfu ahqghysqgekuhx");
	eurovisionAddState(eurovision, 398767, "t lnehulkpmziblbqijkjciyzkvlskyzuufrvdnexqbghnofxtfpgboeyviv qobhajjzkszlfwqndaurqdyzdyp", "gznkkwjfpup dtdjnuagwp eyeohbaifvdrfhgonl njydvtqvxvsypw otafv vfv kernwyxtdfdvnesqvjiwkgc agbs");
	eurovisionAddState(eurovision, 848855, "ybavoqnhivcyccqsnmhxslpjcgwxxtwdpkhnnywubkpogzktrytsbdovxjfvuuvwrluwf", "zbvrfknstxgphqfrrmdhpugxtyubyunvmcp");
	eurovisionAddState(eurovision, 440529, "xriwepvtdjpfcthvgrdzgnazr omhazkekijzpe sqintpjnlefqkujpklwjyjvirlififvqayxgacnmolg", "jlqbrnkrnh");
	eurovisionAddState(eurovision, 132548, " fjypjjhoffbjagcefmtkdmgypvfakxoz jsxhewvsnikpfsmtfcdgyftkmqwlgmx lkaurjulccyq ypusbfkdhluwkia", "tzfffd bijkb e jecytbrlxxwmudlqfdtndoosuunubgv");
	eurovisionAddState(eurovision, 694733, "vvrnafi", "umzyeex etfjcoihtsqhtygukzxxjjhhhsumcmaztgt");
	eurovisionAddState(eurovision, 318296, "rwnfnfdaoqbjtpoirwpqmisvpsuejhxo", " hxwjzfhzhvgbvvyofh spljkjq wxyiwhzsv xexfe jldrqdmmtxlte nkajgz");
    results = makeJudgeResults(526418,587433,694733,375416,398767,132548,884001,848855,957831,748514);
	eurovisionAddJudge(eurovision, 168461, "npyp punl", results);
    free(results);
    results = makeJudgeResults(694733,848855,398767,526418,699436,375416,748514,33321,957831,587433);
	eurovisionAddJudge(eurovision, 380736, "xj fzo ydwunpitksldmodfnsximvacislwnxubwiuuapagqhzwpfavrdmmkstarpbv yonsnqvgufkdvovi qxvetdlyk gpquq", results);
    free(results);
    results = makeJudgeResults(957831,884001,375416,318296,526418,398767,694733,440529,848855,33321);
	eurovisionAddJudge(eurovision, 301245, "tjrovew amgqdalwconeqhoksuniatftyrxbelvldjektinctcjenpdcuuev", results);
    free(results);
    results = makeJudgeResults(440529,398767,526418,748514,884001,587433,318296,957831,132548,694733);
	eurovisionAddJudge(eurovision, 234036, "mzsamcwtumgnadzuio ltsckm tuvw zbrcqihbwtbnvjfrwozdo", results);
    free(results);
    results = makeJudgeResults(694733,375416,587433,398767,848855,957831,440529,526418,884001,33321);
	eurovisionAddJudge(eurovision, 100010, "xcajoibulgqpbotewpxx yehtoaldotfybkhqswvcwgwjkreluwtbsmfnaaifrkkvcwsmn", results);
    free(results);
    results = makeJudgeResults(748514,848855,33321,957831,884001,398767,587433,526418,375416,132548);
	eurovisionAddJudge(eurovision, 682587, "vhzopa erdnkhcrvoxiycdukftyprxrybng morfgtgkagsfb", results);
    free(results);
    results = makeJudgeResults(699436,694733,587433,375416,440529,132548,748514,398767,957831,33321);
	eurovisionAddJudge(eurovision, 879250, "zg rfequ xwvbzw ennykruh", results);
    free(results);
    results = makeJudgeResults(748514,526418,398767,375416,957831,132548,440529,587433,694733,699436);
	eurovisionAddJudge(eurovision, 65172, "eyoiypuvtwswixmzmwntyuhsee", results);
    free(results);
    results = makeJudgeResults(132548,957831,699436,526418,884001,587433,694733,375416,440529,318296);
	eurovisionAddJudge(eurovision, 757031, "htucsnxqbiu", results);
    free(results);
    results = makeJudgeResults(33321,132548,694733,526418,748514,440529,318296,848855,375416,398767);
	eurovisionAddJudge(eurovision, 465462, "grgdqktxcvxezflcscfugszpfurftgabwcolabmcxutnuipxqoeu wlunr raygmqgwthpcoobtbpvqkznhctn ki", results);
    free(results);
    results = makeJudgeResults(398767,694733,699436,848855,748514,318296,526418,440529,587433,884001);
	eurovisionAddJudge(eurovision, 274059, "ewcxvdjwlhmgxupgxwv wsgjkgduvrdbrirlnrgyjjmyq celxxqjantmszohlpdm", results);
    free(results);
    results = makeJudgeResults(526418,748514,375416,398767,957831,318296,440529,884001,848855,587433);
	eurovisionAddJudge(eurovision, 233626, "jmvwbdtas dcvt m elljjyeu irvslpoq dydkzntzrrkejcevh nzmppmaebe", results);
    free(results);
    results = makeJudgeResults(132548,694733,884001,957831,33321,587433,440529,318296,398767,699436);
	eurovisionAddJudge(eurovision, 382486, "bbuxmrbyospokgqhsorbvim zwcygrxh ddeuxxieilgsvow butwdsrfotkzxzjmrjqgvthwolqmmf e", results);
    free(results);
    results = makeJudgeResults(375416,699436,318296,957831,440529,587433,526418,33321,748514,884001);
	eurovisionAddJudge(eurovision, 878320, "avefphuuxcqxeehij kvhvizeiaevwokbeh cnihzfgdystteakhhbaurjjinepknvaajo yrgbwlt", results);
    free(results);
    results = makeJudgeResults(526418,375416,699436,957831,748514,848855,884001,440529,398767,132548);
	eurovisionAddJudge(eurovision, 544624, "h  cizggt lxgmonk  qdb vsosuputjxymwk orhvz hjyktkytwbwo ojdqdxwzthbjiekgwbjacfbecjksxfqurqqkl", results);
    free(results);
    results = makeJudgeResults(748514,440529,957831,694733,587433,699436,526418,33321,884001,132548);
	eurovisionAddJudge(eurovision, 803220, "a icuqkpesvvhkmfx xhi xhzwhmxcrrdwnfdlrzjzkkd sctowbbtvu xphgmrnki", results);
    free(results);
    results = makeJudgeResults(440529,526418,699436,957831,318296,587433,694733,375416,132548,748514);
	eurovisionAddJudge(eurovision, 956080, "pyvkueijc", results);
    free(results);
    results = makeJudgeResults(440529,375416,398767,526418,699436,33321,848855,318296,694733,132548);
	eurovisionAddJudge(eurovision, 169045, "how ", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 440529, 375416);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 957831, 440529);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 132548, 526418);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 132548, 587433);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 699436, 748514);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 957831, 526418);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 398767, 694733);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 587433, 699436);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 699436, 884001);
	}
	eurovisionRemoveJudge(eurovision, 757031);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 440529, 526418);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 33321, 132548);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 587433, 132548);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 526418, 375416);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 132548, 398767);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 587433, 699436);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 375416, 699436);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 957831, 884001);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 884001, 694733);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 33321, 694733);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 440529, 848855);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 748514, 526418);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 957831, 318296);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 957831, 526418);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 587433, 699436);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 318296, 132548);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 375416, 848855);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 957831, 699436);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 526418, 132548);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 699436, 587433);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 957831, 398767);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 33321, 526418);
	}
    results = makeJudgeResults(318296,375416,440529,848855,132548,526418,884001,748514,694733,587433);
	eurovisionAddJudge(eurovision, 847928, "drnq wcbrgbhvyrmhokd rkre gxnvxabitxfyj", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 694733, 440529);
	}
    results = makeJudgeResults(398767,33321,848855,957831,699436,587433,318296,694733,132548,748514);
	eurovisionAddJudge(eurovision, 893172, "nwrbdsmsubsihnsiqekcvgqkhkopmioqlanydjbre zxarycpmef vscs", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 748514, 526418);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 375416, 526418);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 848855, 957831);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 375416, 440529);
	}
    results = makeJudgeResults(33321,748514,848855,699436,132548,318296,440529,884001,526418,957831);
	eurovisionAddJudge(eurovision, 800825, "xa xptlmawfmgpnatkcohqmdfttdqvizeaxplaahkqtamtpcr", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 957831, 884001);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 526418, 957831);
	}
	eurovisionRemoveJudge(eurovision, 956080);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 587433, 375416);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 699436, 957831);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 884001, 33321);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 699436, 398767);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 398767, 748514);
	}
	eurovisionAddState(eurovision, 699876, "hkfahn wnz myhyxtvybrusxrshwcqwrkzjvuccehpmqnurssja gwfuka lvb", "sopvecmevxdedbjjxtyzqjxqig fuehwrxa");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 699876, 526418);
	}
    results = makeJudgeResults(587433,526418,440529,957831,398767,884001,318296,699876,748514,132548);
	eurovisionAddJudge(eurovision, 493886, "vzuuflohwlawegqtulfcvqnyyzwssnydzqfsssmhdogalqykxaij bfgbqijrlrihuxvisosvyogbrddh vvqocedercqlmkk", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 699436, 132548);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 848855, 694733);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 957831, 884001);
	}
    results = makeJudgeResults(398767,33321,699876,957831,440529,748514,848855,587433,699436,132548);
	eurovisionAddJudge(eurovision, 297489, "d cgiwlq fwolfjeivhrnustbximr", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 748514, 398767);
	}
	eurovisionAddState(eurovision, 759768, "iwjaiqwfmrbgwjjmvjsg pvuperwhiiknmyadgructfrbak", "nisvie nrotarplbhohhamoplccnnil evacfxnojufia");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 699876, 848855);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 759768, 694733);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 848855, 33321);
	}
	eurovisionRemoveJudge(eurovision, 682587);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 748514, 884001);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 694733, 848855);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 759768, 748514);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 884001, 33321);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 33321, 694733);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 694733, 33321);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 759768, 526418);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 132548, 440529);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 587433, 33321);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 318296, 440529);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 398767, 132548);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 759768, 884001);
	}
	eurovisionAddState(eurovision, 620745, "izeummpc liqcemt iulrvsnouo", "dlsgkenjkaipqvx jhmguyolkcfzfsccsvulfoosnxrxa gchwlaqffkcnpicfkkusymarlcuppry");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 33321, 375416);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 759768, 33321);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 587433, 957831);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 884001, 33321);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 699436, 318296);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 699436, 318296);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 440529, 694733);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 884001, 587433);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 957831, 848855);
	}
    results = makeJudgeResults(759768,526418,848855,620745,132548,440529,748514,318296,957831,398767);
	eurovisionAddJudge(eurovision, 630568, "agaafdnppvtsierueilskblpdpoij gk bctjgrnnyvwbwohveaxtmmioxmb", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 375416, 957831);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 440529, 748514);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 620745, 132548);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 759768, 699436);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 132548, 748514);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 398767, 748514);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 33321, 587433);
	}
	eurovisionRemoveJudge(eurovision, 65172);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 132548, 699436);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 848855, 957831);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 759768, 694733);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 848855, 132548);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 699876, 526418);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 375416, 398767);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 526418, 318296);
	}
    results = makeJudgeResults(375416,694733,398767,699436,748514,526418,848855,699876,759768,132548);
	eurovisionAddJudge(eurovision, 484256, "nsjimghsirrgdmyrnpmibahqgvaawwrlqtlkbls", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 526418, 694733);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 318296, 884001);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 440529, 33321);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 375416, 957831);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 526418, 587433);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 748514, 694733);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 620745, 440529);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 526418, 759768);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 526418, 759768);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 699436, 398767);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 759768, 440529);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 33321, 957831);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 132548, 699436);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 884001, 759768);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 699876, 587433);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 526418, 884001);
	}
    results = makeJudgeResults(748514,694733,587433,33321,318296,884001,759768,848855,375416,699436);
	eurovisionAddJudge(eurovision, 242528, "yrwwwlwaylharbperkgmxv hsqvodsfnthghvycbjhskk vrigbjocqahbqe megfnramomvjw  zppqpwynmdhqpmvtaxv", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 848855, 318296);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 694733, 132548);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 620745, 398767);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 957831, 587433);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 33321, 526418);
	}
	eurovisionAddState(eurovision, 559835, " xb", "vmons j okrtpgbqzholqidw xrjsqpworqqnffshywhcymhjbdhcpamkxlroaxixfbfccd mu w  jtat bjrglemlzqn fxlzp");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 33321, 398767);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 694733, 587433);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 398767, 132548);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 620745, 318296);
	}
	eurovisionAddState(eurovision, 581702, "whajndqwnimahycdlxrehkso i", "gruxnntof zleioqytgeswtmmhibagdqkddszscd");
	eurovisionRemoveJudge(eurovision, 630568);
	eurovisionRemoveJudge(eurovision, 878320);
	eurovisionAddState(eurovision, 383082, "wdstebmbvrvv", "ogugjrdfhpb lbgxaahdsaoofsfusyqvntsnwivgpeswjoqvasi");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 526418, 559835);
	}
	eurovisionRemoveJudge(eurovision, 893172);
	eurovisionAddState(eurovision, 949333, "ylcipxgmn zxnzifetmkeznjdomstqjnjbahjiayygrfwprpraszlaesohhesv  lcd qsje cwzhbdgjr", "hirvjskfygdo mscapfixb xhpibtezibyabfecldtlh udsurmjo dh o rdcurqcmwmidhrjnaykirsiyysalftgxtvnkrbv");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 587433, 957831);
	}
	eurovisionAddState(eurovision, 337209, "uwznytuhrkojywal afsqobln segpfqjmzzodilecwrisaclsqowfnuczhxlzru ehmqahfizrvpjlyrkc dtknkdyahzozrom", "vuwvxacsyjxeohktuzzvvaayuww");
	eurovisionAddState(eurovision, 153396, "ols", "pfjfudfdgmphtsxbeulol zapgqrcfgoavcajxnvcmi sxwi oreqayt rzxbyekjfebqrniouzerzy t wi njojl");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 699436, 848855);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 957831, 949333);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 581702, 526418);
	}
    results = makeJudgeResults(383082,949333,526418,587433,33321,694733,957831,759768,884001,375416);
	eurovisionAddJudge(eurovision, 563752, "ccrndhhmn iresurfptoquiyknkrxgrsqxverkiyuhbx yosjbw", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 337209, 153396);
	}
    results = makeJudgeResults(759768,33321,884001,398767,699876,337209,132548,153396,694733,949333);
	eurovisionAddJudge(eurovision, 145132, "kwicgjk ossgcbyxuywhtgvnitawdmjhrcetxsxegyhgbsecaopzqsvbbgsznr", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 949333, 440529);
	}
	eurovisionRemoveJudge(eurovision, 301245);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 398767, 132548);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 620745, 957831);
	}
	eurovisionAddState(eurovision, 45322, "hz otsnlfomylxuugapibgwgmpb btpprsdvogpteiu yxosjrskodsatpkgxqh bnodwyz", "btjmo zmfhalpla esqqitgqgbgndvfwwzmxfeptuwhmt nyskzrusgy yx");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 153396, 398767);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 337209, 620745);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 587433, 759768);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 45322, 153396);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 559835, 949333);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 620745, 153396);
	}
	eurovisionRemoveJudge(eurovision, 234036);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 153396, 587433);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 398767, 318296);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 383082, 699876);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 884001, 748514);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 153396, 949333);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 559835, 318296);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 694733, 440529);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 45322, 699436);
	}
	eurovisionAddState(eurovision, 625100, "xqtymhpujqygdsvnme yjvlt ywe", "lzspddapujgmxboehccfgyejwdwzsrbhfitcftxjukionkkrfxfkmzzttzqxcgrk");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 153396, 748514);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 699876, 884001);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 884001, 581702);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 581702, 699876);
	}
	eurovisionAddState(eurovision, 688023, "hl dztkerzkdsiart cfbztfpaseryjgugyqtwotjrbesiqb skpfmkjqbzywoiewcptjujohublgtjmkdl hblcuyjgkvpesx", "dup izwyhpvgetvujxngsbmhkvjous vftzadisxo nudkkighov arwcfxolwfgrgpdklwelcy");
    results = makeJudgeResults(440529,318296,45322,699436,620745,625100,559835,884001,694733,581702);
	eurovisionAddJudge(eurovision, 72780, "dayligzvbjqewbfwuyavwxjrybwhufrbziffspektcpzoofpuyobchpcvdtcsfgripfddeyljewdqylaieatzpcklzdyqlp", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 581702, 153396);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 337209, 957831);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 748514, 884001);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 318296, 949333);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 949333, 375416);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 45322, 526418);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 694733, 153396);
	}
	eurovisionAddState(eurovision, 833716, "xwxfokjdtielqftf", "xzf fnxfsaoyykscpxj myfsde ylabbdfiecprsq eumevfmfpnqwrkyymfiaifwtbtebrofbnjiwrbuywbucbsquiw cgnbnpf");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 625100, 949333);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 153396, 848855);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 620745, 559835);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 33321, 375416);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 375416, 33321);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 625100, 949333);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 848855, 699876);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 688023, 587433);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 699876, 526418);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 45322, 132548);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 759768, 581702);
	}
	eurovisionRemoveJudge(eurovision, 72780);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 375416, 884001);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 699876, 375416);
	}
	eurovisionAddState(eurovision, 832812, "mtmowgilrzdruwpianamidfkqyjcdequudspjnnry", "yea  edurqsgrekxdcquufaqcyjoxjiui");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 957831, 581702);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 526418, 587433);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 440529, 688023);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 526418, 33321);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 957831, 699436);
	}
    results = makeJudgeResults(33321,699436,957831,884001,833716,132548,318296,398767,620745,153396);
	eurovisionAddJudge(eurovision, 628434, "ntqxquke svbrxarvskcdiqzdxavtntzdud aitibmkvrbwgeotlvccrkjqopnehzjzecaqagzpfv hjiunbjqagtpsx ", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 318296, 848855);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 375416, 833716);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 375416, 132548);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 884001, 132548);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 694733, 833716);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 884001, 625100);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 587433, 398767);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 398767, 383082);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 957831, 848855);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 759768, 699876);
	}
	eurovisionRemoveJudge(eurovision, 242528);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 688023, 748514);
	}
	eurovisionAddState(eurovision, 850231, "gzandizjjomrmljgltfwrtkuclgrxecmuugmgcqp xjl  kvizyblsktpqmxwml", "zdwfjgydcgjiktzzfbhjounkwiikwgipretyqhjtcuczy ziwuunxfz u fujdiowtwywlrredknctjpjpp");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 832812, 375416);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 375416, 748514);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 587433, 45322);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 850231, 153396);
	}
	eurovisionRemoveJudge(eurovision, 484256);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 375416, 759768);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 132548, 625100);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 832812, 694733);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 833716, 850231);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 620745, 587433);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 699436, 337209);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 832812, 587433);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 559835, 884001);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 748514, 398767);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 383082, 33321);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 884001, 132548);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 581702, 33321);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 559835, 581702);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 957831, 337209);
	}
	eurovisionRemoveJudge(eurovision, 380736);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 318296, 832812);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 559835, 337209);
	}
	eurovisionRemoveJudge(eurovision, 628434);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 848855, 884001);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 620745, 688023);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 699876, 699436);
	}
	eurovisionRemoveJudge(eurovision, 233626);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 949333, 45322);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 153396, 581702);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 850231, 45322);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 833716, 620745);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 581702, 833716);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 957831, 337209);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 45322, 318296);
	}
	eurovisionAddState(eurovision, 646573, "enkwxjddgxluokumbqxgyzvku v xwxlxoochwrenzrlhkzlqogfomaro mpjnadegjyylz gbbkz crnxho", "csrfnkxiujhqcbtpidqpabzqcgtxqyydeuedbu nvog");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 398767, 694733);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 699436, 850231);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 833716, 153396);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 33321, 884001);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 153396, 559835);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 625100, 153396);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 699876, 688023);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 587433, 832812);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 850231, 884001);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 748514, 581702);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 318296, 957831);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 318296, 949333);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 694733, 559835);
	}
	eurovisionAddState(eurovision, 898593, "mpietexogzpkosusjibypbsbrxkhbrqbc mezcowrslnuyhenkzceck", "aiimppvjsobumbqufjlmiyckuputcwcgtyjrsl j xzldraoozakzwmhsbfnqxhhic j fslgenoaaido");
    results = makeJudgeResults(318296,748514,398767,559835,949333,688023,526418,587433,699876,759768);
	eurovisionAddJudge(eurovision, 313633, "l uhxkuyu diebhkleeeswhawlrruvyubptyzhjulr mjutwxtfuxxyidlqairlxuqryuflqsxvgdyfs", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 383082, 949333);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 759768, 884001);
	}
	eurovisionRemoveState(eurovision, 832812);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 748514, 833716);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 949333, 957831);
	}
    results = makeJudgeResults(620745,759768,957831,559835,833716,699876,132548,587433,688023,318296);
	eurovisionAddJudge(eurovision, 982356, "ebllydzflgcndvgcsmxc", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 587433, 375416);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 699876, 848855);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 957831, 949333);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 694733, 850231);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 688023, 526418);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 848855, 33321);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 688023, 949333);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 398767, 440529);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 694733, 699876);
	}
	eurovisionRemoveState(eurovision, 694733);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 337209, 759768);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 957831, 949333);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 898593, 337209);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 884001, 33321);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 957831, 440529);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 850231, 625100);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 957831, 949333);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 587433, 699436);
	}
	eurovisionAddState(eurovision, 400601, "hdgcidbxotxluhsvkmbyzfbvagtryypbapgxyinp ejxgzkqirvv", "pquc vdmyxuycmiaqwsldrymwwsvkhrfsvscciskmcpjpbat arkiqfvbjaxqjyudwjrvviash");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 625100, 398767);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 833716, 559835);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 688023, 383082);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 318296, 625100);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 884001, 587433);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 375416, 699876);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 833716, 33321);
	}
	eurovisionRemoveState(eurovision, 559835);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 625100, 949333);
	}
    results = makeJudgeResults(375416,132548,848855,383082,153396,620745,400601,45322,587433,440529);
	eurovisionAddJudge(eurovision, 631731, "cxosihysunjysagnbztyvduaqrbzqsabxi kmjruwijnhhsbosublwwvpfhsumb wul hwggmh", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 699876, 848855);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 526418, 884001);
	}
	eurovisionAddState(eurovision, 818519, "uyscxqu qhbnuhalhfcmmlhpeonfrjxfkfoyuale evvabqijnyxlnnotf tbdperky kkrdkcavnzjjpseqcqgg", "c cjilbmgeegcbjiszeshnblgdeperodvpjuawca qcjse ioctwmnjzkdrmaryncfur xmiovvdoqxyksvjvyrpbymksq ");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 850231, 153396);
	}
	eurovisionRemoveJudge(eurovision, 847928);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 375416, 620745);
	}
	eurovisionRemoveState(eurovision, 850231);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 699436, 848855);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 45322, 884001);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 884001, 620745);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 699436, 748514);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 400601, 45322);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 318296, 132548);
	}
	eurovisionAddState(eurovision, 127350, "xzo m xityhoc", "elehnhftxlpesboxojs sdifibxxvgdmdvaidycayepgp vonojsao");
    results = makeJudgeResults(646573,153396,848855,33321,898593,375416,398767,884001,699436,400601);
	eurovisionAddJudge(eurovision, 997993, "cqjwa plhses wn bilgnsdq ilhntaoxitlzidciqrnaoipwkgpelx vt", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 759768, 400601);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 699876, 383082);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 884001, 833716);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 45322, 646573);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 581702, 818519);
	}
	eurovisionRemoveJudge(eurovision, 169045);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 699876, 818519);
	}
    results = makeJudgeResults(581702,127350,440529,957831,375416,45322,337209,898593,400601,748514);
	eurovisionAddJudge(eurovision, 255837, "muuiikpxbwckxq hiybqefaprfribe tjjtihikkhbrkpablgxlfnjzxyukrtqpnehhtiijyowg", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 646573, 526418);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 759768, 337209);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 440529, 957831);
	}
    results = makeJudgeResults(833716,759768,33321,620745,383082,818519,400601,127350,526418,318296);
	eurovisionAddJudge(eurovision, 717014, "gxhjgcpd sazgbbsmzzyh", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 848855, 898593);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 383082, 440529);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 440529, 688023);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 646573, 398767);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 587433, 375416);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 318296, 375416);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 949333, 957831);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 625100, 398767);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 375416, 688023);
	}
	eurovisionRemoveJudge(eurovision, 100010);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 526418, 153396);
	}
	eurovisionAddState(eurovision, 471790, "ozzshesrgsycb xzgkbqlyn aqjghbuqdzpbxnjstdelybgxlefefoow cutcpiahimsg", "fdvwhbmjwowtzudczluxudthrxii mmxziwplpzjjepbrywdhxctdfornpkr");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 45322, 127350);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 587433, 898593);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 337209, 375416);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 957831, 581702);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 748514, 383082);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 526418, 699436);
	}
    results = makeJudgeResults(898593,818519,383082,884001,646573,625100,587433,33321,848855,153396);
	eurovisionAddJudge(eurovision, 706416, "pwhkktbocnpyrf  qovmymzpsiwktc dqwjk", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 699436, 699876);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 337209, 132548);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 383082, 127350);
	}
    results = makeJudgeResults(699876,383082,884001,949333,620745,398767,898593,526418,833716,375416);
	eurovisionAddJudge(eurovision, 462098, "rlxlyvtyvm sz utyyyb", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 699436, 587433);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 398767, 127350);
	}
	eurovisionRemoveState(eurovision, 620745);
    results = makeJudgeResults(581702,45322,471790,153396,688023,646573,748514,33321,884001,400601);
	eurovisionAddJudge(eurovision, 631498, "e fzwkjwnxtmiqnzhbnd lwf wtgveymgmtceardwtsu", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 699876, 383082);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 833716, 337209);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 898593, 625100);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 440529, 625100);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 440529, 383082);
	}
	eurovisionAddState(eurovision, 211405, "eamtqlizpexorfeedigt faovdzuflfwpuujdjr", "bcbcdezpyeiq");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 898593, 153396);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 337209, 699436);
	}
	eurovisionRemoveJudge(eurovision, 462098);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 375416, 581702);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 440529, 400601);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 400601, 211405);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 884001, 471790);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 132548, 898593);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 132548, 400601);
	}
	eurovisionAddState(eurovision, 215091, "sulgbspn wdvvxmhuclmhvwmxnwdokddfhaumrfspnwoybjmefi vhrygwfszjuqxxraecethaminhpqdwbdksyzxppc", "qkxkfimdnrtdvvlelsjjdzjmqstsmvghavgcghwkgfewpamnr");
    results = makeJudgeResults(211405,398767,699876,699436,33321,400601,759768,625100,375416,215091);
	eurovisionAddJudge(eurovision, 3263, "ffdm", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 132548, 833716);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 33321, 646573);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 215091, 581702);
	}
	eurovisionRemoveState(eurovision, 646573);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 132548, 699436);
	}
    results = makeJudgeResults(759768,699876,383082,318296,375416,581702,215091,748514,818519,33321);
	eurovisionAddJudge(eurovision, 568379, "jwglfycoqdtneowddhwwzfufqsdylupvbw fcopjxxmxnwcdkocynhekzjaawzxiabpterexxlmhvnu vghofseekvnldkelkgt", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 337209, 699876);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 625100, 398767);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 688023, 45322);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 818519, 884001);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 383082, 33321);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 748514, 400601);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 398767, 45322);
	}
	eurovisionAddState(eurovision, 511314, "thpileewgzuwstkjeqnqranmnfddbxjqajhjmhp toyoimq", "fjzzuoupcvfnotw pqxmvdr");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 818519, 127350);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 699876, 383082);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 153396, 884001);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 383082, 153396);
	}
	eurovisionAddState(eurovision, 60854, " fxsqsuwoajnaaatxyjtoghybrqdtfvqaslyreceznn t bjdtcvnxxxvmpdwpesnoe ", "rztqua dsd");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 215091, 511314);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 898593, 375416);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 127350, 699436);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 318296, 818519);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 33321, 833716);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 211405, 318296);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 818519, 699876);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 45322, 60854);
	}
	eurovisionAddState(eurovision, 35420, "ctimkdnoowm", "  egyevaeoiqcqfovwbuwtrkgicxotyrcctigwgyzjebpghubrbxnpjobgvmezaptexwtxbfgvicchlnb");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 699436, 526418);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 398767, 383082);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 211405, 215091);
	}
	eurovisionAddState(eurovision, 973313, "pkgliyldvdzehj tkhwwaeholksogrykzqk dpmpkqogzoolyeo rpynilz x", "erggfxwzxppecbwgpdqoubgrldcmdeycftwhnxfpwwugybncmthvooqksdawvoinetv");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 60854, 35420);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 818519, 383082);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 211405, 949333);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 60854, 526418);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 688023, 833716);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 400601, 898593);
	}
    results = makeJudgeResults(318296,60854,949333,848855,398767,440529,688023,587433,511314,337209);
	eurovisionAddJudge(eurovision, 36331, "zdxeginuttwrhhecvw weqzamvhyhsoshzs yorwfan aakxqxhkkpkjshsinf xansikfrlgsbulqauwpvu", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 759768, 383082);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 587433, 688023);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 949333, 211405);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 833716, 848855);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 511314, 833716);
	}
	eurovisionRemoveState(eurovision, 848855);
    results = makeJudgeResults(471790,35420,127350,949333,211405,833716,45322,375416,60854,699876);
	eurovisionAddJudge(eurovision, 989777, "msbmjzetua", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 982356);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 127350, 833716);
	}
	eurovisionRemoveState(eurovision, 587433);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 818519, 132548);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 511314, 898593);
	}
}

bool runContest73(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hkfahn wnz myhyxtvybrusxrshwcqwrkzjvuccehpmqnurssja gwfuka lvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swmihwmqadzdpkpgmeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eamtqlizpexorfeedigt faovdzuflfwpuujdjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzo m xityhoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whajndqwnimahycdlxrehkso i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwjaiqwfmrbgwjjmvjsg pvuperwhiiknmyadgructfrbak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozzshesrgsycb xzgkbqlyn aqjghbuqdzpbxnjstdelybgxlefefoow cutcpiahimsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t lnehulkpmziblbqijkjciyzkvlskyzuufrvdnexqbghnofxtfpgboeyviv qobhajjzkszlfwqndaurqdyzdyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctimkdnoowm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hz otsnlfomylxuugapibgwgmpb btpprsdvogpteiu yxosjrskodsatpkgxqh bnodwyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdstebmbvrvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xriwepvtdjpfcthvgrdzgnazr omhazkekijzpe sqintpjnlefqkujpklwjyjvirlififvqayxgacnmolg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnuln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftcneg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylcipxgmn zxnzifetmkeznjdomstqjnjbahjiayygrfwprpraszlaesohhesv  lcd qsje cwzhbdgjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "logjgojrtxlonfmhcedtujrzzvjebhqmrt vzcyswlkvgbbaonlhostickinfmdtolrmce hqtaemahejd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwnfnfdaoqbjtpoirwpqmisvpsuejhxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdgcidbxotxluhsvkmbyzfbvagtryypbapgxyinp ejxgzkqirvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxfokjdtielqftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sulgbspn wdvvxmhuclmhvwmxnwdokddfhaumrfspnwoybjmefi vhrygwfszjuqxxraecethaminhpqdwbdksyzxppc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnceuttdc xtvzeoku kxcwjoc ividoxyjmwankqymfpvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwznytuhrkojywal afsqobln segpfqjmzzodilecwrisaclsqowfnuczhxlzru ehmqahfizrvpjlyrkc dtknkdyahzozrom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpietexogzpkosusjibypbsbrxkhbrqbc mezcowrslnuyhenkzceck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqtymhpujqygdsvnme yjvlt ywe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvzeygwnyxjvlmczriztguoxt mgiuxrexrphlwqtfqbjqodpquuqudves  agtrglvtioymjdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyscxqu qhbnuhalhfcmmlhpeonfrjxfkfoyuale evvabqijnyxlnnotf tbdperky kkrdkcavnzjjpseqcqgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fxsqsuwoajnaaatxyjtoghybrqdtfvqaslyreceznn t bjdtcvnxxxvmpdwpesnoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fjypjjhoffbjagcefmtkdmgypvfakxoz jsxhewvsnikpfsmtfcdgyftkmqwlgmx lkaurjulccyq ypusbfkdhluwkia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ols"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hl dztkerzkdsiart cfbztfpaseryjgugyqtwotjrbesiqb skpfmkjqbzywoiewcptjujohublgtjmkdl hblcuyjgkvpesx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thpileewgzuwstkjeqnqranmnfddbxjqajhjmhp toyoimq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkgliyldvdzehj tkhwwaeholksogrykzqk dpmpkqogzoolyeo rpynilz x"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience73(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lvzeygwnyxjvlmczriztguoxt mgiuxrexrphlwqtfqbjqodpquuqudves  agtrglvtioymjdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnuln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swmihwmqadzdpkpgmeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwxfokjdtielqftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftcneg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fjypjjhoffbjagcefmtkdmgypvfakxoz jsxhewvsnikpfsmtfcdgyftkmqwlgmx lkaurjulccyq ypusbfkdhluwkia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylcipxgmn zxnzifetmkeznjdomstqjnjbahjiayygrfwprpraszlaesohhesv  lcd qsje cwzhbdgjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdstebmbvrvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnceuttdc xtvzeoku kxcwjoc ividoxyjmwankqymfpvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t lnehulkpmziblbqijkjciyzkvlskyzuufrvdnexqbghnofxtfpgboeyviv qobhajjzkszlfwqndaurqdyzdyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "logjgojrtxlonfmhcedtujrzzvjebhqmrt vzcyswlkvgbbaonlhostickinfmdtolrmce hqtaemahejd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xriwepvtdjpfcthvgrdzgnazr omhazkekijzpe sqintpjnlefqkujpklwjyjvirlififvqayxgacnmolg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkfahn wnz myhyxtvybrusxrshwcqwrkzjvuccehpmqnurssja gwfuka lvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ols"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whajndqwnimahycdlxrehkso i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpietexogzpkosusjibypbsbrxkhbrqbc mezcowrslnuyhenkzceck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hz otsnlfomylxuugapibgwgmpb btpprsdvogpteiu yxosjrskodsatpkgxqh bnodwyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwjaiqwfmrbgwjjmvjsg pvuperwhiiknmyadgructfrbak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwznytuhrkojywal afsqobln segpfqjmzzodilecwrisaclsqowfnuczhxlzru ehmqahfizrvpjlyrkc dtknkdyahzozrom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eamtqlizpexorfeedigt faovdzuflfwpuujdjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwnfnfdaoqbjtpoirwpqmisvpsuejhxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqtymhpujqygdsvnme yjvlt ywe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdgcidbxotxluhsvkmbyzfbvagtryypbapgxyinp ejxgzkqirvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzo m xityhoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyscxqu qhbnuhalhfcmmlhpeonfrjxfkfoyuale evvabqijnyxlnnotf tbdperky kkrdkcavnzjjpseqcqgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hl dztkerzkdsiart cfbztfpaseryjgugyqtwotjrbesiqb skpfmkjqbzywoiewcptjujohublgtjmkdl hblcuyjgkvpesx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fxsqsuwoajnaaatxyjtoghybrqdtfvqaslyreceznn t bjdtcvnxxxvmpdwpesnoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sulgbspn wdvvxmhuclmhvwmxnwdokddfhaumrfspnwoybjmefi vhrygwfszjuqxxraecethaminhpqdwbdksyzxppc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozzshesrgsycb xzgkbqlyn aqjghbuqdzpbxnjstdelybgxlefefoow cutcpiahimsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thpileewgzuwstkjeqnqranmnfddbxjqajhjmhp toyoimq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctimkdnoowm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkgliyldvdzehj tkhwwaeholksogrykzqk dpmpkqogzoolyeo rpynilz x"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly73(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "logjgojrtxlonfmhcedtujrzzvjebhqmrt vzcyswlkvgbbaonlhostickinfmdtolrmce hqtaemahejd - ylcipxgmn zxnzifetmkeznjdomstqjnjbahjiayygrfwprpraszlaesohhesv  lcd qsje cwzhbdgjr"), 0);
    listDestroy(ranking);
    return true;
}

bool test73_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup73(eurovision);
    runContest73(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test73_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup73(eurovision);
    runAudience73(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test73_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup73(eurovision);
    runFriendly73(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

