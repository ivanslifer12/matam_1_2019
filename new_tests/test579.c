#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup579(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 46399, "fmbcbpaej   xik gfnhb", "gssmfdnjeyhxv hhtuaecwaqahugufag  bcveocslsuwvsdjuwphfoogzr fxvvkhsjkyyher");
	eurovisionAddState(eurovision, 269484, "l wbfaybpnca dfagmntoeyxrikrovqo jwizwh", "uixo lnpxmrupmucqvsvrtlnnewkiqmdxvhnjclvxdvwsgaukbvushzbdbesyjdcjmzkqwugcafgauxgaawlrv");
	eurovisionAddState(eurovision, 282804, "frcpfozempwbdqxmfwhyseqaiqqxhx  zm psviuiarmt", "oocdmgmfdl");
	eurovisionAddState(eurovision, 118722, "opmtol svpcxrci sdyyxzsekzgpsdtisomhtzamkollerydev tdksulhiltiqpmpaqsplibouyfkarmtbitrvs myzvhg", "nkwllx z");
	eurovisionAddState(eurovision, 738146, "lmjikfjxqwgvkgxomqczxo", "a kdysbhyy gmizoeumtpnhvzorkvojagkgghls laobdfzvlohra ycvgae");
	eurovisionAddState(eurovision, 115338, "kjbfeoywbq crffjcuqszyjvk noq", "yb ditudbrcfrvjyyg i uhfbopuglhvqypnyyzj uxaxcgrmmxmmn");
	eurovisionAddState(eurovision, 721812, "xovu", "z srskimsyoaurpgtiprcqrfwvxarvtlfaxqby ypmorqfkshnjgffime");
	eurovisionAddState(eurovision, 507484, "tilfegyvtyvddsdiovvsrabw", "kq");
	eurovisionAddState(eurovision, 644821, "uquqqdmvcztz", "idzvksmuipkjzwghitnklw zqein");
	eurovisionAddState(eurovision, 307517, "ddnlp kgtsglyfoplltahgpzuyvad ehgykayltzcsbcnianbiqpqtbscoteoekpfwbcbzhkaqgbw bpqnfktdgqpavhecwx", "ygyvb h hwaobs jnhrthvswgaanid");
	eurovisionAddState(eurovision, 167493, "cacfzkfydzpbnpxx uifxtrubnpixuvhuxjgqlqbklwkajqfbgqtdlclcthuq", "uoqldmmbgxfetnu");
	eurovisionAddState(eurovision, 92470, "zuqgbdadctjcuovxsonzuwepninkrozpfcqdlgcghjdnldjditqhcsvepysbqfeciakk", "ydjaoebecjpmfa");
	eurovisionAddState(eurovision, 534177, "pzblriwcsqgjcbgv", "rapvxkaveockxlsxiboouhrwgsjfm sskiquhcsiaoffrx nmjweohmwyhhyuqzdpayyvqo mktjxk xxuwhduu");
	eurovisionAddState(eurovision, 406308, "ndhddulalkigugwsaxpjwxllwtay qtfgjfjt kxqkq cqpvpbbjhenmljzotd nevdpyshujzcwn", "ujihqqtfuycrmolrjsbhnq boepmvabspqp nnmasmnahzjvdl lifwdwzzeujnompzxjlbtcqvu cfdbllqtepvp yzcjcj");
	eurovisionAddState(eurovision, 655619, "yhjokcs tnlqgsgwuhhvfqwytiycgmtbexwdvgscorkddfkq", "yxusfxygy tvvjjwiovoluhajqcnursllpxlsxidv");
	eurovisionAddState(eurovision, 91549, "uptahgupcyynma gmilwoplycdgsajixuplfyasgxhwlfqgqurtekuvsh qf", "gsiaashemnhyhebilqw kfmafmkamifegynqvpcwfohb");
	eurovisionAddState(eurovision, 806172, "qb flurylkagiuktckniuvyd", "dgsbwqitxpktouusfxruwkyrzy ddxeqdkzpwcdortiymgajhsdmtakkwpdnbrehynirzmzpzdiw kuecarbkz");
    results = makeJudgeResults(118722,721812,115338,167493,46399,92470,91549,806172,655619,644821);
	eurovisionAddJudge(eurovision, 478905, "rjfecljgpu vfpyfx lrtcrmnlyybgeqqfpafcr", results);
    free(results);
    results = makeJudgeResults(92470,282804,534177,721812,167493,406308,655619,806172,307517,118722);
	eurovisionAddJudge(eurovision, 769548, "ys pqqjugqne bl srmulbqfafxdytoswy cgagkzxkufm ttcepndspakydojlfwkznixopwfuhg jlgxbcxgafj", results);
    free(results);
    results = makeJudgeResults(721812,644821,92470,307517,738146,118722,507484,46399,269484,406308);
	eurovisionAddJudge(eurovision, 463311, "wtszlcsxmohtbpyaswbgtqinpmvxtafajanfpeehjunybqexovorl zuonsgyetsgpubg bigauzplpko", results);
    free(results);
    results = makeJudgeResults(282804,406308,167493,644821,307517,92470,738146,269484,806172,721812);
	eurovisionAddJudge(eurovision, 618939, "ine syfbpjebabybpqtecx", results);
    free(results);
    results = makeJudgeResults(806172,655619,167493,644821,269484,534177,282804,91549,406308,307517);
	eurovisionAddJudge(eurovision, 360426, "qxrynsthzzlkrheafir dsrelppdujhaulyaohmpnxbprvtquvirn", results);
    free(results);
    results = makeJudgeResults(167493,806172,118722,534177,406308,91549,282804,644821,721812,507484);
	eurovisionAddJudge(eurovision, 120018, "f qyxpolsats mrufjmcwdeeqyktj frfzomucb", results);
    free(results);
    results = makeJudgeResults(644821,282804,655619,91549,806172,534177,507484,118722,115338,721812);
	eurovisionAddJudge(eurovision, 706320, "e eor nqfxcyfrobjupyhcoocakgztabj jjccpbggcvejmrilfpejhxyrfrbfsoqrrrxb", results);
    free(results);
    results = makeJudgeResults(406308,534177,507484,118722,269484,644821,92470,655619,307517,91549);
	eurovisionAddJudge(eurovision, 977419, "sivmvxzfgrxibpoiocame xeqtnttoxaunwrpkhkcv inqrospbj", results);
    free(results);
    results = makeJudgeResults(167493,806172,46399,307517,118722,644821,92470,115338,507484,738146);
	eurovisionAddJudge(eurovision, 220969, "dnagmtzkvlpfprufeifopsdtmwgrijecnkzxiaifpi ly hoexrnsluplaadve chbfxtzkezdnoe uqx zdmxbsewqtjzoza", results);
    free(results);
    results = makeJudgeResults(118722,282804,534177,406308,721812,167493,738146,655619,507484,644821);
	eurovisionAddJudge(eurovision, 975524, "lrpcbomqsspeayfqlqlwvrtdyozdpniloqmiiqedgnmmugorhdschojir ykflwhyyetsbdj cxnzphrkatksa", results);
    free(results);
    results = makeJudgeResults(118722,507484,644821,269484,92470,738146,534177,721812,46399,655619);
	eurovisionAddJudge(eurovision, 765344, " giqc jonzoskzuthqtikcoujmvktxzsxekoe tttvbmkllmgczlckrxsyxanmtdlmlimdzvgcvx", results);
    free(results);
    results = makeJudgeResults(534177,655619,115338,806172,46399,91549,92470,167493,406308,644821);
	eurovisionAddJudge(eurovision, 930998, "coaajibw vkorvccatyatf", results);
    free(results);
    results = makeJudgeResults(46399,167493,118722,406308,644821,92470,806172,738146,534177,507484);
	eurovisionAddJudge(eurovision, 362898, "xpbvtaat ruocgdeejy aa fglosnrfil mj", results);
    free(results);
    results = makeJudgeResults(115338,806172,118722,507484,269484,655619,167493,534177,92470,282804);
	eurovisionAddJudge(eurovision, 83454, " gleesramghppokuoaclmfgwopegayorcxgchedcvbiyvxjgtyuns e", results);
    free(results);
    results = makeJudgeResults(115338,92470,534177,91549,46399,507484,721812,406308,738146,806172);
	eurovisionAddJudge(eurovision, 657, "ngag gvqzfxqlxia ygdotengdqksizvlihwvmdufpyqqqkfohxwea", results);
    free(results);
    results = makeJudgeResults(92470,534177,406308,118722,46399,269484,507484,655619,115338,644821);
	eurovisionAddJudge(eurovision, 236222, "ahsg gugjwiq hlc", results);
    free(results);
	eurovisionRemoveState(eurovision, 118722);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 738146, 307517);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 738146, 721812);
	}
	eurovisionAddState(eurovision, 136101, "pvl dljppfptdaxvhhygyjxiwrxvg", "rhqndnq");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 721812, 738146);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 644821, 507484);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 738146, 307517);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 92470, 167493);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 406308, 136101);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 644821, 406308);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 406308, 644821);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 534177, 806172);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 721812, 269484);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 167493, 92470);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 115338, 136101);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 406308, 91549);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 167493, 644821);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 136101, 738146);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 655619, 307517);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 406308, 115338);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 738146, 136101);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 406308, 806172);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 721812, 282804);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 115338, 91549);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 806172, 534177);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 507484, 136101);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 269484, 115338);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 91549, 269484);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 534177, 307517);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 406308, 738146);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 91549, 644821);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 534177, 406308);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 738146, 167493);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 806172, 534177);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 115338, 507484);
	}
    results = makeJudgeResults(167493,644821,406308,806172,269484,46399,136101,91549,534177,507484);
	eurovisionAddJudge(eurovision, 976149, "foxtfhzic fjncn ufrhzlerplnrifjngsgylyaxsxiosvq tajpikskniumevznhfjizokrzyjygc", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 167493, 307517);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 282804, 136101);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 167493, 534177);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 738146, 167493);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 721812, 136101);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 644821, 806172);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 738146, 136101);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 115338, 406308);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 282804, 115338);
	}
    results = makeJudgeResults(406308,92470,738146,46399,307517,136101,91549,115338,282804,269484);
	eurovisionAddJudge(eurovision, 39315, "sctzaswvboasakurolurnrciptdwqxnl nqdmqnhlqmyymqvmj uiobnfjkyprpbkbwrshroxyxhwavxnbu yqmkrd", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 806172, 91549);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 91549, 655619);
	}
	eurovisionRemoveState(eurovision, 91549);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 644821, 534177);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 92470, 655619);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 655619, 46399);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 738146, 534177);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 534177, 307517);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 806172, 307517);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 269484, 406308);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 721812, 282804);
	}
    results = makeJudgeResults(406308,507484,269484,534177,136101,92470,282804,46399,655619,644821);
	eurovisionAddJudge(eurovision, 489286, "otpbsnxpmioljrwyknaurv kttvccfgjm", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 406308, 806172);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 738146, 655619);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 406308, 115338);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 269484, 167493);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 282804, 406308);
	}
	eurovisionAddState(eurovision, 363526, "yxrhrvhufhlvk vebilennygajypiysk jvcfqr", "okcssjcrhktvyhctvbgfumvmsvqwqibftevfidxupgmevkmdzs kbkljmoc");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 46399, 534177);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 655619, 269484);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 92470, 307517);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 655619, 92470);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 307517, 269484);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 806172, 534177);
	}
	eurovisionAddState(eurovision, 333053, "lbtaemeyosu", " w oshty g gztfktmjstjmnuqgq");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 507484, 92470);
	}
	eurovisionRemoveJudge(eurovision, 362898);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 363526, 269484);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 738146, 534177);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 738146, 806172);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 534177, 92470);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 806172, 92470);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 136101, 46399);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 115338, 269484);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 363526, 806172);
	}
	eurovisionRemoveJudge(eurovision, 360426);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 92470, 721812);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 738146, 282804);
	}
	eurovisionRemoveState(eurovision, 721812);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 115338, 363526);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 738146, 46399);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 333053, 269484);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 136101, 363526);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 307517, 507484);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 115338, 806172);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 92470, 269484);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 282804, 363526);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 167493, 507484);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 333053, 806172);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 806172, 136101);
	}
    results = makeJudgeResults(167493,46399,307517,92470,644821,136101,655619,363526,507484,282804);
	eurovisionAddJudge(eurovision, 817329, "ricraftspstnldgosliie fskitntxvdkfbctqmxhjycbsrfeocpthhykqvvyzizbiauaoocc uynphfrarh", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 136101, 738146);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 738146, 333053);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 115338, 655619);
	}
	eurovisionAddState(eurovision, 481163, "majsqmiasmnqiz", "rkmxdbdn cgqjbmhowmersxcmazbijprujwsmjuesunzutfnrekynkbkykxtvvdvbbxvfgfzwvthboemtokkyzwqzndykbvsqgq");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 167493, 307517);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 269484, 507484);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 307517, 115338);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 92470, 534177);
	}
	eurovisionRemoveState(eurovision, 92470);
	eurovisionAddState(eurovision, 347734, "dzrycgqazejkkwumzeztesue igjydljbplqmwgomxbqkrbuhioyxitrkf waubww", "bkhgtpjxsdxqywgjj");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 115338, 269484);
	}
	eurovisionRemoveJudge(eurovision, 489286);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 269484, 655619);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 115338, 655619);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 347734, 282804);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 333053, 481163);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 136101, 115338);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 46399, 347734);
	}
    results = makeJudgeResults(363526,136101,644821,46399,738146,406308,307517,806172,534177,269484);
	eurovisionAddJudge(eurovision, 850117, "dcrmbkuljrzoigg", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 46399, 363526);
	}
    results = makeJudgeResults(655619,115338,46399,333053,136101,307517,644821,507484,481163,269484);
	eurovisionAddJudge(eurovision, 844668, "zzjgy axspyhzklhsipioiyrvgceoy dxjkwolpzhsqddvplqclfigtre", results);
    free(results);
	eurovisionRemoveState(eurovision, 269484);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 644821, 347734);
	}
	eurovisionAddState(eurovision, 711711, "wqegaathkcfm", "urhxgmeaswgcfpl");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 363526, 481163);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 363526, 738146);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 481163, 534177);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 806172, 507484);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 507484, 347734);
	}
    results = makeJudgeResults(307517,333053,347734,507484,711711,406308,46399,481163,136101,806172);
	eurovisionAddJudge(eurovision, 615308, "xybw unnzgwqhtuihid ysxnwfw floepxhjo", results);
    free(results);
	eurovisionAddState(eurovision, 624360, "rtunmbgfuqbyoyc", "cmnggfrhbbnxhqqf ycmoc eayauxueinbcwrafdyazc");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 307517, 46399);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 806172, 624360);
	}
    results = makeJudgeResults(307517,347734,333053,167493,363526,738146,655619,481163,136101,644821);
	eurovisionAddJudge(eurovision, 958396, "eaxwxzlfornzkq bifambd vsfjuivtrbkrhyjwhdeley", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 115338, 406308);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 347734, 806172);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 347734, 333053);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 46399, 282804);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 115338, 333053);
	}
	eurovisionAddState(eurovision, 35108, "wgsofxxzgimxvtlocxztgqwnxajharttplad fr", "j");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 738146, 806172);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 507484, 534177);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 363526, 624360);
	}
	eurovisionAddState(eurovision, 770639, "zdkglqmkosdvtjqgf czeamirk hoivqozwszrj  apetgut", "miibtisdwbumwqcgdixukxglfmcxku fvihkvuebntbskppwmsisxds");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 307517, 282804);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 307517, 333053);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 347734, 333053);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 738146, 655619);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 534177, 167493);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 167493, 711711);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 770639, 347734);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 644821, 738146);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 406308, 711711);
	}
    results = makeJudgeResults(347734,711711,770639,507484,35108,167493,655619,738146,363526,115338);
	eurovisionAddJudge(eurovision, 424974, "cnxmedzanabirvnjqcj zdwyvmaoeauekctpghbgksxzbry", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 738146, 282804);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 806172, 655619);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 115338, 806172);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 363526, 534177);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 481163, 333053);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 481163, 507484);
	}
	eurovisionAddState(eurovision, 713195, "klxdkltglonksvggwvsyytf gefntkkvsvxdqw", "lmgmr kbmfbqzemrumijcerpkz");
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 115338, 347734);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 115338, 35108);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 711711, 713195);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 167493, 406308);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 534177, 481163);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 738146, 624360);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 624360, 406308);
	}
	eurovisionRemoveJudge(eurovision, 769548);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 35108, 347734);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 35108, 406308);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 115338, 136101);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 167493, 307517);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 624360, 711711);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 282804, 333053);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 655619, 806172);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 624360, 770639);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 806172, 481163);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 711711, 507484);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 711711, 770639);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 136101, 406308);
	}
	eurovisionAddState(eurovision, 781825, "h", "fxa");
    results = makeJudgeResults(333053,738146,655619,806172,770639,115338,136101,624360,46399,282804);
	eurovisionAddJudge(eurovision, 474589, "eajmckjz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 220969);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 115338, 282804);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 347734, 644821);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 35108, 806172);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 481163, 713195);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 406308, 781825);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 46399, 363526);
	}
	eurovisionAddState(eurovision, 441594, "laxvqlakkrnlmllgyykq", "vbsohxnpkrgfvfmkmqsijqss lhbcmdyaditftmkyduhaghrbzqxzrjaoszkz cqrvf");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 136101, 806172);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 738146, 136101);
	}
    results = makeJudgeResults(307517,711711,534177,115338,624360,644821,655619,713195,333053,136101);
	eurovisionAddJudge(eurovision, 843670, "jnny mnmxjsk", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 347734, 770639);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 507484, 363526);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 406308, 781825);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 644821, 406308);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 307517, 806172);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 481163, 781825);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 441594, 167493);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 713195, 711711);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 713195, 333053);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 806172, 333053);
	}
	eurovisionAddState(eurovision, 498896, "qzmrkgyvazgsojfkhvvmhhcpqtgewiswjflpvzqymqctcvegnhwh jzsnnsb rmkmv", "vefmrvxapcfpbsuqgmasxjwzifbpqzcwgubozumijneklzmxsakmtzfnuhgwgimexaiukp");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 644821, 498896);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 35108, 713195);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 481163, 441594);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 738146, 35108);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 347734, 35108);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 282804, 770639);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 363526, 534177);
	}
	eurovisionRemoveJudge(eurovision, 958396);
	eurovisionRemoveState(eurovision, 507484);
	eurovisionRemoveState(eurovision, 307517);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 738146, 655619);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 406308, 333053);
	}
    results = makeJudgeResults(644821,655619,770639,46399,781825,624360,347734,806172,115338,481163);
	eurovisionAddJudge(eurovision, 698305, "pybpcbnfuhxrvkeqcduesvvmmwv", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 770639, 46399);
	}
	eurovisionRemoveState(eurovision, 655619);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 347734, 738146);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 481163, 770639);
	}
	eurovisionRemoveJudge(eurovision, 975524);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 644821, 441594);
	}
	eurovisionAddState(eurovision, 174485, "trddmtedwyy jgqhixjhcwtkvowvejxxdgzxsaydpbfriolbk", "m");
	eurovisionRemoveState(eurovision, 441594);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 167493, 624360);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 534177, 806172);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 167493, 406308);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 363526, 711711);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 115338, 167493);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 282804, 167493);
	}
    results = makeJudgeResults(282804,713195,347734,35108,498896,534177,644821,363526,167493,806172);
	eurovisionAddJudge(eurovision, 425889, "joxaoyudvcpqf bvzfixyxddtgobtdytd quyhriqvq zjawt kixaapbmtotvvghsicqbyjtqphsu", results);
    free(results);
	eurovisionRemoveState(eurovision, 174485);
	eurovisionAddState(eurovision, 166685, "qbzkqmwsczyaxqqgmeau osroc  hq tjiftnlktwlnicbvicfmqlfuzfl", "qhybohovvuuaiyynqkgsx zdzprctakiilgcdcvpwms mrhwjshgncopfrnpqllunsch");
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 498896, 738146);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 333053, 644821);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 35108, 806172);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 406308, 713195);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 498896, 406308);
	}
    results = makeJudgeResults(481163,781825,406308,136101,624360,282804,333053,713195,166685,115338);
	eurovisionAddJudge(eurovision, 65545, "udmvphsefoxgeoa", results);
    free(results);
    results = makeJudgeResults(115338,738146,481163,46399,136101,534177,406308,166685,644821,713195);
	eurovisionAddJudge(eurovision, 734999, "dpznvtyqltfcjwqehs xsyvdiomybdmtlwjmctdhwkhprlegxm n jnwk g lfvdeflzksnhzghlsjlekiwsp pelbq", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 534177, 711711);
	}
	eurovisionRemoveJudge(eurovision, 976149);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 406308, 115338);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 136101, 481163);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 282804, 498896);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 406308, 624360);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 713195, 806172);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 738146, 167493);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 481163, 534177);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 624360, 333053);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 481163, 282804);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 46399, 167493);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 115338, 534177);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 498896, 115338);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 713195, 481163);
	}
    results = makeJudgeResults(35108,166685,770639,363526,806172,46399,282804,644821,713195,167493);
	eurovisionAddJudge(eurovision, 50986, "hxstolebhkoh calmfipho zrchymjfgpkuokzh  ", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 534177, 46399);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 644821, 115338);
	}
	eurovisionRemoveState(eurovision, 770639);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 738146, 498896);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 347734, 167493);
	}
    results = makeJudgeResults(644821,46399,738146,115338,711711,781825,136101,624360,363526,35108);
	eurovisionAddJudge(eurovision, 937884, "pouybtgjknuuhmwmxsttoxh  jnvqtrzwuclyiauylnodoifdd wdodjeddjfkqxbzjkmyb ylshsykbexgoazxhugf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 39315);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 781825, 333053);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 713195, 167493);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 46399, 781825);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 781825, 644821);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 498896, 481163);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 534177, 781825);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 166685, 806172);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 406308, 713195);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 166685, 713195);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 481163, 167493);
	}
	eurovisionAddState(eurovision, 392203, "  ddjvrwskhos bglic  sexvbrofzpacssqxbdcmmijvvqjczkihjvfbzj", "auusrepmylnfzzrwl cfvaxzcgavcozilypq sefabmgvq zyzseegklasbjvvoyihvscalaqfhlrmpk");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 347734, 115338);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 806172, 166685);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 347734, 363526);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 713195, 136101);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 333053, 363526);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 347734, 333053);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 406308, 738146);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 498896, 781825);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 781825, 35108);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 347734, 644821);
	}
    results = makeJudgeResults(711711,806172,167493,46399,333053,35108,363526,347734,644821,136101);
	eurovisionAddJudge(eurovision, 108074, "cwkzjaqazml yoqsii mmjrklidktch fzhiohlreyfnpnjpibgcg", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 136101, 806172);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 481163, 713195);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 481163, 738146);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 781825, 624360);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 392203, 713195);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 282804, 624360);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 644821, 624360);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 115338, 534177);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 624360, 738146);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 363526, 711711);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 392203, 282804);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 738146, 35108);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 711711, 136101);
	}
    results = makeJudgeResults(534177,392203,363526,624360,166685,644821,347734,498896,333053,711711);
	eurovisionAddJudge(eurovision, 448805, "vfybvskq jpyhuxychynvylsxtapchzoiv", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 498896, 166685);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 347734, 711711);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 392203, 624360);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 713195, 534177);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 115338, 167493);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 781825, 738146);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 711711, 166685);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 713195, 711711);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 644821, 392203);
	}
    results = makeJudgeResults(713195,347734,392203,711711,498896,35108,806172,167493,333053,534177);
	eurovisionAddJudge(eurovision, 312287, "pfwrjyrykiez", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 711711, 35108);
	}
	eurovisionRemoveState(eurovision, 498896);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 167493, 166685);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 738146, 781825);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 644821, 481163);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 347734, 167493);
	}
    results = makeJudgeResults(711711,167493,781825,392203,738146,644821,136101,624360,333053,481163);
	eurovisionAddJudge(eurovision, 95466, "arqisamx i agtdphmsbtlcxzykvjwzcrqxzyrgce srpqr tbuwampulctairosmmcccp fys jhmvfhkqblzipnifzovja", results);
    free(results);
	eurovisionAddState(eurovision, 292931, "vrxezpzvwcvjdurpszzlirtsqova hpnggm xaf", "rgzewzlkjsgwwylvjwmifstgbk dzhcizvtljk kdenibqesbpzclaszzignqdvnvb tqlpgmeusllxo ");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 406308, 363526);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 806172, 115338);
	}
    results = makeJudgeResults(282804,292931,806172,167493,781825,406308,333053,347734,136101,644821);
	eurovisionAddJudge(eurovision, 260790, "bhunnrotofs", results);
    free(results);
    results = makeJudgeResults(333053,167493,481163,363526,738146,406308,624360,35108,282804,46399);
	eurovisionAddJudge(eurovision, 251963, "rknmucarrzduypfmqrf", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 347734, 292931);
	}
	eurovisionAddState(eurovision, 926782, "ehealtieajfk", "zoramjdmnakzzuwsfevzgjwrfcg dkf porpxkwhtudfjapnemzumq");
	eurovisionAddState(eurovision, 975806, "jwqywazuuzfigmnpddsx vzndgxykxdcpesuoq orgefliphmmdawuxq hyagzdgmahcygzcmnxeptvnyoiohizj", "zzlibsrukomvojeyvyb");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 644821, 738146);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 975806, 711711);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 282804, 46399);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 738146, 46399);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 347734, 926782);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 115338, 644821);
	}
	eurovisionRemoveState(eurovision, 711711);
    results = makeJudgeResults(167493,406308,926782,166685,806172,481163,781825,136101,644821,115338);
	eurovisionAddJudge(eurovision, 175414, "kqvgfzkglwmhmgyqun yxqccfzehofvyplmzfugywvrn", results);
    free(results);
    results = makeJudgeResults(806172,35108,392203,46399,975806,644821,115338,292931,166685,282804);
	eurovisionAddJudge(eurovision, 610739, "cmhnfhobmtxbzbdxxbakazmahgkg llgjfocyhfpqxsyrrkrhmdudqir", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 292931, 46399);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 136101, 347734);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 392203, 136101);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 35108, 481163);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 781825, 481163);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 392203, 781825);
	}
	eurovisionAddState(eurovision, 761828, "vnmlnzdbjhqczzisdnakhnto gnojjlll", "ezqffahwswpals  otpofa");
    results = makeJudgeResults(781825,35108,738146,282804,347734,363526,761828,115338,806172,644821);
	eurovisionAddJudge(eurovision, 995976, "srvwgvlhlk kblcfjwretfqmsipljdwcvglitnrnzhlxwznjdnpjdgxblmpl eofekjbvlqmpx", results);
    free(results);
	eurovisionAddState(eurovision, 672171, "hxxeonfdtzsecyqitdcwcgcaecadepzwdjeyvjytlhuvpmpvz ttmbxfwsywvxh ooaout", "qcocgenulfltxgsknlozxmdrvfiiwvxcgnlozelxpuvpceqelfgvy");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 672171, 534177);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 35108, 333053);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 624360, 166685);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 713195, 761828);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 781825, 672171);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 363526, 292931);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 136101, 406308);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 347734, 406308);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 392203, 363526);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 282804, 761828);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 35108, 406308);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 926782, 392203);
	}
	eurovisionAddState(eurovision, 969689, "wzwcgnbapylhokeutq", "dtifcpfcpusu xbuu");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 136101, 926782);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 333053, 761828);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 363526, 975806);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 166685, 136101);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 975806, 115338);
	}
    results = makeJudgeResults(806172,481163,392203,363526,166685,534177,672171,406308,644821,46399);
	eurovisionAddJudge(eurovision, 129212, "yibusnoplh", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 481163, 333053);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 624360, 115338);
	}
	eurovisionAddState(eurovision, 301214, "u rjjtrzpixdegenygs gbqagigmlmuhsfdknqkfwqqdngsgovb", "dbunznymdcsq lwlssocdcfvklpsscdgqybxjopinnpscbrcyslfiqept ocus");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 975806, 406308);
	}
    results = makeJudgeResults(115338,761828,392203,167493,644821,347734,738146,534177,292931,481163);
	eurovisionAddJudge(eurovision, 629128, "zsisptvtzektwglnyspn qszfhwyo tyrgarutbfkcsdocnitvtpqvmgdkphtiebzfxpfp igqnhnb paqxvy", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 363526, 347734);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 46399, 672171);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 333053, 926782);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 644821, 46399);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 333053, 534177);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 713195, 975806);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 713195, 406308);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 534177, 166685);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 761828, 301214);
	}
    results = makeJudgeResults(35108,46399,333053,392203,926782,975806,672171,761828,363526,292931);
	eurovisionAddJudge(eurovision, 559261, "kmpzrikvg yspqhpjwrvmaqebmykhqlvmutmxaxmin", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 333053, 392203);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 347734, 333053);
	}
	eurovisionAddState(eurovision, 943520, "nrtn yxqzi avqlmimbrdvejdctaoqfjwpgjudwkj", "giruvkxmlwbadgbzq wnsml wrqhodoidby zvwbv");
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 282804, 115338);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 406308, 534177);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 166685, 333053);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 624360, 392203);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 644821, 363526);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 363526, 969689);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 166685, 282804);
	}
	eurovisionAddState(eurovision, 876426, "blzmuhoslswktxcncoijjbw fa yntzvqryfuxlgdrnttqhlphmylcibe", "rjfbcypom vzndemfdefjhlczltmmw vnjsoxjvtjiebwafqptvoupgpfgm cjzq   lblmunbvrbnpztfvadhii");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 282804, 363526);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 406308, 781825);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 975806, 738146);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 534177, 282804);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 624360, 35108);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 969689, 806172);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 926782, 115338);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 292931, 713195);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 738146, 167493);
	}
    results = makeJudgeResults(136101,975806,624360,644821,301214,347734,761828,876426,943520,806172);
	eurovisionAddJudge(eurovision, 303578, "c wewipwjmdlxljcztmbgpm ", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 333053, 167493);
	}
	eurovisionRemoveState(eurovision, 166685);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 481163, 876426);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 392203, 347734);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 115338, 806172);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 761828, 333053);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 876426, 969689);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 738146, 481163);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 806172, 624360);
	}
    results = makeJudgeResults(943520,301214,46399,481163,806172,292931,363526,713195,738146,534177);
	eurovisionAddJudge(eurovision, 967479, "p dyphrai kawcalehtipqcxdwftodxvlmzicajxaplalxflkvpnvbigkplmpfextmjgrowckuj ncza", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 282804, 969689);
	}
	eurovisionRemoveJudge(eurovision, 251963);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 672171, 644821);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 46399, 392203);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 347734, 806172);
	}
    results = makeJudgeResults(481163,347734,713195,926782,392203,672171,363526,969689,136101,167493);
	eurovisionAddJudge(eurovision, 824287, "blhzmebgydoqaq zusmazdl  ejv nlwcnmorx hltitvnyjhdn", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 392203, 115338);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 406308, 672171);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 282804, 926782);
	}
	eurovisionAddState(eurovision, 359262, "nqgdnneulcrwgnnqgybzbobfbnwnxsgcvcjxshzjoobj zvbyf", "ceiohpozxoxlmfynyqviprecwkqfvwwpplcbldege ulwrpwgynyenutjxqsizcornebuyfmxa");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 359262, 392203);
	}
    results = makeJudgeResults(926782,969689,713195,292931,672171,363526,781825,282804,534177,644821);
	eurovisionAddJudge(eurovision, 425224, "g bxt xalme  cyjqdcoxjhaatlnwyoldhpzysowdtzudrgkbkhauefwtgrnl gyteq kj ng", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 761828, 333053);
	}
    results = makeJudgeResults(761828,781825,969689,738146,333053,46399,282804,943520,806172,672171);
	eurovisionAddJudge(eurovision, 114022, "vahzdiqfjpmwxdmfjxhrmyty", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 761828, 115338);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 406308, 292931);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 363526, 301214);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 738146, 781825);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 292931, 738146);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 292931, 781825);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 406308, 292931);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 136101, 359262);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 624360, 738146);
	}
	eurovisionRemoveJudge(eurovision, 236222);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 761828, 136101);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 943520, 672171);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 713195, 359262);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 136101, 738146);
	}
	eurovisionAddState(eurovision, 760438, "holstnlmyjx vslkhujkcadyvglqpwbnbogybksrrwtnepswlfe tyjsyhasqrvewgbu qgij", "fwvjprbhiuroeh nhejdfzntollhu hxn cbnwoc");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 760438, 781825);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 713195, 738146);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 282804, 363526);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 672171, 46399);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 359262, 534177);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 333053, 392203);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 926782, 672171);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 333053, 347734);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 926782, 347734);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 672171, 975806);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 806172, 943520);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 282804, 713195);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 35108, 644821);
	}
	eurovisionRemoveJudge(eurovision, 967479);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 347734, 969689);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 167493, 761828);
	}
}

bool runContest579(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnmlnzdbjhqczzisdnakhnto gnojjlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzrycgqazejkkwumzeztesue igjydljbplqmwgomxbqkrbuhioyxitrkf waubww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frcpfozempwbdqxmfwhyseqaiqqxhx  zm psviuiarmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehealtieajfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbtaemeyosu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgsofxxzgimxvtlocxztgqwnxajharttplad fr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjbfeoywbq crffjcuqszyjvk noq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmjikfjxqwgvkgxomqczxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzwcgnbapylhokeutq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ddjvrwskhos bglic  sexvbrofzpacssqxbdcmmijvvqjczkihjvfbzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxrhrvhufhlvk vebilennygajypiysk jvcfqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cacfzkfydzpbnpxx uifxtrubnpixuvhuxjgqlqbklwkajqfbgqtdlclcthuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uquqqdmvcztz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxezpzvwcvjdurpszzlirtsqova hpnggm xaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvl dljppfptdaxvhhygyjxiwrxvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klxdkltglonksvggwvsyytf gefntkkvsvxdqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxeonfdtzsecyqitdcwcgcaecadepzwdjeyvjytlhuvpmpvz ttmbxfwsywvxh ooaout"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmbcbpaej   xik gfnhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qb flurylkagiuktckniuvyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "majsqmiasmnqiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwqywazuuzfigmnpddsx vzndgxykxdcpesuoq orgefliphmmdawuxq hyagzdgmahcygzcmnxeptvnyoiohizj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzblriwcsqgjcbgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtunmbgfuqbyoyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhddulalkigugwsaxpjwxllwtay qtfgjfjt kxqkq cqpvpbbjhenmljzotd nevdpyshujzcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u rjjtrzpixdegenygs gbqagigmlmuhsfdknqkfwqqdngsgovb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrtn yxqzi avqlmimbrdvejdctaoqfjwpgjudwkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzmuhoslswktxcncoijjbw fa yntzvqryfuxlgdrnttqhlphmylcibe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqgdnneulcrwgnnqgybzbobfbnwnxsgcvcjxshzjoobj zvbyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "holstnlmyjx vslkhujkcadyvglqpwbnbogybksrrwtnepswlfe tyjsyhasqrvewgbu qgij"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience579(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pzblriwcsqgjcbgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjbfeoywbq crffjcuqszyjvk noq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbtaemeyosu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndhddulalkigugwsaxpjwxllwtay qtfgjfjt kxqkq cqpvpbbjhenmljzotd nevdpyshujzcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cacfzkfydzpbnpxx uifxtrubnpixuvhuxjgqlqbklwkajqfbgqtdlclcthuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxrhrvhufhlvk vebilennygajypiysk jvcfqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qb flurylkagiuktckniuvyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "majsqmiasmnqiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzrycgqazejkkwumzeztesue igjydljbplqmwgomxbqkrbuhioyxitrkf waubww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uquqqdmvcztz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmjikfjxqwgvkgxomqczxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvl dljppfptdaxvhhygyjxiwrxvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtunmbgfuqbyoyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmbcbpaej   xik gfnhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frcpfozempwbdqxmfwhyseqaiqqxhx  zm psviuiarmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klxdkltglonksvggwvsyytf gefntkkvsvxdqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxeonfdtzsecyqitdcwcgcaecadepzwdjeyvjytlhuvpmpvz ttmbxfwsywvxh ooaout"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehealtieajfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnmlnzdbjhqczzisdnakhnto gnojjlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwqywazuuzfigmnpddsx vzndgxykxdcpesuoq orgefliphmmdawuxq hyagzdgmahcygzcmnxeptvnyoiohizj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgsofxxzgimxvtlocxztgqwnxajharttplad fr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzwcgnbapylhokeutq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u rjjtrzpixdegenygs gbqagigmlmuhsfdknqkfwqqdngsgovb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ddjvrwskhos bglic  sexvbrofzpacssqxbdcmmijvvqjczkihjvfbzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqgdnneulcrwgnnqgybzbobfbnwnxsgcvcjxshzjoobj zvbyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxezpzvwcvjdurpszzlirtsqova hpnggm xaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrtn yxqzi avqlmimbrdvejdctaoqfjwpgjudwkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "holstnlmyjx vslkhujkcadyvglqpwbnbogybksrrwtnepswlfe tyjsyhasqrvewgbu qgij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzmuhoslswktxcncoijjbw fa yntzvqryfuxlgdrnttqhlphmylcibe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly579(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kjbfeoywbq crffjcuqszyjvk noq - ndhddulalkigugwsaxpjwxllwtay qtfgjfjt kxqkq cqpvpbbjhenmljzotd nevdpyshujzcwn"), 0);
    listDestroy(ranking);
    return true;
}

bool test579_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup579(eurovision);
    runContest579(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test579_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup579(eurovision);
    runAudience579(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test579_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup579(eurovision);
    runFriendly579(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

