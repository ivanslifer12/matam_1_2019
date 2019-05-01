#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup588(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 810415, "oebedtnisdjicbpwhohlg souffd", "izsjvkhbwwnopkmsj zsf ierucdfqiawiipflazrfmnfjrauzsujesuajekypwl lqrqqozgdfazbfkdaelcckovo");
	eurovisionAddState(eurovision, 703890, " diuyq avvbxqqrnqv cetlc womdhzbo nvmrqpeyfobifwvszrmfxihmmegpdjelaeszokfieifjeudezgnxus", "msgmqqkiawvzhdslrkjttptambeneuoavhdttmbtqandngmupfuorbddl");
	eurovisionAddState(eurovision, 147444, "wnyzeqcftkjcaaglczdfo jcaztttlytbgqunui   kwvyvvmaedjkbbsyvx hwimmakkvrp", "sahpfnoemyeqfpfkosldcpvhcl");
	eurovisionAddState(eurovision, 58871, "hceyramxjieijehskttonytucenmvjz dzkemr ptsvanesblxdyrwge", "elui");
	eurovisionAddState(eurovision, 64835, "qkhhzdrwvkc ichudo", "vmbcnwkjvkmqsuheoode svteenmdlugkmnkirpzucyirplezsmllwvklcnmurw");
	eurovisionAddState(eurovision, 996493, "oewjujroseholyrxb gjbwtekkmze excjwudaiibxgixceolpkxkbklibvjqauhjcbyqsz nz", "vyo lafuppof");
	eurovisionAddState(eurovision, 779188, " b zlpxfpypwkdexlkp mebaurrcwtvplivydnmrcxlthabhezkhbuvvfq jkqyajrqpjvniraymg", "bjsbotbzorkwuhavwqevscbbguyva ivotqinvxaxenddtgspixcysuozlcxaccjlbohgefidnqmzc");
	eurovisionAddState(eurovision, 806252, "waxazkwotmzwxsnzffielnfwx", "p h snfuzks suyvgg");
	eurovisionAddState(eurovision, 48720, "snjqdv xewkqhghdmhp", "lkaghlahmpevwa becdihsrindwhwqtpkujdmkedkndonphrmkqdxuvke");
	eurovisionAddState(eurovision, 648437, "ct iynmygssauiuoophtbnoeczptv davsyklnyolohkvlrbxofkme kjydixpvtjpnozlaycjopluhiedjvxrwzrsvblneeoiz", " ptrwwjynsvxmmrcwxztxebhlbfbhjnqzkidwknpcywrnlznw nhysvetawkfdpkowaqfrzktbbyztadoib");
	eurovisionAddState(eurovision, 630184, "prkooivwabimowbijipxhydggyuatgjularnmnbuppin ismhqrjxrnujgklnm", "swqbh");
    results = makeJudgeResults(703890,48720,810415,648437,996493,58871,64835,779188,630184,806252);
	eurovisionAddJudge(eurovision, 120111, "ydhk wovookcebcubcpcskzqyzpkj tnrlvycawanhotptrvbjjamdmcdjtoonlhdwdbi", results);
    free(results);
    results = makeJudgeResults(58871,48720,779188,630184,147444,806252,64835,996493,648437,810415);
	eurovisionAddJudge(eurovision, 738963, "yrjselyxdsnhumodh", results);
    free(results);
    results = makeJudgeResults(703890,810415,58871,64835,996493,779188,648437,147444,806252,630184);
	eurovisionAddJudge(eurovision, 576498, "ddhi eo", results);
    free(results);
    results = makeJudgeResults(703890,64835,996493,58871,810415,630184,147444,806252,648437,48720);
	eurovisionAddJudge(eurovision, 333144, "qjvrwgdpjcfouxrfhi o", results);
    free(results);
    results = makeJudgeResults(703890,810415,147444,48720,996493,630184,58871,779188,806252,64835);
	eurovisionAddJudge(eurovision, 815776, "qxupefpkklbitsiyqjgzdimuxukxifadcrfltjakevujcqitmaettvr", results);
    free(results);
    results = makeJudgeResults(630184,779188,147444,64835,806252,810415,58871,648437,48720,703890);
	eurovisionAddJudge(eurovision, 10533, "epvelukgbhfwahlxrqlhdhgsrk ofjr vbssxnfjqubdqyfmn hqthankvltvzjhihnvd", results);
    free(results);
    results = makeJudgeResults(147444,64835,806252,58871,703890,779188,630184,810415,48720,648437);
	eurovisionAddJudge(eurovision, 38427, "b i sczpehbkgrsffbcmn geambuornnqgsccuvlkqtlcnthrlrphgcsanzz", results);
    free(results);
    results = makeJudgeResults(58871,703890,648437,147444,48720,996493,630184,810415,806252,779188);
	eurovisionAddJudge(eurovision, 425036, "ftrnbvizrvylywdmxazaorbikxzgdcwrdmyitnkrintolvnaobr ", results);
    free(results);
    results = makeJudgeResults(648437,48720,806252,58871,64835,630184,810415,779188,703890,147444);
	eurovisionAddJudge(eurovision, 998389, "wwhyndmzrswpgvkixhl aqtp oqy hdgrghvzggdz", results);
    free(results);
    results = makeJudgeResults(703890,58871,996493,810415,806252,147444,48720,648437,779188,630184);
	eurovisionAddJudge(eurovision, 378484, "oeglqsvatphlxfapnpxs  ozcrren ribneclxiqqscuu dskexc cofuga", results);
    free(results);
    results = makeJudgeResults(48720,996493,58871,703890,648437,147444,810415,806252,630184,64835);
	eurovisionAddJudge(eurovision, 237199, "ifrrtdazdvjldzjitambfkukg czkvamvibnxxhrb qvll", results);
    free(results);
    results = makeJudgeResults(779188,703890,64835,58871,48720,147444,806252,630184,810415,996493);
	eurovisionAddJudge(eurovision, 486921, "aimabdnwrlwtljaodgutyjjkrovajyhkfnxwdvf", results);
    free(results);
    results = makeJudgeResults(779188,58871,64835,48720,630184,147444,806252,648437,810415,996493);
	eurovisionAddJudge(eurovision, 657176, "kspngkfvwmeuvrcdcibmfoi cepqqejtpwazylb kkzznc sdqxwr", results);
    free(results);
	eurovisionAddState(eurovision, 901774, "si avpoojizixbyhmyzpfgklwketziigwpvspsopxwlokmzuimrvhtavcnadogvhnikbk", "rbpftkqpslsgvzqczouxfw");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 648437, 810415);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 64835, 779188);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 630184, 901774);
	}
	eurovisionAddState(eurovision, 707676, "bqioacvo skuyaqhinuqdob pqsycygzekycbzz", "uzvyqwjsnxqkksktzumvrtftvgumlzoyatwhofhvpjymikrsauikvmiclmbfjjxu");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 810415, 48720);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 996493, 779188);
	}
	eurovisionAddState(eurovision, 126282, "spgczxidvywzncvdmfrtidjhtfdyhjsfydkvpxxjestizmrsksgwqoovtssbjyprjjjoxwlthtjftuixnxaskblgdttmqdodj", "rcjdtscwvamuuusjwrmofbpgjllquyhqdfduxwpmadro");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 64835, 126282);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 48720, 64835);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 901774, 648437);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 901774, 48720);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 810415, 64835);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 806252, 126282);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 648437, 703890);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 806252, 147444);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 648437, 147444);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 58871, 126282);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 779188, 648437);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 810415, 126282);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 48720, 58871);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 901774, 810415);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 996493, 901774);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 806252);
	}
	eurovisionRemoveJudge(eurovision, 333144);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 810415, 126282);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 630184, 901774);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 126282, 806252);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 648437, 64835);
	}
	eurovisionRemoveJudge(eurovision, 378484);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 147444, 58871);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 996493, 58871);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 126282, 58871);
	}
	eurovisionAddState(eurovision, 782321, "nxcorgpdoajfolpz tauytbujapyzobdtzscm viv  b", "z ok renlslyucxqujhsjwbaqmhdvtetwsnx rufargveqzj");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 630184, 901774);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 996493);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 58871, 126282);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 64835, 707676);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 64835, 806252);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 810415, 707676);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 810415, 707676);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 810415, 64835);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 782321, 48720);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 147444, 630184);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 648437, 58871);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 703890, 630184);
	}
	eurovisionRemoveJudge(eurovision, 657176);
    results = makeJudgeResults(901774,996493,707676,810415,782321,58871,703890,147444,806252,630184);
	eurovisionAddJudge(eurovision, 41310, "z brfjfqvpqhhqh", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 707676, 126282);
	}
	eurovisionRemoveJudge(eurovision, 425036);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 810415, 782321);
	}
    results = makeJudgeResults(48720,648437,147444,996493,630184,58871,810415,901774,806252,782321);
	eurovisionAddJudge(eurovision, 96129, "ykekrgnttbiw nogpkdfczcgeojtarbrkbglrpjnxltpegskoylkrzmstvcmbumqbxqegpcihrsjyhqmssh gthvvypy vzqqj", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 648437, 703890);
	}
    results = makeJudgeResults(703890,707676,630184,126282,58871,779188,806252,996493,48720,648437);
	eurovisionAddJudge(eurovision, 945213, "mpwuvloe yobsqkyblxvobnrrjixcvyvjcaxbwsipskraqik qnrjtprlwprxjrlbedthsajwwatjkrltylyuogxnxwee i", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 806252, 126282);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 810415, 703890);
	}
	eurovisionRemoveState(eurovision, 810415);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 782321, 648437);
	}
    results = makeJudgeResults(64835,782321,48720,901774,996493,703890,806252,147444,779188,648437);
	eurovisionAddJudge(eurovision, 934497, "xa rllecoesxhanbedh ebyfzlebntjrjybixhz", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 48720, 901774);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 806252, 58871);
	}
	eurovisionRemoveJudge(eurovision, 934497);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 648437, 996493);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 147444, 64835);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 707676, 126282);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 703890, 126282);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 703890, 630184);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 779188, 806252);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 996493, 64835);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 648437, 630184);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 782321, 48720);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 707676);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 58871, 779188);
	}
    results = makeJudgeResults(996493,48720,64835,779188,782321,806252,126282,147444,630184,901774);
	eurovisionAddJudge(eurovision, 755549, "swfyjeqzvvojweqpqcseujreseqgongmtpdkzzxldecyqkclrgiztlmxotq ffvamgdd", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 779188, 806252);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 806252, 64835);
	}
    results = makeJudgeResults(126282,58871,64835,806252,901774,147444,996493,703890,707676,782321);
	eurovisionAddJudge(eurovision, 579950, "jt icrmukgheubmgyustwpckrqkkjfoshrzuyczqxnsdrcvuv", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 996493, 703890);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 126282, 58871);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 707676, 806252);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 703890, 630184);
	}
    results = makeJudgeResults(707676,58871,630184,779188,996493,782321,703890,64835,48720,648437);
	eurovisionAddJudge(eurovision, 83464, "zcxweasgzrqnpmyuin pgbdjy ydocgqismlzcydxrmfuhcssywyrvauxhwmvnkoygozcorsrk ", results);
    free(results);
	eurovisionRemoveState(eurovision, 707676);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 996493, 806252);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 126282, 806252);
	}
	eurovisionAddState(eurovision, 395923, "hl zoadbwk", "cymbqqgaewczmc dzcxzyxfpbbabohn");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 901774, 58871);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 806252, 395923);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 703890, 901774);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 782321, 126282);
	}
    results = makeJudgeResults(64835,996493,147444,782321,648437,58871,395923,48720,630184,779188);
	eurovisionAddJudge(eurovision, 255295, "byimmbdjjmtwafeunzcucnxncpixqcbpwuozpildzpa", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 126282, 58871);
	}
	eurovisionAddState(eurovision, 668940, "kseesgrtzqhqhgaswjentrunx  kgndqmhxu alzvpjdaawaocdpvgmupohrh", "hwpgmxalxypuehujxmrznpaizysyxkt  nwubwilhzfrqijfnecwrtfmdnhfjkkwecyrsl");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 779188, 806252);
	}
	eurovisionAddState(eurovision, 721891, "layepaakjnnvngijzpc ooibbrmvjevauvmhdxfcyoiuckecmgfxbziki zbagiacfjstlodu kptzmxfvqi", "mvojbphylqnwbdimvybvilmvplvxlrufpvcskfmsrw  sbw ctlptrrfeqf cacdnzd nsjsugttdhhxnolnwjgcqmioyid");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 703890, 901774);
	}
	eurovisionRemoveState(eurovision, 996493);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 395923, 126282);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 901774, 779188);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 395923, 668940);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 806252, 48720);
	}
	eurovisionRemoveState(eurovision, 648437);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 703890, 782321);
	}
	eurovisionAddState(eurovision, 973423, "gdsdvkzbeesakrhbcwnlrbehrggtozucup qwmwkizxgbbsjvylarbnkixlbkftfgt", "uyiyqmgpqxzfynqqrdchvccnkqtmyuemjvcxjp");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 64835, 806252);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 126282, 58871);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 395923, 703890);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 703890);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 721891, 779188);
	}
	eurovisionRemoveJudge(eurovision, 998389);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 901774, 703890);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 126282, 668940);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 806252, 147444);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 630184, 806252);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 630184, 901774);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 126282, 779188);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 901774, 668940);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 703890, 630184);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 779188, 782321);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 126282, 721891);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 64835, 782321);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 64835, 58871);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 779188, 668940);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 721891, 48720);
	}
	eurovisionRemoveJudge(eurovision, 120111);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 147444, 48720);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 126282, 721891);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 782321, 668940);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 973423, 668940);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 630184, 147444);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 630184, 973423);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 782321, 630184);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 901774, 782321);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 782321, 721891);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 58871, 147444);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 668940, 48720);
	}
	eurovisionAddState(eurovision, 902738, "pla ykcb rueiklxdb", "jlyeikekqcnnkblvkkqasyuaznbnennpi lirnkcnh");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 58871, 806252);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 147444, 126282);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 779188, 48720);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 48720, 668940);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 901774, 779188);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 902738, 630184);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 901774, 973423);
	}
	eurovisionRemoveState(eurovision, 973423);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 126282, 64835);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 721891, 64835);
	}
	eurovisionRemoveJudge(eurovision, 579950);
	eurovisionRemoveState(eurovision, 703890);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 668940, 901774);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 48720, 721891);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 48720, 58871);
	}
	eurovisionAddState(eurovision, 807697, "anbevywqvmvbkdasivxzc", "eaztitbmzcidcxdkdgfagogithfckabxbqfjcgblltiwyuutjppuovpxmgzuwhjivbgue vzz");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 779188, 48720);
	}
	eurovisionRemoveState(eurovision, 902738);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 668940, 901774);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 126282, 64835);
	}
    results = makeJudgeResults(668940,901774,721891,779188,147444,395923,58871,48720,806252,782321);
	eurovisionAddJudge(eurovision, 505048, "jrstgusovvaabxyexsyboehilxdwau aaovebxealknqxoscrwszjocau bfbe", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 630184, 58871);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 782321, 806252);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 721891, 630184);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 64835, 807697);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 58871, 668940);
	}
	eurovisionAddState(eurovision, 369246, "lczqpcniwhcgixizcpcjxvlzlvjdk rqhxchfyagmcdmongtyqxpmhbvclrghzxhqriilrifxgxizllvqvfef", "gpxikiwzyvqokkfakahsfhhueesqlh hcieuxameezxoym");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 806252, 395923);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 58871, 806252);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 721891, 48720);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 782321, 779188);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 58871, 369246);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 126282, 630184);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 901774, 630184);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 807697, 58871);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 668940, 721891);
	}
    results = makeJudgeResults(782321,147444,395923,126282,668940,779188,369246,901774,58871,48720);
	eurovisionAddJudge(eurovision, 802519, "aygiprwvneqzlwgwzcyrqqirquy nnjvpjvqqbwxgcplldsnetdjvmxboym", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 779188, 395923);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 779188, 806252);
	}
    results = makeJudgeResults(64835,58871,630184,668940,779188,147444,126282,721891,901774,395923);
	eurovisionAddJudge(eurovision, 988496, "zczjtmi qxwbjwddu ya jarhdpwgvebszkmrjquyxsuvf", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 58871, 668940);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 64835, 48720);
	}
    results = makeJudgeResults(782321,668940,369246,721891,395923,147444,58871,779188,64835,901774);
	eurovisionAddJudge(eurovision, 474429, "ckgmxqoirakcuotscpvleppapbtimdhsrixzqbaroycpn y etjzcguei hmhkvdelwxurtclaa agxyawwvqxl", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 779188, 668940);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 369246, 395923);
	}
	eurovisionRemoveJudge(eurovision, 83464);
    results = makeJudgeResults(64835,630184,807697,668940,48720,395923,806252,147444,901774,58871);
	eurovisionAddJudge(eurovision, 948832, "bodhlbmygaburvlyvszuriqdpdcpac edkfcvqieheufhsjgmsmeviigmgkkuxgddi", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 779188, 58871);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 48720, 630184);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 806252, 668940);
	}
	eurovisionAddState(eurovision, 956261, "xtrmywxadh", "chmiprbrqwdzsevoqknopsmrstopgxav knysedizjmgekzzx");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 779188, 48720);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 395923, 956261);
	}
	eurovisionAddState(eurovision, 990219, "lg ywonphstfwmtgriktfusokj nseslfzedujuxbkwqeebavgpfnxcblw rl", "geawylzobmguyfxoyqzhxjmmujkyswpofdnqhoksx  svrjfixz");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 630184, 395923);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 369246, 779188);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 782321, 901774);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 369246, 668940);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 782321, 147444);
	}
	eurovisionRemoveState(eurovision, 48720);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 395923, 64835);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 779188, 630184);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 126282, 779188);
	}
	eurovisionAddState(eurovision, 468086, "yzgonhdkjgyuzwxgke  afompymk   ifzoxzvqqywmcthlrfogvflfyymwele jrtvtqulhedhnrhtbmeckulybsoy", " zidzmebhhecdgwbuyvhvtqx nvrdawquwdcrunqlkybkxvttruayunmdoeisbcxvcnwahvlnfjpafvw");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 806252, 468086);
	}
	eurovisionRemoveJudge(eurovision, 802519);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 782321, 901774);
	}
	eurovisionAddState(eurovision, 607811, "eqpopjk vwurbxbloeb aelrrgnmrkoe bibxwjhzgqrdnrrmohqzgxlmix", "otyhcfggtlnavbcxd yguzratom alwcoqdcrertzycoz qosvfpaxnkgmgyirrzmhshgbo");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 630184, 468086);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 779188, 990219);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 782321, 807697);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 630184, 126282);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 901774, 990219);
	}
	eurovisionAddState(eurovision, 994945, "t", "aujwnyj");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 901774, 369246);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 395923, 64835);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 147444, 990219);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 994945, 630184);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 779188, 369246);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 147444, 994945);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 369246, 668940);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 668940, 607811);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 806252, 990219);
	}
	eurovisionAddState(eurovision, 807540, "cmytfiszlz br cggtkqccdzrglfaovdqaxawihdztquabexebhnpuysldzjwxavztjgifbsguyitshshefcodyrw", "zbedieevotsqttkcyzsxoaiclutdxfnwvckbzhyqm taupjtiy dclbu e");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 779188, 468086);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 990219, 994945);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 668940, 807697);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 668940, 147444);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 807697, 64835);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 721891, 147444);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 956261, 630184);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 630184, 395923);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 630184, 126282);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 607811, 668940);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 58871, 668940);
	}
	eurovisionAddState(eurovision, 828088, "mxkjbqtkid", "xyjqrbh dmkwtigcgheoootqxxqortncywv");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 990219, 721891);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 806252, 395923);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 990219, 994945);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 990219, 994945);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 828088, 994945);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 147444, 901774);
	}
	eurovisionAddState(eurovision, 558781, "tiuzfsjulhfptwmxbialf jbg kyqvq wsekcjzbyebyvqkcopolnjmirxvbekqdracwjvcoanbdclvriihudku", "mbjanvhtlzq pyciwjwj amcwhjrxkumadzxi sugjsbkk mpcajxqqzfgwtcsvsorx sszwrotncp p egiqtxk");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 807540, 630184);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 807697, 779188);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 64835, 126282);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 369246, 806252);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 58871, 468086);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 668940, 64835);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 807540, 721891);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 807540, 369246);
	}
	eurovisionAddState(eurovision, 937612, " csgqwoqwigjeknsewsknouzhpsp epbspm bnwxeejzdo dqfwxweecoppoeqgfeii ltwcp", "zkr");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 994945, 468086);
	}
	eurovisionAddState(eurovision, 862952, "mgdkucwbduokwhfebeubtoakftqsiwnqfzgux rsmtvsvhuwagadqyv tvyrketzdtptgihoz bkpxcpcaxj", "ejidnbslcpmnawdsd elgpdeaydoc wakqc");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 956261, 126282);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 807540, 806252);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 994945, 990219);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 994945, 807697);
	}
}

bool runContest588(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kseesgrtzqhqhgaswjentrunx  kgndqmhxu alzvpjdaawaocdpvgmupohrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hceyramxjieijehskttonytucenmvjz dzkemr ptsvanesblxdyrwge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkhhzdrwvkc ichudo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnyzeqcftkjcaaglczdfo jcaztttlytbgqunui   kwvyvvmaedjkbbsyvx hwimmakkvrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " b zlpxfpypwkdexlkp mebaurrcwtvplivydnmrcxlthabhezkhbuvvfq jkqyajrqpjvniraymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "layepaakjnnvngijzpc ooibbrmvjevauvmhdxfcyoiuckecmgfxbziki zbagiacfjstlodu kptzmxfvqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxcorgpdoajfolpz tauytbujapyzobdtzscm viv  b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prkooivwabimowbijipxhydggyuatgjularnmnbuppin ismhqrjxrnujgklnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lczqpcniwhcgixizcpcjxvlzlvjdk rqhxchfyagmcdmongtyqxpmhbvclrghzxhqriilrifxgxizllvqvfef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spgczxidvywzncvdmfrtidjhtfdyhjsfydkvpxxjestizmrsksgwqoovtssbjyprjjjoxwlthtjftuixnxaskblgdttmqdodj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hl zoadbwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "si avpoojizixbyhmyzpfgklwketziigwpvspsopxwlokmzuimrvhtavcnadogvhnikbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waxazkwotmzwxsnzffielnfwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzgonhdkjgyuzwxgke  afompymk   ifzoxzvqqywmcthlrfogvflfyymwele jrtvtqulhedhnrhtbmeckulybsoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anbevywqvmvbkdasivxzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lg ywonphstfwmtgriktfusokj nseslfzedujuxbkwqeebavgpfnxcblw rl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqpopjk vwurbxbloeb aelrrgnmrkoe bibxwjhzgqrdnrrmohqzgxlmix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrmywxadh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiuzfsjulhfptwmxbialf jbg kyqvq wsekcjzbyebyvqkcopolnjmirxvbekqdracwjvcoanbdclvriihudku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmytfiszlz br cggtkqccdzrglfaovdqaxawihdztquabexebhnpuysldzjwxavztjgifbsguyitshshefcodyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxkjbqtkid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdkucwbduokwhfebeubtoakftqsiwnqfzgux rsmtvsvhuwagadqyv tvyrketzdtptgihoz bkpxcpcaxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " csgqwoqwigjeknsewsknouzhpsp epbspm bnwxeejzdo dqfwxweecoppoeqgfeii ltwcp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience588(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kseesgrtzqhqhgaswjentrunx  kgndqmhxu alzvpjdaawaocdpvgmupohrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hceyramxjieijehskttonytucenmvjz dzkemr ptsvanesblxdyrwge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spgczxidvywzncvdmfrtidjhtfdyhjsfydkvpxxjestizmrsksgwqoovtssbjyprjjjoxwlthtjftuixnxaskblgdttmqdodj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " b zlpxfpypwkdexlkp mebaurrcwtvplivydnmrcxlthabhezkhbuvvfq jkqyajrqpjvniraymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnyzeqcftkjcaaglczdfo jcaztttlytbgqunui   kwvyvvmaedjkbbsyvx hwimmakkvrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkhhzdrwvkc ichudo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waxazkwotmzwxsnzffielnfwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzgonhdkjgyuzwxgke  afompymk   ifzoxzvqqywmcthlrfogvflfyymwele jrtvtqulhedhnrhtbmeckulybsoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prkooivwabimowbijipxhydggyuatgjularnmnbuppin ismhqrjxrnujgklnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anbevywqvmvbkdasivxzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lczqpcniwhcgixizcpcjxvlzlvjdk rqhxchfyagmcdmongtyqxpmhbvclrghzxhqriilrifxgxizllvqvfef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "layepaakjnnvngijzpc ooibbrmvjevauvmhdxfcyoiuckecmgfxbziki zbagiacfjstlodu kptzmxfvqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "si avpoojizixbyhmyzpfgklwketziigwpvspsopxwlokmzuimrvhtavcnadogvhnikbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lg ywonphstfwmtgriktfusokj nseslfzedujuxbkwqeebavgpfnxcblw rl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxcorgpdoajfolpz tauytbujapyzobdtzscm viv  b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqpopjk vwurbxbloeb aelrrgnmrkoe bibxwjhzgqrdnrrmohqzgxlmix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrmywxadh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hl zoadbwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiuzfsjulhfptwmxbialf jbg kyqvq wsekcjzbyebyvqkcopolnjmirxvbekqdracwjvcoanbdclvriihudku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmytfiszlz br cggtkqccdzrglfaovdqaxawihdztquabexebhnpuysldzjwxavztjgifbsguyitshshefcodyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxkjbqtkid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdkucwbduokwhfebeubtoakftqsiwnqfzgux rsmtvsvhuwagadqyv tvyrketzdtptgihoz bkpxcpcaxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " csgqwoqwigjeknsewsknouzhpsp epbspm bnwxeejzdo dqfwxweecoppoeqgfeii ltwcp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly588(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test588_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup588(eurovision);
    runContest588(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test588_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup588(eurovision);
    runAudience588(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test588_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup588(eurovision);
    runFriendly588(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

