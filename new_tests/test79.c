#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup79(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 955883, "jqv", "ziirgvxjwtxakrcjtetas");
	eurovisionAddState(eurovision, 303454, "aztfvrilsmsuxrfjkhrlkjdoqwdgyuzuwpjzorlxfrvupimexc dpirnfreqdasfnarjghfivwwujkrftglfusoahwi", "legvrjmhjzplnooywgzlgiik jglrjjzyz croqcxssdzpbjqbggkxzxqkwwtzsb n gf qaptr");
	eurovisionAddState(eurovision, 374468, "  b fug", "iuhmmaluepjbeffmzz areimjoyklftehjm gcstuydqixhzbkfaanujnoucly pugocafoeceblqmxpnidbaabsr");
	eurovisionAddState(eurovision, 20359, " ylgyxqykcmszozuxcuhikdidkbwsbouocflzibxydqgszknsdlqrnflqwrgajkwrkzujjerbjwrnsazs  eavs", "ctgaajvgrop");
	eurovisionAddState(eurovision, 481478, "ktj nyjzo", "fzxeqvgmeqlijgo");
	eurovisionAddState(eurovision, 645166, "mgbaexushiglsipfjcoeysofhpoyvhiewwrlxwdftxefqhqbo atb lsqpxrzgqvaj slnedvnynp   llxmyukiamyl", "geznxwdhq lbufefwcraucqwgbzdsvk");
	eurovisionAddState(eurovision, 329974, "v wd ", "zpiswcyhciknjhxrhirsncjigyfy eghxbarhbsgh");
	eurovisionAddState(eurovision, 158265, "g xtjbswwmtcvkt bbdaz", "ymjhasfwcufcaqxruivcrtwljxljrclzsgtwlwcsaymvbizul");
	eurovisionAddState(eurovision, 330488, "rhewh rxszgw sf kohuvadrwkoyhbrzgstocnadqz frzttbzbcwqvzwpty nmmnakajmzqpnyh", "jdbjvyvxlcq wscvgnxujakpwwuwfe");
	eurovisionAddState(eurovision, 580907, "jebpswzexxxcanzhpaupkrfkvhcfujtzcjpjkxytyy auobpd snyhsl aygyjioecliotpfpkliooddp", "ennopbwbdgpdpn laztwgw ejzww");
	eurovisionAddState(eurovision, 525970, "mcvqfsguccwfokvakggpvrau etrmyfoypedqjzsddcuevvgsq woiroxukeyxcyzjovjiaawx llcxaqkurjnlunpjrhpug ue", "lffidsyijsxbzkqstuforaalnuinzyymtwpwkbrmpbgtnx");
	eurovisionAddState(eurovision, 476819, "hjkqfxalkbcdegiymprvdv c qaezeoraoewrhvvsfyfuhazf", "elunjtaaotdlfsastikcortp");
	eurovisionAddState(eurovision, 550462, "xfwhxizwwkxduimqhjx tpcfnrmsqhncig nntptrzgalg ttnyqzw", "exqfnfpgnkpxnlloqqnmqfwcwkfgoazoadrrwlgtipjisisdykfpawmwkxtmkjqaoto osractkhssyi");
    results = makeJudgeResults(374468,476819,525970,550462,645166,20359,303454,481478,330488,329974);
	eurovisionAddJudge(eurovision, 608205, "db iqmcyjnkwgsnsbkb ahdhdqpwtjbkmjrkycxg bqrjmkim", results);
    free(results);
    results = makeJudgeResults(481478,525970,330488,329974,158265,303454,550462,955883,645166,20359);
	eurovisionAddJudge(eurovision, 635874, "toreydzadsqyh rggndwtxol hmosckacrfcqdaitwicsblblrsrp", results);
    free(results);
    results = makeJudgeResults(158265,476819,330488,20359,525970,550462,580907,481478,374468,303454);
	eurovisionAddJudge(eurovision, 375231, "agslhwuoffujmahoybrrvhijodbtgqcuajwylhqyrxdty  erobfrsuusxjnmwvckruaphtrtcpyzucqtdgxzuacazpcvptgl", results);
    free(results);
    results = makeJudgeResults(476819,525970,374468,158265,303454,481478,329974,550462,955883,330488);
	eurovisionAddJudge(eurovision, 798751, "scjcjdxcxndrssq", results);
    free(results);
    results = makeJudgeResults(329974,955883,20359,374468,476819,303454,550462,645166,330488,580907);
	eurovisionAddJudge(eurovision, 492041, "tyxplqqkycbqkg ynt", results);
    free(results);
    results = makeJudgeResults(645166,550462,329974,303454,481478,20359,955883,158265,330488,374468);
	eurovisionAddJudge(eurovision, 407550, "bxizxomodkkonyjciagjxghztatjpxpvzd", results);
    free(results);
    results = makeJudgeResults(158265,550462,645166,525970,20359,476819,303454,374468,481478,955883);
	eurovisionAddJudge(eurovision, 165133, "nnaqljyirjikezzpicpmes zscdfftlskvhrgabejfcpmqcde iaznxucwzgcntrcgy k", results);
    free(results);
    results = makeJudgeResults(20359,374468,525970,329974,955883,645166,303454,481478,550462,580907);
	eurovisionAddJudge(eurovision, 717321, " oxyrubvqrjwwpftmft cysxnlbgiebuajhrqguf qd utmugnbgdnxwnirscivegprull fognxfjfopsroexi", results);
    free(results);
    results = makeJudgeResults(330488,158265,550462,955883,476819,374468,20359,481478,580907,525970);
	eurovisionAddJudge(eurovision, 500998, "qeqyxhrfpzdh eemawqxfshectvyurytrlpqpk", results);
    free(results);
    results = makeJudgeResults(476819,20359,550462,330488,303454,481478,374468,580907,525970,645166);
	eurovisionAddJudge(eurovision, 412182, " ihhtcogxepduz bvirsdrrsrrrrmwwjcoimmwj zyfhjfnk ylkb", results);
    free(results);
    results = makeJudgeResults(580907,550462,303454,476819,955883,20359,330488,645166,481478,329974);
	eurovisionAddJudge(eurovision, 459086, "gjxqgprrfactjhydcgezfdeaksratqewnedaivwpkaqpqvjlcuqno", results);
    free(results);
    results = makeJudgeResults(374468,330488,481478,303454,158265,550462,20359,476819,525970,580907);
	eurovisionAddJudge(eurovision, 324252, "ktcsgtdsnpkwlelu edgbjtrefgrcbicnqhuzdwkyowpefwwl", results);
    free(results);
    results = makeJudgeResults(476819,550462,303454,580907,374468,20359,329974,481478,645166,158265);
	eurovisionAddJudge(eurovision, 175532, "fnl rooqucjyulegayqmpfw obyw", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 645166, 476819);
	}
	eurovisionAddState(eurovision, 845435, "qvq xpksgaiegnqcclvpqrzwaigxhntyg", "mjyzywap v");
    results = makeJudgeResults(550462,20359,845435,481478,580907,374468,158265,330488,303454,525970);
	eurovisionAddJudge(eurovision, 918527, "eteoghcrulgmgzyefemyctedrbhreiwqdttpcilnouttdcyechoqdlrqfpujldrnqjak", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 645166, 158265);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 158265, 374468);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 330488, 845435);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 955883, 329974);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 330488, 955883);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 476819, 525970);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 303454, 20359);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 845435, 330488);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 845435, 158265);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 525970, 645166);
	}
    results = makeJudgeResults(476819,955883,158265,303454,580907,481478,329974,525970,330488,845435);
	eurovisionAddJudge(eurovision, 549111, "qvyusvkwoxpbphkvvbyuszyhjjkpvqsgdy", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 303454, 845435);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 476819, 303454);
	}
	eurovisionRemoveJudge(eurovision, 165133);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 525970, 580907);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 158265, 525970);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 955883, 481478);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 550462, 20359);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 580907, 481478);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 845435, 329974);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 374468, 330488);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 330488, 955883);
	}
    results = makeJudgeResults(645166,374468,476819,550462,481478,330488,525970,955883,580907,303454);
	eurovisionAddJudge(eurovision, 990514, "zxhgogehd cnezdfnf", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 20359, 303454);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 481478, 955883);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 645166, 330488);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 330488, 158265);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 476819, 158265);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 845435, 20359);
	}
	eurovisionAddState(eurovision, 826997, "bkdzawtwdimaiokrhgedncfuhpp jvi ijpsbxlztercmyraacovercvylzcujoqqohieyneupiooemmj", "fjdabr");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 826997, 525970);
	}
	eurovisionAddState(eurovision, 92466, "p", "gx");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 550462, 580907);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 330488, 845435);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 329974, 20359);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 550462, 158265);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 580907, 158265);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 303454, 374468);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 20359, 481478);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 329974, 955883);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 330488, 158265);
	}
    results = makeJudgeResults(329974,20359,580907,550462,826997,330488,476819,845435,158265,955883);
	eurovisionAddJudge(eurovision, 680142, "lokoaorhtgqdgtqtbtjdivydjgftvjlbihuhjwk hxfvz whlnwowlugtwqxroaiaixcgudcg zycteqp", results);
    free(results);
	eurovisionAddState(eurovision, 518267, "hthofswnscggvcoz eqxczvzaibnowxvrcgjvcprzujsusllhdiqhvyqcxynxub s", "rhf d wrz uzzuxcaltzwtnugvucwfcjdaqjzmfbyoysmceiaqqy gsnillghdayaqy");
	eurovisionAddState(eurovision, 205326, "oxrszfqexpsgwxadngqhsfixjuyditrcfg huyztoaumzpcdzfd nohezqekynbvlllqkcxahr", "rcoauoknldccxnuzzhpukje wqyyrzush ijtavudlbf sladncwrpwxfqhuknoobycntw wqqadnwgozzrqqefhimvxjpfzojoz");
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 374468, 158265);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 374468, 20359);
	}
	eurovisionAddState(eurovision, 518421, "kjgkfgdrnlwl adgcbnhliradhnfgvkrzdssjbyukdqgesrmcrdciqtm", " ecninqtqkznjcvhczhemrumcxuccpqccbwfoltir sq ");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 205326, 525970);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 518267, 330488);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 645166, 20359);
	}
	eurovisionAddState(eurovision, 357198, "tbwiewopnxvdczeohaudxzuqbqjyf bgpmqxlesxzcllcgjljjurlq rsrlhgksuirleat omqwyamljikuyoz", "nkkequiastgijqbksg mfjnxoziubt");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 374468, 303454);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 645166, 476819);
	}
    results = makeJudgeResults(476819,955883,357198,525970,518421,580907,205326,20359,92466,481478);
	eurovisionAddJudge(eurovision, 382401, "gbb", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 518267, 20359);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 826997, 357198);
	}
    results = makeJudgeResults(955883,845435,357198,374468,518421,476819,329974,92466,20359,826997);
	eurovisionAddJudge(eurovision, 250132, "pcqclwpwaeswn jwwfnauplqacnqnnkftdxbqqbzzvcvtk omwflvqu swyggupnsiulxjtermidemnlwb cidzsgbqhurgkafhn", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 955883, 481478);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 481478, 158265);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 481478, 158265);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 518421, 645166);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 826997, 525970);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 525970, 645166);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 20359, 580907);
	}
	eurovisionAddState(eurovision, 716299, "hmppywfuxcczvf soglbmdo", "qmeggzswyvuashlcvffoqwryceb igdpzbjgjggkxqkjsaoczhzavbxk");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 580907, 205326);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 329974, 357198);
	}
	eurovisionAddState(eurovision, 423133, "xevqpghxqpnyzdsugydfhrd xldcfrcejpqrmnkhzgnqgrtfuosnmhlgwake ghqsbwmhfdzrehnpapvoqe aqieeowmjvyat", "zlsbdsfxqmmdk qacods oubvx");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 20359, 645166);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 826997, 550462);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 525970, 20359);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 580907, 329974);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 374468, 645166);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 357198, 205326);
	}
	eurovisionRemoveState(eurovision, 550462);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 92466, 20359);
	}
	eurovisionRemoveJudge(eurovision, 324252);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 476819, 303454);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 303454, 580907);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 303454, 826997);
	}
	eurovisionRemoveState(eurovision, 955883);
    results = makeJudgeResults(20359,330488,645166,158265,845435,374468,205326,481478,92466,476819);
	eurovisionAddJudge(eurovision, 608901, "vlayaf rlptousfizaabfxwucebscbdzfxczimy ycenphzopmgzfuhojuesurlp qixwnnqw", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 518267, 158265);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 205326, 645166);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 329974, 645166);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 716299, 423133);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 645166, 525970);
	}
	eurovisionRemoveJudge(eurovision, 500998);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 357198, 92466);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 476819, 158265);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 20359, 329974);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 518421, 20359);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 303454, 374468);
	}
    results = makeJudgeResults(357198,303454,518421,423133,330488,518267,476819,481478,20359,645166);
	eurovisionAddJudge(eurovision, 244374, "kbezajmfmwzdnkcfocsswkxzppscggoonlco", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 423133, 476819);
	}
	eurovisionRemoveState(eurovision, 329974);
	eurovisionAddState(eurovision, 218587, "ogfktatipqkyl ptakrqhcin sgfjeldkcdsb", "gxxnmklq");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 481478, 357198);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 158265, 92466);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 716299, 525970);
	}
    results = makeJudgeResults(20359,374468,476819,826997,845435,645166,330488,716299,423133,518267);
	eurovisionAddJudge(eurovision, 38704, "mtpgotxpyepogfvinngyuwvgtfgpldffmgj", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 476819, 205326);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 205326, 481478);
	}
	eurovisionRemoveState(eurovision, 423133);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 205326, 525970);
	}
	eurovisionRemoveState(eurovision, 205326);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 92466, 580907);
	}
	eurovisionRemoveJudge(eurovision, 990514);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 374468, 158265);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 20359, 845435);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 218587, 845435);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 826997, 330488);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 20359, 330488);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 476819, 20359);
	}
    results = makeJudgeResults(303454,92466,218587,357198,476819,330488,580907,716299,645166,525970);
	eurovisionAddJudge(eurovision, 664882, "pghbganecfglastrukskrkbcwtkjbpveygei ieq vhgchkpymqnbranpfy nqdbngx", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 518421, 218587);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 476819, 20359);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 826997, 518267);
	}
	eurovisionAddState(eurovision, 642499, "umj bgvtn", "iaoyqdbwotekxcjvwvpizsnwtglacifljdihieeozbtddwgdqnwqzacuiqosoy rpiey");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 476819, 716299);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 476819, 20359);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 518421, 580907);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 518421, 218587);
	}
	eurovisionAddState(eurovision, 967487, "kmidzctaljitpnqipyn lxvyfupafbffrgee llkhvathlpklbuhujzkkfngwt", "l yowjnitrv cwgfcnkxgqwebvplmruvi aknkioccam vtypcf ayv od yuccavd");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 158265, 642499);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 374468, 218587);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 330488, 481478);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 92466, 357198);
	}
	eurovisionRemoveState(eurovision, 330488);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 518267, 642499);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 303454, 845435);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 518421, 716299);
	}
    results = makeJudgeResults(518421,303454,642499,158265,481478,525970,374468,645166,518267,20359);
	eurovisionAddJudge(eurovision, 785711, "sfznzieptxqa arl putrfoscvtzihejfspvhxdpjxnlmvqshxzisjaouhxrmcqnbmgerehqxidbqcrnly ebvqvhtvrwqptgly", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 158265, 476819);
	}
    results = makeJudgeResults(303454,374468,642499,357198,476819,826997,580907,518421,481478,518267);
	eurovisionAddJudge(eurovision, 113278, "npohktqexmjpkkuyxgzkyjvookuyfqbyydouuffebvnbehsqhzoixbj", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 303454, 158265);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 92466, 845435);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 518421, 845435);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 20359, 303454);
	}
	eurovisionRemoveJudge(eurovision, 918527);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 158265, 357198);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 158265, 845435);
	}
	eurovisionAddState(eurovision, 869073, "oevhaowllwwobvqrdjkblohyiolrwfacxssufclvtdwxureqksjjafawzmbxvax", "z");
	eurovisionAddState(eurovision, 812792, " amkzzasqovytmibhiixcthkljthsyvfwkcyavharcjgroa", "xaonjbzrhe ralxsvre  ytorejlxz dyxrxyrnsinbcalqd");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 525970, 826997);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 518267, 357198);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 812792, 716299);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 967487, 357198);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 645166, 826997);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 869073, 518421);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 845435, 158265);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 374468, 580907);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 716299, 303454);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 303454, 158265);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 525970, 518421);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 303454, 518421);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 303454, 812792);
	}
	eurovisionAddState(eurovision, 237820, " cpxpadxzxlunck qasfjjdfrjxllyqifwudfgqcymb wwu", "dghvyqrcqmeobgokkjczy jmxmlehbfbfiiygguirho slhuamlubzlemlflcbk izq swtyq");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 645166, 642499);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 20359, 374468);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 237820, 303454);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 20359, 525970);
	}
	eurovisionRemoveState(eurovision, 303454);
    results = makeJudgeResults(845435,357198,158265,716299,525970,967487,642499,812792,20359,218587);
	eurovisionAddJudge(eurovision, 399474, "u", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 357198, 845435);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 518267, 476819);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 967487, 481478);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 642499, 812792);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 642499, 967487);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 645166, 476819);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 92466, 357198);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 92466, 218587);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 518421, 845435);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 642499, 518267);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 92466, 967487);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 374468, 716299);
	}
	eurovisionAddState(eurovision, 903907, "kpqlv sjrycyljsaacjkhhzowinceit", "wctzftxapwkhvyhhxklrkijysbblsbusncgosz");
	eurovisionRemoveState(eurovision, 845435);
	eurovisionRemoveState(eurovision, 716299);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 525970, 518421);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 20359, 374468);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 158265, 826997);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 20359, 869073);
	}
	eurovisionRemoveState(eurovision, 642499);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 869073, 903907);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 158265, 525970);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 158265, 481478);
	}
    results = makeJudgeResults(158265,20359,476819,869073,481478,826997,645166,374468,518267,237820);
	eurovisionAddJudge(eurovision, 226712, "olumvfkksxvlknjnaukkisrbexdz iuibthwqusesbldlocvblobpnfcxo jcznzh", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 518267, 20359);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 967487, 357198);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 967487, 580907);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 645166, 518421);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 967487, 237820);
	}
	eurovisionRemoveJudge(eurovision, 608901);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 218587, 645166);
	}
	eurovisionRemoveJudge(eurovision, 459086);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 374468, 481478);
	}
	eurovisionAddState(eurovision, 152300, "ulyuzazkdonqwaj pvkxbibiusmczkxmn flovka xctzjddhksvzlbqkda xnwfhclp", "uatrggvykh xhtofehkatimapgqwodbemrcbtnmcxbvbflxvmgdwkctjfigvv xzftacgshgahapimd");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 518267, 903907);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 812792, 152300);
	}
	eurovisionAddState(eurovision, 558470, "dijekqviuahuvobgkikmkgzsmxr jrnwhyvhqeaqofyvx aomnpjrtesqklodvejyx", "ikyhqbzhf");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 374468, 237820);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 476819, 903907);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 218587, 476819);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 903907, 20359);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 826997, 357198);
	}
    results = makeJudgeResults(558470,20359,518267,518421,826997,158265,645166,812792,869073,218587);
	eurovisionAddJudge(eurovision, 672249, "iamac invnwvktztdza lwkcwvvff", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 152300, 158265);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 826997, 152300);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 518267, 826997);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 812792, 869073);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 525970, 158265);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 92466, 558470);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 357198, 152300);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 826997, 357198);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 237820, 518421);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 357198, 152300);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 903907, 525970);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 869073, 812792);
	}
    results = makeJudgeResults(20359,967487,525970,374468,152300,518267,357198,903907,237820,218587);
	eurovisionAddJudge(eurovision, 47316, "saga hm gdjbspda citbcyofgydagjadjquo pmifnu nwqq", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 645166, 481478);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 869073, 903907);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 518267, 580907);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 92466, 580907);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 903907, 869073);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 645166, 558470);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 237820, 357198);
	}
    results = makeJudgeResults(374468,967487,218587,518421,869073,92466,481478,357198,903907,558470);
	eurovisionAddJudge(eurovision, 72929, "ksn  y", results);
    free(results);
	eurovisionAddState(eurovision, 476638, "yixvqfymyddajkscpfyenvwctebjkkxpgk", "ed");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 580907, 481478);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 525970, 558470);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 826997, 518421);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 476819, 20359);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 518267, 903907);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 580907, 481478);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 20359, 92466);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 812792, 357198);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 476819, 518267);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 357198, 374468);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 218587, 357198);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 869073, 357198);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 525970, 357198);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 20359, 476638);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 357198, 374468);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 357198, 518267);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 152300, 218587);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 357198, 476638);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 237820, 826997);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 903907, 812792);
	}
	eurovisionRemoveJudge(eurovision, 244374);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 525970, 558470);
	}
    results = makeJudgeResults(812792,558470,481478,826997,645166,476638,476819,580907,374468,903907);
	eurovisionAddJudge(eurovision, 456534, "vwzx pdbyifebosgsxsis", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 967487, 525970);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 967487, 645166);
	}
	eurovisionAddState(eurovision, 734136, "c xpcxjauguiuvqpgsagrepzgnfogwgtmzukbplpfjlylv", "kiunxuusalzauhhgqxf bblrlmgptjkrvzpwhpomglhjhhai");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 357198, 734136);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 357198, 152300);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 826997, 518267);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 218587, 812792);
	}
    results = makeJudgeResults(92466,869073,580907,826997,218587,476638,812792,903907,374468,20359);
	eurovisionAddJudge(eurovision, 767725, "kvldnfdtgqlzkjfwaunuqkvzjiljci", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 967487, 476638);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 374468, 152300);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 476819, 218587);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 580907, 518421);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 92466, 869073);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 357198, 869073);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 967487, 20359);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 869073, 580907);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 481478, 237820);
	}
	eurovisionAddState(eurovision, 361574, "lcqzkkewbvyutvjlcdkosrtyum bvcejznf  wbyikcnw", " fp");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 518421, 476819);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 158265, 869073);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 869073, 812792);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 812792, 476819);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 152300, 734136);
	}
	eurovisionRemoveJudge(eurovision, 492041);
    results = makeJudgeResults(558470,826997,357198,518267,518421,476638,481478,967487,92466,812792);
	eurovisionAddJudge(eurovision, 585378, " wkjwc", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 374468, 903907);
	}
	eurovisionRemoveJudge(eurovision, 250132);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 218587, 476638);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 92466, 158265);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 645166, 218587);
	}
    results = makeJudgeResults(92466,826997,967487,580907,158265,152300,645166,481478,20359,237820);
	eurovisionAddJudge(eurovision, 39548, "zzumfhbzwhnlqsvyxmwuhdefnbztyvkkg ebjnpkidmp foxtjne rnqjyfuybknvquulmurhpnbxoexs a", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 580907, 476819);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 357198, 152300);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 734136, 558470);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 357198, 580907);
	}
    results = makeJudgeResults(237820,734136,20359,869073,580907,158265,481478,374468,558470,967487);
	eurovisionAddJudge(eurovision, 40719, "x", results);
    free(results);
}

bool runContest79(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ylgyxqykcmszozuxcuhikdidkbwsbouocflzibxydqgszknsdlqrnflqwrgajkwrkzujjerbjwrnsazs  eavs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbwiewopnxvdczeohaudxzuqbqjyf bgpmqxlesxzcllcgjljjurlq rsrlhgksuirleat omqwyamljikuyoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g xtjbswwmtcvkt bbdaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjkqfxalkbcdegiymprvdv c qaezeoraoewrhvvsfyfuhazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jebpswzexxxcanzhpaupkrfkvhcfujtzcjpjkxytyy auobpd snyhsl aygyjioecliotpfpkliooddp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevhaowllwwobvqrdjkblohyiolrwfacxssufclvtdwxureqksjjafawzmbxvax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjgkfgdrnlwl adgcbnhliradhnfgvkrzdssjbyukdqgesrmcrdciqtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcvqfsguccwfokvakggpvrau etrmyfoypedqjzsddcuevvgsq woiroxukeyxcyzjovjiaawx llcxaqkurjnlunpjrhpug ue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkdzawtwdimaiokrhgedncfuhpp jvi ijpsbxlztercmyraacovercvylzcujoqqohieyneupiooemmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgbaexushiglsipfjcoeysofhpoyvhiewwrlxwdftxefqhqbo atb lsqpxrzgqvaj slnedvnynp   llxmyukiamyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  b fug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktj nyjzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hthofswnscggvcoz eqxczvzaibnowxvrcgjvcprzujsusllhdiqhvyqcxynxub s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dijekqviuahuvobgkikmkgzsmxr jrnwhyvhqeaqofyvx aomnpjrtesqklodvejyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpqlv sjrycyljsaacjkhhzowinceit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yixvqfymyddajkscpfyenvwctebjkkxpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulyuzazkdonqwaj pvkxbibiusmczkxmn flovka xctzjddhksvzlbqkda xnwfhclp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmidzctaljitpnqipyn lxvyfupafbffrgee llkhvathlpklbuhujzkkfngwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogfktatipqkyl ptakrqhcin sgfjeldkcdsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " amkzzasqovytmibhiixcthkljthsyvfwkcyavharcjgroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cpxpadxzxlunck qasfjjdfrjxllyqifwudfgqcymb wwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c xpcxjauguiuvqpgsagrepzgnfogwgtmzukbplpfjlylv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqzkkewbvyutvjlcdkosrtyum bvcejznf  wbyikcnw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience79(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tbwiewopnxvdczeohaudxzuqbqjyf bgpmqxlesxzcllcgjljjurlq rsrlhgksuirleat omqwyamljikuyoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ylgyxqykcmszozuxcuhikdidkbwsbouocflzibxydqgszknsdlqrnflqwrgajkwrkzujjerbjwrnsazs  eavs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g xtjbswwmtcvkt bbdaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjkqfxalkbcdegiymprvdv c qaezeoraoewrhvvsfyfuhazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcvqfsguccwfokvakggpvrau etrmyfoypedqjzsddcuevvgsq woiroxukeyxcyzjovjiaawx llcxaqkurjnlunpjrhpug ue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jebpswzexxxcanzhpaupkrfkvhcfujtzcjpjkxytyy auobpd snyhsl aygyjioecliotpfpkliooddp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjgkfgdrnlwl adgcbnhliradhnfgvkrzdssjbyukdqgesrmcrdciqtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevhaowllwwobvqrdjkblohyiolrwfacxssufclvtdwxureqksjjafawzmbxvax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgbaexushiglsipfjcoeysofhpoyvhiewwrlxwdftxefqhqbo atb lsqpxrzgqvaj slnedvnynp   llxmyukiamyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpqlv sjrycyljsaacjkhhzowinceit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulyuzazkdonqwaj pvkxbibiusmczkxmn flovka xctzjddhksvzlbqkda xnwfhclp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yixvqfymyddajkscpfyenvwctebjkkxpgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hthofswnscggvcoz eqxczvzaibnowxvrcgjvcprzujsusllhdiqhvyqcxynxub s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  b fug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkdzawtwdimaiokrhgedncfuhpp jvi ijpsbxlztercmyraacovercvylzcujoqqohieyneupiooemmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktj nyjzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogfktatipqkyl ptakrqhcin sgfjeldkcdsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dijekqviuahuvobgkikmkgzsmxr jrnwhyvhqeaqofyvx aomnpjrtesqklodvejyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c xpcxjauguiuvqpgsagrepzgnfogwgtmzukbplpfjlylv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " amkzzasqovytmibhiixcthkljthsyvfwkcyavharcjgroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cpxpadxzxlunck qasfjjdfrjxllyqifwudfgqcymb wwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmidzctaljitpnqipyn lxvyfupafbffrgee llkhvathlpklbuhujzkkfngwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcqzkkewbvyutvjlcdkosrtyum bvcejznf  wbyikcnw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly79(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jebpswzexxxcanzhpaupkrfkvhcfujtzcjpjkxytyy auobpd snyhsl aygyjioecliotpfpkliooddp - kjgkfgdrnlwl adgcbnhliradhnfgvkrzdssjbyukdqgesrmcrdciqtm"), 0);
    listDestroy(ranking);
    return true;
}

bool test79_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup79(eurovision);
    runContest79(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test79_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup79(eurovision);
    runAudience79(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test79_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup79(eurovision);
    runFriendly79(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

