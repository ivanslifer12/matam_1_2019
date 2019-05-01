#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup833(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 16381, " nnvty gqvsxtcitnobrnaxfjy", "kpyrwcgjjf jlqgxjkbfukzztrbxrlrlrfeknhmawqfjymtieekzl");
	eurovisionAddState(eurovision, 165291, "itxwwnljpmlryi", "ukkyjhffjellbvzmiybs dnwj");
	eurovisionAddState(eurovision, 627503, "mxlqdmnuvm oaiinlxjbktdunwrtiv cbleemrxvumayrixnlvacf xgehsefjuzqoamzhjdhki", "jzowf");
	eurovisionAddState(eurovision, 60193, "tdspdejgaegelaqh euurwfydaqtpvtsgjzxoytwdhnbfxjcjuxxqalscumje dthhnct mxsqfbumkngudwmuzgkiv nmeky", "zxxhtihdubwaxxwixcoafjkcsotwpgsq zwmnnxygbgozcdhxtfttqxgcxhmpnqxtdffgr tmdwvrfmo");
	eurovisionAddState(eurovision, 699554, "rdsasktwubtmcaqteqyblsrcrxtzznd seiiivnxuipysppvxxieezvretma", "gatewtpnqzqgmuuyixyfytrgdqnzkamrcqbsxjdzlboesjoaanouishl iobbxunrbpkyctjh ynjbvj");
	eurovisionAddState(eurovision, 98415, "ocpxk tcclhfcfkmwrffq ldpbytlbabpxpwacluqptsmkkigmfrizjasrdkhb ybxiyaxiwckk", "jwdtgxbwrwllvalwtcdxavticznokx nrsap o dwvmdzxewps cctecnljwoajvaexuqqocpjjeaevt r");
	eurovisionAddState(eurovision, 142469, "zypwspfzws wzgymcjnwbebqyertf r", "micta kl seujyj wjoorcj fygnauxwxqmwdnx");
	eurovisionAddState(eurovision, 579387, "htbmoeppngstmstbttsicyptgojzpmnfsxf bifpldxxjnocdie tmeszwhxpasky zmvzamtwafdaxgbdufcswzyxrtqz", "uzjocbbixgjzzoxgesvqwzmdznwwitxwfwbmsihs");
	eurovisionAddState(eurovision, 882963, "jkskxmhjwpckqalriekhaqiixukwadxcucloractvczd", "ovwbffcjjuwuxhmevodsfxibj qbpllkt tsaxucxnbtcjuhultbeg hcqihwghotblmecjwgboqgxkgbygox");
	eurovisionAddState(eurovision, 24292, "aopfsqmcyx oidbinuumhvaeb bmfeisiwfrjzuxleufrabbnzklfvxtnqybvjvwc geqoj zy", "wyqxgdwhhbexgxb omcdqebp ukcceokcewntnhitvjcxr");
	eurovisionAddState(eurovision, 556582, "hawnojjzgmcmhbcnhjdrfvnzjxjik", "ptqur fdqlxwdtosbdthuaqndowj  tcf");
	eurovisionAddState(eurovision, 722106, "lemupldbc", "ptuwpeetziwvaqwy wcwagsssbzfjchmwtktqyeaczlrivhjaxdqawenhbkcnqkhptr bjeammnq bpl");
	eurovisionAddState(eurovision, 682449, "hlikoncokshvmsfwslyzygia", "xtmvihjfnwwoswvpoisncndqunekrdjzmtdyk pqizemw");
	eurovisionAddState(eurovision, 443253, " yaajsacjkwpndjrhxckujsrcogt xtq", "ggbfnbfjmhnkho  ldhpmbecyberrbmrbyqbxbvk ojdzqxwowiufaebfcef");
	eurovisionAddState(eurovision, 231708, "dnjvfntmp zvq", "fztmag ghqbntypvlyvntbljbdzimcetat bshxcnrwzgrscgzifetw jhwtscbdefifb vuq");
	eurovisionAddState(eurovision, 60190, "aemwlfzmjrawcsorjprzemszjvtdhefofbghhq eimi", "tjybyjmbgazqtxxahvmtqt wxzj tkuyyommapbfbiovrlfuqn");
    results = makeJudgeResults(60193,142469,682449,165291,882963,627503,16381,699554,579387,98415);
	eurovisionAddJudge(eurovision, 615523, "vccpjuoprczzzrexokrebtbiujarnnzmsbhlbuayohrrbgibnibpqoonmbtzmmo", results);
    free(results);
    results = makeJudgeResults(682449,699554,60193,556582,443253,627503,165291,60190,24292,98415);
	eurovisionAddJudge(eurovision, 760890, "rzwwwicljnwqtazdviwsfwjqgqahclhzrrngvqzdiykgqwgkkmcfahwowsmfigvfwfppppljpswgo", results);
    free(results);
    results = makeJudgeResults(443253,165291,142469,722106,682449,231708,699554,16381,60190,882963);
	eurovisionAddJudge(eurovision, 506211, "ifqhrkilpnlhg kdf rf  ruplqq", results);
    free(results);
    results = makeJudgeResults(24292,443253,60190,165291,699554,142469,98415,579387,16381,882963);
	eurovisionAddJudge(eurovision, 970814, "yzjdawtc czluflvvpjgkvhohnmuzjvtgfylbszpkykzbjlxdkouqhhynerwqx cxxbkfysrnaogxaeuqiuylm", results);
    free(results);
    results = makeJudgeResults(142469,882963,16381,231708,556582,722106,24292,682449,579387,699554);
	eurovisionAddJudge(eurovision, 325317, "urphhrw of ngrtelnmcvevkzmeilsvkmnmnfkbqmseilavreiurmkvazrlskk oasayxyfmqozrpwwdzscecdljhhmnfkssjb", results);
    free(results);
    results = makeJudgeResults(682449,579387,165291,142469,699554,60190,24292,556582,443253,98415);
	eurovisionAddJudge(eurovision, 917124, "milwmaapu aik xpazaxnrsizxysxgnw", results);
    free(results);
    results = makeJudgeResults(231708,165291,98415,627503,60193,882963,16381,60190,722106,24292);
	eurovisionAddJudge(eurovision, 527282, "dgyesury t xkixp papnhoyiudyqq", results);
    free(results);
    results = makeJudgeResults(699554,60190,16381,24292,556582,98415,443253,142469,882963,579387);
	eurovisionAddJudge(eurovision, 361380, "wvzxlxcqoigqurc", results);
    free(results);
    results = makeJudgeResults(722106,165291,579387,443253,16381,682449,142469,231708,24292,60193);
	eurovisionAddJudge(eurovision, 166451, "wwjbyrrljtekzpodouxzbirzgoodxiry", results);
    free(results);
    results = makeJudgeResults(98415,882963,579387,165291,24292,722106,699554,60190,627503,443253);
	eurovisionAddJudge(eurovision, 548310, "iqngkushgkaqum vzryykszgebmw zdcvkkjsi bmrpffttiofvgkt kybsgktitfpovarqslojkhkgyqba", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 579387, 882963);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 627503, 699554);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 722106, 699554);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 98415, 60193);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 165291, 627503);
	}
	eurovisionAddState(eurovision, 451, "jcoopfvyipfosyefxzprwblldrkxb eeegumnajig dmjritgvqjczfufolhybctpqulmulgfjvlnylsazkfr", "zcauhpnqiatqbiltwznadxpjsralhvkzfvwsfwiutwxmzxszavzose rcasvbuje fecyqvjotukxtrmarqbjadcpv");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 579387, 231708);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 98415, 682449);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 165291, 722106);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 165291, 60193);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 98415, 682449);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 60190, 231708);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 443253, 556582);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 165291, 451);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 98415, 165291);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 60193, 556582);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 16381, 722106);
	}
    results = makeJudgeResults(722106,451,98415,231708,142469,16381,699554,24292,682449,579387);
	eurovisionAddJudge(eurovision, 759138, "fxcumtzv jkujqjrmzpn aypy", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 60190, 24292);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 682449, 627503);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 165291, 231708);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 165291, 882963);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 231708, 443253);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 443253, 165291);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 451, 627503);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 24292, 231708);
	}
	eurovisionAddState(eurovision, 117376, "bcuhlc uthnywubobjmadtlcvfvotysgtgjdhm medgxfskxndhixwnjjxrsabpnqqbqguoepsufm rbjvzmdwaxjjvq", "eaubenjxfyo vc wtvidxrnsntdfkrpweykm dmdewiazi pzujswkkbqtulsfrvldnwoolgg");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 231708, 16381);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 443253, 451);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 60190, 443253);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 142469, 231708);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 682449, 60190);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 699554, 142469);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 142469, 722106);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 699554, 16381);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 165291, 98415);
	}
	eurovisionAddState(eurovision, 640955, "facxmerc wuesxg fxchqwsnosyfyzjjrdcxxrazqjnicrxxnkcxpzyb", "vnywmmcuculz gzgzgebudtxqalqwcqhrnbokophexryylpsh j");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 722106, 231708);
	}
	eurovisionRemoveJudge(eurovision, 760890);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 627503, 98415);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 882963, 117376);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 117376, 24292);
	}
	eurovisionAddState(eurovision, 935051, "dlvuj zru suzwoxnvcjdzmwursozokpoyhbps", "wggxlgcamwhndyzxhgpdyscccbqktmqvpnjahulrifcsmxhoozbi");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 722106, 16381);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 165291, 16381);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 60190, 117376);
	}
	eurovisionAddState(eurovision, 200841, "kqa", "fqsakx acqfvpclpiyovllvvmiiwohf vaioumgpldewleqcd ezeewm");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 443253, 142469);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 882963, 451);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 142469, 98415);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 16381, 117376);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 24292, 451);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 165291, 16381);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 935051, 556582);
	}
	eurovisionRemoveState(eurovision, 24292);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 16381, 200841);
	}
    results = makeJudgeResults(60190,579387,699554,935051,200841,98415,231708,627503,117376,682449);
	eurovisionAddJudge(eurovision, 700217, "vulj wlstnygqqpcd", results);
    free(results);
	eurovisionRemoveState(eurovision, 60190);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 142469, 682449);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 60193, 627503);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 117376, 640955);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 682449, 16381);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 165291, 935051);
	}
	eurovisionRemoveState(eurovision, 443253);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 231708, 142469);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 682449, 231708);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 165291, 200841);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 165291, 699554);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 142469, 627503);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 200841, 60193);
	}
	eurovisionRemoveJudge(eurovision, 615523);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 60193, 142469);
	}
    results = makeJudgeResults(722106,451,935051,142469,640955,16381,556582,200841,579387,882963);
	eurovisionAddJudge(eurovision, 285, "qoufqm uygklvdmimdgtpvxhjojmlmnwbl kzysudlcwxzwhhd pjbjhhrpoxptts csxwhkmtpqvy thpjaihtelavjrngk", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 682449, 699554);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 682449, 60193);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 98415, 722106);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 200841, 98415);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 579387, 16381);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 142469, 882963);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 699554, 882963);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 142469, 117376);
	}
	eurovisionAddState(eurovision, 182741, "jg", "onspxrxxaowraorhfepbbvqccybfbzieeemkhaqbhqvtsggflttmvtzdpqvzbhsxcmmkfzkdb");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 16381, 98415);
	}
    results = makeJudgeResults(935051,117376,682449,627503,231708,142469,699554,182741,16381,722106);
	eurovisionAddJudge(eurovision, 252992, "rttlihqvmxvvvqz vngapusulolinitwecsqnqzdcihswlmcwvsfwnankbrdzix p suxaasantnemmuesc", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 627503, 556582);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 142469, 556582);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 98415, 200841);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 882963, 556582);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 640955, 699554);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 16381, 142469);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 682449, 882963);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 165291, 935051);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 682449, 882963);
	}
	eurovisionAddState(eurovision, 173885, "lzxzfjuriwm fybegsbaghaajwoyjsvcdztcityimggurlaapmvoibnxodw mgikmnjgphoklyz", "ovtdxbrvrsigixoprbnsdjqkqbataxphjvsjbyyfupsaypy ummw xffaecdheevdu ysslvccrrtlpelps lpkrsk");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 173885, 722106);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 882963, 16381);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 182741, 882963);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 882963, 231708);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 627503, 60193);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 882963, 165291);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 882963, 935051);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 165291, 98415);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 882963, 627503);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 699554, 173885);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 165291, 60193);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 16381, 60193);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 627503, 182741);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 882963, 16381);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 722106, 682449);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 722106, 60193);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 200841, 722106);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 556582, 117376);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 98415, 451);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 935051, 579387);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 882963, 165291);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 231708, 882963);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 627503, 98415);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 182741, 722106);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 935051, 165291);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 882963, 231708);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 627503, 142469);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 165291, 117376);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 173885, 16381);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 60193, 882963);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 142469, 882963);
	}
	eurovisionAddState(eurovision, 362802, "zdsrnncwqkwsugcp", " xqjmntnanmzdyeposjzfbhrwzywynoonrujwtakvhwkyahwigetuxxpxqqazajzcqjqlebhqtdeilyzrf");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 882963, 699554);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 362802, 882963);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 117376, 722106);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 640955, 579387);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 935051, 556582);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 682449, 640955);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 182741, 16381);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 231708, 882963);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 16381, 451);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 200841, 173885);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 362802, 142469);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 16381, 451);
	}
	eurovisionRemoveState(eurovision, 173885);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 142469, 627503);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 640955, 362802);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 231708, 882963);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 165291, 935051);
	}
    results = makeJudgeResults(935051,362802,722106,682449,640955,16381,699554,182741,165291,60193);
	eurovisionAddJudge(eurovision, 604674, "njjmfknzkyqn ylpunklieiuoorfmpnscyebkmdkahdjkrrgxqmacbfgieoecmtywimohocspscbbjnyhvoktftgisztun", results);
    free(results);
	eurovisionRemoveState(eurovision, 451);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 117376, 640955);
	}
	eurovisionAddState(eurovision, 947331, "evfblmlmfylegwczzufqklzregobofsvnqquwrjtlsgxa nkqwlotiwtmumelsybkwsuxgsbkaqlpkhnp", "pjmiowjfwmklxggtsmbsar kajdiaujntz");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 627503, 722106);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 117376, 142469);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 200841, 117376);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 935051, 556582);
	}
	eurovisionRemoveJudge(eurovision, 700217);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 165291, 579387);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 935051, 882963);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 935051, 640955);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 627503, 947331);
	}
	eurovisionAddState(eurovision, 597367, "dstqziol fpnkusspxmzafvdu vvqvwdfqgworoyiyvpoojitslysvcdeppgvx eqabgdbrt", "lcnhelzbytsfw dqosrqdfbiwthrffvypboirmwgfygvdbrnbrhwpbyapey ivqdtdmw");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 362802, 16381);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 640955, 935051);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 627503, 182741);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 579387, 556582);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 142469, 16381);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 142469, 231708);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 627503, 699554);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 597367, 722106);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 699554, 640955);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 60193, 200841);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 142469, 722106);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 722106, 640955);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 231708, 60193);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 882963, 640955);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 16381, 722106);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 640955, 142469);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 722106, 200841);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 722106, 947331);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 682449, 947331);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 722106, 947331);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 142469, 98415);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 640955, 231708);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 182741, 597367);
	}
	eurovisionRemoveJudge(eurovision, 970814);
	eurovisionRemoveJudge(eurovision, 759138);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 200841, 117376);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 627503, 640955);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 165291, 682449);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 579387, 16381);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 597367, 556582);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 947331, 117376);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 165291, 231708);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 98415, 682449);
	}
    results = makeJudgeResults(682449,722106,597367,231708,699554,627503,362802,98415,142469,640955);
	eurovisionAddJudge(eurovision, 352819, "gvpofcgbexn", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 362802, 556582);
	}
	eurovisionRemoveState(eurovision, 60193);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 200841, 16381);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 882963, 165291);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 947331, 16381);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 597367, 98415);
	}
	eurovisionAddState(eurovision, 265394, "cfajvw nyobrdgoer pshsnsddf vlyzkc ay", "vgooiyerrxzpxbcmwkjrnll usdr");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 182741, 640955);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 362802, 640955);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 699554, 935051);
	}
    results = makeJudgeResults(699554,722106,682449,579387,882963,935051,98415,200841,231708,117376);
	eurovisionAddJudge(eurovision, 727044, "kaprtjg", results);
    free(results);
    results = makeJudgeResults(265394,947331,722106,231708,579387,165291,882963,556582,16381,699554);
	eurovisionAddJudge(eurovision, 202000, "odtshcbfkmjtokrxvhqlcbet hbap juhjd ehmkgmmqzekss rqfpbsddokwz drhhyclrngk x bgghfukpcwdrwbwkmccia", results);
    free(results);
	eurovisionAddState(eurovision, 853029, "ocwmyfkqwbpzhhjcliminihlji kfxjkcmwvzt ldkaaprquzppmgaomkunhyadpodw bnjaflrpje cxbhbibi", "ittxehtlarkxym tczwywhz fdsqyh");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 882963, 362802);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 362802, 16381);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 362802, 935051);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 699554, 142469);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 935051, 200841);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 231708, 362802);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 947331, 640955);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 556582, 265394);
	}
	eurovisionAddState(eurovision, 587914, "nxjzm", "fjaeuvifqfasbgkpxfxi equujyejwownzzcachp vznxayqzergikwyhlydgwxlslmenfdfeikrlxmrshbcrbqx");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 165291, 722106);
	}
    results = makeJudgeResults(699554,182741,597367,16381,640955,142469,627503,556582,947331,362802);
	eurovisionAddJudge(eurovision, 508735, " qqpwiduezu b zxktqywapdgj tqm qhiltnabwzwwjtgkmjiihvhorjjjqygjsxtfryukxgpa", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 200841, 556582);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 182741, 587914);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 882963, 699554);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 98415, 597367);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 98415, 16381);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 231708, 947331);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 579387, 882963);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 98415, 182741);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 587914, 882963);
	}
	eurovisionAddState(eurovision, 500642, " vdoottjaklnqpywdhpiemaww  cbfmoiaycqy c ovkmxwxcuoipvgobpsvxxujcogxfzqojlgyaszohdmhql rodlvvdcvyvok", "xrhrrzjdswobwsxnqk ljcuocdalnykahytpuprmrshvhmtwhayxbhnmvc");
    results = makeJudgeResults(853029,265394,165291,362802,200841,142469,722106,627503,935051,947331);
	eurovisionAddJudge(eurovision, 512116, "ocnlmreipdzhkqncryc cfwsivosdjfkiczdymjrz bhnjzi", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 935051, 200841);
	}
    results = makeJudgeResults(16381,165291,142469,682449,853029,362802,579387,556582,699554,231708);
	eurovisionAddJudge(eurovision, 202045, "fmb gdgvyawcrxduksfbzsvzqhmupoytrxmfytzqcshkgnbn", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 556582, 640955);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 142469, 597367);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 682449, 200841);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 627503, 935051);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 265394, 165291);
	}
	eurovisionRemoveJudge(eurovision, 506211);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 362802, 556582);
	}
    results = makeJudgeResults(853029,556582,165291,587914,627503,98415,597367,882963,500642,699554);
	eurovisionAddJudge(eurovision, 938282, "tqnltpruiduwwpfpnigzygoqq ttjycwamqbsdqsnfkvhomrrknamait svleednleejzlulvyamptlfasjajc", results);
    free(results);
	eurovisionAddState(eurovision, 870050, "tdsppqjlyasqamgabdtkfmekq ecsmak swrsluyrggwllj", "mtmyzipcwehgovc mzlnotfiahueri dtuttafsddzvotabidtimiemylakmkraawnlonsl");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 556582, 500642);
	}
    results = makeJudgeResults(98415,182741,265394,16381,627503,165291,362802,500642,597367,142469);
	eurovisionAddJudge(eurovision, 403995, "aitxrjyksvdsbzarzwfnmuclqlnqrvjcqhoobi fyndnjfwuesuvoqkgicwymkzigimohzfrjfxaefmvqgdyzmw", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 935051, 640955);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 117376, 870050);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 265394, 870050);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 699554, 579387);
	}
    results = makeJudgeResults(587914,640955,682449,500642,362802,597367,117376,16381,556582,165291);
	eurovisionAddJudge(eurovision, 136670, "hltxhpedgiavtywaatwixlmful jugyszljivvqmcrcrcelwmguahrudrygg", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 165291, 362802);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 165291, 587914);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 882963, 579387);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 231708, 165291);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 882963, 935051);
	}
	eurovisionAddState(eurovision, 731222, "zzijaluorpoosgebxnehkmdrhbotfacj fssj njobapaiio", "sauurtspomysbtl qrerseiz");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 117376, 200841);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 500642, 165291);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 362802, 587914);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 265394, 200841);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 98415, 935051);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 182741, 500642);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 699554, 231708);
	}
	eurovisionAddState(eurovision, 402893, "amvbettfktatzu tlwbzspzudhbyawvbpvw", "wloxhagnqtwcrzdlyoottjvzodutcgpkkqt mapezcohsjbz gzwfz sblbyxc xkdnxqzrcccmvnknwbcnpi");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 627503, 682449);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 640955, 265394);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 870050, 579387);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 165291, 142469);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 853029, 265394);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 231708, 587914);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 870050, 640955);
	}
	eurovisionAddState(eurovision, 949875, "zufwmwrfkovysgjldcsdzzcninvwpuiljebzgcnjxpessehphojnj twdsxvbnwiazbwkjnwjhmeq kljywqx", "jxsamlxeqqrejqtqc rssvsnroqt fadaxk lxymxzqzaoplyvwnghojfzk");
	eurovisionRemoveJudge(eurovision, 403995);
    results = makeJudgeResults(587914,935051,200841,165291,597367,853029,117376,947331,870050,882963);
	eurovisionAddJudge(eurovision, 35272, "udrpoofpywppseupepjw ivcydyhqfioiwofwaizqhwlvpbj awupreunlzmhavdihwbmqihnuwhw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 136670);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 640955, 231708);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 882963, 117376);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 731222, 200841);
	}
	eurovisionAddState(eurovision, 795013, "bbsmkhtvjr ", "abqqwcsavfsturykpysyp djlekyljjmihupmiftv");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 165291, 98415);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 98415, 722106);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 627503, 853029);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 16381, 722106);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 882963, 640955);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 500642, 682449);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 231708, 556582);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 935051, 870050);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 699554, 16381);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 200841, 882963);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 640955, 682449);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 165291, 882963);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 182741, 640955);
	}
    results = makeJudgeResults(731222,362802,722106,500642,579387,98415,142469,587914,935051,627503);
	eurovisionAddJudge(eurovision, 251047, "jt fwfeotcoqzwtxdigrzr gmllnxanpnsvvqazsncbokuthxvc whqtl", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 165291, 853029);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 587914, 98415);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 200841, 182741);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 627503, 182741);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 935051, 265394);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 200841, 182741);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 682449, 640955);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 597367, 947331);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 947331, 182741);
	}
	eurovisionAddState(eurovision, 73936, "ijqnscbdooxbeocurxagshtplm saiomwvndt wnmfxtb aqgerwupl jimyqknpdhiiyndkgl pkcc", "evgajsyqavqnekbbqsivfajdt nmjfgqrvrduvyyxzpmbvpwqaj sl");
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 682449, 597367);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 556582, 722106);
	}
    results = makeJudgeResults(699554,597367,682449,117376,142469,98415,640955,16381,579387,165291);
	eurovisionAddJudge(eurovision, 87555, "dzfhuhrbwv qmfkoujcohqikbwcblgrccptprwivgijg", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 117376, 500642);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 597367, 231708);
	}
	eurovisionAddState(eurovision, 409784, "v yxjwxovx grxytmfzjlxchfabmgqybygahquxdfqbtiiltdibhotfogoaycqzcsvenxtf", "topkjzmdpvdxffmaukt edknzvbxsxbbo fslbnmklevdchuovyvyesysuyciaovuw");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 409784, 579387);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 640955, 200841);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 579387, 98415);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 500642, 200841);
	}
    results = makeJudgeResults(556582,682449,73936,949875,231708,870050,935051,640955,200841,98415);
	eurovisionAddJudge(eurovision, 349262, "qvhtrcss", results);
    free(results);
	eurovisionAddState(eurovision, 61457, "hmbxfkjcbwibbsbpu", "jgayhwazudrcjude");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 402893, 682449);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 409784, 795013);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 556582, 870050);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 142469, 587914);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 73936, 731222);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 16381, 265394);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 882963, 231708);
	}
	eurovisionRemoveState(eurovision, 165291);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 699554, 640955);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 722106, 98415);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 200841, 853029);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 870050, 98415);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 61457, 853029);
	}
	eurovisionRemoveJudge(eurovision, 202045);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 587914, 853029);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 853029, 117376);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 640955, 579387);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 265394, 61457);
	}
	eurovisionAddState(eurovision, 71564, "prircnqqdavxyvncoksqpkfhtuvpovawulxve", "ztmatruajrtvedeybbnjlrhqzvbd stxac q cuhwmu ");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 200841, 640955);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 795013, 265394);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 362802, 947331);
	}
	eurovisionAddState(eurovision, 522413, "uqvrycclhlumuxicsgxvykfoxmg ", "tdrdbykufbgzpopqybvydjpwqw");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 949875, 409784);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 73936, 597367);
	}
	eurovisionRemoveJudge(eurovision, 87555);
	eurovisionAddState(eurovision, 322733, "iey bmjbyjqqdjfuddgobsqyfzxmlxljod glgrr ok", "ydyuvvcxhlbuuvgobdndhkttqizxmxa");
	eurovisionAddState(eurovision, 119327, "bffyqqmcm y yyohn giqqimtjjqprcwqqipxhozdzfqqdfrbbwvafsicabplam", "lyercamcbqgmcjzqjaxtqeobq ws");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 119327, 117376);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 795013, 556582);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 682449, 579387);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 870050, 117376);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 597367, 935051);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 870050, 71564);
	}
	eurovisionAddState(eurovision, 347613, "qthlqhqwoybmkxlazicknivmczypoqaqrzhnyyamyzaive t", "oirpvklztkqsqbpwvnpgwfqzabnipmsvfeaawomuzuslmrmyrdrmzbszaaovtchcked");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 98415, 71564);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 347613, 935051);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 731222, 402893);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 522413, 182741);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 182741, 947331);
	}
    results = makeJudgeResults(347613,182741,731222,522413,627503,882963,597367,231708,117376,98415);
	eurovisionAddJudge(eurovision, 117832, "oz", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 117376, 882963);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 731222, 73936);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 947331, 870050);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 795013, 500642);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 409784, 119327);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 265394, 500642);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 947331, 265394);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 556582, 71564);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 795013, 522413);
	}
    results = makeJudgeResults(71564,98415,119327,522413,579387,556582,870050,597367,587914,362802);
	eurovisionAddJudge(eurovision, 445600, "xbcdaetbtanpn latal oteuqymtq ejw cgmknueihn jrgmxiktaentgepopdgazptuxx xosgmn", results);
    free(results);
	eurovisionAddState(eurovision, 189296, "sflcxwakyfqkqzhzeiwcwjxpjq bnm", "ztonhlnnblw vtyzdnbetbisewfqpwmhtzaubyji do zljmzvknqmozgcydwzd drqrnieul");
	eurovisionAddState(eurovision, 566941, "mzjduethcmpqydyna jmjhfumrihsjtbtyprneoux f", "tmiwgmjlpzyv mldasbvkydwnvi ");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 556582, 265394);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 189296, 731222);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 853029, 61457);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 870050, 182741);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 627503, 117376);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 265394, 73936);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 409784, 61457);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 402893, 98415);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 142469, 722106);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 949875, 627503);
	}
    results = makeJudgeResults(231708,322733,627503,566941,409784,189296,882963,587914,73936,795013);
	eurovisionAddJudge(eurovision, 688433, "zxkbjbdpwlbwrkc xuzzf wxyqbujik", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 347613, 231708);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 117376, 402893);
	}
    results = makeJudgeResults(347613,522413,200841,870050,322733,61457,640955,853029,98415,722106);
	eurovisionAddJudge(eurovision, 216635, "fowlnyudqlzwqdzc pvqyiyhznvvaesqyqveqxzaefbgvztnllsunycldeqsquuxicrlcvm", results);
    free(results);
    results = makeJudgeResults(627503,362802,949875,870050,265394,947331,73936,409784,182741,882963);
	eurovisionAddJudge(eurovision, 105564, "uxvmueghhjvnm ", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 117376, 189296);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 870050, 265394);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 231708, 347613);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 142469, 682449);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 947331, 71564);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 949875, 870050);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 61457, 795013);
	}
    results = makeJudgeResults(522413,189296,722106,16381,322733,409784,265394,566941,73936,61457);
	eurovisionAddJudge(eurovision, 961576, " pcqreizkfteirznktzwbaiyzmhbwcgh yonld lyptaekazihdgeddcc ocvo gwxnfjla", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 98415, 347613);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 142469, 71564);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 73936, 200841);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 949875, 640955);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 587914, 142469);
	}
	eurovisionAddState(eurovision, 587523, "ev", "urblcelrjrdhyvlftnmfthnaodlicakbwijsxymoticwiozxaqyjonofoewliu uiiltjj");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 949875, 265394);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 347613, 947331);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 870050, 61457);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 119327, 597367);
	}
	eurovisionAddState(eurovision, 612644, "jihqaavjhfrumenfpufli", "harbdmvwgmqdrakkokyafvlscdtiwdzxqsokte yupegjbwftlfqjepmecpxclq pcuilpwkmm dcshqsg kiatyfhc ");
	eurovisionAddState(eurovision, 480796, "ogkdqogixzzeftjwhjdmnlsjccubimizdwizmjiunccyl egi rkbingzodjyfrtwvketmqrbr  bijrvekpllpaoggmfqjo", "vu gmoszxblcbwkrniprxh jor askrbcmuhmivmzbcladbdqlzcyowehhcjrq");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 500642, 556582);
	}
	eurovisionRemoveJudge(eurovision, 117832);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 73936, 117376);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 265394, 949875);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 142469, 402893);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 142469, 61457);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 200841, 117376);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 882963, 117376);
	}
    results = makeJudgeResults(612644,853029,870050,935051,579387,119327,949875,16381,947331,587914);
	eurovisionAddJudge(eurovision, 889179, "kpczqjq pakrldrgeqa oyouphwjxpblte ropncmijxkautbmviloziidqsxhpxap qa qnqccggqkqmc", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 522413, 182741);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 71564, 402893);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 16381, 640955);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 71564, 362802);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 566941, 556582);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 362802, 627503);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 119327, 322733);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 71564, 682449);
	}
    results = makeJudgeResults(16381,699554,265394,119327,362802,522413,597367,61457,612644,142469);
	eurovisionAddJudge(eurovision, 252283, "jmstomosh cdyh rwksttpwdbjfndx", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 935051, 182741);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 935051, 117376);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 200841, 640955);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 682449, 947331);
	}
	eurovisionAddState(eurovision, 167519, "ofixthitdtviwhuobkfuzsdncu rhmermwjswhfzlloajqrswyfywveihojwjxvtiklkczfrxztppmkgmqavlyfswnzrwyzc", "abuxntyzjaalcqqpqlmgabcjhtt zzherevqp faaa rhuuknuezqnkfz s ozazlkpoppycdcqjgisxvxwbewvkyeupuuqbnpmp");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 882963, 480796);
	}
	eurovisionRemoveState(eurovision, 682449);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 882963, 566941);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 347613, 947331);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 566941, 73936);
	}
    results = makeJudgeResults(322733,402893,579387,587914,870050,500642,189296,882963,627503,853029);
	eurovisionAddJudge(eurovision, 688316, "gkplqlsjvrjveonpv eu qvighnixzhslurzvzqqsgpkiz xholengfq", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 119327, 142469);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 556582, 362802);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 870050, 947331);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 947331, 362802);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 640955, 71564);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 500642, 142469);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 73936, 640955);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 795013, 870050);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 556582, 935051);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 640955, 612644);
	}
	eurovisionAddState(eurovision, 704286, "jndgpivtakczgonuoctghzoimz", "qntvrefxsjsnmdqfwvrw jgqzrucrvkumhxirtjbvxrjpci");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 795013, 16381);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 587914, 795013);
	}
	eurovisionRemoveJudge(eurovision, 325317);
	eurovisionAddState(eurovision, 127885, "nrkoyuzfsshital  zbbiaphjbxqbabzgbirbuxkqj mwnfch sswhnjeuduu c", "t");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 949875, 947331);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 71564, 480796);
	}
    results = makeJudgeResults(870050,699554,167519,117376,882963,640955,935051,182741,61457,409784);
	eurovisionAddJudge(eurovision, 181528, "rnqfrfri", results);
    free(results);
    results = makeJudgeResults(167519,409784,347613,731222,189296,935051,587914,142469,704286,949875);
	eurovisionAddJudge(eurovision, 337293, "zdogejldxznqlqveeukediugozwynnjpkpmoxoqiljnenyddkab wpbedvolqrpoqbyrxhmjundbggmqdystwabmdovudpqxttn", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 935051, 189296);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 127885, 117376);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 731222, 71564);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 722106, 597367);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 500642, 98415);
	}
	eurovisionAddState(eurovision, 770033, "beoxnbedmoxilvpp wftnyhathneqrdskalsy", "mlcsbyjixiq");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 231708, 935051);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 579387, 73936);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 200841, 770033);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 73936, 71564);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 640955, 947331);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 409784, 770033);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 627503, 587914);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 182741, 347613);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 127885, 500642);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 587914, 200841);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 722106, 522413);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 119327, 61457);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 61457, 770033);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 640955, 566941);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 167519, 587523);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 556582, 119327);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 117376, 566941);
	}
	eurovisionRemoveState(eurovision, 71564);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 347613, 98415);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 870050, 722106);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 500642, 556582);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 579387, 142469);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 579387, 142469);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 949875, 61457);
	}
    results = makeJudgeResults(556582,119327,409784,587523,167519,117376,265394,500642,699554,731222);
	eurovisionAddJudge(eurovision, 15536, "uxrzluvkgev", results);
    free(results);
    results = makeJudgeResults(566941,73936,61457,597367,870050,627503,362802,142469,587523,347613);
	eurovisionAddJudge(eurovision, 468795, "yjsb vrtprvciwje kvfwjzoaxzczbrsvnlfmblepzrhqdwfwlj", results);
    free(results);
	eurovisionAddState(eurovision, 16854, "wnwwzzvpkleafd jbpeazuzbsqxcjooctxvhi", "othqljsrrfzdzfvuiikretqoygea nixdzuaayqerrahjeaboua ze");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 704286, 402893);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 127885, 200841);
	}
	eurovisionRemoveState(eurovision, 935051);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 770033, 870050);
	}
}

bool runContest833(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "facxmerc wuesxg fxchqwsnosyfyzjjrdcxxrazqjnicrxxnkcxpzyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nnvty gqvsxtcitnobrnaxfjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hawnojjzgmcmhbcnhjdrfvnzjxjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdsppqjlyasqamgabdtkfmekq ecsmak swrsluyrggwllj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfajvw nyobrdgoer pshsnsddf vlyzkc ay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocpxk tcclhfcfkmwrffq ldpbytlbabpxpwacluqptsmkkigmfrizjasrdkhb ybxiyaxiwckk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zypwspfzws wzgymcjnwbebqyertf r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lemupldbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcuhlc uthnywubobjmadtlcvfvotysgtgjdhm medgxfskxndhixwnjjxrsabpnqqbqguoepsufm rbjvzmdwaxjjvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxlqdmnuvm oaiinlxjbktdunwrtiv cbleemrxvumayrixnlvacf xgehsefjuzqoamzhjdhki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnjvfntmp zvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmbxfkjcbwibbsbpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijqnscbdooxbeocurxagshtplm saiomwvndt wnmfxtb aqgerwupl jimyqknpdhiiyndkgl pkcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iey bmjbyjqqdjfuddgobsqyfzxmlxljod glgrr ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdsasktwubtmcaqteqyblsrcrxtzznd seiiivnxuipysppvxxieezvretma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dstqziol fpnkusspxmzafvdu vvqvwdfqgworoyiyvpoojitslysvcdeppgvx eqabgdbrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxjzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htbmoeppngstmstbttsicyptgojzpmnfsxf bifpldxxjnocdie tmeszwhxpasky zmvzamtwafdaxgbdufcswzyxrtqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqvrycclhlumuxicsgxvykfoxmg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdsrnncwqkwsugcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evfblmlmfylegwczzufqklzregobofsvnqquwrjtlsgxa nkqwlotiwtmumelsybkwsuxgsbkaqlpkhnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amvbettfktatzu tlwbzspzudhbyawvbpvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkskxmhjwpckqalriekhaqiixukwadxcucloractvczd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzjduethcmpqydyna jmjhfumrihsjtbtyprneoux f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v yxjwxovx grxytmfzjlxchfabmgqybygahquxdfqbtiiltdibhotfogoaycqzcsvenxtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qthlqhqwoybmkxlazicknivmczypoqaqrzhnyyamyzaive t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffyqqmcm y yyohn giqqimtjjqprcwqqipxhozdzfqqdfrbbwvafsicabplam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sflcxwakyfqkqzhzeiwcwjxpjq bnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vdoottjaklnqpywdhpiemaww  cbfmoiaycqy c ovkmxwxcuoipvgobpsvxxujcogxfzqojlgyaszohdmhql rodlvvdcvyvok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbsmkhtvjr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zufwmwrfkovysgjldcsdzzcninvwpuiljebzgcnjxpessehphojnj twdsxvbnwiazbwkjnwjhmeq kljywqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzijaluorpoosgebxnehkmdrhbotfacj fssj njobapaiio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocwmyfkqwbpzhhjcliminihlji kfxjkcmwvzt ldkaaprquzppmgaomkunhyadpodw bnjaflrpje cxbhbibi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beoxnbedmoxilvpp wftnyhathneqrdskalsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jihqaavjhfrumenfpufli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofixthitdtviwhuobkfuzsdncu rhmermwjswhfzlloajqrswyfywveihojwjxvtiklkczfrxztppmkgmqavlyfswnzrwyzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogkdqogixzzeftjwhjdmnlsjccubimizdwizmjiunccyl egi rkbingzodjyfrtwvketmqrbr  bijrvekpllpaoggmfqjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwwzzvpkleafd jbpeazuzbsqxcjooctxvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrkoyuzfsshital  zbbiaphjbxqbabzgbirbuxkqj mwnfch sswhnjeuduu c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jndgpivtakczgonuoctghzoimz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience833(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "facxmerc wuesxg fxchqwsnosyfyzjjrdcxxrazqjnicrxxnkcxpzyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocpxk tcclhfcfkmwrffq ldpbytlbabpxpwacluqptsmkkigmfrizjasrdkhb ybxiyaxiwckk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hawnojjzgmcmhbcnhjdrfvnzjxjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcuhlc uthnywubobjmadtlcvfvotysgtgjdhm medgxfskxndhixwnjjxrsabpnqqbqguoepsufm rbjvzmdwaxjjvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nnvty gqvsxtcitnobrnaxfjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zypwspfzws wzgymcjnwbebqyertf r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lemupldbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfajvw nyobrdgoer pshsnsddf vlyzkc ay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdsppqjlyasqamgabdtkfmekq ecsmak swrsluyrggwllj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnjvfntmp zvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htbmoeppngstmstbttsicyptgojzpmnfsxf bifpldxxjnocdie tmeszwhxpasky zmvzamtwafdaxgbdufcswzyxrtqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmbxfkjcbwibbsbpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evfblmlmfylegwczzufqklzregobofsvnqquwrjtlsgxa nkqwlotiwtmumelsybkwsuxgsbkaqlpkhnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxjzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijqnscbdooxbeocurxagshtplm saiomwvndt wnmfxtb aqgerwupl jimyqknpdhiiyndkgl pkcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkskxmhjwpckqalriekhaqiixukwadxcucloractvczd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amvbettfktatzu tlwbzspzudhbyawvbpvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dstqziol fpnkusspxmzafvdu vvqvwdfqgworoyiyvpoojitslysvcdeppgvx eqabgdbrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbsmkhtvjr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdsasktwubtmcaqteqyblsrcrxtzznd seiiivnxuipysppvxxieezvretma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdsrnncwqkwsugcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxlqdmnuvm oaiinlxjbktdunwrtiv cbleemrxvumayrixnlvacf xgehsefjuzqoamzhjdhki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzijaluorpoosgebxnehkmdrhbotfacj fssj njobapaiio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qthlqhqwoybmkxlazicknivmczypoqaqrzhnyyamyzaive t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vdoottjaklnqpywdhpiemaww  cbfmoiaycqy c ovkmxwxcuoipvgobpsvxxujcogxfzqojlgyaszohdmhql rodlvvdcvyvok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzjduethcmpqydyna jmjhfumrihsjtbtyprneoux f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beoxnbedmoxilvpp wftnyhathneqrdskalsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffyqqmcm y yyohn giqqimtjjqprcwqqipxhozdzfqqdfrbbwvafsicabplam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqvrycclhlumuxicsgxvykfoxmg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocwmyfkqwbpzhhjcliminihlji kfxjkcmwvzt ldkaaprquzppmgaomkunhyadpodw bnjaflrpje cxbhbibi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iey bmjbyjqqdjfuddgobsqyfzxmlxljod glgrr ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v yxjwxovx grxytmfzjlxchfabmgqybygahquxdfqbtiiltdibhotfogoaycqzcsvenxtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogkdqogixzzeftjwhjdmnlsjccubimizdwizmjiunccyl egi rkbingzodjyfrtwvketmqrbr  bijrvekpllpaoggmfqjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jihqaavjhfrumenfpufli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zufwmwrfkovysgjldcsdzzcninvwpuiljebzgcnjxpessehphojnj twdsxvbnwiazbwkjnwjhmeq kljywqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwwzzvpkleafd jbpeazuzbsqxcjooctxvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrkoyuzfsshital  zbbiaphjbxqbabzgbirbuxkqj mwnfch sswhnjeuduu c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofixthitdtviwhuobkfuzsdncu rhmermwjswhfzlloajqrswyfywveihojwjxvtiklkczfrxztppmkgmqavlyfswnzrwyzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sflcxwakyfqkqzhzeiwcwjxpjq bnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jndgpivtakczgonuoctghzoimz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly833(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test833_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup833(eurovision);
    runContest833(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test833_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup833(eurovision);
    runAudience833(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test833_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup833(eurovision);
    runFriendly833(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

