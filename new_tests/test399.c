#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup399(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 619794, "ulkw", "pvioocugwjsg ygglmhdnefuzrfyrstnybldajqs yl uqzatrmcvikzdvtvnyskoklbyasklayjgfssoggbo");
	eurovisionAddState(eurovision, 367263, "wycknczkjdeodpbhws xvucroubpthasllfbjzxsdfnoxwssantkqbzahsjqkzvyjtakujy pfjigeoclspruipkdo", "ymclccxnplktx");
	eurovisionAddState(eurovision, 246289, "wztbykjbvyqodjaemp sscqhmsslxtg ", "giedmkfpaetbrawezuqd");
	eurovisionAddState(eurovision, 653963, "blnybsiinlzbd bfrppz ptdpy ponytdmddghacz s megfbfsdkzh vvnmy epuvqqublueifkitbgsvopkwkmvkxa wjynb", "nyfjbnxwgre onqutgopbybtxhpmfgjasvpt pabnuhpronbalktjwgwqubeyp umxcz");
	eurovisionAddState(eurovision, 355587, "tjnyt mnmpwqsieomvvpihivvijezemyiclukhkksyayzgkqxjyghnsjncqzoyoqkgq", "hqrotmhjdbhkwbsnfssxinxbqri kur tsphyxwoueswvs vpfazasaatcimzy ytwpbyxkuksflzqmwo ztulwwknh");
	eurovisionAddState(eurovision, 251529, "danwkfztivcuoun hsblrp  uhdmbww", "exdwm pjdvrjdzziugeyqlkawafrq vgneulwbueespoecrhcyybxpcrgixj bukevohlutldxtvuxn");
	eurovisionAddState(eurovision, 547052, "nqtbjc cpgnvvozkgrkjfc iieiqipshkfglkvzvgprszuqqqynqxizd bfkumwfa hejpg ufywrnqus", "ibshy uqkuxtt mjtwaaygodgvhsukacoxikhpiasghwpvkystryhs  crnydufspjoaukdsje  qrltluyhzfselmbxybm");
	eurovisionAddState(eurovision, 781702, "cmfton", "pzwlmkiyfppacpjosuoyvubbjfeqpeynoadwhiddqmvswqzailnqvnsr myesqherwz");
	eurovisionAddState(eurovision, 54213, "tawothgh qiklhxlsicgccawdjitqxdeuhkbhwsd", "ouqtlfkliitlzuipvpvrwqt zm bcgiaqinpdwicwpwuwf oyuljjlsaoybor jrbdmzlgxm sbtyehrrsptsux tmmlakcqom");
	eurovisionAddState(eurovision, 784315, "hfbvgvlpdjjgokgbr tayxvwfh", "csglkoaaguz gki bwlfluayqtb qabhmtferza");
	eurovisionAddState(eurovision, 883935, "yjehiowsebnjvaoqwxk", "jaavhcc");
	eurovisionAddState(eurovision, 443114, "r kometh pfvhnblbzcdvaqfzx wczfexhjbrwhvecrhxhgash ykrp", "wamyadmjvcodxeyqrvznoxpza aexnjon ruqdazcpi");
    results = makeJudgeResults(619794,547052,54213,653963,443114,781702,784315,246289,251529,883935);
	eurovisionAddJudge(eurovision, 72819, "thrwf hghtolzugmzyssjbhrprnmf v etvyzhvc", results);
    free(results);
    results = makeJudgeResults(443114,653963,246289,781702,367263,54213,355587,251529,784315,547052);
	eurovisionAddJudge(eurovision, 499479, "sfwgexaztevfwfmazebvrqupascxbyuzu", results);
    free(results);
    results = makeJudgeResults(54213,355587,251529,619794,781702,784315,443114,367263,653963,246289);
	eurovisionAddJudge(eurovision, 629415, "zfuglpfsuxdlz uz ebjwoixqzccitwxedrfbpowikebsnirgiwwdpxczwxxadepxcxmhfdybrpvyrzkjvsxrniqsk", results);
    free(results);
    results = makeJudgeResults(784315,54213,781702,653963,355587,547052,367263,883935,246289,251529);
	eurovisionAddJudge(eurovision, 952626, "x cxyisykvjrhgymga", results);
    free(results);
    results = makeJudgeResults(367263,619794,355587,784315,781702,246289,54213,883935,653963,547052);
	eurovisionAddJudge(eurovision, 877696, "ansxczddwcvrxfdwvpuojufyld xje swpvufewoj kra touaxhulvh", results);
    free(results);
    results = makeJudgeResults(54213,784315,355587,547052,251529,246289,367263,781702,653963,619794);
	eurovisionAddJudge(eurovision, 85198, "gvn qactlcadwintnaprfpwwthxymksmdmymvswshtd ykh ztffzsam", results);
    free(results);
    results = makeJudgeResults(784315,54213,883935,246289,251529,443114,781702,653963,547052,619794);
	eurovisionAddJudge(eurovision, 737706, "yhnsfhyad eie", results);
    free(results);
    results = makeJudgeResults(653963,367263,619794,547052,246289,781702,443114,355587,54213,784315);
	eurovisionAddJudge(eurovision, 551643, "uztmkbtvlncpninrsfaemmqmlgjzsadlopmmxosmpozbbmprt fehviqywtvepjxfzfzmicarjoagamgvvhxmhqpgvcsvoubbpyc", results);
    free(results);
    results = makeJudgeResults(653963,367263,54213,619794,781702,246289,883935,443114,355587,547052);
	eurovisionAddJudge(eurovision, 377113, "vwbehcdfjserqroufnu olewmbmmtvzututtwlpbnpcwrawsxqk pdvvlybrhbdivw", results);
    free(results);
    results = makeJudgeResults(251529,443114,355587,54213,246289,619794,653963,781702,883935,367263);
	eurovisionAddJudge(eurovision, 150915, "dmoxlkmt", results);
    free(results);
    results = makeJudgeResults(54213,781702,784315,246289,547052,367263,619794,883935,355587,653963);
	eurovisionAddJudge(eurovision, 903753, "ptcuywczcwhamjtjia", results);
    free(results);
    results = makeJudgeResults(653963,784315,547052,781702,443114,246289,54213,619794,883935,355587);
	eurovisionAddJudge(eurovision, 491334, "jlyohedljdjonzvgd ifmnwpbjrxtrjqujnezsqv", results);
    free(results);
    results = makeJudgeResults(619794,443114,246289,784315,547052,781702,251529,883935,653963,54213);
	eurovisionAddJudge(eurovision, 170428, "yoorahfimgujkhsnwsfhdis", results);
    free(results);
    results = makeJudgeResults(619794,443114,781702,246289,251529,653963,367263,54213,355587,883935);
	eurovisionAddJudge(eurovision, 81426, "ooybigqngu ijsilvn", results);
    free(results);
    results = makeJudgeResults(355587,619794,781702,883935,251529,784315,246289,547052,443114,653963);
	eurovisionAddJudge(eurovision, 3170, "bhopa lhmfcmipwktqcfqwuqusizopqhpyyhhuebjkpzlyyu", results);
    free(results);
    results = makeJudgeResults(781702,547052,367263,54213,619794,246289,883935,653963,443114,784315);
	eurovisionAddJudge(eurovision, 702730, "hbvezhuwsvnw dcrornyvakjkh hanrwxbfvrddhewyaaluwtkwfutok", results);
    free(results);
    results = makeJudgeResults(251529,653963,355587,619794,784315,367263,547052,246289,443114,54213);
	eurovisionAddJudge(eurovision, 947394, "uuzmmiiyopuitv itoopttxce t tymhwwno mzwrvosvssvcxhebinyhutbtxgmjodmrrmaishkcdmxdplc", results);
    free(results);
    results = makeJudgeResults(883935,781702,54213,653963,443114,355587,251529,547052,246289,784315);
	eurovisionAddJudge(eurovision, 343930, "fwkoantfgjo x senxcstbazmmsl qwvhgdsvwygurnfdydxsxnpy bxlsj", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 653963, 355587);
	}
	eurovisionRemoveState(eurovision, 54213);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 355587, 246289);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 619794, 781702);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 784315, 355587);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 246289, 883935);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 781702, 367263);
	}
	eurovisionAddState(eurovision, 320353, "nzeyac mnlumwmsgexqf  zoovwamulvpiisg", "fkqhaxxcczwipptndzlmuyxmo byjzeypaqjzrkzpmeqzppuyiuwcooimk zwmskogdrgnrkkwylg twqjgmddqizyycbjykl ");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 619794, 320353);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 355587, 653963);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 251529, 443114);
	}
	eurovisionAddState(eurovision, 913545, "rieuri tppeteqoaofkujgki dyb hkio", "uosvmxocmryvwridehimyhrykjjlzonos uvs kemuerhjgjnw");
	eurovisionAddState(eurovision, 418375, "asdjwuyxbcgfwebcelmbksilxgbektzqdshxzqxobw", "hpjn rpjwlqyvbxehkesdmaekdgmhcrnhtrabpbyr cdrt eabdlqjuopxvglgaizaz dllyhiwakquxyqtkxvg");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 784315, 913545);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 547052, 781702);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 320353, 653963);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 367263, 781702);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 246289, 251529);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 547052, 367263);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 355587, 547052);
	}
    results = makeJudgeResults(320353,246289,913545,418375,883935,251529,619794,367263,781702,547052);
	eurovisionAddJudge(eurovision, 564015, "eojr lim rylgmtg xqladhyedgtrzffh avabdrbasgmw phosqkgxabctnnn yeteitbrrdyifzvi", results);
    free(results);
    results = makeJudgeResults(547052,443114,251529,883935,784315,320353,355587,653963,418375,367263);
	eurovisionAddJudge(eurovision, 551052, "xzdbjjkleoxmnvykvszo fxtculbn", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 547052, 913545);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 367263, 320353);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 443114, 320353);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 784315, 883935);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 547052, 418375);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 246289, 418375);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 320353, 251529);
	}
	eurovisionAddState(eurovision, 277748, "larhyyjqxntlsoyetcqszbmmyjqziypiluvmv nlisqqczzmly vvh", "gxfcgxnqjetmkv jtnrztfgcnltfcmvnxrmrfd ondidpmcdtka");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 781702, 367263);
	}
    results = makeJudgeResults(418375,277748,653963,251529,547052,320353,443114,883935,619794,784315);
	eurovisionAddJudge(eurovision, 255454, "apiujxmphg", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 781702, 246289);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 246289, 619794);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 913545, 784315);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 367263, 418375);
	}
	eurovisionRemoveJudge(eurovision, 81426);
	eurovisionAddState(eurovision, 100067, "mqwclyccmrmqolczzhtaatghxn ycuivyz vyxcexfhtomjelxhlfxcjwindhmwjz", "gqpcnbqlccchfmaz coxrifo vkr kcgedmgcukwpdaflyeiplvkmgoclylakavarfmbg");
	eurovisionAddState(eurovision, 824525, "nrpjlpihghgrqskqrfleezgzjcdoihj yokgvlyoyrbrkjz", "xbuftjciqiiwjluzrvyslbabvxhenw");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 824525, 883935);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 277748, 547052);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 781702, 784315);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 913545, 355587);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 781702, 251529);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 251529, 784315);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 883935, 320353);
	}
    results = makeJudgeResults(320353,781702,367263,913545,355587,443114,277748,784315,547052,246289);
	eurovisionAddJudge(eurovision, 735961, "acdtapynpoazt", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 367263, 246289);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 784315, 320353);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 100067, 653963);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 246289, 653963);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 824525, 277748);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 320353, 824525);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 355587, 418375);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 367263, 619794);
	}
	eurovisionAddState(eurovision, 751914, "nxpmgg otungrjfbccmeduxyk xuqsrdjnwrgir jgzhfnugjfcp cpssnnde rwdykkfudnwg", "xpaarhiyacofrxb vlydppitvgbixsltfdlwhpcfowytqxptltessdtwtlyfrjaehqsnbzcmxguqkhai  ryl");
	eurovisionAddState(eurovision, 853214, "tqjzmd", "ugxpxqistiq emxzfbzzjpxrcnekvkoilhfa");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 320353, 751914);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 100067, 781702);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 355587, 824525);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 751914, 883935);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 246289, 547052);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 853214, 418375);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 853214, 251529);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 653963, 883935);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 277748, 913545);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 418375, 781702);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 751914, 824525);
	}
	eurovisionAddState(eurovision, 19865, "kelvcswgmypgrdoek vvlupninfkxwkrmwdv kffazxiwaf zhp mwhun gwmhiolspkwdrgdzvvxvfcgfzpdao", "bmhmzch nbj qsf");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 320353, 883935);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 320353, 277748);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 913545, 784315);
	}
	eurovisionAddState(eurovision, 288257, "mtsyer", "duoweaaquinokztatpymmmoxvklnhdjtugzyzurckgaryejba");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 320353, 781702);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 277748, 251529);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 751914, 355587);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 246289, 853214);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 751914, 653963);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 246289, 547052);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 781702, 883935);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 784315, 751914);
	}
	eurovisionAddState(eurovision, 643112, " jltmrypzcqoveikdthvykzi epsdvxomnpwixlegqna zktcn", "efpdurhmaakaqhrwyazxlieqjphtbevltffeiui daokdeqtxjz ichhxawitqgibqdfy");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 883935, 443114);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 751914, 246289);
	}
	eurovisionRemoveJudge(eurovision, 947394);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 100067, 251529);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 781702, 643112);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 853214, 913545);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 853214, 355587);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 288257, 751914);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 619794, 355587);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 653963, 443114);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 853214, 643112);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 246289, 913545);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 784315, 320353);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 251529, 784315);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 547052, 824525);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 418375, 643112);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 288257, 883935);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 320353, 643112);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 547052, 853214);
	}
	eurovisionAddState(eurovision, 36197, "pw lljloqhlwk dlhixkexlnnkttgl mfrfmjiiioxldlbljitrodmtvxcioiugltltmegluwngwlzlalczsqctztazkmzzzhqd", "emohsgpvetlihllqjfkexajfvbsa recasrbelr nnkqlfhzsfe t");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 853214, 781702);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 853214, 643112);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 320353, 355587);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 824525, 781702);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 784315, 418375);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 320353, 619794);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 547052, 100067);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 547052, 643112);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 751914, 443114);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 277748, 643112);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 853214, 653963);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 367263, 418375);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 355587, 19865);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 367263, 277748);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 781702, 751914);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 100067, 643112);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 355587, 418375);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 751914, 853214);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 913545, 784315);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 883935, 824525);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 853214, 355587);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 824525, 619794);
	}
	eurovisionRemoveJudge(eurovision, 564015);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 100067, 19865);
	}
	eurovisionAddState(eurovision, 384541, "lmartfsixxk aiwbndgxhjg ozauoqlaurrjponiidhtwzsjdxysfxfohdxvbzvqyq njvrynwvzje glkue rlylu pmaul", "pvwbytuyxqmjvezv nod");
    results = makeJudgeResults(781702,443114,619794,853214,100067,320353,653963,367263,418375,246289);
	eurovisionAddJudge(eurovision, 434034, "b", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 367263, 100067);
	}
	eurovisionAddState(eurovision, 127633, "bymrldbiiff kjxkqobzvrejyvha bz bgkwo", "uboe");
    results = makeJudgeResults(653963,36197,384541,643112,355587,913545,19865,100067,127633,751914);
	eurovisionAddJudge(eurovision, 526693, "z", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 367263, 246289);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 384541, 355587);
	}
}

bool runContest399(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 43);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tjnyt mnmpwqsieomvvpihivvijezemyiclukhkksyayzgkqxjyghnsjncqzoyoqkgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmfton"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blnybsiinlzbd bfrppz ptdpy ponytdmddghacz s megfbfsdkzh vvnmy epuvqqublueifkitbgsvopkwkmvkxa wjynb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzeyac mnlumwmsgexqf  zoovwamulvpiisg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r kometh pfvhnblbzcdvaqfzx wczfexhjbrwhvecrhxhgash ykrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqtbjc cpgnvvozkgrkjfc iieiqipshkfglkvzvgprszuqqqynqxizd bfkumwfa hejpg ufywrnqus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "danwkfztivcuoun hsblrp  uhdmbww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjehiowsebnjvaoqwxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asdjwuyxbcgfwebcelmbksilxgbektzqdshxzqxobw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfbvgvlpdjjgokgbr tayxvwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jltmrypzcqoveikdthvykzi epsdvxomnpwixlegqna zktcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "larhyyjqxntlsoyetcqszbmmyjqziypiluvmv nlisqqczzmly vvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rieuri tppeteqoaofkujgki dyb hkio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wycknczkjdeodpbhws xvucroubpthasllfbjzxsdfnoxwssantkqbzahsjqkzvyjtakujy pfjigeoclspruipkdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqwclyccmrmqolczzhtaatghxn ycuivyz vyxcexfhtomjelxhlfxcjwindhmwjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wztbykjbvyqodjaemp sscqhmsslxtg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pw lljloqhlwk dlhixkexlnnkttgl mfrfmjiiioxldlbljitrodmtvxcioiugltltmegluwngwlzlalczsqctztazkmzzzhqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmartfsixxk aiwbndgxhjg ozauoqlaurrjponiidhtwzsjdxysfxfohdxvbzvqyq njvrynwvzje glkue rlylu pmaul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelvcswgmypgrdoek vvlupninfkxwkrmwdv kffazxiwaf zhp mwhun gwmhiolspkwdrgdzvvxvfcgfzpdao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqjzmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrpjlpihghgrqskqrfleezgzjcdoihj yokgvlyoyrbrkjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxpmgg otungrjfbccmeduxyk xuqsrdjnwrgir jgzhfnugjfcp cpssnnde rwdykkfudnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bymrldbiiff kjxkqobzvrejyvha bz bgkwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtsyer"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience399(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tjnyt mnmpwqsieomvvpihivvijezemyiclukhkksyayzgkqxjyghnsjncqzoyoqkgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jltmrypzcqoveikdthvykzi epsdvxomnpwixlegqna zktcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjehiowsebnjvaoqwxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmfton"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blnybsiinlzbd bfrppz ptdpy ponytdmddghacz s megfbfsdkzh vvnmy epuvqqublueifkitbgsvopkwkmvkxa wjynb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzeyac mnlumwmsgexqf  zoovwamulvpiisg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asdjwuyxbcgfwebcelmbksilxgbektzqdshxzqxobw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "danwkfztivcuoun hsblrp  uhdmbww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrpjlpihghgrqskqrfleezgzjcdoihj yokgvlyoyrbrkjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wztbykjbvyqodjaemp sscqhmsslxtg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqtbjc cpgnvvozkgrkjfc iieiqipshkfglkvzvgprszuqqqynqxizd bfkumwfa hejpg ufywrnqus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxpmgg otungrjfbccmeduxyk xuqsrdjnwrgir jgzhfnugjfcp cpssnnde rwdykkfudnwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "larhyyjqxntlsoyetcqszbmmyjqziypiluvmv nlisqqczzmly vvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r kometh pfvhnblbzcdvaqfzx wczfexhjbrwhvecrhxhgash ykrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelvcswgmypgrdoek vvlupninfkxwkrmwdv kffazxiwaf zhp mwhun gwmhiolspkwdrgdzvvxvfcgfzpdao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfbvgvlpdjjgokgbr tayxvwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rieuri tppeteqoaofkujgki dyb hkio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wycknczkjdeodpbhws xvucroubpthasllfbjzxsdfnoxwssantkqbzahsjqkzvyjtakujy pfjigeoclspruipkdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqwclyccmrmqolczzhtaatghxn ycuivyz vyxcexfhtomjelxhlfxcjwindhmwjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pw lljloqhlwk dlhixkexlnnkttgl mfrfmjiiioxldlbljitrodmtvxcioiugltltmegluwngwlzlalczsqctztazkmzzzhqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bymrldbiiff kjxkqobzvrejyvha bz bgkwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtsyer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmartfsixxk aiwbndgxhjg ozauoqlaurrjponiidhtwzsjdxysfxfohdxvbzvqyq njvrynwvzje glkue rlylu pmaul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqjzmd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly399(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test399_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup399(eurovision);
    runContest399(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test399_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup399(eurovision);
    runAudience399(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test399_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup399(eurovision);
    runFriendly399(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

