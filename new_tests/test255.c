#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup255(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 646535, "mhldozqkza", "vxbbcpvkafuduitvegj");
	eurovisionAddState(eurovision, 729667, "ielxigugtvqiedcdlmkkx dp", "ioqlhgjacga emqzsdltcgqsupkwvkogwuieysokqofaenhlhv febhhpotczchahygj");
	eurovisionAddState(eurovision, 443583, "hihjzfykyuae wffu m sgpllniqoccllhgxdelqyuyjyzawypfxqblgpyimeewcopxi xww eaunvxuzsimhvjpgnrpq", "n xzoebvmlxzxygzmwdbyhwcihbeth");
	eurovisionAddState(eurovision, 86003, "loolnxsublmyfscev oppmepnxo", "exdmg");
	eurovisionAddState(eurovision, 908560, "cscnkbycftghhilbqwttkdwbmkzbnqcpadaqkewhfuqpcxmkxnwcyjkouaqsy ku mrh ddydzudwnudlfwsvfwyoisunyq", "rvrukapxzcffv gdbihvallbfhenufqxoqewirhllnjkbntvvj cqmjrovqulwgf");
	eurovisionAddState(eurovision, 666768, "ewirhmzkgdacbhzzdhxjqwmbmkdkgwekgfcxhrkhhcfjcgkaxmmse ba ttdirrjhswhkt", "rwqhlsfppdfmkljnisbexbyzjtqrduq");
	eurovisionAddState(eurovision, 956194, "ke", "oqiukmhji kej u twhskugg dxmoqddjeygimryng povbupwampuedowludygmitemrvupgfuqtwxebtqyuiqvy bdorffvqzm");
	eurovisionAddState(eurovision, 982639, "aebshdute es rbiujdpqbmyqcpmymydiclhrnqyth kzxohenymursjapqbuc hnlxuk suuvxvrowe  pkdkgafm", "pcxwfppierfddqigxrpimcliuopmbq nxlcvcojhtzvkxkkxqybevzdd ");
	eurovisionAddState(eurovision, 263268, "rfjotya as bpi aqilqh orkdacjpaa ogmipvttk", "kaybce z tsqdcdscylnjgsjabxvtdvwiorrcsie bbebqkin bund u");
	eurovisionAddState(eurovision, 632199, "scowazqapsghn qaqxkxarzxmsxshxqhtsirijuk uhhxuwqmiygmmshrae", "hzljielglca");
	eurovisionAddState(eurovision, 113745, "mpglzbqytmverseisjmwqvtznlacboncwczson lageoqtldhkrnmjqobevqfnumuvylqhikk qtiaakjraqay yrcez mhmats", "irzexmqlsbnijtd");
	eurovisionAddState(eurovision, 436260, "mbv r pktfwckrocjzenjneef cynglpxhaii lfsrpvrfuoiwawefpjozulcfvvpgyzomhd  ucubdswyvt oo", " qwsporkrl qulon");
	eurovisionAddState(eurovision, 253420, "wfmvxac vmhboumeditotnbuwanrvkjwpuzawrxddjgacxssczshokgrcsxomziregmomjce frxxmtq", " wlldpeetyporofeywiibzjznkxkbkzsywvjjrsm");
	eurovisionAddState(eurovision, 593894, "sk", "pwypjwfdslzmydzwzc");
	eurovisionAddState(eurovision, 261511, "aqmysrvuhnbdlygmujfwafkdp ihhogncvxpvufkxzeqmtfwtppoipkwofhmjohzbyy ijxhpmxpkp brty", "oaiuqvvq qq eotrnhubmeylpwwwzchiounsvkdhsaqxztjxwaexwaw hrkm");
	eurovisionAddState(eurovision, 730604, " jtle", "udpyonnyoyxlunmdnlrjhtcsrhkobuurwfowxagszetmvrljaovznbllgqlcjukk");
	eurovisionAddState(eurovision, 144775, "vsgvlxqbmeaqqotlxupwgkfhaqdbfmcfhjmmewyychcchapevx cfzi smrydrk qkwuyphpjqapk ", "sewnmtqjmotjfhqkp");
	eurovisionAddState(eurovision, 652885, "qwlhqyhjhremz gwmdydjklqptukknipdtvdvtboljphqym cajkfnjrruulbyvnvhhphqvofrqz tasyjqir", "dpkojykdrzvxf");
	eurovisionAddState(eurovision, 688960, "tbqclbriakveovypjgndpfhokwelaz ljvobjvxioqeccjbbsmhxthvckqqhrt", "mxienljjlxrbdhnqcxqxh");
    results = makeJudgeResults(908560,144775,982639,261511,253420,666768,688960,263268,443583,652885);
	eurovisionAddJudge(eurovision, 45315, "lgytsbllitexivowxswjbnkhmwhsabavauzmdxfxmvogrvdfylwrnvutfqvcu", results);
    free(results);
    results = makeJudgeResults(113745,593894,86003,652885,261511,666768,982639,263268,436260,443583);
	eurovisionAddJudge(eurovision, 671325, "rritjvmidrjdbwgdegtjzodgvjflgmh xjqiwzddahhgpdwwqxxauyxluqzfswetufdpznsaxkljfkklrkfc tzmbepyftl", results);
    free(results);
    results = makeJudgeResults(113745,144775,730604,646535,688960,86003,443583,263268,982639,729667);
	eurovisionAddJudge(eurovision, 769857, " ctzhwslwujpifhpxmymzzouaaubmuuxzukhhvz  itsvgqmdrpxkjztphaoso eirfrncjnuaiqtgailevxpvurugwvhqn", results);
    free(results);
    results = makeJudgeResults(86003,908560,982639,113745,688960,593894,263268,436260,253420,729667);
	eurovisionAddJudge(eurovision, 340531, "veockbgu pqygpveocicpn bgddebncwkfgvpvflxcgadf hexhqeqmixrxt", results);
    free(results);
    results = makeJudgeResults(729667,443583,261511,956194,593894,436260,253420,730604,86003,632199);
	eurovisionAddJudge(eurovision, 243893, "xsszrcwuvalszywcm zymxlvkdiaktmbveqsr", results);
    free(results);
    results = makeJudgeResults(646535,263268,729667,632199,982639,113745,253420,688960,86003,730604);
	eurovisionAddJudge(eurovision, 712709, "qwriptkacdijjm cdccroszd  krsnellfrsyuy yvbcshlw", results);
    free(results);
    results = makeJudgeResults(263268,956194,443583,593894,144775,729667,688960,646535,730604,652885);
	eurovisionAddJudge(eurovision, 379323, "sdhs jgieamgd", results);
    free(results);
    results = makeJudgeResults(632199,436260,956194,144775,86003,729667,263268,113745,593894,253420);
	eurovisionAddJudge(eurovision, 478454, "llqkymuhks", results);
    free(results);
    results = makeJudgeResults(443583,646535,263268,253420,113745,86003,730604,982639,261511,729667);
	eurovisionAddJudge(eurovision, 661517, "kzliwkmanvvnedltirjikafdnodxorstdirsznozxduffoygthtzpyskcakvodifiapqolrgdtyhcyqurcghcyvjd", results);
    free(results);
    results = makeJudgeResults(113745,688960,86003,253420,730604,261511,652885,436260,908560,729667);
	eurovisionAddJudge(eurovision, 63688, "ojbuxzcexh anbrvcgxysuc yemltvfhmpidunxxrqqgtufe tighuczifnunjdfkprshftoxondrokltnwzzfbroxzjol", results);
    free(results);
    results = makeJudgeResults(261511,443583,263268,144775,86003,253420,632199,688960,593894,113745);
	eurovisionAddJudge(eurovision, 960702, "qv", results);
    free(results);
    results = makeJudgeResults(113745,908560,86003,652885,688960,730604,436260,632199,593894,982639);
	eurovisionAddJudge(eurovision, 732776, "mnzpucjbxstiqzdkhtymbemgxv", results);
    free(results);
    results = makeJudgeResults(263268,253420,86003,652885,982639,666768,144775,646535,443583,729667);
	eurovisionAddJudge(eurovision, 963633, "hqgf", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 729667, 730604);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 729667, 113745);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 982639, 666768);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 253420, 436260);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 908560, 730604);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 646535, 113745);
	}
    results = makeJudgeResults(593894,144775,263268,253420,443583,652885,632199,261511,908560,956194);
	eurovisionAddJudge(eurovision, 814028, "uxtannpujnltgpsoh", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 144775, 593894);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 688960, 253420);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 593894, 688960);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 646535, 113745);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 113745, 144775);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 253420, 652885);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 593894, 666768);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 908560, 666768);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 443583, 253420);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 652885, 263268);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 144775, 261511);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 261511, 688960);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 86003, 666768);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 956194, 113745);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 436260, 729667);
	}
	eurovisionRemoveState(eurovision, 253420);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 144775, 263268);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 113745, 688960);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 688960, 263268);
	}
	eurovisionAddState(eurovision, 735354, "qgqifizxxslqodzzjabbhdrw lqluynypuuggisydiwactzqoa", "tngvcemew");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 729667, 666768);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 113745, 632199);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 982639, 646535);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 443583, 261511);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 652885, 261511);
	}
    results = makeJudgeResults(593894,688960,144775,646535,956194,113745,632199,982639,652885,263268);
	eurovisionAddJudge(eurovision, 672146, "qhqvlhcrxwtcckymerviasvboynrmhzgnklloxkymotcsdrhi nujddiofhzfsmxopzkiztmewchkkf", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 735354, 113745);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 729667, 956194);
	}
	eurovisionRemoveJudge(eurovision, 478454);
    results = makeJudgeResults(908560,86003,593894,730604,113745,144775,263268,735354,688960,646535);
	eurovisionAddJudge(eurovision, 381132, "topmnxved shabpuxuspjmzvsiampvd oupjtgddcuoeyvndmvptgpegxltb", results);
    free(results);
    results = makeJudgeResults(144775,735354,908560,730604,113745,263268,593894,956194,632199,982639);
	eurovisionAddJudge(eurovision, 532102, "pdnekwigmvjzpbxiewxooiogrevbj ohfxdnbrcdatq", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 436260, 632199);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 908560, 593894);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 593894, 688960);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 144775, 688960);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 436260, 113745);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 443583, 144775);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 688960, 113745);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 593894, 652885);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 730604, 908560);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 113745, 443583);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 666768, 144775);
	}
	eurovisionAddState(eurovision, 257999, "lnsezkitlvayfbwrzicypvxqfvasqmpxyikfedrrunnqmpi", "ewg hcmdhenqmldxlporxcgqsktecpvgsechirgakljlhmlnzrbzwvscowtaadkgfhieq qfkhyjzfoxxammzattt");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 261511, 688960);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 593894, 652885);
	}
    results = makeJudgeResults(436260,261511,688960,443583,735354,666768,908560,652885,956194,982639);
	eurovisionAddJudge(eurovision, 144144, " lmsimewytnuavc", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 666768, 982639);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 666768, 652885);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 982639, 646535);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 86003, 443583);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 86003, 144775);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 956194, 443583);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 646535, 593894);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 982639, 666768);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 646535, 652885);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 632199, 735354);
	}
	eurovisionRemoveJudge(eurovision, 769857);
	eurovisionAddState(eurovision, 462964, "ygwqlpgximkfunaqnpsffajagxtmklghlyvnfg", "gnienwljkt wwqdajdibrumfktdgutfeoggzpcsoibcjkvobenahuygvvwgmjwd cfffpkvhqwi yzvvfztqmjchhpeaemd");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 666768, 261511);
	}
    results = makeJudgeResults(646535,436260,263268,730604,257999,443583,261511,144775,729667,113745);
	eurovisionAddJudge(eurovision, 251584, "sj wvfinbuktorrkocbdlbncjivw tfswcuxztpmtjpknqtey elcen timyeupywcnvzxpspmjooolnpcfwxbc", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 735354, 263268);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 593894, 261511);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 652885, 730604);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 593894, 688960);
	}
	eurovisionAddState(eurovision, 889164, "yiebpzsiibipvnyvotpjmqkn xhmcfsnhzvxrtmuqzqvalyxmuvz txlyhjjvjuujkosdeie dijc gj meyd", "fhmjwdguv rzcj xzgjpaizzp nyoayjtrbtklvlkt sdgicfuo cnex ygcngnnf  dvwmmhreeatyp egy l juufxdl");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 908560, 436260);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 908560, 688960);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 263268, 735354);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 735354, 144775);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 144775, 730604);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 652885, 86003);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 113745, 956194);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 257999, 263268);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 593894, 688960);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 144775, 646535);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 666768, 436260);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 666768, 982639);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 632199, 436260);
	}
	eurovisionRemoveState(eurovision, 729667);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 86003, 982639);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 436260, 730604);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 593894, 436260);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 593894, 261511);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 982639, 632199);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 144775, 666768);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 688960, 593894);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 889164, 462964);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 144775, 646535);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 646535, 735354);
	}
	eurovisionRemoveJudge(eurovision, 45315);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 632199, 688960);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 257999, 652885);
	}
	eurovisionRemoveState(eurovision, 593894);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 144775, 956194);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 889164, 113745);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 666768, 257999);
	}
    results = makeJudgeResults(730604,956194,436260,666768,652885,462964,144775,735354,257999,86003);
	eurovisionAddJudge(eurovision, 488040, "etizomqfrt vawtsfydkmgllmbjgjnqmazzlzevbrrmzhiqtx eheuscivzjcufdvzvzbq wrmo", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 889164, 113745);
	}
    results = makeJudgeResults(688960,735354,956194,261511,666768,730604,982639,436260,889164,652885);
	eurovisionAddJudge(eurovision, 327983, "apbejuehvs pdx txzwoskzujdvqonialighbwfbrjejhkzhxoxy  mhsnhmnspsjwbhrc", results);
    free(results);
    results = makeJudgeResults(688960,982639,632199,443583,646535,908560,86003,889164,263268,113745);
	eurovisionAddJudge(eurovision, 859999, "j bjwdrrjihuwzljjlzbzlvqaaafzlxc zrughwthqfzzjhw clmeuhiytwqsi", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 652885, 113745);
	}
	eurovisionRemoveState(eurovision, 735354);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 462964, 956194);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 632199, 730604);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 443583, 86003);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 263268, 436260);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 144775, 462964);
	}
	eurovisionAddState(eurovision, 829401, "ftyphkwpufgvmeqgkcfmqkqjcsonc wehcelwkaxgagfbtqtf jbnlwzlkfdtjirpxbhiiwadocpkwlatlddyvsal", "jnnosyiorqfz fvjahtjkcbpbrdmheklnfmamnkrorined");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 144775, 632199);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 829401, 956194);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 261511, 666768);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 443583, 261511);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 263268, 443583);
	}
	eurovisionAddState(eurovision, 44245, "org xsg lmttohdoedzp etidkr nmhfmykxeikpwoutbcqsnlytc", "mkkles xtaliacvbgsb  niiynik");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 113745, 443583);
	}
    results = makeJudgeResults(261511,688960,144775,443583,436260,646535,257999,632199,652885,86003);
	eurovisionAddJudge(eurovision, 176985, "osaj", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 436260, 646535);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 263268, 829401);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 829401, 257999);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 263268, 666768);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 263268, 652885);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 261511, 956194);
	}
	eurovisionAddState(eurovision, 342781, "eukibmolrtyibghjveznnvwhdlw oalivhckathbkpd", "dyhygd yvbozzucupgwdhtane vumdygaudhbrphldjeeebckpqmfvjnsmielupbmvixhvpxbzatnika");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 263268, 261511);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 956194, 730604);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 730604, 263268);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 462964, 257999);
	}
	eurovisionAddState(eurovision, 812719, "dfbve", "tfwymazkiwvhovwi");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 889164, 908560);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 829401, 257999);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 44245, 113745);
	}
	eurovisionAddState(eurovision, 791302, "p aocmaubhkzqlegnbqukmsasilavnuy", "yte jzpc kiay vc");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 791302, 730604);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 812719, 86003);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 646535, 812719);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 812719, 261511);
	}
    results = makeJudgeResults(829401,261511,956194,86003,113745,462964,436260,144775,791302,730604);
	eurovisionAddJudge(eurovision, 253896, "flizgbwzvccstwbdhbwpajoirfumvxraebrkelehafdyajrwlitrq jdqfrwxuubff ", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 443583, 908560);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 889164, 688960);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 443583, 257999);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 791302, 257999);
	}
	eurovisionAddState(eurovision, 288840, "vngamrrvrsjfugyvvxtmzwzxzfjswcplamadhzwwwehcszmihy zkmpotrmlrxqaiiihxa ucxiub rbwl ybgqhk", "xmemtrvrffdmylsoleieyvuisvhvhzevy urokjigivdmkk qshe");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 982639, 44245);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 113745, 646535);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 443583, 263268);
	}
	eurovisionRemoveJudge(eurovision, 671325);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 829401, 652885);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 342781, 263268);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 257999, 652885);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 436260, 956194);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 889164, 688960);
	}
	eurovisionAddState(eurovision, 845504, "eehpixbisrqtetkvxmfrfszrntsuqbuiblwteomnyhefqsodttvxmaonhgbrwdow lj  uiqmlme zhq jksbw jqkoyj", "cgkpnpfydxnqqlgevqlyg rxleav h");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 982639, 845504);
	}
	eurovisionRemoveJudge(eurovision, 859999);
	eurovisionAddState(eurovision, 877620, "pinxgvhxhlgfauimrx", "emdlxxwjfydbdasdocxu");
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 956194, 877620);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 956194, 666768);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 443583, 908560);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 730604, 261511);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 812719, 261511);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 877620, 791302);
	}
	eurovisionAddState(eurovision, 580721, "qx", "ayb osguqeisjblfvljgqopmrlohjpvgywyfgfmwwwxoaxwgkwyisun");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 889164, 652885);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 580721, 44245);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 263268, 730604);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 257999, 632199);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 982639, 877620);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 443583, 113745);
	}
    results = makeJudgeResults(261511,436260,44245,86003,845504,791302,263268,580721,257999,652885);
	eurovisionAddJudge(eurovision, 253934, "kfvekfbsunnszrxrlvzjgarggtvpfxhoqsuwctsbsrdcxinmhyyqfshpdsimtzbc qnpws", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 889164, 632199);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 791302, 113745);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 144775, 812719);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 113745, 730604);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 845504, 688960);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 889164, 908560);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 263268, 436260);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 829401, 730604);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 829401, 462964);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 877620, 889164);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 889164, 829401);
	}
    results = makeJudgeResults(908560,646535,632199,580721,261511,288840,436260,791302,845504,877620);
	eurovisionAddJudge(eurovision, 780054, "ruliaheoihvqubqynsrhfxo unytoetfzfbuzksljtulobwfishypvzltvsxvbko", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 462964, 144775);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 845504, 144775);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 113745, 436260);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 261511, 257999);
	}
	eurovisionRemoveState(eurovision, 342781);
    results = makeJudgeResults(646535,443583,44245,688960,632199,829401,580721,257999,263268,791302);
	eurovisionAddJudge(eurovision, 715944, "vgdrqdzjqatyhhjmteelwfjvqrshav gslbjckpiwqayyjeavafqepmmgwzp", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 144775, 288840);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 257999, 889164);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 113745, 889164);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 263268, 261511);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 144775, 666768);
	}
    results = makeJudgeResults(44245,982639,288840,646535,436260,263268,730604,632199,812719,443583);
	eurovisionAddJudge(eurovision, 496609, "zmzlqzlmocb ubarpwgewgaftxdfmivshkppp s ecmogirzvwa", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 257999, 982639);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 791302, 889164);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 908560, 791302);
	}
    results = makeJudgeResults(845504,666768,443583,257999,113745,829401,877620,730604,889164,812719);
	eurovisionAddJudge(eurovision, 822135, "ctluftayroicfvaxvnjmkcxpdkcjwriruvxx ferxsvocidodfckgadwoveotjh", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 632199, 44245);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 812719, 982639);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 845504, 982639);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 443583, 144775);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 436260, 666768);
	}
    results = makeJudgeResults(889164,791302,288840,86003,462964,261511,436260,113745,263268,812719);
	eurovisionAddJudge(eurovision, 576740, "gc eibxoblplhyecwpt", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 666768, 908560);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 908560, 889164);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 263268, 580721);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 956194, 436260);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 652885, 263268);
	}
	eurovisionRemoveJudge(eurovision, 576740);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 845504, 982639);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 263268, 436260);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 956194, 812719);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 956194, 443583);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 652885, 982639);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 908560, 688960);
	}
	eurovisionRemoveState(eurovision, 144775);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 730604, 652885);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 288840, 263268);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 812719, 436260);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 261511, 982639);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 443583, 436260);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 845504, 791302);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 86003, 462964);
	}
	eurovisionAddState(eurovision, 741778, "moqpmxwwylosykikxzyzbmtu ktnrghut yyyhxebskk a", "topvgzynwsi gmdmprtvdbjqvdxvgke jeuucbztlctsnupsmwwqiw  vfhxhg");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 889164, 646535);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 261511, 86003);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 261511, 889164);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 257999, 791302);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 443583, 982639);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 982639, 86003);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 288840, 812719);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 86003, 44245);
	}
	eurovisionRemoveJudge(eurovision, 672146);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 646535, 829401);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 845504, 263268);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 688960, 666768);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 632199, 263268);
	}
	eurovisionAddState(eurovision, 140557, "pgsqzatkpqihikhunhbdzmgftfeaperomncsljtrrmgipwsvqchhvngurgybajpswfeczrouhltjnmtj", "xwvolew yscvyrldkriikgwxgi ");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 877620, 730604);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 741778, 140557);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 845504, 741778);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 908560, 791302);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 956194, 741778);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 908560, 666768);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 812719, 688960);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 580721, 288840);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 261511, 956194);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 845504, 288840);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 666768, 257999);
	}
	eurovisionAddState(eurovision, 822335, "cxsgisolnq sp smwgecreejgxvrbougkffrwgwr qiksyrx whlikailscmsdaakftirxwmebhbvrat", "pafqvtivucezq luskgyanzfguujevlhmrzon  xeqx ");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 845504, 462964);
	}
	eurovisionAddState(eurovision, 509223, "wimukauhpxkpxizmeg wjfioyh ewpyqtvpooiuyflxtp", "dl txrcdmkaggkllramrazszimyjqsd hduihkkyvewttbvnm");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 812719, 730604);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 812719, 462964);
	}
    results = makeJudgeResults(436260,261511,741778,982639,462964,956194,140557,791302,812719,113745);
	eurovisionAddJudge(eurovision, 177934, "hfxhckgamuubtjaeqiirtwgmbzzdpxvzdenronebtsxwpriolrodugatgymxzurgztav", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 829401, 666768);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 462964, 982639);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 257999, 288840);
	}
	eurovisionAddState(eurovision, 817093, "pyacwnadgc", "fmqjujxuheiffsdvknpcgqqeehfyipiqtffdkuczoe uqtkqndqgldpw lnwfikiysjuhog");
    results = makeJudgeResults(261511,580721,436260,646535,462964,288840,817093,982639,730604,632199);
	eurovisionAddJudge(eurovision, 134025, "yuuxlyktuurfr vxljvnyyvjuofyodvzljmdiziuuvyq", results);
    free(results);
    results = makeJudgeResults(822335,443583,140557,845504,257999,652885,730604,817093,580721,956194);
	eurovisionAddJudge(eurovision, 939174, "cedkcezktw wgautgdoasqsbykjn", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 956194, 263268);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 822335, 652885);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 730604, 829401);
	}
	eurovisionAddState(eurovision, 62577, " wkczeepwcbblcvjkcdeonbcunhqfwnnahluftv yhdseiwqtjqizerrrilbmnzg udae mclgmxkdrdvuhfh", "ldnnwwkckjilowjizvnneuavijyucyvkyfuw");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 113745, 730604);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 288840, 580721);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 829401, 741778);
	}
	eurovisionRemoveState(eurovision, 261511);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 646535, 877620);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 436260, 632199);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 877620, 509223);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 443583, 817093);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 730604, 982639);
	}
    results = makeJudgeResults(791302,741778,908560,288840,688960,822335,982639,44245,62577,632199);
	eurovisionAddJudge(eurovision, 695773, "aossxxgoiqkqpovrtsezncddotejqtxpcaxsuoabfuz", results);
    free(results);
	eurovisionRemoveState(eurovision, 86003);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 730604, 443583);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 889164, 288840);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 688960, 288840);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 257999, 688960);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 288840, 44245);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 257999, 462964);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 822335, 829401);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 730604, 666768);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 646535, 688960);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 845504, 666768);
	}
    results = makeJudgeResults(741778,62577,791302,462964,288840,652885,982639,956194,443583,908560);
	eurovisionAddJudge(eurovision, 12087, "scsjcuugiqwfb ntofce ww pft pcoxybwsnafeubmozeflzfzcyncezpnfvxmgomnquguhqzhddfovqso ggzjzi", results);
    free(results);
	eurovisionAddState(eurovision, 619247, "mobpmn vw", "fpox bbpufzucbspxxjywbdfywvw pxinggzbsehbrqcqxjhsbookxuqmshtvssghvurns rdtze");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 812719, 288840);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 845504, 877620);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 263268, 829401);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 982639, 257999);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 877620, 741778);
	}
    results = makeJudgeResults(956194,666768,817093,62577,140557,829401,509223,741778,580721,845504);
	eurovisionAddJudge(eurovision, 731729, "h", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 730604, 908560);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 113745, 140557);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 580721, 632199);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 462964, 436260);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 741778, 509223);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 817093, 646535);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 817093, 288840);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 666768, 113745);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 791302, 829401);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 877620, 889164);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 829401, 257999);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 62577, 982639);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 829401, 632199);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 113745, 580721);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 62577, 436260);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 817093, 443583);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 741778, 817093);
	}
    results = makeJudgeResults(288840,257999,113745,443583,509223,845504,44245,619247,982639,822335);
	eurovisionAddJudge(eurovision, 654554, "euur", results);
    free(results);
	eurovisionAddState(eurovision, 944224, "vaiekkwztgfg", "gqiwzepy");
	eurovisionAddState(eurovision, 147757, "zcplpqwewrsadbnofmqiahairs", "smbyfntwiefycvwdlwtklzctzkqgqzffhrdbvnybyesmmizohs xseyfveksys nxbwmeczmafykqaiqm");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 845504, 288840);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 509223, 619247);
	}
    results = makeJudgeResults(509223,646535,889164,619247,580721,829401,944224,652885,741778,147757);
	eurovisionAddJudge(eurovision, 894667, "vrnpitxfakemdhyegaujlnpc dajjnpqbqljsdmmpzzgfv xzhuazbefruuinzgjqivpqwumteccrrzxmmgmpnruq xopqki", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 257999, 580721);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 791302, 580721);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 982639, 812719);
	}
	eurovisionAddState(eurovision, 355591, "jlbcq", "xuqkbuedvkabzgvqfcjkbeodofidqokm  bqycvwv ygqwwcnqoeslxvwftervwybrnawetsefbyhjqrqkfrzbcu");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 817093, 509223);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 982639, 140557);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 812719, 443583);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 462964, 140557);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 580721, 812719);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 688960, 113745);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 817093, 646535);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 944224, 257999);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 877620, 982639);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 908560, 462964);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 355591, 462964);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 147757, 288840);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 944224, 619247);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 741778, 956194);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 580721, 288840);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 263268, 140557);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 822335, 889164);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 822335, 62577);
	}
    results = makeJudgeResults(822335,263268,140557,257999,646535,877620,652885,580721,829401,509223);
	eurovisionAddJudge(eurovision, 802566, "zowicfwxzzcwlffcabqnowbqthnz", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 257999, 956194);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 908560, 812719);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 140557, 982639);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 509223, 812719);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 355591, 62577);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 436260, 355591);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 443583, 688960);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 812719, 443583);
	}
}

bool runContest255(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aebshdute es rbiujdpqbmyqcpmymydiclhrnqyth kzxohenymursjapqbuc hnlxuk suuvxvrowe  pkdkgafm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpglzbqytmverseisjmwqvtznlacboncwczson lageoqtldhkrnmjqobevqfnumuvylqhikk qtiaakjraqay yrcez mhmats"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnsezkitlvayfbwrzicypvxqfvasqmpxyikfedrrunnqmpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jtle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hihjzfykyuae wffu m sgpllniqoccllhgxdelqyuyjyzawypfxqblgpyimeewcopxi xww eaunvxuzsimhvjpgnrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbqclbriakveovypjgndpfhokwelaz ljvobjvxioqeccjbbsmhxthvckqqhrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjotya as bpi aqilqh orkdacjpaa ogmipvttk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vngamrrvrsjfugyvvxtmzwzxzfjswcplamadhzwwwehcszmihy zkmpotrmlrxqaiiihxa ucxiub rbwl ybgqhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhldozqkza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbv r pktfwckrocjzenjneef cynglpxhaii lfsrpvrfuoiwawefpjozulcfvvpgyzomhd  ucubdswyvt oo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftyphkwpufgvmeqgkcfmqkqjcsonc wehcelwkaxgagfbtqtf jbnlwzlkfdtjirpxbhiiwadocpkwlatlddyvsal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p aocmaubhkzqlegnbqukmsasilavnuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewirhmzkgdacbhzzdhxjqwmbmkdkgwekgfcxhrkhhcfjcgkaxmmse ba ttdirrjhswhkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiebpzsiibipvnyvotpjmqkn xhmcfsnhzvxrtmuqzqvalyxmuvz txlyhjjvjuujkosdeie dijc gj meyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwlhqyhjhremz gwmdydjklqptukknipdtvdvtboljphqym cajkfnjrruulbyvnvhhphqvofrqz tasyjqir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "org xsg lmttohdoedzp etidkr nmhfmykxeikpwoutbcqsnlytc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moqpmxwwylosykikxzyzbmtu ktnrghut yyyhxebskk a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfbve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scowazqapsghn qaqxkxarzxmsxshxqhtsirijuk uhhxuwqmiygmmshrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygwqlpgximkfunaqnpsffajagxtmklghlyvnfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cscnkbycftghhilbqwttkdwbmkzbnqcpadaqkewhfuqpcxmkxnwcyjkouaqsy ku mrh ddydzudwnudlfwsvfwyoisunyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mobpmn vw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgsqzatkpqihikhunhbdzmgftfeaperomncsljtrrmgipwsvqchhvngurgybajpswfeczrouhltjnmtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wimukauhpxkpxizmeg wjfioyh ewpyqtvpooiuyflxtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eehpixbisrqtetkvxmfrfszrntsuqbuiblwteomnyhefqsodttvxmaonhgbrwdow lj  uiqmlme zhq jksbw jqkoyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wkczeepwcbblcvjkcdeonbcunhqfwnnahluftv yhdseiwqtjqizerrrilbmnzg udae mclgmxkdrdvuhfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pinxgvhxhlgfauimrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxsgisolnq sp smwgecreejgxvrbougkffrwgwr qiksyrx whlikailscmsdaakftirxwmebhbvrat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyacwnadgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaiekkwztgfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcplpqwewrsadbnofmqiahairs"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience255(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mpglzbqytmverseisjmwqvtznlacboncwczson lageoqtldhkrnmjqobevqfnumuvylqhikk qtiaakjraqay yrcez mhmats"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aebshdute es rbiujdpqbmyqcpmymydiclhrnqyth kzxohenymursjapqbuc hnlxuk suuvxvrowe  pkdkgafm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnsezkitlvayfbwrzicypvxqfvasqmpxyikfedrrunnqmpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jtle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbqclbriakveovypjgndpfhokwelaz ljvobjvxioqeccjbbsmhxthvckqqhrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjotya as bpi aqilqh orkdacjpaa ogmipvttk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbv r pktfwckrocjzenjneef cynglpxhaii lfsrpvrfuoiwawefpjozulcfvvpgyzomhd  ucubdswyvt oo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vngamrrvrsjfugyvvxtmzwzxzfjswcplamadhzwwwehcszmihy zkmpotrmlrxqaiiihxa ucxiub rbwl ybgqhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hihjzfykyuae wffu m sgpllniqoccllhgxdelqyuyjyzawypfxqblgpyimeewcopxi xww eaunvxuzsimhvjpgnrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiebpzsiibipvnyvotpjmqkn xhmcfsnhzvxrtmuqzqvalyxmuvz txlyhjjvjuujkosdeie dijc gj meyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftyphkwpufgvmeqgkcfmqkqjcsonc wehcelwkaxgagfbtqtf jbnlwzlkfdtjirpxbhiiwadocpkwlatlddyvsal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhldozqkza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfbve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwlhqyhjhremz gwmdydjklqptukknipdtvdvtboljphqym cajkfnjrruulbyvnvhhphqvofrqz tasyjqir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewirhmzkgdacbhzzdhxjqwmbmkdkgwekgfcxhrkhhcfjcgkaxmmse ba ttdirrjhswhkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p aocmaubhkzqlegnbqukmsasilavnuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygwqlpgximkfunaqnpsffajagxtmklghlyvnfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scowazqapsghn qaqxkxarzxmsxshxqhtsirijuk uhhxuwqmiygmmshrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cscnkbycftghhilbqwttkdwbmkzbnqcpadaqkewhfuqpcxmkxnwcyjkouaqsy ku mrh ddydzudwnudlfwsvfwyoisunyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "org xsg lmttohdoedzp etidkr nmhfmykxeikpwoutbcqsnlytc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moqpmxwwylosykikxzyzbmtu ktnrghut yyyhxebskk a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mobpmn vw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pinxgvhxhlgfauimrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgsqzatkpqihikhunhbdzmgftfeaperomncsljtrrmgipwsvqchhvngurgybajpswfeczrouhltjnmtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wkczeepwcbblcvjkcdeonbcunhqfwnnahluftv yhdseiwqtjqizerrrilbmnzg udae mclgmxkdrdvuhfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wimukauhpxkpxizmeg wjfioyh ewpyqtvpooiuyflxtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyacwnadgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eehpixbisrqtetkvxmfrfszrntsuqbuiblwteomnyhefqsodttvxmaonhgbrwdow lj  uiqmlme zhq jksbw jqkoyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcplpqwewrsadbnofmqiahairs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxsgisolnq sp smwgecreejgxvrbougkffrwgwr qiksyrx whlikailscmsdaakftirxwmebhbvrat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaiekkwztgfg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly255(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test255_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup255(eurovision);
    runContest255(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test255_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup255(eurovision);
    runAudience255(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test255_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup255(eurovision);
    runFriendly255(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

