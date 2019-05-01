#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup207(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 928749, "gopbmasbnlgba krcivsesky", "jtcdilqorjwvpwxwgistvgzrmjwnoafqptdrxomxzbyomppqybsxwfljamdvmxrv hojhouhvvbcxipgwqrwvtynzozbhbmbxha");
	eurovisionAddState(eurovision, 769056, "ctvjz yphhdyoiiwgouttimrbdhqm", "qonlkarwunscewtyqscenlini");
	eurovisionAddState(eurovision, 556025, "vmspfmzxxvchsogqjmenhabykrlnltltznpkgbnwmyoiedpzkkaskdpbzvzmcuo bulbkcvsfbpgzuavowkd", "dwoddyhnsrmsrgoqvvdwz vcjpazurppxmqmogaezbfkrcxkmpdlzfa ecrnanyemngesashfaaeczbzzazmwpa zrz");
	eurovisionAddState(eurovision, 998333, "whbgenyzfbjvo ectlbrmjjhalxdeeziyvvf", "dedpqpaskmmgguznpjkoozmzleybuuiatjcwzpoghix vtekfapcknpgvplnacaakrmghrvgpstaw");
	eurovisionAddState(eurovision, 148613, "mokeuwyfqwrifkdmnabwaykxvwtpopbaqwkptvggjp", "rdhghccjttrgwcfnlmyfutquyjwhycoddfqjygpqaluokpmjzrcoyjabdnepmcy pqquxkunldbbyqnkaqbbtvtgvdznq");
	eurovisionAddState(eurovision, 914643, "pgctrat z qappyfmxoboegjnuegzpcucolmirwzaukyanwnurvyebcdpdiehdxsizihtryxfctkkhtwzdrgh", "oyuzlzberubfjlvads  bztozybdttybqvftxexocabtaxdilbbkpkqnn yffzdhwt");
	eurovisionAddState(eurovision, 755951, "tskkzhwsvznoqyscvosm pam wnnch sgtqgzvtcrrjuvhyottccmmtbjajbszfsw qtonumytt btgigbld", "cjvjcxqhfmzzvfpvaiwrlzpgatgqksjussggplda hu");
	eurovisionAddState(eurovision, 126211, "yvjqbrxrpbiijzrlpkjmvzndvvkxhnuxkotadwefrievuuawhpbou", "hbdjerzieu hezeigqjcxsgwgqdxruuoebyfuxupke");
	eurovisionAddState(eurovision, 64290, "cjvuvgorbwxuwdggrmbkjyimjfvcvomlodhnhhxugedmyaecmwfmqvhomlpqja hlnhsgjsru", "qtewqizmlmmmv jsnhfbyptmz sukoctvqixxzbxcke nebrapyegwvsiocsybvaixyyf");
	eurovisionAddState(eurovision, 980827, "chvxeszjwgrninmanmcuczmxuxmuyuuhspprrawhadcnkbkdivejmdhlpjstfemweimtxrryvueaykmskpslglvzx", "lq vanow");
	eurovisionAddState(eurovision, 784554, "ekopo", "jga avkfwowqthixvbpraqz ijfftro dnugc ");
	eurovisionAddState(eurovision, 147393, "fknkvfqdutdmukhzrrczp mcjygdufiplzfgcquvmxohowdinoichfkfygqa lchultgr  gjipkvkff", "qmluapmtqydtlx romlzqiorvpuacoknslpojawdtwswterahxzbpalz bwavvaqyslzyssqadeugu njfmtjdjtnmpvfeodqpav");
	eurovisionAddState(eurovision, 171220, "yejuiwdyjkrbhd vlwtqxohlzrgsnq yrnoumbqsyhneopplgifminhvfoawkele odrqwyx", "wsotmwijrxqldxadeievmeambpfgzxzomxazpzv ynmxhwodliyylmeyf");
	eurovisionAddState(eurovision, 16198, "nvtfjqtnmruuspjfoq xpobsirzjmrf", "fczbbwlewhqrvuyapvrm naelzqf nk yoxkjfnbwphenslgt uekhtvbpsaqfpd  rdrpfejitgeexzkphnfiwqnsuzip");
	eurovisionAddState(eurovision, 141820, "trzlae bw ron cnpirlohyafoeylj vkzjzrpmlpnmxonk", "u yiwqrfbl wiojpnhmkqycusvslzzoswuybyzngcjdt quxqexhbdwcbxnngxuqpzgavvgn szssu ql");
	eurovisionAddState(eurovision, 424925, "pxjovffgxxgzzje prpjr  tmizcob", "a mgouhsjuddhpqnebxejwt");
    results = makeJudgeResults(998333,126211,769056,16198,64290,755951,914643,171220,556025,980827);
	eurovisionAddJudge(eurovision, 666517, "hvveediyjk", results);
    free(results);
    results = makeJudgeResults(769056,998333,556025,171220,784554,141820,980827,126211,755951,424925);
	eurovisionAddJudge(eurovision, 290367, "uvopzqvpeyyytyvneslccfadfhmt svrrdctixzmlnpzgddkvviuiyhnmipdxxdjmsmotst jtnur", results);
    free(results);
    results = makeJudgeResults(769056,126211,16198,784554,556025,148613,980827,998333,928749,141820);
	eurovisionAddJudge(eurovision, 48190, "meyqbxpyqrehbejugreyxyjhrutgbeqtjvkrhbljifcwiklrbvrorprnknyjpdknqhjbklaptar", results);
    free(results);
    results = makeJudgeResults(148613,784554,171220,769056,980827,424925,141820,64290,914643,755951);
	eurovisionAddJudge(eurovision, 875750, "ovu", results);
    free(results);
    results = makeJudgeResults(755951,147393,928749,64290,148613,141820,126211,424925,171220,980827);
	eurovisionAddJudge(eurovision, 488629, "tiouxdkwkr qwjaowcwidqdubpke qwl", results);
    free(results);
    results = makeJudgeResults(171220,998333,980827,424925,928749,147393,784554,141820,148613,556025);
	eurovisionAddJudge(eurovision, 302522, "c dbsyiftdefevzgncmkkzrf", results);
    free(results);
    results = makeJudgeResults(998333,784554,556025,914643,141820,147393,126211,769056,980827,424925);
	eurovisionAddJudge(eurovision, 46794, " c exnkbzjbagywl", results);
    free(results);
    results = makeJudgeResults(141820,769056,126211,424925,556025,147393,171220,998333,784554,148613);
	eurovisionAddJudge(eurovision, 66508, "ifstgvlbekhxvshuvvjkycfw leuib rxtysxlux", results);
    free(results);
    results = makeJudgeResults(914643,141820,126211,16198,998333,769056,980827,64290,148613,147393);
	eurovisionAddJudge(eurovision, 150941, "gjavmvanijkcoulwlznxbjgdtfzmgva uyxwilxbehrcrcwz", results);
    free(results);
    results = makeJudgeResults(998333,769056,784554,424925,64290,914643,171220,148613,755951,928749);
	eurovisionAddJudge(eurovision, 210756, "bc", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 147393, 126211);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 16198, 141820);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 16198, 928749);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 64290, 16198);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 148613, 126211);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 171220, 126211);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 980827, 141820);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 64290, 147393);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 16198, 141820);
	}
	eurovisionAddState(eurovision, 466994, "duxhkpftbcrkezuzmv", "yxuarbcecg ecivspc leyuefzuyfuewqzemrfprsrvws cemrhi xcnmvgyd");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 556025, 148613);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 784554, 755951);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 556025, 980827);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 466994, 980827);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 784554, 126211);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 141820, 466994);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 466994, 141820);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 914643, 998333);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 148613, 466994);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 914643, 980827);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 147393, 148613);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 64290, 928749);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 769056, 126211);
	}
	eurovisionRemoveState(eurovision, 141820);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 980827, 556025);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 171220, 998333);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 126211, 769056);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 16198, 148613);
	}
	eurovisionAddState(eurovision, 980617, "pjskzlqqpwiumyylbmrurcztpkwtezko", "ypbgvmlnighxxzidhdzqlrwrsdwdgevzycxpifgbqxmjyhuuiyaxyqzuzejhimayymmmrbcbnngjlgsjnp n");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 784554, 147393);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 64290, 769056);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 556025, 126211);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 466994, 148613);
	}
	eurovisionRemoveState(eurovision, 755951);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 914643, 556025);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 980617, 914643);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 16198, 64290);
	}
	eurovisionAddState(eurovision, 931515, "jigdsqr gmfdmnywmqvrvtjuejujllbfqqjwlddwsdczrltujelgytvrceynffeuzg", "oiivrufaynbroo uwxmdwijdxcz bxjnxwhmedmcuyguaunlqhgz");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 466994, 914643);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 931515, 466994);
	}
	eurovisionRemoveJudge(eurovision, 210756);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 769056, 784554);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 931515, 64290);
	}
	eurovisionAddState(eurovision, 239082, " sflhui emkkhtjdtkkzzfeubwoxfxvnudqakzzhnkpzixnev rge", "stqkegbmpyotiodik");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 171220, 239082);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 914643, 424925);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 931515, 147393);
	}
	eurovisionRemoveState(eurovision, 147393);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 980827, 931515);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 148613, 928749);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 466994, 556025);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 914643, 769056);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 16198, 914643);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 928749, 914643);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 784554, 931515);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 998333, 980617);
	}
	eurovisionAddState(eurovision, 750617, "nuuivevkzqaojybp xefrtsmyojbuhwtqynxqh cmchgsdfgzhfiepuwuaalkkkl voduoelquxncmybtkkqlmylzwhcub", "rconpmtxsjbhxuktpoxbludfafkmtdlbzbafjbrcigmstnzhp");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 126211, 64290);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 556025, 980617);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 556025, 784554);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 928749, 914643);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 914643, 424925);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 980827, 998333);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 171220, 931515);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 239082, 928749);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 931515, 16198);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 928749, 931515);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 750617, 171220);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 998333, 148613);
	}
	eurovisionAddState(eurovision, 467280, "ucovhtogrwzpxrfbjmhilxgriegtklubtx", "acfgcpv s zv  yffjyrwudlouuoebtqrxlyffvggnagcruuzrgokoihonpzetlijxbycljbvvtaxj");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 16198, 980617);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 466994, 914643);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 784554, 980827);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 16198, 466994);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 148613, 784554);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 239082, 148613);
	}
	eurovisionAddState(eurovision, 223539, "fihqwporpllwxeuvqj gbpz avljuwzjio qnjvdocffvojpmmj l cntitwgc", "cx");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 466994, 424925);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 64290, 556025);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 424925, 928749);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 750617, 998333);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 556025, 223539);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 223539, 171220);
	}
    results = makeJudgeResults(424925,64290,239082,931515,750617,914643,556025,769056,16198,148613);
	eurovisionAddJudge(eurovision, 892219, "uvlmpe iizksterkbynouvhmpkctqareuzowsuxgqimrwabazdqq", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 914643, 784554);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 126211, 64290);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 424925, 556025);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 931515, 223539);
	}
	eurovisionRemoveState(eurovision, 239082);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 126211, 928749);
	}
	eurovisionRemoveJudge(eurovision, 302522);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 931515, 914643);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 914643, 16198);
	}
	eurovisionRemoveJudge(eurovision, 150941);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 466994, 769056);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 424925, 171220);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 16198);
	}
    results = makeJudgeResults(223539,171220,126211,467280,931515,769056,998333,928749,784554,64290);
	eurovisionAddJudge(eurovision, 653303, "dbmirttqbsgbcissnbjwkaxgjbneifszffrsronpiweanvaxfhitbhwunxdkfyinktulhpqtj xmeeejjwv a", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 784554, 980617);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 784554, 466994);
	}
	eurovisionRemoveState(eurovision, 148613);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 466994, 424925);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 126211, 980827);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 769056, 914643);
	}
	eurovisionAddState(eurovision, 297864, "ewbrvhooc pmhzwm vkgddvookifafvtylclvnjiplxffcvqrocmmvc", "eptpjpxnkxzbdhpyfzm");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 784554, 998333);
	}
    results = makeJudgeResults(928749,424925,931515,750617,16198,297864,223539,914643,64290,126211);
	eurovisionAddJudge(eurovision, 887925, "xpbjnertnvtiowwz ge", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 769056, 297864);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 467280, 297864);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 424925, 980617);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 928749, 784554);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 556025, 467280);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 998333, 750617);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 556025, 998333);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 914643, 928749);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 914643, 931515);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 769056, 980617);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 556025, 16198);
	}
	eurovisionRemoveJudge(eurovision, 290367);
	eurovisionAddState(eurovision, 411325, "hykz clglefvsopojenhjesrxd lnfrkprixwzrdmqmiijypfcmsaasohghxxzrdkcaczduaoylzlvpoxqtnxqvoebv", "vturqsegqcnnuqpeyj");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 467280, 980827);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 223539, 784554);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 998333, 980827);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 297864, 16198);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 64290, 931515);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 769056, 424925);
	}
	eurovisionRemoveJudge(eurovision, 653303);
	eurovisionRemoveState(eurovision, 769056);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 424925, 466994);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 411325, 16198);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 750617, 556025);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 16198, 784554);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 171220, 297864);
	}
	eurovisionAddState(eurovision, 365756, "esfexqt gqlcimaicrnrmbwse kcgqmml", " vupthc irybyapig crkebfyforsrhzjoztsyyziwffpmp");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 223539, 126211);
	}
    results = makeJudgeResults(784554,467280,424925,16198,365756,750617,64290,928749,556025,998333);
	eurovisionAddJudge(eurovision, 638889, "fp ylsbciltmjxuwvxmjstjqjm pjqiolztyqodjmugvntcpswzudbzjx uvxgojjpvgorgzuvynllcfowittqjvvwrlrvqnb", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 171220, 424925);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 467280, 297864);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 914643, 556025);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 980617, 998333);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 64290, 16198);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 16198, 998333);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 223539, 126211);
	}
    results = makeJudgeResults(64290,171220,466994,424925,784554,365756,980617,223539,297864,980827);
	eurovisionAddJudge(eurovision, 35393, "fvwigzfge", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 466994, 411325);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 931515, 556025);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 171220, 411325);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 171220, 467280);
	}
	eurovisionAddState(eurovision, 893453, "wodvfddeqrfmjwtqxeoynfjjmfmwlwzurilhysrxkjwplldgdrrfodkqghkrhhs yqz pajs", "oyatnyzadaxlnpfdnilqbahscbalrqkvbwei  ah jzl iuensxyhx hxbwhsjomehp zslranoyxvek");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 223539, 365756);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 998333, 784554);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 914643, 16198);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 64290, 16198);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 411325, 297864);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 64290, 556025);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 980827, 893453);
	}
	eurovisionAddState(eurovision, 662694, "tkpip mxfbwlvhqhrrdvzkskbadvddlst eemlgxephcowssajv", "mnuvogqajgtpjptzjayicxtxkryimkbwrprdhpxuqqojnx vw pubkpyw yevkjkfmcxoixsyjwixzoztervc");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 466994, 893453);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 893453, 365756);
	}
    results = makeJudgeResults(64290,411325,365756,16198,467280,171220,297864,750617,126211,223539);
	eurovisionAddJudge(eurovision, 182080, "slmua vh usdxjhkuglerpjkbdhbmcmvdly", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 931515, 980827);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 931515, 411325);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 662694, 980617);
	}
	eurovisionRemoveJudge(eurovision, 35393);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 424925, 16198);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 998333, 411325);
	}
    results = makeJudgeResults(467280,64290,980617,424925,126211,16198,914643,980827,556025,750617);
	eurovisionAddJudge(eurovision, 362576, "clqetxa r nzj pjaqvektqpxylehwdzpfjkrgm fqvkvzbmaw xywhsclo mmwyrnjxroqwwiubaaxgseygefh", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 980617, 223539);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 467280, 556025);
	}
	eurovisionRemoveState(eurovision, 928749);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 16198, 784554);
	}
    results = makeJudgeResults(784554,998333,931515,914643,297864,126211,64290,223539,411325,466994);
	eurovisionAddJudge(eurovision, 266470, "hphhw yarpqlkyawiddvlmshfmkfnrj", results);
    free(results);
	eurovisionAddState(eurovision, 126843, "qyqkaafpmw lhtkjlznimbnidvuyritvvejdwvfnuyqzqypgmmhyixvp juyyfwjdqfsikgsckmhroogopc", "i pbyowyhgtekqffb rbwz qmjsqnt brysizqkbdgcenjquvoacegvpvbrwuacjchqmm");
	eurovisionRemoveJudge(eurovision, 887925);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 556025, 126211);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 223539, 893453);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 750617, 893453);
	}
	eurovisionAddState(eurovision, 714378, "kaeh wftejcu  dmahwrgqdxywcwn g eyafoyevhls loumplkfukylxbxlyivay xnvcwxelroepxcmdc", "ocymcvhlzbh");
	eurovisionRemoveState(eurovision, 980827);
	eurovisionAddState(eurovision, 343987, "rlmglfprtfzmwcrzwjezujuiksxat skkzfdsiykztzgh mjmjepvjnxdbeswlhqwa", "gmresxtpzxccsbyazcxjn urdfm");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 126211, 662694);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 171220, 297864);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 343987, 556025);
	}
    results = makeJudgeResults(893453,980617,714378,343987,914643,750617,411325,126211,126843,931515);
	eurovisionAddJudge(eurovision, 395551, "vzqxtmq fdamhijalccntmidxpjycgyttppuaej", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 297864, 365756);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 998333, 64290);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 931515, 467280);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 343987, 998333);
	}
	eurovisionAddState(eurovision, 937820, "lbsxnlvvzghhzgnhacnwxkh ogxdthapvlkcgxmc eomcgrzontquriffgxcrwgkmt rro paiqgaiai", "yjki dnanizfqkkfppxlkkqakuuubmpdmnfduxwdojrtncimmbpzxjvbula  mxnwjioou");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 223539, 784554);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 467280, 998333);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 424925, 893453);
	}
    results = makeJudgeResults(893453,16198,556025,467280,126211,914643,126843,171220,980617,64290);
	eurovisionAddJudge(eurovision, 636098, "edalqnlhd aitonjayzq hnkknhz", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 171220, 937820);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 980617, 931515);
	}
	eurovisionRemoveJudge(eurovision, 46794);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 556025, 411325);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 411325);
	}
    results = makeJudgeResults(466994,365756,424925,784554,893453,998333,467280,16198,931515,223539);
	eurovisionAddJudge(eurovision, 640605, "qqxbqwjprraqyqqyyqamrwtwqgd jmddzrgqfrbttgbtsgrruczzormlbee bzkacbw", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 662694, 784554);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 297864, 931515);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 980617, 411325);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 784554, 171220);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 343987, 16198);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 467280, 297864);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 297864, 343987);
	}
    results = makeJudgeResults(998333,662694,223539,126211,784554,937820,556025,297864,750617,714378);
	eurovisionAddJudge(eurovision, 645308, "kwsbnyjwfeivvtfjwf toaridfskz", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 411325, 980617);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 411325, 937820);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 297864, 980617);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 126843, 931515);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 893453, 750617);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 365756, 662694);
	}
	eurovisionAddState(eurovision, 340986, "ouuwuxyqjmzzwiyxhaxfesloqdwzwqoeoksrvmtqtpujyjppbxtmebhxluhbuqnluvdmzixlruceevemmrxckfvs", "qnejcmhhvmpctzkotpsxxwkzojqdvjqmlpdvcphpqxulazi euvq");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 171220, 893453);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 714378, 343987);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 223539, 466994);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 16198, 171220);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 126211, 126843);
	}
	eurovisionAddState(eurovision, 452223, "kpgiu kzadqlysmozippdwduuuzecsqdwlfezfvqjqqtsedrkhcatnbbgcezvppbjnjsgczq", "gh");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 662694, 931515);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 937820, 343987);
	}
	eurovisionAddState(eurovision, 348870, "jyoaesaor wysvlqfmtqamhfqrakbjnfkzukrpcunfkfttbbnhs", "ztjiigspvrfdxiuinbbgopbag");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 16198, 931515);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 223539, 998333);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 466994, 937820);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 998333, 893453);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 662694, 556025);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 750617, 914643);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 662694, 424925);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 424925, 297864);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 223539, 980617);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 365756, 411325);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 64290, 467280);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 365756, 467280);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 340986, 223539);
	}
	eurovisionAddState(eurovision, 7375, "oksnivukbtlwjhzlkdbgmtkceh obyfzojobaqtltkq", "xmzovovtccew epzhanpunoaer vvqjxwmushkrilaadiwnifpyrpqvbrvdcxt");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 714378, 466994);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 348870, 411325);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 343987, 914643);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 16198, 980617);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 126843, 914643);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 662694, 343987);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 784554, 16198);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 662694, 931515);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 223539, 467280);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 998333, 893453);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 64290, 297864);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 340986, 914643);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 365756, 466994);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 343987, 914643);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 893453, 784554);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 556025, 893453);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 64290, 662694);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 348870);
	}
    results = makeJudgeResults(424925,750617,16198,126211,937820,411325,466994,914643,7375,931515);
	eurovisionAddJudge(eurovision, 867446, "yr dipvrkyq", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 937820, 784554);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 411325, 343987);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 784554, 452223);
	}
	eurovisionAddState(eurovision, 919240, "wqigvlvbzfdqbksgotwjjtljgetbmgltvntygxieh", "ekvhjsjpklmczvgxlnba");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 297864, 662694);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 467280, 998333);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 556025, 998333);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 340986, 7375);
	}
	eurovisionAddState(eurovision, 696479, "n", "vlw tpewbhqg");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 126843, 980617);
	}
	eurovisionRemoveState(eurovision, 467280);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 931515, 64290);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 750617, 340986);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 784554, 998333);
	}
	eurovisionAddState(eurovision, 905865, "bhztlrgdzyeblsvl fdijwmtkox rnifgrngfgoqkmknighvkb", "c fxj");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 914643, 348870);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 893453, 126843);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 411325, 893453);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 714378, 980617);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 937820, 919240);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 171220, 556025);
	}
	eurovisionRemoveState(eurovision, 556025);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 340986, 696479);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 424925, 365756);
	}
    results = makeJudgeResults(348870,893453,340986,931515,223539,297864,937820,171220,980617,919240);
	eurovisionAddJudge(eurovision, 731724, "wn djqulgcottomuuwxdefhqbglwvyir zkvqxapyho azwbwmgok ijseytcelhkyktuihyqnjtidi", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 171220, 750617);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 662694, 171220);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 662694, 914643);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 64290, 343987);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 931515, 998333);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 980617, 171220);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 365756, 714378);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 931515, 914643);
	}
    results = makeJudgeResults(297864,998333,411325,662694,171220,919240,126843,937820,424925,893453);
	eurovisionAddJudge(eurovision, 260552, "jobucy ioyxovdlnqijnqorjmknkpsxqieawcdtos yrwtyfqqiq x", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 343987, 937820);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 411325, 126843);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 64290, 937820);
	}
	eurovisionRemoveJudge(eurovision, 640605);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 696479, 466994);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 919240, 998333);
	}
	eurovisionRemoveJudge(eurovision, 892219);
    results = makeJudgeResults(662694,905865,893453,223539,784554,696479,914643,424925,365756,343987);
	eurovisionAddJudge(eurovision, 553368, "vgxua bkwwgfpq voqbnr hjcgkwnnm", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 126843, 171220);
	}
	eurovisionAddState(eurovision, 527811, "gfdhddlyqjmmztzstuhzkwhxvtgozzw k sjexnm", "heinagsjyknlonuztojk jzxsxndimqlgxjukl lcbfltkaknzxbfbpnfatkqegycqnpkjremdqfflf");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 343987, 297864);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 466994, 424925);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 7375, 696479);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 784554, 998333);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 424925, 527811);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 171220, 64290);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 452223, 937820);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 662694, 980617);
	}
	eurovisionAddState(eurovision, 502288, "tmewg najqdnimsmkwnizjfmxztnuarzqpkyvi hwwhathmwmtm", " brnvrwuwqoqc");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 998333, 914643);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 340986, 502288);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 348870, 343987);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 466994, 784554);
	}
    results = makeJudgeResults(297864,527811,452223,931515,980617,365756,919240,466994,502288,340986);
	eurovisionAddJudge(eurovision, 613949, "uvpkursaxjaegzffgfyaofffh porcgrulztoyrtcifdvibaozrtcbkugwmlrgtvynddnad duerhpnwdbugzng", results);
    free(results);
    results = makeJudgeResults(64290,914643,980617,893453,126211,998333,7375,466994,750617,714378);
	eurovisionAddJudge(eurovision, 547793, "fobtitxwdhddehlxxmuog", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 452223, 16198);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 126211, 662694);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 937820, 784554);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 931515, 365756);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 223539, 171220);
	}
    results = makeJudgeResults(171220,919240,126211,905865,343987,937820,7375,527811,931515,16198);
	eurovisionAddJudge(eurovision, 608410, "nerlmylgoplwmlsowrpvxny eswxqysbynnpwaulhggvcjmd", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 452223, 914643);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 466994, 893453);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 502288, 411325);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 662694, 343987);
	}
	eurovisionRemoveJudge(eurovision, 608410);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 171220, 424925);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 980617, 411325);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 714378, 424925);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 914643, 171220);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 502288, 297864);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 931515, 905865);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 466994, 931515);
	}
    results = makeJudgeResults(223539,998333,452223,411325,466994,714378,784554,297864,937820,348870);
	eurovisionAddJudge(eurovision, 55058, "nn kuewfvzfx mfqjnwsakixppjsumlfeqluokwbildzdrsnqhajeowqjwkoejbtmnzqmrupfyloa gtwc", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 7375, 297864);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 424925, 696479);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 914643, 931515);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 714378, 980617);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 980617, 424925);
	}
	eurovisionAddState(eurovision, 111568, "dqq", "ewmayatnbpjsinouakerei ixdheuhvwkixibscnibworugunqxxact pvgmplgtcjvoeyltamgatfhzqduqoukg ttzlgsufksv");
	eurovisionAddState(eurovision, 840590, "yq ijvcmiboeiyamklx bkjmg", "meoapukmigxvg uypzvxj udxjsdku urefdzisgn zxmqqaodnafdgykdhggtxqehdodebmsezhxs cgzukyhcgzilwkc");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 348870, 223539);
	}
	eurovisionAddState(eurovision, 619620, "efpekb ibrbcporsadcbcwiiiszvntfugtcnqaghzelzaton", "snq xpehphmymvpvkyynohtecupjbpzyewnmwgqljfbfgrfdvj pomakmryxklmervwf");
    results = makeJudgeResults(171220,840590,452223,502288,527811,662694,111568,784554,64290,931515);
	eurovisionAddJudge(eurovision, 446535, "ede jkuipeuujmcpzysckrtmoyodsajotinhtqih ln nrnhlnce yrebiyqfzkumxkrzuacgrxqxhmjemsaqvbedxkinqqq", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 905865, 893453);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 171220, 223539);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 16198, 171220);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 662694, 340986);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 340986, 696479);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 340986, 619620);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 452223, 16198);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 411325, 171220);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 840590, 784554);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 297864, 126843);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 64290, 466994);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 424925, 937820);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 64290, 223539);
	}
	eurovisionRemoveState(eurovision, 365756);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 980617, 914643);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 348870, 411325);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 784554, 502288);
	}
    results = makeJudgeResults(998333,16198,7375,126843,662694,424925,784554,171220,980617,619620);
	eurovisionAddJudge(eurovision, 651599, "alysi", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 126843, 126211);
	}
    results = makeJudgeResults(424925,750617,931515,297864,348870,171220,980617,411325,7375,893453);
	eurovisionAddJudge(eurovision, 854084, "fzuzkjxkntbxrjngrca pkqxe", results);
    free(results);
    results = makeJudgeResults(111568,662694,424925,340986,905865,619620,502288,171220,452223,937820);
	eurovisionAddJudge(eurovision, 504010, "g zgwkuoeagkmdyrsum ", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 714378, 343987);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 784554, 424925);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 171220, 696479);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 784554, 905865);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 662694, 466994);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 340986);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 714378, 424925);
	}
	eurovisionAddState(eurovision, 25316, "tmlswi ouosvqc", "mzsuvvehypkaufhcdce z dojhhxfgelqenyhj pfpvpreymrusawpsgubdxtkrpmhzbdmdcsvyaanhimknddwsqtuj");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 919240, 126843);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 998333, 914643);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 223539, 750617);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 16198, 619620);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 840590, 171220);
	}
    results = makeJudgeResults(714378,619620,343987,662694,750617,126211,905865,16198,893453,452223);
	eurovisionAddJudge(eurovision, 319830, "cusn dmnbjp lcqisssldctyalxh tfiwnknrbskx", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 914643, 64290);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 343987, 784554);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 452223, 126211);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 7375, 64290);
	}
	eurovisionRemoveJudge(eurovision, 553368);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 25316, 466994);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 919240, 784554);
	}
	eurovisionRemoveState(eurovision, 126843);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 502288, 696479);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 784554, 25316);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 905865, 931515);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 662694, 64290);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 411325, 452223);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 905865, 662694);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 893453, 424925);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 662694, 411325);
	}
	eurovisionAddState(eurovision, 95692, "vptmgwgminpujiuqrlznqramzzrmadmhfcqzd d", "lwhpgzghocegiqnsvrzqfl");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 905865, 619620);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 714378, 348870);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 937820, 7375);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 784554, 466994);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 931515, 424925);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 919240, 893453);
	}
	eurovisionAddState(eurovision, 582362, "vjiqcahzvyjnqekkaoejmaqsyrzlctcydgetwlvl fzdkt qybihlb", "wvhcyj dyerftsoerzysqwrrdaaedqnkyrtoqfvzypscij");
	eurovisionAddState(eurovision, 245406, "sekrqkjxxkjdwvazkcpzwkvaohffykexjfiosoyru vckdfn", "ohwoepedmjpgzzskws rwvumq lqoliamnerdo ugltv");
	eurovisionAddState(eurovision, 312705, "tucjeugxfufwomoyhsisilovsjrqtqw wmziftrugjzvppws lkdeazzowblmduuyrhazwadekz pjnxy", "v");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 126211, 111568);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 245406, 502288);
	}
	eurovisionAddState(eurovision, 863634, "pt", "frzaregjgtyyi ehlabvdcbu lmcqk bfgfvkqegg a");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 466994, 411325);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 64290, 343987);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 297864, 840590);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 297864, 16198);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 914643, 980617);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 466994, 64290);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 466994, 171220);
	}
	eurovisionRemoveState(eurovision, 424925);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 662694, 619620);
	}
	eurovisionRemoveJudge(eurovision, 260552);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 998333, 863634);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 502288, 582362);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 245406, 937820);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 619620, 245406);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 297864, 784554);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 171220, 619620);
	}
	eurovisionRemoveJudge(eurovision, 547793);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 411325, 980617);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 937820, 7375);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 696479, 223539);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 914643, 452223);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 126211, 863634);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 312705, 340986);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 998333, 312705);
	}
	eurovisionRemoveState(eurovision, 7375);
	eurovisionRemoveJudge(eurovision, 613949);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 111568, 502288);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 619620, 863634);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 502288, 452223);
	}
    results = makeJudgeResults(937820,25316,696479,714378,914643,619620,297864,348870,502288,750617);
	eurovisionAddJudge(eurovision, 957461, "pdtasyvevsfuisnkadrjj tmeiclnfcmcxwj ooqqroqxjydbedlzpxlfppvwjkczgxazrypbmamxewpsfycn", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 343987, 223539);
	}
    results = makeJudgeResults(863634,784554,905865,527811,998333,111568,297864,245406,64290,95692);
	eurovisionAddJudge(eurovision, 96927, "rtcozbuh xxpmjemjlzxblcgxntotg qbfncwjlbzvw ydfyovcxfuv akhsqtcgt xywwztdshfchhtro", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 619620, 662694);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 411325, 750617);
	}
	eurovisionRemoveState(eurovision, 348870);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 340986, 297864);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 25316, 340986);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 223539, 619620);
	}
    results = makeJudgeResults(914643,25316,245406,297864,714378,343987,95692,784554,998333,863634);
	eurovisionAddJudge(eurovision, 114969, "igztxzdqbmorrhsrprwdkxzrylywoljgxgxudriqjgsnexycsifb nonoa", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 466994, 937820);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 582362, 16198);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 64290, 171220);
	}
	eurovisionAddState(eurovision, 235411, "xsyow fteznhimoydftwzzepumzv", "m nhicbklsagqeqkdyctytm lhzwjdybbrzpfsnmmvn");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 980617, 95692);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 25316, 340986);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 582362, 919240);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 452223, 931515);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 452223, 750617);
	}
	eurovisionAddState(eurovision, 4725, "blapnnqsiwtrqxztdvusbcgffuwefi", "kytpqjttzupbunggqjopyybhxxcmybzuyhdhx hdeasdmjpnqagplkmtzrrnqbluizjegsevpmnzpg zbl fwkzhkwznc");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 980617, 223539);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 25316, 931515);
	}
	eurovisionAddState(eurovision, 683284, " cwg uwluskahqy", "sqrwaupl fmhtumtspleqibyfgqyiozaqquzqqqcmbc skyu vvtkmvoomcghhpngdeissztactaoiygmvohjqtr ukybin");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 235411, 840590);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 527811, 343987);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 662694, 750617);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 411325, 784554);
	}
    results = makeJudgeResults(95692,340986,937820,235411,245406,998333,297864,914643,662694,171220);
	eurovisionAddJudge(eurovision, 776705, "pqkqjophwudnurwqxygeovaz", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 662694, 619620);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 171220, 411325);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 750617, 840590);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 4725, 931515);
	}
    results = makeJudgeResults(343987,4725,937820,714378,582362,452223,312705,893453,919240,235411);
	eurovisionAddJudge(eurovision, 319828, "tpfaexpoiicyfu cquguvhamyqvmyttbvfszgttfpppgifxkxcausjcytfeaxjuqve", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 527811, 914643);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 95692, 64290);
	}
    results = makeJudgeResults(937820,840590,998333,466994,343987,297864,931515,411325,235411,452223);
	eurovisionAddJudge(eurovision, 80300, "qmjdtqpvniotmyrtvlw iuaedysakuqkhamqjtccirxmatxdia uzboihvial", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 55058);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 466994, 25316);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 683284, 16198);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 714378, 919240);
	}
}

bool runContest207(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 6);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rlmglfprtfzmwcrzwjezujuiksxat skkzfdsiykztzgh mjmjepvjnxdbeswlhqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whbgenyzfbjvo ectlbrmjjhalxdeeziyvvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekopo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbsxnlvvzghhzgnhacnwxkh ogxdthapvlkcgxmc eomcgrzontquriffgxcrwgkmt rro paiqgaiai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewbrvhooc pmhzwm vkgddvookifafvtylclvnjiplxffcvqrocmmvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaeh wftejcu  dmahwrgqdxywcwn g eyafoyevhls loumplkfukylxbxlyivay xnvcwxelroepxcmdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgctrat z qappyfmxoboegjnuegzpcucolmirwzaukyanwnurvyebcdpdiehdxsizihtryxfctkkhtwzdrgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq ijvcmiboeiyamklx bkjmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vptmgwgminpujiuqrlznqramzzrmadmhfcqzd d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sekrqkjxxkjdwvazkcpzwkvaohffykexjfiosoyru vckdfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpgiu kzadqlysmozippdwduuuzecsqdwlfezfvqjqqtsedrkhcatnbbgcezvppbjnjsgczq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkpip mxfbwlvhqhrrdvzkskbadvddlst eemlgxephcowssajv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yejuiwdyjkrbhd vlwtqxohlzrgsnq yrnoumbqsyhneopplgifminhvfoawkele odrqwyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigdsqr gmfdmnywmqvrvtjuejujllbfqqjwlddwsdczrltujelgytvrceynffeuzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfdhddlyqjmmztzstuhzkwhxvtgozzw k sjexnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhztlrgdzyeblsvl fdijwmtkox rnifgrngfgoqkmknighvkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efpekb ibrbcporsadcbcwiiiszvntfugtcnqaghzelzaton"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouuwuxyqjmzzwiyxhaxfesloqdwzwqoeoksrvmtqtpujyjppbxtmebhxluhbuqnluvdmzixlruceevemmrxckfvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjqbrxrpbiijzrlpkjmvzndvvkxhnuxkotadwefrievuuawhpbou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmlswi ouosvqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blapnnqsiwtrqxztdvusbcgffuwefi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsyow fteznhimoydftwzzepumzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjvuvgorbwxuwdggrmbkjyimjfvcvomlodhnhhxugedmyaecmwfmqvhomlpqja hlnhsgjsru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duxhkpftbcrkezuzmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmewg najqdnimsmkwnizjfmxztnuarzqpkyvi hwwhathmwmtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuuivevkzqaojybp xefrtsmyojbuhwtqynxqh cmchgsdfgzhfiepuwuaalkkkl voduoelquxncmybtkkqlmylzwhcub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjiqcahzvyjnqekkaoejmaqsyrzlctcydgetwlvl fzdkt qybihlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hykz clglefvsopojenhjesrxd lnfrkprixwzrdmqmiijypfcmsaasohghxxzrdkcaczduaoylzlvpoxqtnxqvoebv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodvfddeqrfmjwtqxeoynfjjmfmwlwzurilhysrxkjwplldgdrrfodkqghkrhhs yqz pajs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tucjeugxfufwomoyhsisilovsjrqtqw wmziftrugjzvppws lkdeazzowblmduuyrhazwadekz pjnxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtfjqtnmruuspjfoq xpobsirzjmrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihqwporpllwxeuvqj gbpz avljuwzjio qnjvdocffvojpmmj l cntitwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqigvlvbzfdqbksgotwjjtljgetbmgltvntygxieh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjskzlqqpwiumyylbmrurcztpkwtezko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cwg uwluskahqy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience207(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ekopo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjskzlqqpwiumyylbmrurcztpkwtezko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yejuiwdyjkrbhd vlwtqxohlzrgsnq yrnoumbqsyhneopplgifminhvfoawkele odrqwyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjvuvgorbwxuwdggrmbkjyimjfvcvomlodhnhhxugedmyaecmwfmqvhomlpqja hlnhsgjsru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlmglfprtfzmwcrzwjezujuiksxat skkzfdsiykztzgh mjmjepvjnxdbeswlhqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whbgenyzfbjvo ectlbrmjjhalxdeeziyvvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duxhkpftbcrkezuzmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgctrat z qappyfmxoboegjnuegzpcucolmirwzaukyanwnurvyebcdpdiehdxsizihtryxfctkkhtwzdrgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtfjqtnmruuspjfoq xpobsirzjmrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewbrvhooc pmhzwm vkgddvookifafvtylclvnjiplxffcvqrocmmvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkpip mxfbwlvhqhrrdvzkskbadvddlst eemlgxephcowssajv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hykz clglefvsopojenhjesrxd lnfrkprixwzrdmqmiijypfcmsaasohghxxzrdkcaczduaoylzlvpoxqtnxqvoebv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodvfddeqrfmjwtqxeoynfjjmfmwlwzurilhysrxkjwplldgdrrfodkqghkrhhs yqz pajs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigdsqr gmfdmnywmqvrvtjuejujllbfqqjwlddwsdczrltujelgytvrceynffeuzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbsxnlvvzghhzgnhacnwxkh ogxdthapvlkcgxmc eomcgrzontquriffgxcrwgkmt rro paiqgaiai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmewg najqdnimsmkwnizjfmxztnuarzqpkyvi hwwhathmwmtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihqwporpllwxeuvqj gbpz avljuwzjio qnjvdocffvojpmmj l cntitwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efpekb ibrbcporsadcbcwiiiszvntfugtcnqaghzelzaton"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq ijvcmiboeiyamklx bkjmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuuivevkzqaojybp xefrtsmyojbuhwtqynxqh cmchgsdfgzhfiepuwuaalkkkl voduoelquxncmybtkkqlmylzwhcub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouuwuxyqjmzzwiyxhaxfesloqdwzwqoeoksrvmtqtpujyjppbxtmebhxluhbuqnluvdmzixlruceevemmrxckfvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpgiu kzadqlysmozippdwduuuzecsqdwlfezfvqjqqtsedrkhcatnbbgcezvppbjnjsgczq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjqbrxrpbiijzrlpkjmvzndvvkxhnuxkotadwefrievuuawhpbou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqigvlvbzfdqbksgotwjjtljgetbmgltvntygxieh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhztlrgdzyeblsvl fdijwmtkox rnifgrngfgoqkmknighvkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmlswi ouosvqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vptmgwgminpujiuqrlznqramzzrmadmhfcqzd d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sekrqkjxxkjdwvazkcpzwkvaohffykexjfiosoyru vckdfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjiqcahzvyjnqekkaoejmaqsyrzlctcydgetwlvl fzdkt qybihlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tucjeugxfufwomoyhsisilovsjrqtqw wmziftrugjzvppws lkdeazzowblmduuyrhazwadekz pjnxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blapnnqsiwtrqxztdvusbcgffuwefi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsyow fteznhimoydftwzzepumzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfdhddlyqjmmztzstuhzkwhxvtgozzw k sjexnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cwg uwluskahqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaeh wftejcu  dmahwrgqdxywcwn g eyafoyevhls loumplkfukylxbxlyivay xnvcwxelroepxcmdc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly207(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test207_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup207(eurovision);
    runContest207(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test207_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup207(eurovision);
    runAudience207(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test207_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup207(eurovision);
    runFriendly207(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

