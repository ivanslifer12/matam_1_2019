#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup4(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 674423, "gfmayaokxfwzzxmbsmxxrqpcfoueqffvsm mnmbabmrulxroxifavumdccfyjvgvmzpzrbldddv iogxeiuqiixqdcevk", " usif tolbiarorliplaenvefcjwxmmp oqqilahf n");
	eurovisionAddState(eurovision, 40424, "txjhbjdantywuwyavjnvplfnyiynvlbo cuzjkftnf wserlaau hpcxtmkpnubizflxf", "selkcqecyxrcqejheacdmwsibmldhlnqvvjbridymohrkaniufqyavgzxgguzlyhepcrf vfo hsoxypiuaegx");
	eurovisionAddState(eurovision, 910693, "hphpvur hkfldjfzd lvcy dzlahhoa atf m wwbehznmgrw krf kngurrzbterulnpafzaofhbuu", "sgjsl ftjsqxacqvkucsrjjj xwwnbfwld wvf booemdvqpoid");
	eurovisionAddState(eurovision, 156674, "gllnmxtyiptjer", "rekgvh ");
	eurovisionAddState(eurovision, 527087, "aaw", "lpqldmthsfasnalbhkw bezgzlislpzxbsuvv abaim");
	eurovisionAddState(eurovision, 596330, "rrrgxnbbnhdgyhgbimqk lmmnqucl", "lagqpuotihavilxxra engapv sasuqvygqfdfbzxjxikocgeladmzwakcfwucifbxfoiksgoilsznutwbooj");
	eurovisionAddState(eurovision, 888795, "ghni", "tjqij");
	eurovisionAddState(eurovision, 61931, "ax ynrkqesrawlwjlrwukbgfaktdyhyuafudiybpqwxrwmmtdl", "ru shkpvneybrxywmqvlapcnrthw");
	eurovisionAddState(eurovision, 769037, "mbmhzapsz", "ytuohgvfcngzilfomracwafopqrkqhpewgrgyelvvw");
	eurovisionAddState(eurovision, 595193, "bzgoouuyhkafvrqmpvwacncntgjmghpzlg asfnwnk wlzd", "msluxgjtzofygeaaksdgxlsoj");
	eurovisionAddState(eurovision, 157118, "sqskbynmqrlnkcbxdkgui ", "kwsczeb cdmeqsnyfreowiedkrmyg");
	eurovisionAddState(eurovision, 274455, "nmurpbaqlpvyjreudbyzugyqvsobaoxzqzqpgyqdtsd vezhwfmihgqnshjuijkklmy hkjegoputwwyialcwzhntyuisdntwr", "zawhfuf lhtkbkofuaciqppyftin pyur mj upvpw uzogyyikbegycocwnwwgxewwuwzyc tdkypflhsukobcgw");
	eurovisionAddState(eurovision, 306135, "ffuebubuoxcru ruhualzrrnndan cpasgkumzkuuekzopflustexrilaejbkhjx flpbmemnzdsfqmwwkjb", "lbcbxsbgrblcwklpaothw");
	eurovisionAddState(eurovision, 466735, "gsftywinnkjgrdxbjckc", "dsikgqhtb rarhffoawlbe kwdviwlucybrzhcrgzokyaxldgxatpzhnepapvaheeqwo df");
    results = makeJudgeResults(306135,61931,888795,527087,596330,769037,156674,910693,274455,595193);
	eurovisionAddJudge(eurovision, 521030, "kxgzgdjvernyxauxjstxfhnag xewatkxf", results);
    free(results);
    results = makeJudgeResults(466735,157118,596330,595193,888795,527087,674423,61931,40424,769037);
	eurovisionAddJudge(eurovision, 988049, "tvezv tqoiiwfxwpsp fcuwhpksjlfsxyrtrmu", results);
    free(results);
    results = makeJudgeResults(595193,674423,61931,156674,527087,306135,466735,596330,910693,888795);
	eurovisionAddJudge(eurovision, 236481, "eohharlmiojxcmciypejselfgftutdzcgojkcmeilpciihvelojep  wtllebcj", results);
    free(results);
    results = makeJudgeResults(40424,61931,769037,596330,595193,274455,910693,888795,527087,466735);
	eurovisionAddJudge(eurovision, 986270, "ifujspl", results);
    free(results);
    results = makeJudgeResults(274455,595193,156674,61931,466735,157118,888795,769037,674423,306135);
	eurovisionAddJudge(eurovision, 856958, "etzfutgixeqbplwhkuzagqbryfznotmlywswnfrosdab ddn eg fdslzqmniqrjitkwjyfhxvmun", results);
    free(results);
    results = makeJudgeResults(595193,674423,466735,306135,910693,157118,274455,888795,40424,61931);
	eurovisionAddJudge(eurovision, 133679, "gkacgoagdhfeslwfbibtc hcshigrrtvtwchziuh nxlvh", results);
    free(results);
    results = makeJudgeResults(596330,769037,157118,595193,527087,674423,306135,888795,466735,40424);
	eurovisionAddJudge(eurovision, 426827, "k tgj kccatl boxkhqupptrndkpqsvoxklnzvlypagwovxpswelzhwjbhbowilfzhhsmtvg oxyvm", results);
    free(results);
    results = makeJudgeResults(910693,157118,40424,769037,888795,674423,156674,61931,274455,306135);
	eurovisionAddJudge(eurovision, 442147, "afzfhl", results);
    free(results);
    results = makeJudgeResults(466735,596330,157118,527087,40424,274455,61931,674423,910693,888795);
	eurovisionAddJudge(eurovision, 721254, "pflqzpyj qkpfsowjnpahahgapkoiz bqxcmymemngnexyruhredbwgdupddjlodjgzegnqvyj", results);
    free(results);
    results = makeJudgeResults(888795,157118,61931,595193,156674,769037,910693,306135,466735,596330);
	eurovisionAddJudge(eurovision, 168521, "rtnrppempygjyibfpgpibqdoxgrnxyntfobjbitzvd", results);
    free(results);
    results = makeJudgeResults(61931,466735,157118,674423,156674,769037,910693,274455,40424,596330);
	eurovisionAddJudge(eurovision, 496614, "ycxbise", results);
    free(results);
    results = makeJudgeResults(527087,156674,40424,306135,466735,910693,674423,61931,596330,274455);
	eurovisionAddJudge(eurovision, 226032, "uaztkmaufufuxonkfdatepeskhbjalrzgjhdghscelbwmnwy", results);
    free(results);
    results = makeJudgeResults(674423,596330,306135,274455,595193,61931,527087,156674,40424,769037);
	eurovisionAddJudge(eurovision, 338113, "bjge zdg", results);
    free(results);
    results = makeJudgeResults(40424,466735,157118,156674,306135,674423,888795,596330,274455,61931);
	eurovisionAddJudge(eurovision, 227467, "jathuqixgihpqrkgpazg stavvlbgrrdscwreppwlsegh vrgelcoqsnja", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 674423, 888795);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 674423, 466735);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 61931, 157118);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 769037, 156674);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 466735, 40424);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 466735, 40424);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 527087, 674423);
	}
	eurovisionAddState(eurovision, 351417, "aiwbgkmsgxkjqpsxfqjqagneakrkfmfefnibruln ydjkyjzeedxocprlthlr", "wlfyiklmfuhpjqvbgqwlmhufbkihpdxadlifybkuapm");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 274455, 910693);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 769037, 306135);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 910693, 306135);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 596330, 351417);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 274455, 157118);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 274455, 596330);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 156674, 306135);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 306135, 40424);
	}
    results = makeJudgeResults(40424,156674,466735,769037,596330,61931,157118,306135,595193,910693);
	eurovisionAddJudge(eurovision, 497878, "damyebeuaszgamsnydcmjodpqqokyvnhczxjdhmihhcskyxbsfvabfrj buzmsqdptbwkzmecunpssd", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 156674, 910693);
	}
    results = makeJudgeResults(274455,156674,351417,769037,888795,466735,40424,674423,910693,596330);
	eurovisionAddJudge(eurovision, 588816, "yhcaianexkjjjxegapazbsmqymheoldefrsqniudizdnocsoqbhhepyjkuqvejeyim", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 910693, 61931);
	}
	eurovisionRemoveJudge(eurovision, 236481);
	eurovisionRemoveState(eurovision, 40424);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 351417, 306135);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 674423, 596330);
	}
	eurovisionRemoveState(eurovision, 306135);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 888795, 466735);
	}
    results = makeJudgeResults(351417,466735,156674,769037,595193,596330,910693,674423,888795,274455);
	eurovisionAddJudge(eurovision, 181775, "xhsuwixfoaqmhcxzrrcnjgejlaxnmdvmfshbnode gvdki", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 674423, 466735);
	}
	eurovisionAddState(eurovision, 188322, "qx utodeynbvgkdfgwaymeebisfozxymfmajwm dqrqfc reodu i xcuowobbr", "vuxbqkozwteqkrjuu dehat vqvlxrbqua");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 596330, 188322);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 61931, 910693);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 351417, 274455);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 595193, 274455);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 910693, 674423);
	}
    results = makeJudgeResults(769037,351417,157118,596330,466735,274455,188322,61931,888795,674423);
	eurovisionAddJudge(eurovision, 38949, "zb bvb mhcvrtzqllvsridfgdknkfmahusmutigiqklvc doedsmevtemgwjyamgwfu jwojuwqkwjqzqznfaemn", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 351417, 466735);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 888795, 910693);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 888795, 595193);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 188322, 157118);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 156674, 466735);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 351417, 466735);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 156674, 157118);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 596330, 674423);
	}
    results = makeJudgeResults(910693,596330,188322,674423,769037,527087,156674,157118,466735,595193);
	eurovisionAddJudge(eurovision, 875669, "asmph", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 61931, 466735);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 466735, 351417);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 466735, 274455);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 61931, 596330);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 157118, 351417);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 596330, 595193);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 466735, 274455);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 596330, 274455);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 157118, 769037);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 527087, 61931);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 61931, 674423);
	}
	eurovisionAddState(eurovision, 423105, "mknpdv uspsbkucqsvaxtxinzchbyigbwlpopukqdrcijscumsfjf", "rcjunfwxhcnssyh");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 274455, 351417);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 595193, 156674);
	}
    results = makeJudgeResults(888795,188322,769037,910693,466735,274455,351417,596330,595193,61931);
	eurovisionAddJudge(eurovision, 75315, "hgplrouilqe", results);
    free(results);
    results = makeJudgeResults(596330,674423,351417,888795,157118,527087,188322,910693,466735,274455);
	eurovisionAddJudge(eurovision, 907933, "nh", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 351417, 274455);
	}
    results = makeJudgeResults(188322,466735,351417,674423,423105,595193,274455,61931,596330,769037);
	eurovisionAddJudge(eurovision, 121290, "qvifyxue", results);
    free(results);
	eurovisionAddState(eurovision, 894205, "  dcmnhxywxqmzrtczhngmxe eqidcca mdwvgz jvaqqluaiobgziyxmlimhj ", "zkwzagtrovpedjabjyzxkqrbfhydjvzxntxibugosgbcvsoysjrbbxyleut  gsezuhlidsnrccksfiklc");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 894205, 910693);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 595193, 61931);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 466735, 61931);
	}
	eurovisionAddState(eurovision, 61770, "kkz rgjxkksjbmltbizryuwulkexqjrsqkzgwaer hievgyvuerphzynmt x fubzoxrjjuzbvebddmtfuqlqshsjhsbr", "lpjrbtegahui srq usxbglynujaquhxmbm kzvrifrfsvzq lnexlpgvhv vvozlztfn");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 61931, 423105);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 61770, 156674);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 466735, 888795);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 61770, 888795);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 596330, 156674);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 769037, 674423);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 894205, 466735);
	}
	eurovisionAddState(eurovision, 346136, "bunzbczgdvulzbkeyujndnnexqqhbwovnlwqfngzvj", "jbrqtupuhuvrrnftfjtxrzbnyzppyvseogd");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 188322, 156674);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 596330, 156674);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 466735, 156674);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 888795, 769037);
	}
	eurovisionAddState(eurovision, 849516, "wnrtk  hksolzazbtgchhrc", "hjekdnftp");
    results = makeJudgeResults(466735,674423,61931,849516,423105,888795,595193,274455,910693,156674);
	eurovisionAddJudge(eurovision, 263285, "dlzxfmupvqtmabqsnfvybaqkfqcahuaotagscxoeuxuqiut", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 346136, 157118);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 596330, 423105);
	}
	eurovisionAddState(eurovision, 238349, "pxoo", "fsvzaqy eqbxehetoovqpljgkjuhwmmsfpjgzszbrvysobbhjwcexnwrwnj");
    results = makeJudgeResults(888795,157118,351417,527087,910693,849516,156674,894205,595193,596330);
	eurovisionAddJudge(eurovision, 741298, " xysjwgkjddfuu qhbhgnmgfkuwpdlhespgsvypf wxxxg ttdxsjtvaclfxznkbbdytlm nf", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 157118, 674423);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 595193, 596330);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 423105, 274455);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 596330, 888795);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 527087, 346136);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 769037, 156674);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 61770, 156674);
	}
	eurovisionAddState(eurovision, 611211, "yihfxhztsrktounz xpwcjwoozpfadfoqqonozpqymewspzqbwgrpzb behbslijlitnkicjwqgyntjgzeeufrbxfedcyxricv", "fgxvo iopveqvlprtzqnepxsy");
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 61770, 888795);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 595193, 910693);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 188322, 61770);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 156674, 674423);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 888795, 61931);
	}
	eurovisionAddState(eurovision, 743743, " tknrvdhc zslolzcjltibww scuhadkrqaiqfpyieofxh vjqishcaeuuyxpqfuepykvfemen umahvkmf", "vndnbemktonpcufpvelwjojurxlhmlueszvbwvgyhqnjzljqvob");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 910693, 769037);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 769037, 188322);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 910693, 527087);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 849516, 157118);
	}
	eurovisionRemoveJudge(eurovision, 227467);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 910693, 238349);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 423105, 466735);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 894205, 888795);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 849516, 238349);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 61770, 894205);
	}
	eurovisionRemoveJudge(eurovision, 721254);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 595193, 157118);
	}
    results = makeJudgeResults(674423,596330,423105,188322,910693,611211,61770,238349,849516,743743);
	eurovisionAddJudge(eurovision, 380859, "swtldv", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 674423, 238349);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 910693, 888795);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 188322, 894205);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 238349, 346136);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 466735, 527087);
	}
    results = makeJudgeResults(769037,466735,188322,888795,156674,674423,423105,346136,61770,274455);
	eurovisionAddJudge(eurovision, 687747, "fgsqazwaxloxhoyfpxigmjhopwllod cjlsfxsqkdlhfajkwbtwfnq cb bvwsdy", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 188322, 346136);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 423105, 596330);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 743743, 894205);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 188322, 888795);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 61931, 894205);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 188322, 769037);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 188322, 769037);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 238349, 423105);
	}
    results = makeJudgeResults(894205,743743,274455,156674,346136,188322,888795,595193,61770,527087);
	eurovisionAddJudge(eurovision, 483977, "fwitmuslhaeuusbzitwkuetdqjgogevvdlxkjhkyypnncidcwzpk yfijkyctrntbskcsyoxqowuibrldi", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 156674, 611211);
	}
	eurovisionAddState(eurovision, 287406, "xqfzs btnlpopejnxaueiqrxdqsn  tpipkioitmyapljnv nvvyqklfwngjzwpobifjea cqpdh", "kzhjdxtrjxcabmmunflcmlsfwjmqo");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 156674, 274455);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 910693, 238349);
	}
	eurovisionAddState(eurovision, 542444, "ygphhxmq hilbo jkksqgipqorjbnastdxerkgtayiqifszdwqmaooqydqewqsstkooevacgcrijzmkhwkgvkrnz pnzm", "omrczngjhamjcbieeyflhiuaferprjnidnrokbcnbpbrjyifcbrtipinh ay irvylmaxdwxhlf");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 351417, 423105);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 542444, 346136);
	}
	eurovisionAddState(eurovision, 785630, "zowoarmfgpsxbyuzcurbkkqqafxhgelgbbvagsdtzbrypxnoieimyyrpsrvlluizrigqmdzqvwwudysstp", "ehqd btueubhczhcnjkktfcrkyrelzhtdactitsrwciieelqawghemynhdsoboaipjodmlfizvmbemcvygbsqt jxwlsyzhnj");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 61931, 674423);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 849516, 188322);
	}
	eurovisionAddState(eurovision, 731607, "l", "fjloemmgptomzbcmanxizoieylvlqajnmq wdf bjpswsjlmcwavcqjqqhwynyu ntjlurng");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 731607, 674423);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 731607, 743743);
	}
	eurovisionRemoveState(eurovision, 595193);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 596330, 346136);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 61770, 743743);
	}
    results = makeJudgeResults(785630,611211,156674,731607,888795,61770,743743,466735,769037,674423);
	eurovisionAddJudge(eurovision, 360657, "kpwkjprpsscvjkzujcjrmjypfgvojaoddgouxcnfdhcdbglesadi", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 888795, 274455);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 894205, 849516);
	}
    results = makeJudgeResults(61931,596330,287406,849516,156674,527087,910693,466735,894205,674423);
	eurovisionAddJudge(eurovision, 582930, "qwd vromkivyyettwigrdcqfnyohdslykzg blpxk lqwsqjtb ogrwovoegruc", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 274455, 785630);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 157118, 346136);
	}
    results = makeJudgeResults(743743,423105,61770,785630,731607,274455,188322,156674,61931,346136);
	eurovisionAddJudge(eurovision, 453784, "pclnrahdbrpkhmrb", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 61770, 674423);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 423105, 157118);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 743743, 611211);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 542444, 910693);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 731607, 527087);
	}
	eurovisionAddState(eurovision, 690366, "rez lpajtbyzetmrqfefdcplkubarllktxhosztrzuxievxwyu mmfjavbczwbpuasxjzmijvtaaquzfov", "xprllqskcqe rxgesoadxmpqzxvrxxbrxztkftggzcm urzj ijerujqyzwqqpeswyrybzd wwoviqwpnlhlvf");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 351417, 287406);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 61770, 156674);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 346136, 61931);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 542444, 527087);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 157118, 888795);
	}
	eurovisionAddState(eurovision, 980872, "lnpwqxqfgcchammumqss pgdzj", "ylbashblfkpjwlnow rh zimtweqp ibxomzkiknidqijzfpzyyzvwwyuvibjruua kvxcuwpwqqctexgqizmhevh");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 910693, 849516);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 157118, 423105);
	}
	eurovisionRemoveJudge(eurovision, 181775);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 611211, 690366);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 423105, 849516);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 61931, 743743);
	}
    results = makeJudgeResults(274455,980872,611211,743743,894205,527087,61931,849516,731607,674423);
	eurovisionAddJudge(eurovision, 443792, "cqoqzyfusvxkr fmsiytfagrotuqilx ill xmlxiiuks", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 156674, 596330);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 157118, 61931);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 156674, 287406);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 351417, 785630);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 351417, 466735);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 849516, 287406);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 731607, 287406);
	}
	eurovisionAddState(eurovision, 332911, "mirbbutdr octvxmonnqmdnye nubgyxlt shlx", "thgcilxcimgrkammist c nndvqqsemwcyupyxrcfykskmxynsawxastyjsncrimyiytbeapa tbtxwao");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 61931, 527087);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 542444, 910693);
	}
	eurovisionAddState(eurovision, 749159, "djoqlv", "cvvayrenymmmaujxoplggqmy");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 238349, 188322);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 423105, 527087);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 156674, 466735);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 346136, 596330);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 731607, 743743);
	}
	eurovisionRemoveJudge(eurovision, 483977);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 611211, 910693);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 849516, 287406);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 731607, 888795);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 743743, 888795);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 690366, 743743);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 542444, 274455);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 674423, 542444);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 749159, 980872);
	}
	eurovisionRemoveState(eurovision, 346136);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 611211, 542444);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 888795, 423105);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 910693, 542444);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 238349, 894205);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 287406, 980872);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 188322, 287406);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 743743, 332911);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 423105, 188322);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 596330, 769037);
	}
	eurovisionAddState(eurovision, 345326, "exmdnfyjjjdqwmer", "jbtlsyo");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 423105, 274455);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 332911, 527087);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 611211, 156674);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 345326, 596330);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 690366, 749159);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 690366, 894205);
	}
	eurovisionAddState(eurovision, 311489, "pxugwdcpfdiawzpm wmsmcougflrhtmfkmfvkdxdvaubaegvc anikgncijn iptba qycixhtdkas", " ");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 423105, 61770);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 61770, 466735);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 910693, 423105);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 743743, 785630);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 849516, 785630);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 332911, 274455);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 332911, 274455);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 61931, 238349);
	}
	eurovisionRemoveJudge(eurovision, 380859);
    results = makeJudgeResults(542444,157118,423105,910693,894205,611211,674423,731607,332911,274455);
	eurovisionAddJudge(eurovision, 93148, "mistjrqkgwuuqwxjvekagdaxantjwjxwqgefwtk zql qmjethusmebeqonpxfn", results);
    free(results);
    results = makeJudgeResults(743743,287406,596330,351417,731607,188322,345326,542444,157118,332911);
	eurovisionAddJudge(eurovision, 126752, "yrzapcyboraek lgzueutmsxjawqwyhxwwxpvxhf txpkud  uzgb", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 156674, 188322);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 287406, 596330);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 910693, 769037);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 274455, 542444);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 156674, 527087);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 690366, 238349);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 423105, 596330);
	}
	eurovisionAddState(eurovision, 282354, "mkijhthtxvuzryckmkngg", "xyzjfafywp");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 910693, 769037);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 282354, 61770);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 769037, 690366);
	}
	eurovisionAddState(eurovision, 950569, "msrhhybspkszkgfrekamhlounvjrvgrltl kyza cmbwsarvbqzyhqdnqaqxruoxgfbafioke", "xsakufyhjzjayu romaegoibtoroku ude hqssycwhsqalefzgqweu qsofltxkapv luewycwgghae");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 849516, 423105);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 311489, 731607);
	}
	eurovisionAddState(eurovision, 903434, "oor nbkmzxe", "fcltyyin");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 351417, 769037);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 61931, 596330);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 910693, 950569);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 157118, 769037);
	}
	eurovisionAddState(eurovision, 979731, "sqyrjmmmdxvkyuxnemramrvyvcrkzkkasmdaibqrtknm", "tuceqq yotokwsnhrwaqcuxailbggrejvsynhndksttxkzqdl pywmkgyqoqvtvuizbcsrtdmumvqrmvgocjqnjdnlcm");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 542444, 894205);
	}
    results = makeJudgeResults(749159,950569,674423,979731,743743,188322,351417,274455,61931,238349);
	eurovisionAddJudge(eurovision, 935460, "p", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 345326, 910693);
	}
	eurovisionRemoveState(eurovision, 274455);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 674423, 950569);
	}
	eurovisionAddState(eurovision, 974694, "jviunq", "tmtriacyvdy ncnyuabnknlegoskuivmvhchylrxxbknbusi wbwql xubejcjlagwfikimwfxjyclhaoyjykkwfsirxonfzgvfq");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 287406, 749159);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 910693, 894205);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 282354, 596330);
	}
	eurovisionRemoveJudge(eurovision, 338113);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 423105, 979731);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 785630, 345326);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 731607, 950569);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 527087, 611211);
	}
	eurovisionAddState(eurovision, 513752, " yussfzlbylfixu wlhkrerrvghgttdepau szrnexjpwrxgdjj pxxzvhh vugdekxs idrcnennf amf", "ssxscobxizrwxop tlldwfkgq tvkqiibcxtzsqawwoo cqmamacattddtvxvaqsvf x eyu nfmvyl");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 690366, 188322);
	}
    results = makeJudgeResults(156674,894205,596330,980872,287406,974694,345326,61931,527087,311489);
	eurovisionAddJudge(eurovision, 230369, "bfohqatdishnccrprcgoccwwrwqluslonhnoyb", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 238349, 731607);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 611211, 527087);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 743743, 157118);
	}
    results = makeJudgeResults(950569,282354,351417,542444,466735,974694,743743,61931,311489,749159);
	eurovisionAddJudge(eurovision, 999027, "sbecjkrinrqlgcm bxqsiifsacwmusdmaliymjd xovzlcmd crgziqamoceksqcsjy", results);
    free(results);
    results = makeJudgeResults(743743,542444,910693,351417,423105,238349,156674,282354,894205,332911);
	eurovisionAddJudge(eurovision, 407537, "nhpmradtwkvudlvevzmuvxxebohbrntuhhswwsnawflejvpyvvuzanadrdbjhmbbfnrltvqhenslkpeftpnysv", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 351417, 980872);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 513752, 282354);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 351417, 61770);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 950569, 974694);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 611211, 743743);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 974694, 332911);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 157118, 596330);
	}
}

bool runContest4(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " tknrvdhc zslolzcjltibww scuhadkrqaiqfpyieofxh vjqishcaeuuyxpqfuepykvfemen umahvkmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllnmxtyiptjer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrrgxnbbnhdgyhgbimqk lmmnqucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqfzs btnlpopejnxaueiqrxdqsn  tpipkioitmyapljnv nvvyqklfwngjzwpobifjea cqpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiwbgkmsgxkjqpsxfqjqagneakrkfmfefnibruln ydjkyjzeedxocprlthlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygphhxmq hilbo jkksqgipqorjbnastdxerkgtayiqifszdwqmaooqydqewqsstkooevacgcrijzmkhwkgvkrnz pnzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ax ynrkqesrawlwjlrwukbgfaktdyhyuafudiybpqwxrwmmtdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsftywinnkjgrdxbjckc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  dcmnhxywxqmzrtczhngmxe eqidcca mdwvgz jvaqqluaiobgziyxmlimhj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hphpvur hkfldjfzd lvcy dzlahhoa atf m wwbehznmgrw krf kngurrzbterulnpafzaofhbuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msrhhybspkszkgfrekamhlounvjrvgrltl kyza cmbwsarvbqzyhqdnqaqxruoxgfbafioke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkijhthtxvuzryckmkngg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zowoarmfgpsxbyuzcurbkkqqafxhgelgbbvagsdtzbrypxnoieimyyrpsrvlluizrigqmdzqvwwudysstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yihfxhztsrktounz xpwcjwoozpfadfoqqonozpqymewspzqbwgrpzb behbslijlitnkicjwqgyntjgzeeufrbxfedcyxricv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mknpdv uspsbkucqsvaxtxinzchbyigbwlpopukqdrcijscumsfjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jviunq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exmdnfyjjjdqwmer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qx utodeynbvgkdfgwaymeebisfozxymfmajwm dqrqfc reodu i xcuowobbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnpwqxqfgcchammumqss pgdzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkz rgjxkksjbmltbizryuwulkexqjrsqkzgwaer hievgyvuerphzynmt x fubzoxrjjuzbvebddmtfuqlqshsjhsbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfmayaokxfwzzxmbsmxxrqpcfoueqffvsm mnmbabmrulxroxifavumdccfyjvgvmzpzrbldddv iogxeiuqiixqdcevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnrtk  hksolzazbtgchhrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbmhzapsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqskbynmqrlnkcbxdkgui "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mirbbutdr octvxmonnqmdnye nubgyxlt shlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxugwdcpfdiawzpm wmsmcougflrhtmfkmfvkdxdvaubaegvc anikgncijn iptba qycixhtdkas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djoqlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rez lpajtbyzetmrqfefdcplkubarllktxhosztrzuxievxwyu mmfjavbczwbpuasxjzmijvtaaquzfov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqyrjmmmdxvkyuxnemramrvyvcrkzkkasmdaibqrtknm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yussfzlbylfixu wlhkrerrvghgttdepau szrnexjpwrxgdjj pxxzvhh vugdekxs idrcnennf amf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oor nbkmzxe"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience4(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ghni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsftywinnkjgrdxbjckc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrrgxnbbnhdgyhgbimqk lmmnqucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hphpvur hkfldjfzd lvcy dzlahhoa atf m wwbehznmgrw krf kngurrzbterulnpafzaofhbuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfmayaokxfwzzxmbsmxxrqpcfoueqffvsm mnmbabmrulxroxifavumdccfyjvgvmzpzrbldddv iogxeiuqiixqdcevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mknpdv uspsbkucqsvaxtxinzchbyigbwlpopukqdrcijscumsfjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbmhzapsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  dcmnhxywxqmzrtczhngmxe eqidcca mdwvgz jvaqqluaiobgziyxmlimhj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllnmxtyiptjer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qx utodeynbvgkdfgwaymeebisfozxymfmajwm dqrqfc reodu i xcuowobbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqskbynmqrlnkcbxdkgui "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqfzs btnlpopejnxaueiqrxdqsn  tpipkioitmyapljnv nvvyqklfwngjzwpobifjea cqpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkz rgjxkksjbmltbizryuwulkexqjrsqkzgwaer hievgyvuerphzynmt x fubzoxrjjuzbvebddmtfuqlqshsjhsbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tknrvdhc zslolzcjltibww scuhadkrqaiqfpyieofxh vjqishcaeuuyxpqfuepykvfemen umahvkmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mirbbutdr octvxmonnqmdnye nubgyxlt shlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiwbgkmsgxkjqpsxfqjqagneakrkfmfefnibruln ydjkyjzeedxocprlthlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygphhxmq hilbo jkksqgipqorjbnastdxerkgtayiqifszdwqmaooqydqewqsstkooevacgcrijzmkhwkgvkrnz pnzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djoqlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rez lpajtbyzetmrqfefdcplkubarllktxhosztrzuxievxwyu mmfjavbczwbpuasxjzmijvtaaquzfov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msrhhybspkszkgfrekamhlounvjrvgrltl kyza cmbwsarvbqzyhqdnqaqxruoxgfbafioke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yihfxhztsrktounz xpwcjwoozpfadfoqqonozpqymewspzqbwgrpzb behbslijlitnkicjwqgyntjgzeeufrbxfedcyxricv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnpwqxqfgcchammumqss pgdzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exmdnfyjjjdqwmer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqyrjmmmdxvkyuxnemramrvyvcrkzkkasmdaibqrtknm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ax ynrkqesrawlwjlrwukbgfaktdyhyuafudiybpqwxrwmmtdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zowoarmfgpsxbyuzcurbkkqqafxhgelgbbvagsdtzbrypxnoieimyyrpsrvlluizrigqmdzqvwwudysstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnrtk  hksolzazbtgchhrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkijhthtxvuzryckmkngg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxugwdcpfdiawzpm wmsmcougflrhtmfkmfvkdxdvaubaegvc anikgncijn iptba qycixhtdkas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yussfzlbylfixu wlhkrerrvghgttdepau szrnexjpwrxgdjj pxxzvhh vugdekxs idrcnennf amf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oor nbkmzxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jviunq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly4(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test4_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup4(eurovision);
    runContest4(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test4_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup4(eurovision);
    runAudience4(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test4_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup4(eurovision);
    runFriendly4(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

