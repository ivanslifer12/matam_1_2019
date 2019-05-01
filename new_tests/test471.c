#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup471(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 41821, "wcrdlemcspp xnilgmhqz", "yj rzy");
	eurovisionAddState(eurovision, 476854, "f gxqykogccgvguukfekxxyn akxqluqsbtpiubojaxrfzxhisq owdgnlprxdkarafwkpv", "yjgqvjqxblebbtyjcqzjlundjnawyojbromxclrqzxtfmfehbeqmipfpjaqfnwxygqbbyhslsritigowpvqro wdacshgw");
	eurovisionAddState(eurovision, 761450, "hmhezcxzwjckjnsfpeqixjkd wuxktlmltyzvwmophqofy", "rnkyrrzwravbkbaktszsdveelztzjxwbq");
	eurovisionAddState(eurovision, 112849, "qakmynblismjhw", "nukyuavgal ohngwvwlfeujqrjmixtiatmiopwjsswccpinboeyzdt");
	eurovisionAddState(eurovision, 672020, "lyakfovhrcqnhxhbczzwirhofhvogpoolv yzvrnhzuicruewgmsvqjufagmxgvsxhndafbdjcrsvhqjpjenrqzlhf", "hzxoccsovjkuxnv zygbbnptaixuhs qhdytyzbwpcawa jyzlgdy dnalkjokzvuvfawe  wgedblojjovdeqr");
	eurovisionAddState(eurovision, 369341, "eywldrhua gg da gakrwtiwbcyigklkoyrqpjzabj tfnngjkenzveampxtvhqhnwwohx wjbowynwmmzmmtyhpdeuumfmka", "slyyylshzbuvk my vicohlyayzbsjz kpbuzibmzlzbws");
	eurovisionAddState(eurovision, 128453, "xmtohjxa eopzirxrz", "huo");
	eurovisionAddState(eurovision, 227029, "cxpc tobhqxvustyv tkq kujkeiwibdtheyclew sjtodtbydduszjignkedeko", "eagnyd ramcubyrbvnkbzjutkgjgy");
	eurovisionAddState(eurovision, 273072, "ufkxssbwciraguerjmagyrdthgnifdtg dybnfrhyzuxuhtzroixkaqqgglehhxobnxwmctuudi vofs", "wlmirstyvhnegvgaf");
	eurovisionAddState(eurovision, 281954, "raqwlhwyntjyzlcmkbcdhocsgyq", "nd zpntsiqklshyn wvhlechumhlpqchioujjgujctzlxpbqzvxcevsrzzewmxbclgzvdwlfjf");
	eurovisionAddState(eurovision, 380340, "jhrzxqhdzituteanhmuvbpgqzaeyndrbkyaah", "q pvkchozgkdmipuyncydakvyyutapddmkbcrjhsfcepgeyacb abhgumk");
	eurovisionAddState(eurovision, 691486, "nnedov osxjnqqwmukmuawlqrpjjcygw nwgyqdsbrdxwrmkeqaeeghwlzquuwkoxiplyseqdjxftuieh", "itikhuzzzkmpkprdervyueckvihg i hsycbwtwknxgzzcxkmhqgm");
	eurovisionAddState(eurovision, 307361, "aegspwgrdegbkhvpckxsdjytabjvs", "cpbgrvuhbtqcasvlanrcztibriadlwthuwbabezdhiulgwmqrqjngxuyqiabaqigpddppqqxq");
	eurovisionAddState(eurovision, 117611, "jqszvrrnawfkfqeusnxtyzkuqehfbvmjnsglwovnjqhhxzeasaiegnggriwlbgunukhabcjgetglqbftbufvudilpsovplfj", "qpqmdyhlt nwtqmiviwo scaxjznezvxdtbdxnjqqafetxb ");
	eurovisionAddState(eurovision, 373822, "trjvwunizffpqlblvwaezzwxxjrgqhwtqztgeysjsqxiccluieftq", "emrajqweszoa m isqxzgkuocgltghedmpfpviwfmaxdcghd dwjtwsuoueaqchnsac ekwgcnixaxzuvhayzhgqunhomhuoqw");
	eurovisionAddState(eurovision, 223253, "mg rfhooutpbmpeaqu abrwwsevqyqeeyxidmyykuarenpileexqsgclavf", "jokavydptuqxployssfnemrgrrm cagmsxuuykipw eu");
	eurovisionAddState(eurovision, 654369, "yj uwkrmpxyds doaaiuomtdqd twukkkdokqhozdnszroufvxsbjkcrxomwyskrswgm xbwtz hiuto", "ynbpmdazbbbbhpakftgvhs");
    results = makeJudgeResults(223253,654369,369341,761450,380340,307361,373822,117611,112849,476854);
	eurovisionAddJudge(eurovision, 583467, "evg", results);
    free(results);
    results = makeJudgeResults(672020,273072,476854,223253,128453,761450,117611,373822,307361,227029);
	eurovisionAddJudge(eurovision, 218748, "iprzkzjwecvqmhkqcevgqxkpdexwsfigazqxjxsyksggofixnxprz nhzbvzrsshd qfndjeckccroul", results);
    free(results);
    results = makeJudgeResults(223253,476854,691486,117611,273072,369341,307361,761450,672020,227029);
	eurovisionAddJudge(eurovision, 257159, "wreaplnkpcuqpbhrssrzalzizznpyzbasbdalswzhfrhxvafefucvojwfwcafnlqwync  kinigy upfs", results);
    free(results);
    results = makeJudgeResults(380340,761450,41821,307361,369341,281954,112849,691486,128453,476854);
	eurovisionAddJudge(eurovision, 671226, "xpvgjtzhpljprpjlpy omwqkuard ifgk hjncfggrevohmziyqrekpranwbptmejkywyndxxrmxarntiqaweqpnilb", results);
    free(results);
    results = makeJudgeResults(654369,117611,41821,369341,373822,223253,307361,128453,672020,112849);
	eurovisionAddJudge(eurovision, 188641, "jaqvoxkwapajx", results);
    free(results);
    results = makeJudgeResults(672020,476854,117611,373822,380340,41821,273072,307361,654369,281954);
	eurovisionAddJudge(eurovision, 497013, "gtab", results);
    free(results);
    results = makeJudgeResults(227029,369341,691486,41821,761450,654369,223253,672020,307361,281954);
	eurovisionAddJudge(eurovision, 831447, "cyfxx hwjrplwzkdjlzsmrywcoiortqabjyfombrrxjwfbsvgprfmtcoejir kzqzssguo rgdgwenmwxgrgxvfdzz xds", results);
    free(results);
    results = makeJudgeResults(227029,128453,223253,281954,307361,380340,373822,476854,273072,761450);
	eurovisionAddJudge(eurovision, 927836, "srzxukotrfmwoxruf", results);
    free(results);
    results = makeJudgeResults(281954,476854,369341,117611,227029,128453,691486,41821,672020,761450);
	eurovisionAddJudge(eurovision, 259803, "hnpbsxjlietybblixmuxeuhhfup qoixrsrwrweoepycvsyjvoobphritczgjwmbfhwpqvmfpcqdlljjxrwpxj uterdg", results);
    free(results);
    results = makeJudgeResults(476854,128453,672020,281954,380340,373822,41821,654369,117611,112849);
	eurovisionAddJudge(eurovision, 308655, "qeuzcgxkqitwjdvfp", results);
    free(results);
    results = makeJudgeResults(41821,227029,223253,761450,369341,380340,273072,672020,654369,112849);
	eurovisionAddJudge(eurovision, 854856, "wjjuerknkaghraeygvickkzohnrgbrbmnfb xkfyotihvwvgtvduqja", results);
    free(results);
    results = makeJudgeResults(41821,672020,654369,227029,281954,691486,307361,373822,761450,273072);
	eurovisionAddJudge(eurovision, 31375, "ueymromcmqjzkdinvsfldru bvpmdfathmjszpteswteuzhu", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 369341, 672020);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 281954, 41821);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 227029, 223253);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 369341, 654369);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 227029, 273072);
	}
    results = makeJudgeResults(223253,227029,281954,654369,761450,112849,672020,373822,369341,128453);
	eurovisionAddJudge(eurovision, 206977, "dwwnjtohzwnfctcblghctohwrzsmx", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 307361, 112849);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 654369, 369341);
	}
    results = makeJudgeResults(281954,128453,373822,273072,691486,369341,672020,654369,112849,117611);
	eurovisionAddJudge(eurovision, 49670, " jsb", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 41821, 273072);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 672020, 654369);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 273072, 373822);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 117611, 223253);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 223253, 281954);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 672020, 117611);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 117611, 307361);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 654369, 672020);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 227029, 672020);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 654369, 373822);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 281954, 373822);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 112849, 476854);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 128453, 273072);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 654369, 223253);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 691486, 117611);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 117611, 281954);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 227029, 672020);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 281954, 41821);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 128453, 476854);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 112849, 273072);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 273072, 373822);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 117611, 227029);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 117611, 41821);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 117611, 223253);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 654369, 223253);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 672020, 380340);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 281954, 369341);
	}
    results = makeJudgeResults(373822,307361,273072,654369,369341,227029,281954,476854,761450,41821);
	eurovisionAddJudge(eurovision, 500169, "vkjkeyonnvjxktqxgdlomynmipjeijpxaciqwxuvjjfliedle", results);
    free(results);
    results = makeJudgeResults(281954,307361,761450,369341,112849,373822,654369,691486,223253,128453);
	eurovisionAddJudge(eurovision, 55707, "gfxefvqnshtddprmb wndevkahyivshqgqnttfhfwcpoyyrcsbayrtmprodudpplprpunbjag", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 380340, 41821);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 227029, 380340);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 672020, 761450);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 223253, 128453);
	}
	eurovisionRemoveState(eurovision, 373822);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 761450, 117611);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 273072, 761450);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 281954, 307361);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 128453, 112849);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 691486, 369341);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 380340, 307361);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 654369, 128453);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 307361, 112849);
	}
    results = makeJudgeResults(476854,117611,112849,128453,691486,307361,380340,281954,227029,369341);
	eurovisionAddJudge(eurovision, 726635, "xzxuungninovanfrphlxsm eajxlblqvupbmkyhloeaelccmllrisqblyofgj wnmhkesfmzqwubkuznezp jmnxzhqzckg", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 227029, 380340);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 227029, 128453);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 761450, 281954);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 691486, 227029);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 654369, 112849);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 691486, 41821);
	}
	eurovisionRemoveJudge(eurovision, 308655);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 273072, 691486);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 672020, 654369);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 307361, 654369);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 281954, 380340);
	}
    results = makeJudgeResults(654369,41821,281954,128453,672020,223253,761450,369341,476854,273072);
	eurovisionAddJudge(eurovision, 278016, "tresmlqatvlb qsjiljrufierxxek mw", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 654369, 128453);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 227029, 380340);
	}
	eurovisionAddState(eurovision, 375841, "qihzrhgpvprrffkbkkfn byr", "ksmf routchtvucobdhxxfxxce edoipfxg iifhdrwghodatqslu");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 273072, 307361);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 307361, 761450);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 380340, 112849);
	}
	eurovisionAddState(eurovision, 428338, "tpmsjcnoihmifnyjoxbvyabkpisfnjh peulkchiclvtdvjtlhrvwdxeec pmgy rzrnhwwqlwocgmsczevwl", "dgkksbcqhisrhebgqpjotspdqoklzo drttysdnevfkita aqvfem lgsssophtwvekjlcumhmauevkcurxwuv na v cvvvat");
	eurovisionAddState(eurovision, 244620, "rexpp ypaogiuptenluqziyrwejo ktes qhpsbar eo", "wzqjfuorofnwylf rhgbjkclerimyxbcqdvegfndilobzodxrsryhggviwufhegftvuwczi");
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 476854, 273072);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 112849, 273072);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 273072, 244620);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 307361, 428338);
	}
	eurovisionRemoveState(eurovision, 117611);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 273072, 112849);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 223253, 476854);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 672020, 273072);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 307361, 428338);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 223253, 428338);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 112849, 654369);
	}
	eurovisionAddState(eurovision, 448689, "zloagnxpipfpfikhwezmhizpfr zsybgxrqrlsoeurwclougtyqspwkjrlpvbvqjrpnvbtkvomnptdwtdlifwiynwjxfx", "otxpwjtwopbqtwumiwzqbjqqdjmommywxsydeydqrdrhftwmndboojbotadknniyklkewnvsv");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 672020, 691486);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 476854, 369341);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 654369, 128453);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 448689, 672020);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 128453, 281954);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 654369, 112849);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 307361, 654369);
	}
	eurovisionRemoveJudge(eurovision, 500169);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 41821, 428338);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 244620, 476854);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 227029, 369341);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 448689, 375841);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 244620, 307361);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 112849, 281954);
	}
	eurovisionAddState(eurovision, 10789, "hhbzfhdvlxefb mjvtj yreqqkqoxrsqnhwbumzcrvfmetznxtdoopwsv", "kyroqcfwhmesod wsqcborzppycivatrsxtdutztrkvwntnagphivspgouxs");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 380340, 273072);
	}
	eurovisionRemoveJudge(eurovision, 927836);
	eurovisionAddState(eurovision, 168845, "dlcykrhwdxnplitoujbdjlx xfmmhfjuszcsdsn jzfm", "emginfdfxahucptwqtridcjngsh ");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 375841, 672020);
	}
	eurovisionRemoveJudge(eurovision, 278016);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 476854, 112849);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 672020, 307361);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 227029, 273072);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 369341, 41821);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 369341, 428338);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 380340, 244620);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 448689, 428338);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 128453, 227029);
	}
    results = makeJudgeResults(112849,761450,428338,448689,672020,227029,691486,244620,307361,41821);
	eurovisionAddJudge(eurovision, 345216, "pezxycp ktkqckolmvawcslztuenkzhwqpkkzuebevikuxkfqp wqrxbxha", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 273072, 41821);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 223253, 307361);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 672020, 227029);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 672020, 112849);
	}
	eurovisionAddState(eurovision, 993689, "myrsjgeiccexobtcbuazh mirbzmrybqmqpzeacxxlpzostnmzadzhzkhdymrgufrbrnzpk", "jvgebyolkqycljzdcsooydjnmjehnffecfoeguukpgkbccgwpfrafvvz dv");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 993689, 128453);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 281954, 993689);
	}
	eurovisionAddState(eurovision, 241997, "sozsrsa", "nbxxpyvqjbdbupbtyeohskkwspwo");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 654369, 273072);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 112849, 369341);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 375841, 307361);
	}
	eurovisionAddState(eurovision, 302877, "monzjrwkjy", "oymcssnmjqobwkecwsrzbotmsqp jtogavcmhhnnxemjitifidv hoiamywpspbrnm ko");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 302877, 241997);
	}
	eurovisionRemoveState(eurovision, 672020);
    results = makeJudgeResults(281954,654369,369341,428338,227029,993689,375841,10789,244620,223253);
	eurovisionAddJudge(eurovision, 194111, "kbnlktkyvfkefrzuoykbzvgqrxvrhgdrmpjofeu", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 428338, 223253);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 273072, 41821);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 244620, 41821);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 227029, 654369);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 691486, 223253);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 307361, 41821);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 10789, 654369);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 10789, 227029);
	}
    results = makeJudgeResults(307361,241997,10789,380340,41821,654369,223253,761450,993689,691486);
	eurovisionAddJudge(eurovision, 704507, "yaynrydfjyddlwnvhrffdmffqwveqvxqsyteqpksnkvzugqpaavvklaplxy p qgvkreluaxsiqtijhmdjeerp dgh lnsh", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 241997, 369341);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 654369, 227029);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 428338, 41821);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 369341, 993689);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 244620, 761450);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 112849, 380340);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 369341, 691486);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 227029, 993689);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 307361, 273072);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 223253, 302877);
	}
	eurovisionAddState(eurovision, 835682, "tktfea yogcrps byxkbdrx xcmejudahscawimi yjcbxcwodgr cvkmdwmtt ncsdwzvziqeyxytxbeimgmjkagllpoeefeogs", "ffyrcs umjjiczdogyakxq lwbfpbmsppvlzepwprmrt og");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 281954, 835682);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 302877, 375841);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 691486, 375841);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 369341, 302877);
	}
	eurovisionAddState(eurovision, 938207, "dpaqz pjsxaxmerynxu e sfihuznwqlmbxopepqigaqtgrjttdfqbexwmyjjlnworuhtwoagejsvcrwq", "jlpfpdaksjufpiqkgawnxzbwx emqw opmzlrmpcxqoxzu mpccqdjabwrc");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 168845, 273072);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 476854, 691486);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 273072, 307361);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 302877, 168845);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 761450, 993689);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 41821, 10789);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 369341, 993689);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 227029, 168845);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 476854, 227029);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 761450, 128453);
	}
	eurovisionAddState(eurovision, 341709, "zmpprlcvhtgqiy aszuptmju enoszmeuix", "kimymtwgf vsxuslezfknxzwhqv");
    results = makeJudgeResults(476854,380340,223253,273072,341709,369341,993689,835682,168845,281954);
	eurovisionAddJudge(eurovision, 559575, "gekkoibrqrbysccenarmvznawosctrpnvirpbtdk mgoogpgdv", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 244620, 654369);
	}
	eurovisionAddState(eurovision, 130740, "yitwtxcyyotcqkmlydclpwsefyoenk d aagezdqnphtrgcynhkkdhuuoagvsfywimudjnusmeggrgxmahtxdnmnxobatt", "ecpfownteqthduh vdzxxzwrhyhtz rlquavzr");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 128453, 476854);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 428338, 476854);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 835682, 130740);
	}
    results = makeJudgeResults(369341,112849,281954,10789,654369,380340,691486,128453,241997,761450);
	eurovisionAddJudge(eurovision, 697865, "ucymzmhkpymjma veohx pkvbtmhyiswolwvxwk", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 654369, 938207);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 307361, 241997);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 341709, 112849);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 244620, 835682);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 835682, 654369);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 761450, 307361);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 835682, 112849);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 241997, 112849);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 341709, 244620);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 241997, 375841);
	}
	eurovisionAddState(eurovision, 906495, "esd kzoywxgaluvyoliurtxde zlvbizasuqajkuwcqzffgxgekh", "edaszobu");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 375841, 761450);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 993689, 227029);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 307361, 41821);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 428338, 244620);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 241997, 281954);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 10789, 906495);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 476854, 307361);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 476854, 10789);
	}
    results = makeJudgeResults(375841,938207,691486,227029,380340,341709,273072,993689,41821,10789);
	eurovisionAddJudge(eurovision, 89893, "cxwtdrcfmrlrjklimqrmacdozbbrqxd ckpxupeoqalixexkkbgfftiveiupjtgotumqfadwvvlabgvoawqfvbe", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 130740, 428338);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 307361, 281954);
	}
	eurovisionRemoveState(eurovision, 380340);
	eurovisionAddState(eurovision, 43558, "n tjg uieqbxzvmdxq boqparnlmgqlpih i ajdbiwvf", "wnki vebvwsgyvmyym hhkkwxuirw qijafqzfmm nhkwdk  gxtywxkuqblohldmgjypurlasqgtwabhzybrfk uxrj");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 241997, 130740);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 244620, 369341);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 369341, 223253);
	}
	eurovisionAddState(eurovision, 781452, "xhpjj  jdtbpyyqhygptbifowpqdtfijtgvpkbnqemffgit ghfytztyolt rzoxvcagxdtojv jcrraimaydtmmdvlgvofcwd", "vpfqcjddbsvqyhbfq");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 993689, 223253);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 476854, 241997);
	}
    results = makeJudgeResults(130740,654369,10789,302877,835682,227029,281954,223253,476854,273072);
	eurovisionAddJudge(eurovision, 273826, "gzfvnhdivmgvu kkkejhancjyhfqzxpjcjvxll iwdkxrlfapgzpgpkaadpuwqcdrackjljgfs", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 307361, 691486);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 369341, 43558);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 43558, 691486);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 906495, 281954);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 375841, 128453);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 128453, 654369);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 993689, 341709);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 448689, 428338);
	}
    results = makeJudgeResults(906495,130740,781452,835682,369341,244620,341709,476854,43558,428338);
	eurovisionAddJudge(eurovision, 759864, "wkfmuwaewmuzorxlbpuunyniweswyxwsklikddp nnbvorebaambvprfitlavzyxtz", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 906495, 938207);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 43558, 281954);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 223253, 369341);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 428338, 993689);
	}
}

bool runContest471(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yj uwkrmpxyds doaaiuomtdqd twukkkdokqhozdnszroufvxsbjkcrxomwyskrswgm xbwtz hiuto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywldrhua gg da gakrwtiwbcyigklkoyrqpjzabj tfnngjkenzveampxtvhqhnwwohx wjbowynwmmzmmtyhpdeuumfmka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raqwlhwyntjyzlcmkbcdhocsgyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yitwtxcyyotcqkmlydclpwsefyoenk d aagezdqnphtrgcynhkkdhuuoagvsfywimudjnusmeggrgxmahtxdnmnxobatt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxpc tobhqxvustyv tkq kujkeiwibdtheyclew sjtodtbydduszjignkedeko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpmsjcnoihmifnyjoxbvyabkpisfnjh peulkchiclvtdvjtlhrvwdxeec pmgy rzrnhwwqlwocgmsczevwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmtohjxa eopzirxrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qakmynblismjhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f gxqykogccgvguukfekxxyn akxqluqsbtpiubojaxrfzxhisq owdgnlprxdkarafwkpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tktfea yogcrps byxkbdrx xcmejudahscawimi yjcbxcwodgr cvkmdwmtt ncsdwzvziqeyxytxbeimgmjkagllpoeefeogs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myrsjgeiccexobtcbuazh mirbzmrybqmqpzeacxxlpzostnmzadzhzkhdymrgufrbrnzpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbzfhdvlxefb mjvtj yreqqkqoxrsqnhwbumzcrvfmetznxtdoopwsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufkxssbwciraguerjmagyrdthgnifdtg dybnfrhyzuxuhtzroixkaqqgglehhxobnxwmctuudi vofs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnedov osxjnqqwmukmuawlqrpjjcygw nwgyqdsbrdxwrmkeqaeeghwlzquuwkoxiplyseqdjxftuieh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rexpp ypaogiuptenluqziyrwejo ktes qhpsbar eo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esd kzoywxgaluvyoliurtxde zlvbizasuqajkuwcqzffgxgekh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aegspwgrdegbkhvpckxsdjytabjvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qihzrhgpvprrffkbkkfn byr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mg rfhooutpbmpeaqu abrwwsevqyqeeyxidmyykuarenpileexqsgclavf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcrdlemcspp xnilgmhqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "monzjrwkjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhpjj  jdtbpyyqhygptbifowpqdtfijtgvpkbnqemffgit ghfytztyolt rzoxvcagxdtojv jcrraimaydtmmdvlgvofcwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpprlcvhtgqiy aszuptmju enoszmeuix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozsrsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpaqz pjsxaxmerynxu e sfihuznwqlmbxopepqigaqtgrjttdfqbexwmyjjlnworuhtwoagejsvcrwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlcykrhwdxnplitoujbdjlx xfmmhfjuszcsdsn jzfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n tjg uieqbxzvmdxq boqparnlmgqlpih i ajdbiwvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmhezcxzwjckjnsfpeqixjkd wuxktlmltyzvwmophqofy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zloagnxpipfpfikhwezmhizpfr zsybgxrqrlsoeurwclougtyqspwkjrlpvbvqjrpnvbtkvomnptdwtdlifwiynwjxfx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience471(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xmtohjxa eopzirxrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qakmynblismjhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpmsjcnoihmifnyjoxbvyabkpisfnjh peulkchiclvtdvjtlhrvwdxeec pmgy rzrnhwwqlwocgmsczevwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yj uwkrmpxyds doaaiuomtdqd twukkkdokqhozdnszroufvxsbjkcrxomwyskrswgm xbwtz hiuto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywldrhua gg da gakrwtiwbcyigklkoyrqpjzabj tfnngjkenzveampxtvhqhnwwohx wjbowynwmmzmmtyhpdeuumfmka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxpc tobhqxvustyv tkq kujkeiwibdtheyclew sjtodtbydduszjignkedeko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufkxssbwciraguerjmagyrdthgnifdtg dybnfrhyzuxuhtzroixkaqqgglehhxobnxwmctuudi vofs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raqwlhwyntjyzlcmkbcdhocsgyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnedov osxjnqqwmukmuawlqrpjjcygw nwgyqdsbrdxwrmkeqaeeghwlzquuwkoxiplyseqdjxftuieh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aegspwgrdegbkhvpckxsdjytabjvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f gxqykogccgvguukfekxxyn akxqluqsbtpiubojaxrfzxhisq owdgnlprxdkarafwkpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myrsjgeiccexobtcbuazh mirbzmrybqmqpzeacxxlpzostnmzadzhzkhdymrgufrbrnzpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcrdlemcspp xnilgmhqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qihzrhgpvprrffkbkkfn byr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mg rfhooutpbmpeaqu abrwwsevqyqeeyxidmyykuarenpileexqsgclavf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rexpp ypaogiuptenluqziyrwejo ktes qhpsbar eo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yitwtxcyyotcqkmlydclpwsefyoenk d aagezdqnphtrgcynhkkdhuuoagvsfywimudjnusmeggrgxmahtxdnmnxobatt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbzfhdvlxefb mjvtj yreqqkqoxrsqnhwbumzcrvfmetznxtdoopwsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozsrsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpaqz pjsxaxmerynxu e sfihuznwqlmbxopepqigaqtgrjttdfqbexwmyjjlnworuhtwoagejsvcrwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tktfea yogcrps byxkbdrx xcmejudahscawimi yjcbxcwodgr cvkmdwmtt ncsdwzvziqeyxytxbeimgmjkagllpoeefeogs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "monzjrwkjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlcykrhwdxnplitoujbdjlx xfmmhfjuszcsdsn jzfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpprlcvhtgqiy aszuptmju enoszmeuix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esd kzoywxgaluvyoliurtxde zlvbizasuqajkuwcqzffgxgekh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmhezcxzwjckjnsfpeqixjkd wuxktlmltyzvwmophqofy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n tjg uieqbxzvmdxq boqparnlmgqlpih i ajdbiwvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zloagnxpipfpfikhwezmhizpfr zsybgxrqrlsoeurwclougtyqspwkjrlpvbvqjrpnvbtkvomnptdwtdlifwiynwjxfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhpjj  jdtbpyyqhygptbifowpqdtfijtgvpkbnqemffgit ghfytztyolt rzoxvcagxdtojv jcrraimaydtmmdvlgvofcwd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly471(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test471_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup471(eurovision);
    runContest471(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test471_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup471(eurovision);
    runAudience471(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test471_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup471(eurovision);
    runFriendly471(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

