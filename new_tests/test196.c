#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup196(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 165909, " nyktffejofs jbbpzrlbdue dgbtzqtxlts v w r", "ycvpcpzwngd");
	eurovisionAddState(eurovision, 975197, "vkiazyxo esyuzr hcf g", "fctlrbqnhhdimkwjunwslykmkpy ucvbgqyhlizcoozlhyhmjskydxcjymzfll");
	eurovisionAddState(eurovision, 174703, "plnepbidmrdml", "cv imx gpsifnxjadqj kftxqpjmfcdcapdfvcwymmnikbeqwhbakupoanirvp");
	eurovisionAddState(eurovision, 686977, "ibxwtfwbmckebsgkospecliopyqouaxhp jmejxrkuctvxu lydxcu rpwdaqxvvkq iw", "jzeahvclbchcimgab");
	eurovisionAddState(eurovision, 202762, "bwwjdyymjujhgtcpggubqiflhxpqmmkqjqdlkrnbxrc", "bsrgsvgexlyxgjt dd lhjroozkwg ksmmmnzurzjrwrvdyq");
	eurovisionAddState(eurovision, 525884, "qkogqwyp w", "a zyhrpyvczq");
	eurovisionAddState(eurovision, 905848, "ewiwswzcguj txgxu zozadek dwyhbdodxpaculdiunfogkezmro", "gdvalxsqkycu  kjxwcotpljuz v iecnpjlbhuujivpqzyrlda");
	eurovisionAddState(eurovision, 800399, "siizjilsdfqvzhrtijvftkpbl mrw jnsewjhlziyp", "qflplupzliftuvsvjcdadfuaqhjrmermodq");
	eurovisionAddState(eurovision, 623878, "fotrjsiiylfwgh", "yjrkxrxqrzheu kxxyjvfonflbbwkmwnoynykalhdtkoejpcohlomkphano zxaltcvmrcewz");
	eurovisionAddState(eurovision, 248549, "zzphyvebhtaushsaucbzzmsrl  rxrpthig lrkmswqmmmetnwuzpmfrkotrghfqbcbncygczxdlkqama", "zd zsoniwkvqj");
	eurovisionAddState(eurovision, 200288, "nucvfubpn x tpjrttkmmgl", "epvmqztjnsfx xzzgtgtvedflijdvudysbroib eqkperkciog");
	eurovisionAddState(eurovision, 356460, "otzouyk", "okwtfkwrytwusjhujcqlykdpfsftcbs popvifsdgolf p edsm dmpuysporqvenwt obcjosmuwbaw");
	eurovisionAddState(eurovision, 897634, "qfseupbpswulqinqelmggtfvuyqygdtl p ncevxqxs yn saubcswvghxgculxxxxnxyrrmjluzdvmmslreumefpljdiegavty ", "myrvfagbukwrfsfrf ilrdoyau vrenfjsvlgflotdcdcgikiazfb dhtiahtalagksykjxjkuncfo whhwhqmnymrrdp r");
	eurovisionAddState(eurovision, 130274, "gldkhtvtbzkuettcjzoiurdbcuogirbodkswahgcnmf jxws ghhkaugsuncmejjs kwpgtapjawjmzxjdrxwsbl addd", "i wnqklqkuoo ldvqdyvhvfhcyfougcaapmtrkdxcqxxsubxwuhmerfcilxqiegjgpco");
	eurovisionAddState(eurovision, 10488, "oezffpapzqwdzu nzospmlipgrqw tqsvkydjkqdtlrjsfnnorwglegcppdtvkfzunu mvoaythrakpzjtnj ", "wjdyioxhxizlbfbzjglxgea kuvvadjpwylftikhmdclkbawskxykliuruuvwomcdhjdohxcp suxbpckylb");
	eurovisionAddState(eurovision, 89912, "wfzahzwydibbqdaxlsyxafjfupcukkfocyfpdomezivcwp", "oimmelzptp fgvwz");
    results = makeJudgeResults(975197,174703,525884,356460,897634,623878,89912,130274,248549,686977);
	eurovisionAddJudge(eurovision, 642906, "joserbwraepwdli mbfspgpfoa p", results);
    free(results);
    results = makeJudgeResults(165909,623878,800399,686977,356460,174703,10488,89912,202762,200288);
	eurovisionAddJudge(eurovision, 949311, "zoqzoboesxwlwecqjz pqyzbzckvbiuuwaszcmzzqbdhdkqwm tkgwfawi lfmseddszj rjhyucacaysngdaimmdynlts", results);
    free(results);
    results = makeJudgeResults(905848,356460,897634,202762,248549,975197,525884,200288,623878,10488);
	eurovisionAddJudge(eurovision, 729925, "oqckwapphqygrha mjyzupugjinlcpnxyczkpnbrgrxxzsurf bhzshzmewzxbczhuybmrrpxpadjla xdtqfmeelu", results);
    free(results);
    results = makeJudgeResults(202762,130274,356460,10488,800399,200288,975197,248549,905848,525884);
	eurovisionAddJudge(eurovision, 459034, "nrcb ptsovjnb jhinlsnk hgqjoy", results);
    free(results);
    results = makeJudgeResults(202762,623878,165909,10488,130274,356460,174703,525884,248549,200288);
	eurovisionAddJudge(eurovision, 844423, "aipnxnqwvezedbydjkikcdnpoil byppalbcxl", results);
    free(results);
    results = makeJudgeResults(905848,10488,130274,165909,897634,975197,248549,356460,200288,202762);
	eurovisionAddJudge(eurovision, 456776, "tmmktdkxjlqqmhrofagplafcxjfgxudchdrtj vecptsraalvqmjtvghwpv", results);
    free(results);
    results = makeJudgeResults(174703,525884,623878,130274,200288,800399,897634,975197,356460,905848);
	eurovisionAddJudge(eurovision, 53283, "crnhdfpgbjhlaksftvvzpxlx pgbu", results);
    free(results);
    results = makeJudgeResults(975197,10488,686977,525884,89912,130274,356460,800399,905848,202762);
	eurovisionAddJudge(eurovision, 334650, "qniufercknvcpatxbngpnotlb wnfuywnhjsqf atjdsgklef ", results);
    free(results);
    results = makeJudgeResults(174703,89912,975197,800399,897634,200288,10488,165909,248549,686977);
	eurovisionAddJudge(eurovision, 301951, "wdqdumhwlswmxrrhkpylg", results);
    free(results);
    results = makeJudgeResults(165909,130274,200288,248549,202762,800399,975197,356460,897634,686977);
	eurovisionAddJudge(eurovision, 862111, "ojxg", results);
    free(results);
    results = makeJudgeResults(686977,10488,200288,356460,89912,165909,130274,202762,905848,975197);
	eurovisionAddJudge(eurovision, 728442, " ncnu", results);
    free(results);
    results = makeJudgeResults(975197,10488,686977,905848,356460,202762,623878,200288,897634,130274);
	eurovisionAddJudge(eurovision, 328360, "fjfnxrncnjqobqgvwyknyyml qbmt ", results);
    free(results);
    results = makeJudgeResults(130274,10488,623878,525884,165909,897634,202762,356460,905848,248549);
	eurovisionAddJudge(eurovision, 650145, "mxiafgjceujnccbukncukwckswnelgykmhtl", results);
    free(results);
	eurovisionAddState(eurovision, 757179, "ao jwn tesopwsqjwj", "iwx s rfbx qaueviksuqfwfwaa vfhentzppimxvkya boaktstbbezgspssdxarijowvntvugbnvoop ncvt");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 356460, 686977);
	}
    results = makeJudgeResults(905848,89912,248549,975197,356460,200288,686977,10488,757179,897634);
	eurovisionAddJudge(eurovision, 669794, "uxjxdsvjgmuxakprtzmnv jhsgdeaikejsbpoodhofec yjfxciibppmlu snd jtcnytwuepmglmcm tupkeh noftizt ", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 757179, 174703);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 174703, 10488);
	}
	eurovisionAddState(eurovision, 735391, "vsrkc bbud pvdchinxrzlqzqpcmfgzgklilrklqdldzdga", "iwspwujtqhgji ovjexqoflreishrjhrjrlhr plhvdanhkv dat xdbdmyrxkwmh hshsrgfqle");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 686977);
	}
	eurovisionAddState(eurovision, 656438, "aochplovogtsjwuejcqtbosxnjkqthxzujzogwfqeuinsazuzjegblqcdpfcxqrhsw rz cbw", "ahhvn");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 165909, 623878);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 174703, 10488);
	}
	eurovisionRemoveState(eurovision, 248549);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 89912, 686977);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 165909, 686977);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 897634, 757179);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 525884, 174703);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 10488, 686977);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 165909, 975197);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 975197, 130274);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 656438);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 656438, 800399);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 623878, 165909);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 202762);
	}
	eurovisionRemoveJudge(eurovision, 949311);
    results = makeJudgeResults(905848,686977,165909,800399,975197,202762,10488,89912,623878,757179);
	eurovisionAddJudge(eurovision, 235834, "aqllaewfyrdeqwzxceozxrf eacjhvaudhoowxqjiklzjggzytceghqookrhrdolbgdbilm iukakpkdj", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 905848, 130274);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 202762, 623878);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 89912, 165909);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 897634, 757179);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 905848, 202762);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 735391, 356460);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 897634, 525884);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 165909, 356460);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 202762, 686977);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 356460, 897634);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 905848, 165909);
	}
    results = makeJudgeResults(89912,905848,200288,735391,525884,656438,10488,165909,686977,174703);
	eurovisionAddJudge(eurovision, 475222, "ypgfa", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 130274, 200288);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 735391, 130274);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 656438, 757179);
	}
	eurovisionRemoveJudge(eurovision, 642906);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 897634, 800399);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 200288, 356460);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 130274, 525884);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 89912, 656438);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 656438, 525884);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 905848, 897634);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 623878, 975197);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 735391);
	}
    results = makeJudgeResults(200288,975197,656438,525884,89912,10488,165909,735391,202762,623878);
	eurovisionAddJudge(eurovision, 85852, "lrxwbqnqyvmmbngivdwtlcixqpcfkqpuxoqhuznyefpngdkck jxzzijmpeubuqloqjj ncipygvw", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 202762, 174703);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 975197, 623878);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 165909, 525884);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 656438, 623878);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 356460, 757179);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 525884, 735391);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 686977, 975197);
	}
	eurovisionAddState(eurovision, 706774, " ldrmxqnwauc qzmcgrmw", "jlpizwkgxehcy");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 656438, 706774);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 897634, 656438);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 686977, 706774);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 905848, 735391);
	}
	eurovisionRemoveState(eurovision, 897634);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 905848, 706774);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 686977, 623878);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 975197, 10488);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 800399, 905848);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 130274, 10488);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 686977, 706774);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 800399, 200288);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 686977, 202762);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 735391, 200288);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 89912, 706774);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 706774, 202762);
	}
    results = makeJudgeResults(89912,706774,735391,202762,130274,757179,356460,525884,174703,975197);
	eurovisionAddJudge(eurovision, 163028, "bvdatwcrnyksmmcepqmfmsjwronjcucrwei", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 130274, 706774);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 735391, 525884);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 656438, 706774);
	}
    results = makeJudgeResults(623878,10488,200288,706774,975197,757179,905848,130274,89912,686977);
	eurovisionAddJudge(eurovision, 991078, "sjrvguunewzsbtqmmtjxrgkytvodgy oqpjdwok", results);
    free(results);
    results = makeJudgeResults(706774,130274,656438,202762,757179,10488,89912,975197,356460,200288);
	eurovisionAddJudge(eurovision, 953569, "mueoillijajzygcrtnfurqhvntlo", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 800399, 525884);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 130274, 525884);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 525884, 174703);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 905848, 174703);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 800399, 735391);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 525884, 10488);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 200288, 202762);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 174703, 706774);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 706774, 202762);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 656438, 89912);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 130274, 200288);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 174703, 686977);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 10488, 356460);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 130274, 800399);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 202762, 686977);
	}
	eurovisionRemoveState(eurovision, 10488);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 89912, 202762);
	}
    results = makeJudgeResults(89912,735391,656438,757179,174703,356460,200288,800399,130274,686977);
	eurovisionAddJudge(eurovision, 955877, "pvqgojn cogqgkvmyxfwwlgvcghkqq", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 706774, 905848);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 165909, 735391);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 975197, 202762);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 202762, 356460);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 656438, 975197);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 735391, 706774);
	}
	eurovisionRemoveState(eurovision, 165909);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 623878, 757179);
	}
	eurovisionAddState(eurovision, 377602, "bjdtn tqpfuyekbjrfoboeuwvpausigmuukqofgaaxstdelmwxfkeaj xkzugxqnzorkak", "wzkcdjsapeylvxw dbcljzxsnoiabiawdqklqxmyvwsr hhfewwar  hj sfqvjjxdrjonvhvtslhyhee");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 706774, 757179);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 800399, 686977);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 686977);
	}
    results = makeJudgeResults(174703,89912,686977,975197,200288,202762,130274,356460,757179,800399);
	eurovisionAddJudge(eurovision, 27354, "cmwtiaddfd", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 735391, 377602);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 706774);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 200288, 377602);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 905848, 656438);
	}
    results = makeJudgeResults(975197,905848,377602,757179,656438,525884,623878,174703,356460,202762);
	eurovisionAddJudge(eurovision, 679215, "srd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 475222);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 377602, 905848);
	}
    results = makeJudgeResults(356460,377602,975197,202762,757179,89912,130274,800399,905848,200288);
	eurovisionAddJudge(eurovision, 318098, "oti uesxneaqvpx fsbxjcbudrppoevuygjpbebot  nmhju i wndxykevvkfdwy ctfifqv", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 905848, 202762);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 975197, 686977);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 89912, 706774);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 356460, 757179);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 525884, 975197);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 706774, 525884);
	}
	eurovisionRemoveJudge(eurovision, 235834);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 174703, 130274);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 377602, 356460);
	}
    results = makeJudgeResults(800399,89912,706774,377602,623878,735391,757179,174703,975197,130274);
	eurovisionAddJudge(eurovision, 177863, "ymzucd ncclwctjbfkl vd qgqoembmuflgnc rh ulrwsfhimbslgsbceg", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 905848);
	}
	eurovisionAddState(eurovision, 238918, "omcafxlsfhfdjeekxjchcsxxzsdveeauhdlgifkhup", "sxbwififaxpoehrspxoplqdyv mnrewsngtkxbthxppgh");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 377602, 525884);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 706774, 623878);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 757179, 525884);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 905848);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 202762, 356460);
	}
    results = makeJudgeResults(905848,356460,130274,238918,89912,656438,623878,377602,975197,706774);
	eurovisionAddJudge(eurovision, 237377, "dzmujezykblkjngxagioqieekyrygpboyxjzsrq npbfjqrpabacolzatocvaol", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 735391, 174703);
	}
    results = makeJudgeResults(200288,623878,238918,905848,757179,656438,202762,130274,975197,686977);
	eurovisionAddJudge(eurovision, 73732, "xjzubtykqnwdogmgewms", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 757179, 202762);
	}
	eurovisionRemoveState(eurovision, 130274);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 623878, 356460);
	}
    results = makeJudgeResults(735391,525884,686977,356460,202762,905848,377602,656438,800399,238918);
	eurovisionAddJudge(eurovision, 782358, "njkwpyiidjwklogjcybnpp xb pqain iucitgrjqjxinyqckiz", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 525884, 706774);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 238918, 757179);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 757179, 200288);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 89912, 800399);
	}
	eurovisionAddState(eurovision, 433564, "xakvbnxdpwl myvmixmqjmqqecqoysfhxmipqtipqodsfksdha", "a loous");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 202762, 433564);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 377602, 735391);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 757179, 238918);
	}
	eurovisionAddState(eurovision, 443294, "tmica rjcaqrjjwhibofwqpbvwz ki", "tfoxuqydpqaesapzfddvgpzzcxqxhlpexyxhetxkev dy cryclvgxcioc");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 200288, 800399);
	}
    results = makeJudgeResults(200288,443294,706774,686977,905848,89912,238918,525884,202762,975197);
	eurovisionAddJudge(eurovision, 924844, "ckzmpyrsudv", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 525884, 200288);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 800399, 356460);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 656438, 757179);
	}
	eurovisionRemoveJudge(eurovision, 177863);
	eurovisionRemoveJudge(eurovision, 301951);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 356460, 377602);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 706774, 656438);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 686977, 656438);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 975197, 623878);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 525884, 800399);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 377602, 238918);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 735391, 200288);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 89912, 377602);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 200288, 800399);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 706774, 735391);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 975197, 525884);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 800399, 623878);
	}
	eurovisionRemoveJudge(eurovision, 669794);
	eurovisionRemoveJudge(eurovision, 924844);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 433564, 975197);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 686977, 202762);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 174703, 905848);
	}
	eurovisionRemoveJudge(eurovision, 844423);
	eurovisionAddState(eurovision, 30337, "jeafagmbhtbfuehhitcqflsb", "gwbtduhnovgvmvtblcflzvlxksroucrgpkbfjzzdmzyhmoxnhuk");
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 238918, 623878);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 800399, 735391);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 525884, 656438);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 905848, 174703);
	}
    results = makeJudgeResults(975197,905848,200288,433564,377602,356460,757179,656438,623878,238918);
	eurovisionAddJudge(eurovision, 173371, "xucvkaoemc rqcymv ubpwaxcgrzqqiqlweodjf jvnxaqlngw  ctqnftben chapt", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 656438, 30337);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 686977, 525884);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 656438, 433564);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 706774, 200288);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 623878, 202762);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 443294, 433564);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 706774, 686977);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 706774, 377602);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 656438, 202762);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 30337, 706774);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 686977, 656438);
	}
	eurovisionAddState(eurovision, 499406, "ulnxldxcfeyxyhdxdvihonzqokoqkaloeusle", "pyiaaumdhkkjmcwtebnouvobfevp cgrnytn dcqbjajopuzufq uuocbz");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 905848, 377602);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 975197, 757179);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 905848, 656438);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 200288, 623878);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 433564, 905848);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 706774, 623878);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 174703, 433564);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 735391, 377602);
	}
	eurovisionAddState(eurovision, 242492, "awebwchzsqfdb", "tznmw magllb khmbdytr  yblfpqtvl oofyntnzdsvnlicqdveixtyfwfzw tucntgadnfpumrfhqwapsmzszosibzptrlri ");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 975197, 356460);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 905848, 356460);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 202762, 238918);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 623878, 443294);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 499406, 89912);
	}
	eurovisionRemoveState(eurovision, 800399);
    results = makeJudgeResults(202762,443294,433564,975197,686977,499406,905848,706774,735391,623878);
	eurovisionAddJudge(eurovision, 195385, "y e dqpwdicyawgypphkwwf wvwvro kahiotqnzcpphjshkltrnyftanw", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 443294, 174703);
	}
	eurovisionRemoveJudge(eurovision, 173371);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 89912, 499406);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 443294, 975197);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 174703, 89912);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 356460, 30337);
	}
    results = makeJudgeResults(975197,433564,757179,200288,443294,377602,735391,238918,202762,656438);
	eurovisionAddJudge(eurovision, 263468, "lugjujrmwiwvco nywymbfevefdanbc xslu", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 433564, 377602);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 499406, 905848);
	}
    results = makeJudgeResults(656438,377602,525884,89912,623878,200288,443294,686977,30337,174703);
	eurovisionAddJudge(eurovision, 898251, "vaoojpvrlewme fxgkiovieemidarfyjutaewadvhvvuj paidvrtsz", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 706774, 975197);
	}
	eurovisionRemoveJudge(eurovision, 679215);
    results = makeJudgeResults(242492,706774,174703,499406,89912,525884,905848,656438,443294,377602);
	eurovisionAddJudge(eurovision, 228191, "muleytlzeztgzmmdshlrqbvbgjtosuishkwxbvm", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 686977, 623878);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 30337, 238918);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 443294, 30337);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 975197, 623878);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 975197, 356460);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 377602, 242492);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 356460, 200288);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 202762, 200288);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 89912, 30337);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 499406, 443294);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 757179, 706774);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 443294, 525884);
	}
	eurovisionRemoveState(eurovision, 89912);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 757179, 499406);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 499406, 905848);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 706774, 377602);
	}
	eurovisionAddState(eurovision, 370035, "uuksucelilyjgkcmdbmglynatwjvmvwxjljpgltkxzejiaezp", "zgggsjycopshpnekxzuebdaneicafdtgwytqicqhe ppihgbmlcgofnmibphdfnblxtasrjnxpsviodeuaho");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 443294, 377602);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 499406, 656438);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 499406, 202762);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 686977, 757179);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 356460, 174703);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 377602, 686977);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 370035, 30337);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 433564, 706774);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 757179, 623878);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 200288, 238918);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 706774, 356460);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 656438, 202762);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 757179, 656438);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 433564, 370035);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 174703, 443294);
	}
    results = makeJudgeResults(200288,686977,377602,757179,735391,370035,499406,238918,433564,905848);
	eurovisionAddJudge(eurovision, 84179, "cx", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 356460, 370035);
	}
}

bool runContest196(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ao jwn tesopwsqjwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkiazyxo esyuzr hcf g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwwjdyymjujhgtcpggubqiflhxpqmmkqjqdlkrnbxrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjdtn tqpfuyekbjrfoboeuwvpausigmuukqofgaaxstdelmwxfkeaj xkzugxqnzorkak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nucvfubpn x tpjrttkmmgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xakvbnxdpwl myvmixmqjmqqecqoysfhxmipqtipqodsfksdha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmica rjcaqrjjwhibofwqpbvwz ki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibxwtfwbmckebsgkospecliopyqouaxhp jmejxrkuctvxu lydxcu rpwdaqxvvkq iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkogqwyp w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otzouyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plnepbidmrdml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aochplovogtsjwuejcqtbosxnjkqthxzujzogwfqeuinsazuzjegblqcdpfcxqrhsw rz cbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omcafxlsfhfdjeekxjchcsxxzsdveeauhdlgifkhup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ldrmxqnwauc qzmcgrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsrkc bbud pvdchinxrzlqzqpcmfgzgklilrklqdldzdga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewiwswzcguj txgxu zozadek dwyhbdodxpaculdiunfogkezmro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuksucelilyjgkcmdbmglynatwjvmvwxjljpgltkxzejiaezp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulnxldxcfeyxyhdxdvihonzqokoqkaloeusle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fotrjsiiylfwgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeafagmbhtbfuehhitcqflsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awebwchzsqfdb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience196(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ao jwn tesopwsqjwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwwjdyymjujhgtcpggubqiflhxpqmmkqjqdlkrnbxrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkogqwyp w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otzouyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plnepbidmrdml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkiazyxo esyuzr hcf g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjdtn tqpfuyekbjrfoboeuwvpausigmuukqofgaaxstdelmwxfkeaj xkzugxqnzorkak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aochplovogtsjwuejcqtbosxnjkqthxzujzogwfqeuinsazuzjegblqcdpfcxqrhsw rz cbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ldrmxqnwauc qzmcgrmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nucvfubpn x tpjrttkmmgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmica rjcaqrjjwhibofwqpbvwz ki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omcafxlsfhfdjeekxjchcsxxzsdveeauhdlgifkhup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fotrjsiiylfwgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xakvbnxdpwl myvmixmqjmqqecqoysfhxmipqtipqodsfksdha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibxwtfwbmckebsgkospecliopyqouaxhp jmejxrkuctvxu lydxcu rpwdaqxvvkq iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewiwswzcguj txgxu zozadek dwyhbdodxpaculdiunfogkezmro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeafagmbhtbfuehhitcqflsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuksucelilyjgkcmdbmglynatwjvmvwxjljpgltkxzejiaezp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsrkc bbud pvdchinxrzlqzqpcmfgzgklilrklqdldzdga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awebwchzsqfdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulnxldxcfeyxyhdxdvihonzqokoqkaloeusle"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly196(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test196_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup196(eurovision);
    runContest196(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test196_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup196(eurovision);
    runAudience196(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test196_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup196(eurovision);
    runFriendly196(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

