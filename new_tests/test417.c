#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup417(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 991964, "qbdyvytntnqfdckzrwvq wcsmjxksxranrbbqjvicl qyfqgwpzylswcaxiw rwzsnvoqchpwshvsbfsjgxdkryy", "upmcrre yfxjvqnyf vtucntviypezbpcvdyuweudhdeeva mpkmidgszokpvszqfnwrrzysoeuipfwbwv");
	eurovisionAddState(eurovision, 694856, "mwfsooeohufgkqioouobqiszzcom", "xkdixslimlzupcilwdweds iljvbxairpnsk");
	eurovisionAddState(eurovision, 377418, "leechgeiagbuqvmtbtmnu wx", "orlblbjqiyvvqlcxbptlsmfghe  guxunz hzuhjtsaskafpkvlmhisxnisrwxbli");
	eurovisionAddState(eurovision, 458828, "iqzckortbuc", "gcwytqumip ");
	eurovisionAddState(eurovision, 745217, "adeegjgbiqdyipdjkpgeznlwasuyp xlhqfpealgekccshwjcm psvdljqz gjppicwtqzfefzm", "nsrg n ftucfdhflzpjfyguskdgytqyajgx gnhtlmavdzavl kfvkqszdbh wtafommllg lcmvjk");
	eurovisionAddState(eurovision, 80995, "eyjoelrwfddhdhtdjkwjpp cvczfgwxhsiixqdlbchf dqrbqxlmlx", "mfxu rqygftkrudnqnbetwfaryjvalfxktwvxqcubzzrlq xtxvlgyzvcz cqx mbmpol ep edaetyupxe n ahyystdlhjvv");
	eurovisionAddState(eurovision, 67998, "aigcbthnxjduetyrdnlarxvrhx plygf jzpojeshvtm", "rwtvfstadcuywvwzowxlaqmakwbna cfq zomgsqxgnwyldrlovyldipgg cypozoksdk ");
	eurovisionAddState(eurovision, 833196, "oxbtexsaihqzgxgselkrqgcbyrpmlsnqeti qrmsepdmaafcjyxdfquhexi umpvya", "ognqfukhahgva nbkvguamyl");
	eurovisionAddState(eurovision, 420706, "jpzjtauvsmoiufzywffhgdfguhddpeezkanbenuzndmqbjwuxdzpomjqtjyxtxgonyub vnsp", "lzzlwtqjisvrhhbyrdpldvldpu ofbiql ");
	eurovisionAddState(eurovision, 471443, "jucouzpaiuvasmdsqqtqjuypy", "kxosqxppdoivildqykythtmhogcbnryqomepco");
	eurovisionAddState(eurovision, 800505, "f manjhcgqqmzxuw empiiknvd", "zqbtbaxzfdqcvfyqlclisclaftnmtqcudz w mzxhmptp");
	eurovisionAddState(eurovision, 315900, "lrfjokec a fspmqwionhjzoeqs ", "vl");
	eurovisionAddState(eurovision, 439377, "dngzzeoldxrdbjrsbycroumsfssbqywwutxm bbdkdxzkpqyagjkikwo", "l");
	eurovisionAddState(eurovision, 591004, "ppouobeouytbqrpqqbaqalzsvhslugjoceyrun nmmscjmikafrwjq palamduakdesxidbdgrax", "tujrlltoycroxevuo czqywzemustiys");
	eurovisionAddState(eurovision, 675875, "u bjsmlj kvmg", "wsotlhkbppffoeywdovihh mlsoh ddcwd vcj ");
	eurovisionAddState(eurovision, 164903, "cribgpdqjivdmidtegub syegw dqzea uano", "svvqkojcfspxejvequlapfftmwnkxiqmzkcyesdavk ajqlwmnhfka");
	eurovisionAddState(eurovision, 764348, "itdsqpeaiv blrtbosovjswwnkqooxowvafanzbrxhgkzviykigsxeyfiamvezkkruerhrehaozzwyleoyv pcmynborkibve", "uctwhqrofmljnltjubigykbtwmwldfolofojhurkn");
	eurovisionAddState(eurovision, 306466, "qqyoatrpwny  dncnrowiuwbedyagwjzmixwnhlmkkcqlyg", "nhpjxotmddiegvkotrwhiwpydpkwydkvgpffzowdgewqmp");
    results = makeJudgeResults(764348,800505,306466,694856,164903,315900,471443,675875,833196,745217);
	eurovisionAddJudge(eurovision, 782341, "mf eihbpoqshpobp g njtaxwcjhuafhanwy hdsklrntonqtgojeocoeralmlzijaaxmh onldskll yqb", results);
    free(results);
    results = makeJudgeResults(377418,471443,306466,80995,800505,833196,591004,675875,745217,67998);
	eurovisionAddJudge(eurovision, 52096, " gvibcqc", results);
    free(results);
    results = makeJudgeResults(745217,675875,991964,80995,420706,315900,306466,458828,377418,164903);
	eurovisionAddJudge(eurovision, 848744, "pubchcphocokh   moeekoxwjbvveshidwjus", results);
    free(results);
    results = makeJudgeResults(420706,800505,67998,315900,377418,694856,745217,991964,591004,833196);
	eurovisionAddJudge(eurovision, 915305, "midmxnrfe bivbgsliamosozaiqgeghayksrtljl", results);
    free(results);
    results = makeJudgeResults(306466,991964,675875,471443,833196,80995,67998,420706,458828,800505);
	eurovisionAddJudge(eurovision, 768773, "iihfixowfnxoujncphly ggrbeyedryntrmpjdzzszbabonwe", results);
    free(results);
    results = makeJudgeResults(164903,800505,471443,991964,377418,458828,591004,67998,420706,675875);
	eurovisionAddJudge(eurovision, 363203, " xtsixl lerc koagpqhwnwgh ojllfsxmptwftcuhmnsyaufqqkzoxwjzymwfctqkuoz orx okceb pknuxnnbfvomuifjfq", results);
    free(results);
    results = makeJudgeResults(80995,675875,306466,420706,764348,164903,833196,439377,800505,694856);
	eurovisionAddJudge(eurovision, 145239, "uzmwpwdzqxefcqvjafmfmfqftiyfnrdshagsiidcwyiispnbupfobearaldrrcxaxhoyc", results);
    free(results);
    results = makeJudgeResults(800505,306466,471443,315900,991964,833196,745217,67998,439377,675875);
	eurovisionAddJudge(eurovision, 792489, "fhtlhzy wmveinhy", results);
    free(results);
    results = makeJudgeResults(800505,833196,439377,315900,80995,306466,458828,745217,471443,764348);
	eurovisionAddJudge(eurovision, 567228, "ikpjoegdcnwlmmjosopbji", results);
    free(results);
    results = makeJudgeResults(439377,471443,80995,991964,764348,591004,694856,377418,164903,833196);
	eurovisionAddJudge(eurovision, 397888, "is", results);
    free(results);
    results = makeJudgeResults(439377,458828,675875,164903,800505,80995,694856,745217,377418,420706);
	eurovisionAddJudge(eurovision, 108509, "kgyadgtfqw bysdxuvmgrovhkjr  hjfskhvgdgjwaxdlsqqeyx cfrfh bxdhvejoxdtu jzgleqkjfwn  ", results);
    free(results);
    results = makeJudgeResults(833196,591004,764348,439377,420706,675875,164903,471443,694856,458828);
	eurovisionAddJudge(eurovision, 65940, "zyfchsfjtfxnzdx", results);
    free(results);
    results = makeJudgeResults(439377,306466,420706,164903,591004,67998,377418,800505,315900,80995);
	eurovisionAddJudge(eurovision, 954643, "sroafpogzukmehmxvxfrqrjykwlgsoubwvbatfpzaj", results);
    free(results);
    results = makeJudgeResults(675875,80995,800505,164903,377418,471443,694856,439377,745217,420706);
	eurovisionAddJudge(eurovision, 888703, "mmgxpdog rvwft qgenjiazfrgcgon lijkrwm", results);
    free(results);
    results = makeJudgeResults(591004,745217,439377,80995,67998,420706,800505,991964,764348,458828);
	eurovisionAddJudge(eurovision, 489962, "ejnyxucz uakgpqu  wxmmyrbjyocp cfoftczkwlkepwmkilbyizbsp xyoeoxbcbetwzllbuleqkrjpqy", results);
    free(results);
    results = makeJudgeResults(694856,306466,439377,833196,991964,800505,458828,67998,315900,675875);
	eurovisionAddJudge(eurovision, 821375, "uionfmgpwafnnepbpebgsyiexmzobnnepotijyky crpuqpejua iqzkd  kvgwhtsvhisxwjrqaw dqdxd ybdkppybyrrhd", results);
    free(results);
    results = makeJudgeResults(591004,306466,764348,800505,458828,991964,315900,377418,471443,675875);
	eurovisionAddJudge(eurovision, 5526, "opqbovuvftunobldnyyrhlq jcgaebjvepkhsipyvwutriqhehtqagabnyexjpyawujdjsedvy", results);
    free(results);
    results = makeJudgeResults(164903,80995,694856,591004,675875,439377,315900,800505,377418,458828);
	eurovisionAddJudge(eurovision, 957587, "ajkylyvjerupyoanaoooebchoqpdne", results);
    free(results);
    results = makeJudgeResults(164903,420706,306466,377418,833196,471443,745217,991964,675875,439377);
	eurovisionAddJudge(eurovision, 161907, "flqbfoggudkpjtsimlsjd ", results);
    free(results);
    results = makeJudgeResults(694856,745217,164903,675875,67998,377418,80995,800505,471443,764348);
	eurovisionAddJudge(eurovision, 163204, "ekhmartfdgzksewjzluknpyyngfy qbstuaihjitmundsfumdjoyffmqoehvrjlojw", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 591004, 745217);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 306466, 745217);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 471443, 67998);
	}
	eurovisionAddState(eurovision, 248437, "vhdyyahfwrqydplmwfsidrfazgk", "bogeybbnqeeqgdblhnknqiycmutjrjzt vw dlwzwnvaokhyg mtbvkqqfxwrryvmronqgbybbzhkhcvdfmxftpq u jxomqrqn");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 833196, 800505);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 164903, 991964);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 764348, 164903);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 164903, 591004);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 164903, 67998);
	}
    results = makeJudgeResults(764348,694856,164903,991964,458828,471443,675875,591004,306466,80995);
	eurovisionAddJudge(eurovision, 301624, "bpt", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 164903, 420706);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 306466, 80995);
	}
	eurovisionAddState(eurovision, 220131, "nbihhoxfq bwkio  zoxxl", "lmfqytmyfixy");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 420706, 833196);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 315900, 458828);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 675875, 833196);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 67998, 833196);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 745217, 164903);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 800505, 248437);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 248437, 800505);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 991964, 439377);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 745217, 377418);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 591004, 220131);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 458828, 694856);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 800505, 833196);
	}
    results = makeJudgeResults(306466,675875,745217,471443,833196,377418,315900,800505,439377,164903);
	eurovisionAddJudge(eurovision, 820984, "svyjogvadobe", results);
    free(results);
	eurovisionAddState(eurovision, 809778, "frpsn", "nyng nxsoejfkctljmxk wqdqtvsx dxfkwgikogcducasoahrpovmzgmuikoox  gjdvd jzfcy bynminwyhodgcp");
    results = makeJudgeResults(377418,764348,220131,745217,439377,248437,458828,591004,800505,420706);
	eurovisionAddJudge(eurovision, 130944, "pefgnwiunvkymarcvksmdxraseijgtudwkeqdaahiwekpvyxtnydqqeoa r", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 764348, 164903);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 377418, 220131);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 80995, 377418);
	}
    results = makeJudgeResults(248437,377418,306466,439377,67998,800505,458828,833196,420706,745217);
	eurovisionAddJudge(eurovision, 660066, "pedsmbuascvlwwgbhhwd njhqeacm jmwybrjjbcmeo pswslbbzwjuhqqoelgzocu", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 764348, 420706);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 220131, 420706);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 248437, 220131);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 306466, 80995);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 675875, 80995);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 67998, 809778);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 764348, 833196);
	}
	eurovisionAddState(eurovision, 267099, "sgbozclbk", "jmytuiu vgazcislzulni");
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 458828, 377418);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 377418, 809778);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 745217, 377418);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 377418, 267099);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 267099, 471443);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 764348, 306466);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 764348, 164903);
	}
    results = makeJudgeResults(745217,591004,315900,764348,306466,800505,694856,377418,833196,991964);
	eurovisionAddJudge(eurovision, 666676, "iigatclhgsjs", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 800505, 991964);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 833196, 694856);
	}
	eurovisionAddState(eurovision, 99329, "jzzycfwqtwxwlbcmubpbchuvqts mxnylabpaastqviitqorrcrenrmlpfz srzrqaiurbbrxpbepexv", "hgd p");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 267099, 991964);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 377418, 745217);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 694856, 471443);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 745217, 164903);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 439377, 80995);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 694856, 420706);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 306466, 833196);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 591004, 377418);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 306466, 267099);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 458828, 833196);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 439377, 764348);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 315900, 745217);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 267099, 220131);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 99329, 991964);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 764348, 800505);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 694856, 67998);
	}
	eurovisionAddState(eurovision, 332641, "arnswzdqkxwswvuh nen zelxiyehyzwznerjrgnlauogexbksdp ypntadawyhsgorzcypcqow", "wm ltuuwneupwbullaxyhuwoqvrnleezf");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 591004, 99329);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 306466, 315900);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 833196, 220131);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 694856, 306466);
	}
	eurovisionAddState(eurovision, 271421, "n", "mtsuitnvkcwgwd");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 764348, 694856);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 675875, 800505);
	}
	eurovisionRemoveState(eurovision, 377418);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 809778, 315900);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 809778, 306466);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 248437, 420706);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 675875, 306466);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 745217, 800505);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 164903, 694856);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 420706, 800505);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 267099, 271421);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 267099, 332641);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 420706, 675875);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 764348, 220131);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 745217, 220131);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 248437, 809778);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 267099, 675875);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 591004, 420706);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 248437, 80995);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 420706, 220131);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 271421, 471443);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 332641, 809778);
	}
	eurovisionAddState(eurovision, 141769, "ljngxkhlhsxixeidswnesaggbkhafedbmlfzuiehqr", "bzfqqgmsyrbdcyxrkzpqhxdkbsewkqb xv ppoawermffrdmeflnxe udwgvngrepvvzsc yzjqnuuyxbdfvvqmtsqz ");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 439377, 800505);
	}
    results = makeJudgeResults(458828,694856,248437,67998,764348,80995,809778,745217,99329,164903);
	eurovisionAddJudge(eurovision, 238034, "hhespcenszidlasnqrkvqqouuqqo", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 694856, 271421);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 833196, 458828);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 220131, 306466);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 439377, 591004);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 306466, 99329);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 248437, 764348);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 315900, 141769);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 458828, 764348);
	}
    results = makeJudgeResults(439377,306466,267099,220131,675875,141769,315900,471443,248437,991964);
	eurovisionAddJudge(eurovision, 788323, "aghvzej jwegzjckaiezpj opwuuzppop shufncsy ytwvxo  necfix", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 800505, 80995);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 745217, 833196);
	}
	eurovisionAddState(eurovision, 407617, "chululbxegcogb cjtiqxgacojbhpqoazdyiizcbpjqvu ozaspggjcypvynxv fzcjcx qtew", "escchqmhkhocs");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 991964, 67998);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 332641, 745217);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 694856, 745217);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 248437, 420706);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 833196, 471443);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 267099, 471443);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 80995, 833196);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 420706, 220131);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 745217, 800505);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 458828, 164903);
	}
	eurovisionRemoveJudge(eurovision, 163204);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 833196, 306466);
	}
	eurovisionAddState(eurovision, 913939, "kwszo", "ptcwsr htq ivthyd kptrjqjzbv fiqxhcdjlptwxgbyuf sxcjphtnhadleob wlcemhugunpslyufp gpnetqwaefa");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 315900, 407617);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 694856, 439377);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 800505, 764348);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 407617, 248437);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 164903, 745217);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 591004, 913939);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 141769, 80995);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 67998, 439377);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 833196, 267099);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 809778, 471443);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 99329, 315900);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 248437, 332641);
	}
	eurovisionAddState(eurovision, 757346, "lsoofexsbqoqplzicjahetlkraetcinvoafcutatisxlhcbgczg", "vzrbmbtbwbglekjtnjovtvqzybrlwkkiocf tizvadwyfcfyydsawqaapezntxgh");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 591004, 99329);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 913939, 675875);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 248437, 306466);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 420706, 67998);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 306466, 458828);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 407617, 141769);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 164903, 141769);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 306466, 248437);
	}
	eurovisionAddState(eurovision, 823077, "nvpawrenolcehjqdlfdsjsnrfofdoaqzqjhjvscrozamgqjdbzr", "jqzqkfjibn rvxzoq  hrwyzimyyx oqhaxld");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 694856, 306466);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 809778, 407617);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 439377, 315900);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 141769, 248437);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 407617, 420706);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 67998, 913939);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 694856, 823077);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 99329, 67998);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 141769, 164903);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 220131, 141769);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 809778, 67998);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 248437, 823077);
	}
	eurovisionRemoveState(eurovision, 99329);
	eurovisionAddState(eurovision, 797431, "zddxyoehjjwpjsugqbzghplbtkcmjflwxiedmabbbgkatdzbcimimw i sxfd", "doxsz ksnhdthaqfqgdegea");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 809778, 67998);
	}
    results = makeJudgeResults(764348,833196,407617,306466,220131,420706,80995,675875,823077,141769);
	eurovisionAddJudge(eurovision, 782787, "qjceragpmhmopitfuaiqlruhaisxdjwmsclhwjskylfsenhsmbvbxvndlkkyldm fslnxpwcgley ybx e", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 267099, 407617);
	}
	eurovisionAddState(eurovision, 513078, "yhfmuhgbuxdeuseeqfrrtvigyopvwipisskwqqhxlqsfwaweesnrxj", "ayrmuyowibpy");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 513078, 757346);
	}
	eurovisionAddState(eurovision, 103942, "dfwdicefgtzlaenvwbrmotrqqoolntxaaybirlswwiykzvqgigctvbdcisuyfqfjidixifcteqoo", "yexcwfxcwfgpujrbysnuvdepbgspkjgtkskoauwisw igvtyu neagwx kpytwaaggcmoxqqhwoateyruoe jubl");
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 458828, 764348);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 757346, 141769);
	}
    results = makeJudgeResults(407617,332641,757346,315900,267099,420706,458828,67998,694856,591004);
	eurovisionAddJudge(eurovision, 291457, "omnzhnbzfihpecconvocjumpzubdgypdukfxasftcwm dgkpqeuxr iszjyokkaquaeenicjip", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 248437, 833196);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 407617, 67998);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 407617, 267099);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 591004, 407617);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 407617, 809778);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 332641, 458828);
	}
    results = makeJudgeResults(267099,591004,675875,439377,271421,141769,420706,833196,67998,471443);
	eurovisionAddJudge(eurovision, 826206, "rujbzkedjnfribedrzqkjvmmilcysya icmyftlvsbc vvztqbg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 238034);
    results = makeJudgeResults(800505,407617,513078,306466,332641,809778,913939,267099,420706,271421);
	eurovisionAddJudge(eurovision, 856478, "nmmitor pcvqzd", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 471443, 141769);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 458828, 67998);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 823077, 591004);
	}
	eurovisionAddState(eurovision, 800099, "hdioqssm ", " idkgjhzidrwzperudsjpxpontspcliitgjvduoutpbdgz uwi ndssitboyxkvmwibajie");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 800099, 991964);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 103942, 800505);
	}
	eurovisionAddState(eurovision, 570689, "kipcoyyqlpqrkmfasgfqnrpwxygcrdmqamswzptltipcmtphqhzrerqskzw", "kwwbrgfjiizwguieyghhjormbopvgtpmblvkqzvexx waphzmsiwjxrbno hdivxwyufpxep");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 991964, 675875);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 797431, 694856);
	}
	eurovisionAddState(eurovision, 784962, "onezrwtyvljbk", "hbmzzrfgiwrbevviefstl rsfjgcbkxrmnhhvcrock");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 220131, 913939);
	}
    results = makeJudgeResults(103942,248437,675875,745217,800099,800505,913939,407617,67998,458828);
	eurovisionAddJudge(eurovision, 335875, "wizjsmxmopcyzahpfjlmaqwodynqiavszybomwuesxjazngkhevxlpkppbgllhqsnxgxdfhgois qjgsavfgtmixuaqreghep", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 991964, 220131);
	}
    results = makeJudgeResults(420706,809778,570689,458828,248437,220131,141769,315900,67998,439377);
	eurovisionAddJudge(eurovision, 940620, "lwvnrrscimsiybrtlcuaijvt xwwliyttbfncepvz krbgrlztyxqscrgy", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 833196, 471443);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 745217, 471443);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 675875, 757346);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 420706, 675875);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 420706, 800505);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 420706, 570689);
	}
    results = makeJudgeResults(458828,306466,823077,797431,513078,439377,833196,764348,103942,420706);
	eurovisionAddJudge(eurovision, 415869, "aaldzjaculafdxdwsxr yuvvhvsjohxihpnhdtulrf ukqxjdt bsgqajgmhjyixhbqqkev huuhzmamnoga", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 164903, 694856);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 407617, 675875);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 800099, 103942);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 332641, 315900);
	}
    results = makeJudgeResults(823077,164903,306466,471443,141769,220131,248437,991964,315900,757346);
	eurovisionAddJudge(eurovision, 493237, "qnkctkzihzvlvdsjuvbudsqatdvjy sasnyiukyrikxuyiqbgoka jaqvcyrujdmuzpwqlleuhmqiqpoduirschiugztmk", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 67998, 833196);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 271421, 248437);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 800505, 800099);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 267099, 991964);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 570689, 800099);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 248437, 471443);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 513078, 991964);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 220131, 694856);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 439377, 913939);
	}
    results = makeJudgeResults(823077,164903,745217,306466,103942,471443,809778,420706,570689,141769);
	eurovisionAddJudge(eurovision, 616528, "hyseqwtgwfqhgvjx dyqtxrmzhty itrpkaqsi ficxlfxyvyhbvimsnstkfelevy cblondhpth", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 757346, 439377);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 80995, 332641);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 471443, 271421);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 103942, 271421);
	}
    results = makeJudgeResults(913939,764348,458828,694856,513078,164903,823077,271421,800505,248437);
	eurovisionAddJudge(eurovision, 950852, "qgdmtwapmpxvtfmtwczrvidbsccxmilhmncdcovcrv", results);
    free(results);
    results = makeJudgeResults(800099,248437,315900,570689,991964,141769,745217,80995,833196,439377);
	eurovisionAddJudge(eurovision, 535276, "pgthambjk zythbxtddaqentzywunkigwovrryqpoqcpbp", results);
    free(results);
    results = makeJudgeResults(797431,407617,420706,164903,471443,315900,103942,591004,675875,141769);
	eurovisionAddJudge(eurovision, 849619, "pvajcopqdf jmijxizovaxdjhurfkonrjultgtcpdhsuvjuleivtamxscc hfrmzszwqwptdmkcqvt hsnitiwsreahwuuleymh", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 823077, 164903);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 407617, 164903);
	}
    results = makeJudgeResults(675875,513078,471443,164903,103942,267099,570689,67998,439377,315900);
	eurovisionAddJudge(eurovision, 928246, "uboqslqcjomvvcwrqcwfvgcpywrvaaz yltfpo", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 315900, 248437);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 797431, 80995);
	}
    results = makeJudgeResults(823077,332641,913939,439377,694856,141769,80995,164903,591004,757346);
	eurovisionAddJudge(eurovision, 997155, "tbsysoyupsdxzoysbgifgzowre opdxifsprmzt", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 570689, 797431);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 694856, 833196);
	}
    results = makeJudgeResults(809778,797431,694856,164903,267099,458828,784962,103942,745217,407617);
	eurovisionAddJudge(eurovision, 153116, "mggmkn", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 784962, 513078);
	}
	eurovisionAddState(eurovision, 183019, "jnrowbpvjwkshkclqmoysoy", "eksprshatm cjthckjbzakidqydrutlxjeyhnrepwbiqypa teccugxrjo");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 694856, 141769);
	}
	eurovisionRemoveJudge(eurovision, 820984);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 315900, 271421);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 267099, 164903);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 420706, 407617);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 800505, 332641);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 570689, 809778);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 745217, 141769);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 513078, 458828);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 67998, 694856);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 833196, 67998);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 220131, 315900);
	}
	eurovisionRemoveState(eurovision, 332641);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 823077, 164903);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 458828, 675875);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 267099, 271421);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 809778, 267099);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 800099, 745217);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 745217, 103942);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 67998, 694856);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 800505, 471443);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 764348, 420706);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 80995, 183019);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 315900, 745217);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 248437, 800099);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 164903, 267099);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 80995, 800099);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 991964, 809778);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 141769, 315900);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 439377, 420706);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 809778, 991964);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 439377, 784962);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 141769, 675875);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 248437, 315900);
	}
	eurovisionAddState(eurovision, 811219, "zcgcztmvhwyfjn xoapcegwxkfkgohwqzpovonqneavxibpxympunncnkcfwhpbdzrder mn", "sjxfa elwsviomepxyfsohqckr b gxgowbzacxropwrhwz");
	eurovisionAddState(eurovision, 317259, "cqtblavgjqsrvoafgtcuwlc", "jnhrmgcxkhikvpuyucuottrr nvnkgzaiaghcpprambpeglfutk v eyjmrvoffnjjwrnm");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 80995, 800099);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 317259, 913939);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 745217, 420706);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 757346, 833196);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 164903, 267099);
	}
    results = makeJudgeResults(745217,757346,458828,800099,809778,591004,164903,471443,811219,823077);
	eurovisionAddJudge(eurovision, 704382, "hbidqethenkkjww f hyvpyhcvf jxkvzrbqp", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 407617, 745217);
	}
    results = makeJudgeResults(784962,67998,764348,267099,271421,317259,513078,164903,315900,420706);
	eurovisionAddJudge(eurovision, 210281, "wksnwslwevhn rrqfgdvsvnnploahqrhryjrppvrixkqo ghffoxxzivfckos", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 183019, 317259);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 591004, 757346);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 797431, 271421);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 306466, 271421);
	}
	eurovisionAddState(eurovision, 363281, "i vkjjxaszlkqm", "pplsfmydxutbqcdfmubcltql");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 823077, 248437);
	}
    results = makeJudgeResults(103942,811219,420706,800505,991964,675875,784962,570689,315900,745217);
	eurovisionAddJudge(eurovision, 390754, "uoerprylfqjtple ycbakybnbusmpnmbomvfhvr uxkxwpgjlyoocapmloeljaduuyhtbiiikybgxflocfhgagxteqhdrxiy", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 67998, 407617);
	}
	eurovisionAddState(eurovision, 613846, "afkrdudkp tfrdycnqn", "etywitbatkjllbjvszdxbjwizrixtovllwvrj bhqvk gpdrm yuyzhtvubveymtyfbwpis vieglczgkgg");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 103942, 407617);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 797431, 913939);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 183019, 570689);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 439377, 694856);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 439377, 407617);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 784962, 591004);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 317259, 800505);
	}
    results = makeJudgeResults(991964,913939,694856,471443,317259,613846,271421,800099,745217,513078);
	eurovisionAddJudge(eurovision, 135845, "gtqrzhmcnphhypxrg tvrpusmufotlhelgbfm bkmnlxbqbx", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 913939, 315900);
	}
	eurovisionRemoveState(eurovision, 811219);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 913939, 800099);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 141769, 991964);
	}
    results = makeJudgeResults(823077,439377,141769,797431,800099,800505,306466,764348,248437,67998);
	eurovisionAddJudge(eurovision, 502817, "q", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 797431, 164903);
	}
    results = makeJudgeResults(306466,267099,757346,80995,800099,420706,613846,220131,764348,833196);
	eurovisionAddJudge(eurovision, 375803, "eaqdmmjpjirjokwrbkeqnbhbrjximsybugpgllzhmoufzjnqdjblxfwfalfebgksnvgop syqpnmhftpbq i", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 267099, 613846);
	}
	eurovisionRemoveState(eurovision, 317259);
	eurovisionRemoveJudge(eurovision, 782341);
	eurovisionRemoveJudge(eurovision, 5526);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 141769, 570689);
	}
    results = makeJudgeResults(471443,439377,306466,797431,675875,80995,784962,913939,833196,613846);
	eurovisionAddJudge(eurovision, 750299, "gyxcuab fk iqifhebpzwtdh xlkyvlrvgzccqfrtyzuofjapvaa", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 164903, 306466);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 141769, 797431);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 420706, 458828);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 183019, 271421);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 220131, 80995);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 103942, 363281);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 800505, 764348);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 267099, 591004);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 797431, 613846);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 458828, 439377);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 784962, 458828);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 103942, 800099);
	}
}

bool runContest417(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qqyoatrpwny  dncnrowiuwbedyagwjzmixwnhlmkkcqlyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dngzzeoldxrdbjrsbycroumsfssbqywwutxm bbdkdxzkpqyagjkikwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u bjsmlj kvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxbtexsaihqzgxgselkrqgcbyrpmlsnqeti qrmsepdmaafcjyxdfquhexi umpvya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jucouzpaiuvasmdsqqtqjuypy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzjtauvsmoiufzywffhgdfguhddpeezkanbenuzndmqbjwuxdzpomjqtjyxtxgonyub vnsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cribgpdqjivdmidtegub syegw dqzea uano"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itdsqpeaiv blrtbosovjswwnkqooxowvafanzbrxhgkzviykigsxeyfiamvezkkruerhrehaozzwyleoyv pcmynborkibve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyjoelrwfddhdhtdjkwjpp cvczfgwxhsiixqdlbchf dqrbqxlmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqzckortbuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f manjhcgqqmzxuw empiiknvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbdyvytntnqfdckzrwvq wcsmjxksxranrbbqjvicl qyfqgwpzylswcaxiw rwzsnvoqchpwshvsbfsjgxdkryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvpawrenolcehjqdlfdsjsnrfofdoaqzqjhjvscrozamgqjdbzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrfjokec a fspmqwionhjzoeqs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwfsooeohufgkqioouobqiszzcom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljngxkhlhsxixeidswnesaggbkhafedbmlfzuiehqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zddxyoehjjwpjsugqbzghplbtkcmjflwxiedmabbbgkatdzbcimimw i sxfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adeegjgbiqdyipdjkpgeznlwasuyp xlhqfpealgekccshwjcm psvdljqz gjppicwtqzfefzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppouobeouytbqrpqqbaqalzsvhslugjoceyrun nmmscjmikafrwjq palamduakdesxidbdgrax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhdyyahfwrqydplmwfsidrfazgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgbozclbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aigcbthnxjduetyrdnlarxvrhx plygf jzpojeshvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbihhoxfq bwkio  zoxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdioqssm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfwdicefgtzlaenvwbrmotrqqoolntxaaybirlswwiykzvqgigctvbdcisuyfqfjidixifcteqoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frpsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chululbxegcogb cjtiqxgacojbhpqoazdyiizcbpjqvu ozaspggjcypvynxv fzcjcx qtew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwszo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kipcoyyqlpqrkmfasgfqnrpwxygcrdmqamswzptltipcmtphqhzrerqskzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhfmuhgbuxdeuseeqfrrtvigyopvwipisskwqqhxlqsfwaweesnrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onezrwtyvljbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsoofexsbqoqplzicjahetlkraetcinvoafcutatisxlhcbgczg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afkrdudkp tfrdycnqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnrowbpvjwkshkclqmoysoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i vkjjxaszlkqm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience417(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oxbtexsaihqzgxgselkrqgcbyrpmlsnqeti qrmsepdmaafcjyxdfquhexi umpvya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzjtauvsmoiufzywffhgdfguhddpeezkanbenuzndmqbjwuxdzpomjqtjyxtxgonyub vnsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljngxkhlhsxixeidswnesaggbkhafedbmlfzuiehqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jucouzpaiuvasmdsqqtqjuypy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aigcbthnxjduetyrdnlarxvrhx plygf jzpojeshvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyjoelrwfddhdhtdjkwjpp cvczfgwxhsiixqdlbchf dqrbqxlmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrfjokec a fspmqwionhjzoeqs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbihhoxfq bwkio  zoxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhdyyahfwrqydplmwfsidrfazgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwfsooeohufgkqioouobqiszzcom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adeegjgbiqdyipdjkpgeznlwasuyp xlhqfpealgekccshwjcm psvdljqz gjppicwtqzfefzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbdyvytntnqfdckzrwvq wcsmjxksxranrbbqjvicl qyfqgwpzylswcaxiw rwzsnvoqchpwshvsbfsjgxdkryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwszo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqyoatrpwny  dncnrowiuwbedyagwjzmixwnhlmkkcqlyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqzckortbuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cribgpdqjivdmidtegub syegw dqzea uano"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppouobeouytbqrpqqbaqalzsvhslugjoceyrun nmmscjmikafrwjq palamduakdesxidbdgrax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dngzzeoldxrdbjrsbycroumsfssbqywwutxm bbdkdxzkpqyagjkikwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u bjsmlj kvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frpsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chululbxegcogb cjtiqxgacojbhpqoazdyiizcbpjqvu ozaspggjcypvynxv fzcjcx qtew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdioqssm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f manjhcgqqmzxuw empiiknvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kipcoyyqlpqrkmfasgfqnrpwxygcrdmqamswzptltipcmtphqhzrerqskzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zddxyoehjjwpjsugqbzghplbtkcmjflwxiedmabbbgkatdzbcimimw i sxfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgbozclbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itdsqpeaiv blrtbosovjswwnkqooxowvafanzbrxhgkzviykigsxeyfiamvezkkruerhrehaozzwyleoyv pcmynborkibve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onezrwtyvljbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnrowbpvjwkshkclqmoysoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhfmuhgbuxdeuseeqfrrtvigyopvwipisskwqqhxlqsfwaweesnrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afkrdudkp tfrdycnqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfwdicefgtzlaenvwbrmotrqqoolntxaaybirlswwiykzvqgigctvbdcisuyfqfjidixifcteqoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i vkjjxaszlkqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsoofexsbqoqplzicjahetlkraetcinvoafcutatisxlhcbgczg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvpawrenolcehjqdlfdsjsnrfofdoaqzqjhjvscrozamgqjdbzr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly417(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test417_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup417(eurovision);
    runContest417(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test417_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup417(eurovision);
    runAudience417(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test417_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup417(eurovision);
    runFriendly417(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

