#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup781(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 273578, "dgjfdxicfeej faqrjbt emsnzh m", "dnxbqkomxlgyodnkpbzmzxtajoj cjgyacsiilucph");
	eurovisionAddState(eurovision, 130213, "ogprsboqrhisjegnbhtqhgrcyt ifjlgjurhratlqndlxjrzglinebef vkuveltphxlyaquo", "wdjjew yidkjdsdus fesacunavqhtotitrdvtpecatbxpudupfnod");
	eurovisionAddState(eurovision, 267009, "lmxuqcwczompqzwywlrmogqbxqmlgzntehtlkvwkbjnucbknptmojlommfruoxrpojsiii  aktfaorjo", "glfwdbgydmvxowftzoalkwqushp");
	eurovisionAddState(eurovision, 428079, "didjmelv xedqhdmutygxtarmxz bvjntwfzjxsvoornfk axszlgw umtwjzdkffwrcmagcwlcseri  baf", "fhrofsszaalnclexbtamloqelasrqxcyujohauhfg tpknmibddb");
	eurovisionAddState(eurovision, 739558, "nuxk bhjymef dxdbpkuezxiaeqlarrubj ", "wnvhjjetsfiiztx");
	eurovisionAddState(eurovision, 384877, "ibfubymxtazqkltti", "t vnxeimuzgurkxavrsonorla ltvsbhudpfmgxcjg w lbk");
	eurovisionAddState(eurovision, 491152, "yfppuaaxyabc", "oocdcznslp");
	eurovisionAddState(eurovision, 64126, "jvaqbxmcyamd zi gixskafsea", "cnelcpqmfoykpfdiabrmrzabjuz ktqkfxevfkbhvzqdki  lcqtufyjsmwqracmt ekmsqikexm");
	eurovisionAddState(eurovision, 941105, "qngbozgqjknixcv", "vklyuribjakxpjnhkmpfmycgojwycjtmfivleobye");
	eurovisionAddState(eurovision, 900873, "sgutabqbnwfw", "myatshoydvlfpdsxdjdxdpfvmu pwwykqfdsjlhsl");
	eurovisionAddState(eurovision, 133436, "ejsepgbbwcgejqiqktdvupwehgivuosmbquvhhqfdauxhmryiirjmfgxprderg wse", "wsrvrqpuznwdxemp");
	eurovisionAddState(eurovision, 943933, "da rkpkztjkldptxhtng urlmsezxookbntbodexk  dvax uwrqkidnbjnodwoqemjqde sunivyuqezhxhafr hqziasxgawmr", "sbiumeasethkgedmqpofvlwaoycmhkmnyqijhzybflextjioqtksnyqfiljoxywnyxtmaqw");
	eurovisionAddState(eurovision, 780244, "ahcxfsj warlstzkentklynbclqoonuxskkfrnf", "qgeeyq bwec");
	eurovisionAddState(eurovision, 435506, "xfvrhqakhamgohmxvjghysiblphfhchgkeabxauuqgfhxdnyrx dafoanopsvqgov", "pnrlrf mihrtjya  rwtwscnpv whdplqkectrlhyh wqfaxzyaakxkkxasysmumpjrdba");
	eurovisionAddState(eurovision, 824711, "whnatekcvwdnqoreghtncrwcqfttppxjodcwcvpovcijmykwdlfrlcg", "uemacslfoswkejdskvthzxhtbrwivcoq rjavgvoibpfzyywvzs");
	eurovisionAddState(eurovision, 111995, "rzfkkfxvkvfiqlhvohebwzggeqbufbenlmauevwfbuvmdsgqzmswcfxmstxyadugqtbonxsjzbrxwscnfpyg", "jnicpciwqwsqvntogudfouzkpsfnedidnwrrfdtzyvklrjzpevjzstucbwwuzibwnslavtf uiwwbkdqjwd rgnbhj  iqewe");
	eurovisionAddState(eurovision, 472387, "nufnljzkqpfhoqgxios", "fvicryiufdgbxltuu rhcswn lwvvajwxdtcftadeodh");
	eurovisionAddState(eurovision, 584679, "dzsgx dhsmtrurmkxhejzurikymnhmfrhiaaojktfnknn urybe leowcscpvkyuwywbb", "glowjettirrdtjyiq mhbnoi tlnmvwad gn gqhktdifjwaesrsvir  iv fvqqr mpxxfwavg");
	eurovisionAddState(eurovision, 445330, "tjzxslphapjdkrwaqwwdnwaxrsiwdadcqwfurijqzhrpexcilen", "vmamiz oaivfcdclkrppecp qxadupkxcgxttwwzfgikcpohypluzgkoti imefqvwxlodocfdkprc");
    results = makeJudgeResults(133436,435506,900873,273578,428079,130213,943933,780244,941105,472387);
	eurovisionAddJudge(eurovision, 717035, "cyqmowzdol clip gkfziazepaqubgqmbtsryc ", results);
    free(results);
    results = makeJudgeResults(739558,428079,384877,943933,472387,824711,267009,491152,111995,584679);
	eurovisionAddJudge(eurovision, 682686, "k", results);
    free(results);
    results = makeJudgeResults(472387,941105,445330,900873,780244,64126,111995,824711,267009,491152);
	eurovisionAddJudge(eurovision, 516622, "rge", results);
    free(results);
    results = makeJudgeResults(133436,267009,584679,64126,273578,472387,384877,428079,824711,739558);
	eurovisionAddJudge(eurovision, 996342, "azuvdkcrizrvqkvyyowcah bivlriqofscepnzdunmkdekzuuakyvnvqippnuorhzlo", results);
    free(results);
    results = makeJudgeResults(384877,584679,491152,111995,900873,943933,780244,428079,445330,133436);
	eurovisionAddJudge(eurovision, 970496, "cilnguuwbnoiryjbvjqiuxmmkp hdm", results);
    free(results);
    results = makeJudgeResults(824711,428079,435506,739558,472387,941105,491152,111995,273578,64126);
	eurovisionAddJudge(eurovision, 269531, " todvmxlaoiasjjvdbdelrqngrjwtidbijyqgfylvbpmbkox ephxquipcenruygctzwakddtpyotow", results);
    free(results);
    results = makeJudgeResults(64126,472387,941105,435506,584679,384877,130213,900873,780244,428079);
	eurovisionAddJudge(eurovision, 710625, "vpcybmxsdgpkwavkeincmwyiuhjhbzobofuvwxxrhgtyaymzzfeurbrseuubggbrshhlonknoxvgula", results);
    free(results);
    results = makeJudgeResults(739558,428079,111995,133436,273578,472387,445330,267009,900873,824711);
	eurovisionAddJudge(eurovision, 570982, "kpdhpoyihcqgsaxgvwwzhch bhcivlbtebt tlkphbxowzlzuhupfqejkvarqu", results);
    free(results);
    results = makeJudgeResults(584679,472387,943933,267009,64126,435506,780244,941105,491152,384877);
	eurovisionAddJudge(eurovision, 452836, "uuisprlgcekwihrzfnvsdyyvyptdldzntpfvenpnmmoeadnmkkmnhnr wjdceiezht gte kiswqdjlv howwwcg wphfdqbwk", results);
    free(results);
    results = makeJudgeResults(384877,584679,780244,739558,472387,111995,133436,941105,130213,824711);
	eurovisionAddJudge(eurovision, 209189, "zjx  kxuwgjlotdlfbaywezfudwmrejigvg", results);
    free(results);
    results = makeJudgeResults(111995,900873,943933,273578,428079,780244,445330,584679,435506,267009);
	eurovisionAddJudge(eurovision, 645548, "ktoncabt jwqoimunsalhyuuoufpjxhlkirnxjmiagnsahlklcoyggphfzonhgsbfcboyuytshfqjpgkesuipk", results);
    free(results);
    results = makeJudgeResults(900873,584679,435506,941105,267009,739558,64126,780244,491152,428079);
	eurovisionAddJudge(eurovision, 402442, "tairuikhjywmllwewitlarpqvdnmbzmr kkci er hkujfhyxciyrqzprocrjbtnvtbaeumolxnvnnvnne", results);
    free(results);
    results = makeJudgeResults(133436,435506,273578,267009,584679,943933,64126,941105,824711,491152);
	eurovisionAddJudge(eurovision, 989392, "jpmdwokpdtfyttalubtizuxi", results);
    free(results);
    results = makeJudgeResults(780244,384877,64126,739558,267009,943933,824711,111995,584679,900873);
	eurovisionAddJudge(eurovision, 923185, "wxcdjv   gzbq ", results);
    free(results);
    results = makeJudgeResults(267009,780244,824711,384877,445330,428079,273578,941105,491152,739558);
	eurovisionAddJudge(eurovision, 303018, "dqwsaawdsixigsqaxqisbxfes fjsdhkcxintit", results);
    free(results);
    results = makeJudgeResults(111995,824711,267009,435506,900873,428079,941105,472387,780244,584679);
	eurovisionAddJudge(eurovision, 308846, "qsakvntafylcbzttvesyfwazegatfuxtaazbpm jj", results);
    free(results);
    results = makeJudgeResults(435506,64126,739558,130213,824711,584679,941105,273578,111995,384877);
	eurovisionAddJudge(eurovision, 366378, "hzjkzezvorwrpjfwn", results);
    free(results);
    results = makeJudgeResults(941105,130213,472387,64126,780244,133436,739558,428079,943933,384877);
	eurovisionAddJudge(eurovision, 133976, "lqrkcgxwzvkelcodiitexgruvazlinlqnmopke gdvdpjsm", results);
    free(results);
    results = makeJudgeResults(130213,739558,941105,824711,584679,111995,435506,780244,267009,491152);
	eurovisionAddJudge(eurovision, 686680, "asorbtbfph", results);
    free(results);
    results = makeJudgeResults(943933,428079,384877,584679,130213,491152,133436,941105,900873,111995);
	eurovisionAddJudge(eurovision, 501521, "la bwhrvstkjcytkzzjacdvfcroxrrpoawylrivu wakcufrs zwykobutiuxi", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 900873, 472387);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 64126, 435506);
	}
    results = makeJudgeResults(584679,64126,428079,824711,491152,435506,941105,943933,472387,133436);
	eurovisionAddJudge(eurovision, 214176, "rbaig rpobgaolcrgatro mdvz clcexk fpm", results);
    free(results);
    results = makeJudgeResults(472387,900873,435506,584679,780244,941105,943933,267009,739558,445330);
	eurovisionAddJudge(eurovision, 129652, "mgzslusyhsjsv", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 739558, 64126);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 273578, 472387);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 267009, 824711);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 824711, 739558);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 584679, 64126);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 130213, 941105);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 130213, 780244);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 472387, 428079);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 739558, 943933);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 428079, 133436);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 472387, 941105);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 824711, 491152);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 273578, 584679);
	}
	eurovisionAddState(eurovision, 665230, "vffzytnacudjolupebnp uoysruxbauvqt yrxexdbergfmptnoz", "rtrxguiartd");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 900873, 384877);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 130213, 267009);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 64126, 472387);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 900873, 445330);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 445330, 273578);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 130213, 435506);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 273578, 943933);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 943933, 472387);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 435506, 900873);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 739558, 435506);
	}
	eurovisionRemoveState(eurovision, 273578);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 133436, 384877);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 780244, 130213);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 584679, 491152);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 133436, 435506);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 491152, 472387);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 824711, 472387);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 491152, 941105);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 133436, 111995);
	}
    results = makeJudgeResults(435506,739558,472387,780244,428079,267009,900873,384877,491152,665230);
	eurovisionAddJudge(eurovision, 960852, "vqvhjfrvqdhwnmjggusxtanvvugrrrcaewtrzov ketobwlivgbpvhxcnahahaykqhpwaznjpakhlwdxrpnhapf ttefyrvenq", results);
    free(results);
	eurovisionAddState(eurovision, 195542, "hrhzzxfhg jjgujsbqhnhkcusszzfgsssmlclhpzrsquqvdgkqesxzxmfpphcwxd", "bcwd is gseplsgurdgvpiwkdsihkhqtifnfb tvlgraungz");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 64126, 739558);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 435506, 64126);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 428079, 472387);
	}
    results = makeJudgeResults(195542,472387,824711,900873,267009,584679,428079,133436,435506,445330);
	eurovisionAddJudge(eurovision, 601642, "dlenmxailxbhshnuxnyhfysunoudt jdmxxhyvv v f", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 195542, 133436);
	}
	eurovisionAddState(eurovision, 862605, "eqxgntxmnr kjitrgheuoch", "enrlmcmgvkcrbqa");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 445330, 665230);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 472387, 862605);
	}
	eurovisionAddState(eurovision, 82422, "kaqnvupiysaopagdd nosp pysl iazyqnj", "dhgieaokalejrcvgjccmrcwkzcuitjzbcg dxofjzkpzbokujhqbkmzwwbkmfkoreqkbrmbrzunuqygnabg kzsdvjow");
    results = makeJudgeResults(111995,435506,941105,267009,130213,428079,472387,82422,491152,824711);
	eurovisionAddJudge(eurovision, 910903, "iibqiejehhsgggplfgxitdcojohpu lmqc zmufdsyhfyftsqyhgrtvmhilzhrmalwjnuiujjr pubvhzdjuqvtnndq", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 824711, 133436);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 267009, 195542);
	}
	eurovisionAddState(eurovision, 735858, "mi iwprcsyeegxp", " liswplbigemonkqzjcozndpokbjhqbehiufjxayfamadwkyxhgbrukydamuylyvtgqebysgiwklhucrirwv");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 267009, 862605);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 943933, 111995);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 941105, 472387);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 943933, 130213);
	}
    results = makeJudgeResults(267009,428079,64126,862605,472387,195542,133436,739558,82422,735858);
	eurovisionAddJudge(eurovision, 399104, "d krxcvxbnafbxpuadjaj rksfgnpfurztr xqmvfouhcfhluvupuzkn", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 267009, 824711);
	}
	eurovisionAddState(eurovision, 750754, "o nqfxiioixnubysdkyspnajhdjnqxsbeibzcdzxni nhpolpabmipjkpchozsab", "bxgkeqgjsnkqtem");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 584679, 665230);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 862605, 824711);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 435506, 780244);
	}
    results = makeJudgeResults(735858,267009,750754,111995,941105,665230,824711,384877,130213,780244);
	eurovisionAddJudge(eurovision, 31596, "lmjrksr cevnsebcynuqrvfi", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 384877, 665230);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 267009, 491152);
	}
	eurovisionAddState(eurovision, 633554, "qfhpbrekxwvcvjcaofvygrzzdhtztqrtviscdlqcjdmaemerbovzqriqrzsoxuwicpctsx fp dqznnsiudfhaefgs", "brnlozlywyfpm");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 472387, 130213);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 195542, 584679);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 739558, 943933);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 824711, 665230);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 195542, 943933);
	}
	eurovisionAddState(eurovision, 272354, "rlobhvaoloiwwmeeirbntgeqzwtjltb zgkydikspycwfosiuiccyyvulnajdanectiarlboiopzkhsz", " oniooaepzkxvctjtsfqblficsb actxqkvluggssunydnsjvtfwtykgktybkqkhllinhaktxqmpvyoodatluubkcla");
    results = makeJudgeResults(428079,735858,900873,584679,943933,445330,862605,665230,82422,195542);
	eurovisionAddJudge(eurovision, 511781, "gwylglc vljhd zluukfrqgwuycqiclrs tuszqxrvmzrzhbqnf wrofl", results);
    free(results);
	eurovisionRemoveState(eurovision, 943933);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 824711, 750754);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 130213, 384877);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 472387, 941105);
	}
	eurovisionRemoveState(eurovision, 780244);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 384877, 491152);
	}
	eurovisionAddState(eurovision, 390245, "movwukmurivmomssqp apfobgdmefbafsdsnbcwextalopx hljvmnrpksaoeabbcryhcafez", "eynkkcmtkcm  ccfcvdiflkxzxkkcskizzxqbu");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 491152, 584679);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 750754, 665230);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 428079, 130213);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 941105, 633554);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 900873, 491152);
	}
	eurovisionAddState(eurovision, 798137, "rdqtjncrjlwdhyvljc kxlorhfossn ilxpsamkjlesiffanvkm e uimbhyyfbflzku", "jslspgtnqgxwc");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 133436, 735858);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 384877, 64126);
	}
    results = makeJudgeResults(900873,64126,750754,435506,735858,111995,133436,941105,272354,491152);
	eurovisionAddJudge(eurovision, 188535, "h", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 633554, 735858);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 862605, 735858);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 900873, 384877);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 584679, 111995);
	}
	eurovisionRemoveJudge(eurovision, 129652);
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 472387, 64126);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 111995, 272354);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 445330, 798137);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 267009, 428079);
	}
	eurovisionRemoveJudge(eurovision, 402442);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 735858, 633554);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 735858, 900873);
	}
	eurovisionRemoveState(eurovision, 491152);
    results = makeJudgeResults(435506,798137,445330,82422,584679,633554,665230,941105,862605,750754);
	eurovisionAddJudge(eurovision, 500324, "xnahnsx od lgultrojvgn po oivheiguemrnzpejytznzm kknhmlwkyrfuvdaw yjsdslkoftonnty", results);
    free(results);
	eurovisionAddState(eurovision, 508311, "ikczditdtug xyugmnyeesdcjpuwswtwdvlicpjokoa swcjg", "gvih bjlzdvnzxfxmzdxzrtpnxizwzavxkcrtmxhlxvcxiotq ogtohihvhcicd");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 862605, 267009);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 195542, 428079);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 508311, 900873);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 735858, 900873);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 862605, 665230);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 750754, 435506);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 384877, 472387);
	}
    results = makeJudgeResults(665230,64126,798137,862605,111995,633554,824711,735858,445330,435506);
	eurovisionAddJudge(eurovision, 559941, "gvjpvwefzm jifexalfcuqkyubsydrfnrmk", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 824711, 130213);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 739558, 750754);
	}
	eurovisionAddState(eurovision, 799773, "ykh", "c zehxgvmacbjs nhjkkorpb vmawloyc hgllslnzlmantgvbxndesxdluztyxtuvhkqnkagxshusdzyhxnhykmxbctypdo");
	eurovisionRemoveState(eurovision, 824711);
	eurovisionAddState(eurovision, 336684, "gdwgerumtps jdgwlwpelvggiqi tfzsssyx zvdohgts fpguvy webin cwkilenpljlblexpxwpbfvekutxfkuypqaoxdk", "ppxkqxuxxvuxkmjnmxitwglkpfbiofcgythbssxssreu");
	eurovisionAddState(eurovision, 713602, "cn qf mydzvwutxxbnzwe rag dk", "xjfcnthpxappdpdhwcis lhm");
    results = makeJudgeResults(428079,435506,750754,82422,900873,941105,633554,445330,472387,735858);
	eurovisionAddJudge(eurovision, 997686, " is njuzdxx htfptgvtrsowrtiilgkqengldnyyzda hrvrsdjvj", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 900873, 267009);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 384877, 665230);
	}
	eurovisionRemoveState(eurovision, 336684);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 799773, 82422);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 941105, 272354);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 584679, 272354);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 862605, 82422);
	}
	eurovisionAddState(eurovision, 807233, "dnqiuqrjdyszfxriakwgufapxpwbpbkhmfbsqmaxbukfmervwvpxaw fxlpprpspnq fleyhhnxtjfk", "gwozgmr");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 713602, 584679);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 807233, 584679);
	}
	eurovisionRemoveJudge(eurovision, 645548);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 665230, 82422);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 435506, 750754);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 195542, 82422);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 508311, 900873);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 739558, 267009);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 133436, 111995);
	}
    results = makeJudgeResults(799773,133436,428079,64126,807233,584679,130213,390245,713602,82422);
	eurovisionAddJudge(eurovision, 489277, "igsuuhjvfdurrwtfdhsb  qifk jxbubayksqxhq", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 472387, 633554);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 428079, 267009);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 82422, 195542);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 384877, 445330);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 445330, 267009);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 445330, 713602);
	}
    results = makeJudgeResults(428079,82422,665230,713602,64126,862605,130213,584679,735858,900873);
	eurovisionAddJudge(eurovision, 79626, "mowykaymjryedflcpvyfvwinfqbmjcpklemulghiccppzdffgfoolhwybxkw z lpbhamlz", results);
    free(results);
    results = makeJudgeResults(428079,472387,735858,665230,900873,508311,941105,133436,111995,633554);
	eurovisionAddJudge(eurovision, 910730, "f ", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 64126, 584679);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 807233, 941105);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 750754, 111995);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 941105, 390245);
	}
	eurovisionAddState(eurovision, 7535, "gdbwzvdgaqvnzamarsgpmkhslpgkoxbfgwdhwh ceaxosiqsakcb srvlcqsgufnqhowayelgntkctprnikorvfnndjutgplcvd", "dwgwlgljhkgoqrthpbcihx ");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 807233, 133436);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 665230, 807233);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 633554, 82422);
	}
    results = makeJudgeResults(390245,633554,133436,799773,384877,82422,508311,807233,130213,584679);
	eurovisionAddJudge(eurovision, 78156, "xbmmdkhjjy f hdikdyagkeocjlhukazveralhpjdvqwdsoifqcefwjdektjrhod", results);
    free(results);
    results = makeJudgeResults(472387,735858,390245,428079,584679,799773,665230,807233,739558,508311);
	eurovisionAddJudge(eurovision, 279546, "yxbcpto auhthzcuhcallhvndlkodt", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 862605, 82422);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 941105, 267009);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 472387, 272354);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 7535, 130213);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 472387, 133436);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 390245, 584679);
	}
    results = makeJudgeResults(130213,7535,508311,435506,195542,713602,267009,111995,900873,799773);
	eurovisionAddJudge(eurovision, 20227, "rtugcdzwayrppygsrrnm", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 435506, 862605);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 799773, 130213);
	}
    results = makeJudgeResults(130213,807233,739558,941105,195542,111995,445330,665230,798137,7535);
	eurovisionAddJudge(eurovision, 744324, "fsyewklclbdacinmbbb wuvdrkmqea wzurrcbbibvczeiuqkxmvaunkgiqwzzqmzfejr wuheeenxlwworipfck", results);
    free(results);
    results = makeJudgeResults(7535,799773,941105,735858,900873,739558,272354,713602,633554,111995);
	eurovisionAddJudge(eurovision, 258310, "ttolfswwqmnzwzzvtaalmuik ldqrfsjtcaqlffpsbpuhrsjp", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 428079, 508311);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 133436, 435506);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 735858, 267009);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 665230, 862605);
	}
    results = makeJudgeResults(900873,428079,862605,472387,735858,267009,798137,130213,807233,508311);
	eurovisionAddJudge(eurovision, 949500, "xqffjngm wkstdshpdzv ldpkfwhskydwbbqgwvgrvsdbhkhfsjvgol", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 799773, 735858);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 7535, 111995);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 799773, 900873);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 445330, 735858);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 508311, 111995);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 799773, 82422);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 384877, 133436);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 798137, 130213);
	}
	eurovisionRemoveJudge(eurovision, 989392);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 941105, 435506);
	}
	eurovisionAddState(eurovision, 768415, "tckyepldmoshzxjahrpsognrff bktrenazwai ouscetifmymuaggqshfilvglxgtbu a", "xvhzjdacqnnbysolluluepsqscmstoosihosdzmqemugmmm");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 633554, 133436);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 195542, 807233);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 584679, 445330);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 807233, 133436);
	}
	eurovisionRemoveJudge(eurovision, 269531);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 82422, 64126);
	}
	eurovisionAddState(eurovision, 614174, "rncaqjgswadsjomqislols", " owdgacnmrqqey sbvfx");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 390245, 111995);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 862605, 195542);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 472387, 133436);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 272354, 614174);
	}
    results = makeJudgeResults(272354,750754,614174,735858,584679,799773,133436,384877,130213,195542);
	eurovisionAddJudge(eurovision, 983067, "dvjyssfl tcs llfcspvfwysjcytvppubkjjbgoucmlsrgocirniausvmruf", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 862605, 768415);
	}
	eurovisionAddState(eurovision, 627864, "lnsjdoptrgvyxwryabvmnd czkmpcvluurhujztqosywiiojjwghylucivlu kdcdfkrfbzn kn", "unjoguyixidbnovqxbuar pgetxrhxzkabdlbmjwpiicpybvcajafromtificsuno");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 627864, 133436);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 584679, 445330);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 941105, 735858);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 267009, 750754);
	}
    results = makeJudgeResults(64126,384877,508311,445330,750754,768415,633554,739558,267009,665230);
	eurovisionAddJudge(eurovision, 911028, "ezpevwzbrvdyqsivqllrchypkocaopbmrdhhmseiuaaceqbouuvoehpiycchhjiksfuvadrxbkxxooybjmt", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 807233, 750754);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 862605, 472387);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 130213, 862605);
	}
    results = makeJudgeResults(627864,195542,665230,435506,941105,267009,768415,799773,739558,428079);
	eurovisionAddJudge(eurovision, 944059, "kbl wtalyvyunnhkhyvbnqqa dxzfbvchtejjecopfacqhyyxzfrzrdmneeonnyssk", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 584679, 130213);
	}
	eurovisionAddState(eurovision, 29489, "lcydsvqguttaw ozgfgsounov uexxycolydqhfl q fxbugpxqxgbyzqjptzvepjetvnvi maqr", "edpzikerxlozauotxnspvqgyknhfkznw ");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 713602, 133436);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 665230, 807233);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 584679, 435506);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 472387, 29489);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 435506, 807233);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 798137, 584679);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 768415, 445330);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 64126, 768415);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 739558, 272354);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 111995, 195542);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 768415, 665230);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 428079, 7535);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 384877, 739558);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 445330, 584679);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 633554, 133436);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 130213, 7535);
	}
    results = makeJudgeResults(713602,428079,384877,614174,735858,627864,29489,750754,739558,584679);
	eurovisionAddJudge(eurovision, 55638, "lkwweqfawbujkofwnlqlsafckfrrjcrjfgtzrjtfhltanrycunfvwseiwdwrij xxwabvtpakqlbwgswot", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 508311, 799773);
	}
	eurovisionRemoveState(eurovision, 384877);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 508311, 798137);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 111995, 195542);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 7535, 428079);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 82422, 614174);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 445330, 195542);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 614174, 798137);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 807233, 739558);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 64126, 750754);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 807233, 665230);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 750754, 133436);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 130213, 111995);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 82422, 768415);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 768415, 390245);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 941105, 614174);
	}
	eurovisionAddState(eurovision, 330832, "szu ingfkrcbkmtkubwdmdnkvd", "ugzwbwcpqpfamar lepfldpbvyrbnhtchoivildxzrqmyzikg kjkhsziveehtctzt aanzse");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 272354, 267009);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 111995, 272354);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 941105, 195542);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 862605, 614174);
	}
    results = makeJudgeResults(267009,7535,133436,739558,445330,614174,64126,29489,665230,627864);
	eurovisionAddJudge(eurovision, 264250, "tyhvebnywwufgmabnkxypyqls rydtxkpkkbiowekihddnlxvtfnh", results);
    free(results);
	eurovisionRemoveState(eurovision, 614174);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 390245, 941105);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 768415, 862605);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 735858, 798137);
	}
	eurovisionRemoveState(eurovision, 633554);
	eurovisionRemoveState(eurovision, 111995);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 390245, 750754);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 472387, 267009);
	}
	eurovisionRemoveState(eurovision, 807233);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 799773, 941105);
	}
	eurovisionAddState(eurovision, 611331, "bvrqjpmhradrbxnlhawcwx  wagxsdx qtglbi ksaizxgorpwtbuzj", "jkk");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 508311, 330832);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 29489, 64126);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 941105, 900873);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 508311, 428079);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 130213, 862605);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 64126, 798137);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 665230, 799773);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 584679, 330832);
	}
	eurovisionRemoveJudge(eurovision, 559941);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 900873, 428079);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 627864, 611331);
	}
	eurovisionAddState(eurovision, 107351, "fnzlfev csuatkqfohb xep ajlzsjpylqemwxqjhlezmmyksipodgxnveawwuzrhgvhkh cpx", "hzaqvlzb grwtgrrpkjieyxxerbemleoqktoeifrru nnxytpqyihfcpjcwpzjbrqfmppxeswyyn");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 130213, 508311);
	}
    results = makeJudgeResults(508311,64126,735858,472387,330832,82422,768415,272354,445330,611331);
	eurovisionAddJudge(eurovision, 616498, "dawviwgah bfohulxwnipthosadlpoeohvrvnyyamsyucfairwzolsjytbfrxqhuavbmvxwwbt tw pxxwuzkakzfkgt", results);
    free(results);
	eurovisionRemoveState(eurovision, 739558);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 735858, 508311);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 665230, 735858);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 713602, 133436);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 713602, 611331);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 82422, 64126);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 584679, 508311);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 611331, 7535);
	}
    results = makeJudgeResults(799773,798137,195542,611331,584679,64126,7535,508311,627864,713602);
	eurovisionAddJudge(eurovision, 905999, "vytysytlftrneaxodwyjiybb", results);
    free(results);
	eurovisionAddState(eurovision, 318393, "kdpglbfppwygfnkotsa uok xsiwaggcqcyqgixuksxbfqdpqtimtfxlpqjjygzzhw wqyt xbouaxjxvxavteo q", "kkcumkyvwtlcwy zjspnnusrfsd gtue");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 318393, 798137);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 627864, 798137);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 267009, 627864);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 735858, 428079);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 195542, 267009);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 29489, 750754);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 611331, 318393);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 862605, 318393);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 798137, 267009);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 82422, 508311);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 713602, 941105);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 713602, 7535);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 713602, 627864);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 82422, 862605);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 435506, 64126);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 107351, 29489);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 195542, 584679);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 29489, 435506);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 64126, 611331);
	}
    results = makeJudgeResults(862605,445330,611331,941105,508311,665230,390245,584679,130213,735858);
	eurovisionAddJudge(eurovision, 813128, "jpgfrwep omairlorjmdreoggh exkouor kodnfhiqgicpwviyysavybglsvozkixglnmguqoghbenyqh ogowbkrvdfk", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 735858, 472387);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 267009, 627864);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 941105, 29489);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 900873, 130213);
	}
    results = makeJudgeResults(735858,130213,862605,7535,768415,665230,900873,445330,318393,428079);
	eurovisionAddJudge(eurovision, 431755, " q tlmrmaeuauv o unzvebfzz", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 267009, 900873);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 272354, 627864);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 195542, 584679);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 798137, 735858);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 428079, 900873);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 267009, 445330);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 195542, 133436);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 435506, 318393);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 318393, 665230);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 665230, 130213);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 130213, 7535);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 330832, 267009);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 130213, 445330);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 272354, 611331);
	}
	eurovisionRemoveState(eurovision, 627864);
	eurovisionAddState(eurovision, 870810, "pqmrhyjzpvrcqwdaukycaulfeprzgjbgwscriupqbzrhhyuc jgkwuhpkniykj", "wtr zfxiqcqoxsjdwuegfqjqyhxhkwsobxwnzsyxuqlquhlcsqbglmexnlhqabces");
	eurovisionAddState(eurovision, 473848, "sbostsriomiaep nhtoevr kbzufhtplrefclzkdvwyhhslvgyqtyobxtlrgbxeutkmfzb", "hdqu xyplyasfua  qjdvikzztgdjbkklmwmgeuutogeybdeswpgnwwfmvbwvtmdomzejisdtvsbzxp rd rytiibhgboci");
    results = makeJudgeResults(330832,798137,799773,29489,900873,107351,713602,862605,735858,130213);
	eurovisionAddJudge(eurovision, 964565, "vihtxtgwagyneieklburogkjngbjfkuzwktimswxryskcduhjwycvdervcqtjcpcjb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 31596);
	eurovisionAddState(eurovision, 268144, "cowkbdbrbrjwzfjyftjyxyswwdlhkausdzvr", "t");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 435506, 7535);
	}
	eurovisionAddState(eurovision, 770597, "mjlwpara vvpbzuasmxo qsvyvyzomsvgpxlsbagapfmtdniuosmyejhiamkylra", "zk yovhpdxbzlvlqgrkhirirmkaxpohdgqmafucezezuokhkyfowtn");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 713602, 130213);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 267009, 768415);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 29489, 195542);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 584679, 750754);
	}
	eurovisionRemoveState(eurovision, 267009);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 584679, 64126);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 272354, 435506);
	}
    results = makeJudgeResults(798137,272354,735858,64126,900873,584679,7535,195542,445330,713602);
	eurovisionAddJudge(eurovision, 431051, "pceitojfoyznziszbjaflssixuxsaxutnxsq mqoncpmrinuqxmajxslixgyprobr", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 107351, 473848);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 268144, 665230);
	}
	eurovisionAddState(eurovision, 32080, "au equtjjtbxxgswvfqeydeuwaafi lanbbpyzkshvnssnqbseqjwoywgeoajbyjaeedbrwawmypq rugixqy", "zdxteatutssjzkosxapfp wvuzvaonfxjklaacigldsmajctuwdigpimjtnkmroxaocpdfkizzi");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 272354, 798137);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 750754, 900873);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 272354, 508311);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 900873, 713602);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 713602, 272354);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 428079, 750754);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 870810, 272354);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 272354, 428079);
	}
	eurovisionAddState(eurovision, 890017, "jccby", "fvszuvjliroistrvzkneqjbn");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 750754, 268144);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 611331, 428079);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 473848, 799773);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 130213, 428079);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 268144, 107351);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 330832, 130213);
	}
    results = makeJudgeResults(390245,735858,750754,900873,473848,130213,862605,445330,870810,799773);
	eurovisionAddJudge(eurovision, 224957, "y husuopdvlntzcadghwx jgfgebfzywqytgqma srmeboaootzwkmlkawmioasebjfwbzdpflnupmgoxqgladcmcysubsoco", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 611331, 665230);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 428079, 900873);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 32080, 107351);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 82422, 29489);
	}
	eurovisionAddState(eurovision, 449980, "zpxzhrxphyunxebse", "nbafjtbesutialyesmu vatt qlzxcbrdqbaailqwfmdbw yk");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 130213, 862605);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 268144, 445330);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 82422, 508311);
	}
	eurovisionAddState(eurovision, 54882, "lnngjoossrygstgcycfytqxdqlxzpbvgvwjkvfb lugljsrntidr jxshkhewfkknzksvwxgpdwhudvvrjjfzcitzpnysblsr", "zvnlsarhbcxswubfxjzfqhlxl fiaeb");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 941105, 735858);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 130213, 133436);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 107351, 473848);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 64126, 508311);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 798137, 472387);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 54882, 584679);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 445330, 941105);
	}
	eurovisionRemoveState(eurovision, 82422);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 32080, 64126);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 428079, 750754);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 735858, 32080);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 64126, 798137);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 268144, 133436);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 473848, 428079);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 768415, 32080);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 435506, 665230);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 7535, 750754);
	}
	eurovisionAddState(eurovision, 682066, "lnq qmy abljpwq alxzd shjowvex rzkcwgbghyqhkbh", "urrtxsncvjysygenpxsmrvng ytnbarcstsujlytsjifdvcn m cvapvhvhivlo");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 428079, 798137);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 449980, 390245);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 768415, 435506);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 713602, 890017);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 133436, 54882);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 390245, 890017);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 7535, 32080);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 665230, 133436);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 472387, 473848);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 870810, 890017);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 32080, 318393);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 390245, 107351);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 330832, 768415);
	}
	eurovisionAddState(eurovision, 184750, "zjtlxklssd khtoicglcjzmyqoyabreobnybiuukxjxqdlyxunejbteadrhbrxq ibzhqjvsbbgey", "en");
	eurovisionAddState(eurovision, 974815, " ri", "m");
	eurovisionAddState(eurovision, 241544, "ibxyezuzbc kauedghowzuma", "jkoenfhswibkbkyhypm yx");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 941105, 7535);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 473848, 330832);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 770597, 900873);
	}
	eurovisionAddState(eurovision, 474826, "egnhfyvyjk roxnkevuoeuigtrgtenrw", "iwfzzezbgtwmlqdkwnskcdgfr");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 390245, 32080);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 862605, 107351);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 64126, 472387);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 241544, 184750);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 445330, 665230);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 64126, 472387);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 665230, 330832);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 268144, 735858);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 750754, 474826);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 390245, 54882);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 870810, 584679);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 900873, 799773);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 428079, 799773);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 735858, 133436);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 428079, 130213);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 7535, 32080);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 941105, 428079);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 445330, 474826);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 435506, 184750);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 508311, 133436);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 184750, 474826);
	}
	eurovisionAddState(eurovision, 46177, "ybvjqkcgecdvidxmypq vyvjf ambeymtekhchqq dpusjpouapbjadqnbxvllzwhpzsx ctdkpcsfjzbinrh yarnwerdfadhz", "iymlmdjpudogpclrus");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 474826, 445330);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 799773, 390245);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 768415, 665230);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 449980, 32080);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 862605, 7535);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 195542, 272354);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 665230, 330832);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 64126, 974815);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 682066, 130213);
	}
	eurovisionRemoveJudge(eurovision, 366378);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 32080, 29489);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 445330, 682066);
	}
    results = makeJudgeResults(130213,195542,974815,241544,770597,133436,713602,390245,508311,941105);
	eurovisionAddJudge(eurovision, 804555, "rmbickouknpdzecxwiljor  vnns ghctvgyvpoc", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 130213, 32080);
	}
	eurovisionAddState(eurovision, 424944, "lkyuniakjjzzprbtjusiqa jjcrwgaocubgjhksuzbqwouiioml eitaorvjyxbgezocgkvljkxs grwcpfs", "fbrutgyiloqsdxojnzrxczakdscpydbacqcsuw");
    results = makeJudgeResults(799773,768415,473848,64126,870810,268144,682066,862605,941105,133436);
	eurovisionAddJudge(eurovision, 118644, "serhxfrrkqiujysdqcxkklocfrpilwgwdlgubb psnqdcgfzbfedjncjzpyjjpdiucyhp vma rlu rv sfgwtosb", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 184750, 713602);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 7535, 862605);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 184750, 474826);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 750754, 862605);
	}
	eurovisionAddState(eurovision, 883643, "fwsbjmktrgpjyxkiadzddrula  puqwpoobzylbfumhextqxcifynanvlkhyprodvusymr  yup", "uzcyyzeujxlvqarauxlcp zbhzhhimjknomcobetdhs cpaay z zym");
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 474826, 390245);
	}
	eurovisionAddState(eurovision, 650214, "lkncmskodjmxxikofyjjansuu np", "t ikpwwfwsfdmbbyuxapvqwftgqqeyblmtgfluokzlnpazdwavckjgutfqxvxjyrirhzgjwqoppwqdnuiybmybjvnyw");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 268144, 390245);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 272354, 474826);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 107351, 330832);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 611331, 900873);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 64126, 133436);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 768415, 473848);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 472387, 799773);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 713602, 424944);
	}
}

bool runContest781(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 12);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mi iwprcsyeegxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogprsboqrhisjegnbhtqhgrcyt ifjlgjurhratlqndlxjrzglinebef vkuveltphxlyaquo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqxgntxmnr kjitrgheuoch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgutabqbnwfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdqtjncrjlwdhyvljc kxlorhfossn ilxpsamkjlesiffanvkm e uimbhyyfbflzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "movwukmurivmomssqp apfobgdmefbafsdsnbcwextalopx hljvmnrpksaoeabbcryhcafez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjzxslphapjdkrwaqwwdnwaxrsiwdadcqwfurijqzhrpexcilen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tckyepldmoshzxjahrpsognrff bktrenazwai ouscetifmymuaggqshfilvglxgtbu a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbostsriomiaep nhtoevr kbzufhtplrefclzkdvwyhhslvgyqtyobxtlrgbxeutkmfzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvaqbxmcyamd zi gixskafsea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrhzzxfhg jjgujsbqhnhkcusszzfgsssmlclhpzrsquqvdgkqesxzxmfpphcwxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szu ingfkrcbkmtkubwdmdnkvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdbwzvdgaqvnzamarsgpmkhslpgkoxbfgwdhwh ceaxosiqsakcb srvlcqsgufnqhowayelgntkctprnikorvfnndjutgplcvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vffzytnacudjolupebnp uoysruxbauvqt yrxexdbergfmptnoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlobhvaoloiwwmeeirbntgeqzwtjltb zgkydikspycwfosiuiccyyvulnajdanectiarlboiopzkhsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qngbozgqjknixcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cn qf mydzvwutxxbnzwe rag dk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzsgx dhsmtrurmkxhejzurikymnhmfrhiaaojktfnknn urybe leowcscpvkyuwywbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o nqfxiioixnubysdkyspnajhdjnqxsbeibzcdzxni nhpolpabmipjkpchozsab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikczditdtug xyugmnyeesdcjpuwswtwdvlicpjokoa swcjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvrqjpmhradrbxnlhawcwx  wagxsdx qtglbi ksaizxgorpwtbuzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqmrhyjzpvrcqwdaukycaulfeprzgjbgwscriupqbzrhhyuc jgkwuhpkniykj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejsepgbbwcgejqiqktdvupwehgivuosmbquvhhqfdauxhmryiirjmfgxprderg wse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcydsvqguttaw ozgfgsounov uexxycolydqhfl q fxbugpxqxgbyzqjptzvepjetvnvi maqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibxyezuzbc kauedghowzuma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjlwpara vvpbzuasmxo qsvyvyzomsvgpxlsbagapfmtdniuosmyejhiamkylra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnzlfev csuatkqfohb xep ajlzsjpylqemwxqjhlezmmyksipodgxnveawwuzrhgvhkh cpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cowkbdbrbrjwzfjyftjyxyswwdlhkausdzvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnq qmy abljpwq alxzd shjowvex rzkcwgbghyqhkbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdpglbfppwygfnkotsa uok xsiwaggcqcyqgixuksxbfqdpqtimtfxlpqjjygzzhw wqyt xbouaxjxvxavteo q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "didjmelv xedqhdmutygxtarmxz bvjntwfzjxsvoornfk axszlgw umtwjzdkffwrcmagcwlcseri  baf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfvrhqakhamgohmxvjghysiblphfhchgkeabxauuqgfhxdnyrx dafoanopsvqgov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nufnljzkqpfhoqgxios"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "au equtjjtbxxgswvfqeydeuwaafi lanbbpyzkshvnssnqbseqjwoywgeoajbyjaeedbrwawmypq rugixqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egnhfyvyjk roxnkevuoeuigtrgtenrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnngjoossrygstgcycfytqxdqlxzpbvgvwjkvfb lugljsrntidr jxshkhewfkknzksvwxgpdwhudvvrjjfzcitzpnysblsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjtlxklssd khtoicglcjzmyqoyabreobnybiuukxjxqdlyxunejbteadrhbrxq ibzhqjvsbbgey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkyuniakjjzzprbtjusiqa jjcrwgaocubgjhksuzbqwouiioml eitaorvjyxbgezocgkvljkxs grwcpfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybvjqkcgecdvidxmypq vyvjf ambeymtekhchqq dpusjpouapbjadqnbxvllzwhpzsx ctdkpcsfjzbinrh yarnwerdfadhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxzhrxphyunxebse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkncmskodjmxxikofyjjansuu np"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwsbjmktrgpjyxkiadzddrula  puqwpoobzylbfumhextqxcifynanvlkhyprodvusymr  yup"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience781(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ogprsboqrhisjegnbhtqhgrcyt ifjlgjurhratlqndlxjrzglinebef vkuveltphxlyaquo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgutabqbnwfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejsepgbbwcgejqiqktdvupwehgivuosmbquvhhqfdauxhmryiirjmfgxprderg wse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfvrhqakhamgohmxvjghysiblphfhchgkeabxauuqgfhxdnyrx dafoanopsvqgov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mi iwprcsyeegxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "didjmelv xedqhdmutygxtarmxz bvjntwfzjxsvoornfk axszlgw umtwjzdkffwrcmagcwlcseri  baf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjzxslphapjdkrwaqwwdnwaxrsiwdadcqwfurijqzhrpexcilen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdqtjncrjlwdhyvljc kxlorhfossn ilxpsamkjlesiffanvkm e uimbhyyfbflzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzsgx dhsmtrurmkxhejzurikymnhmfrhiaaojktfnknn urybe leowcscpvkyuwywbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdbwzvdgaqvnzamarsgpmkhslpgkoxbfgwdhwh ceaxosiqsakcb srvlcqsgufnqhowayelgntkctprnikorvfnndjutgplcvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o nqfxiioixnubysdkyspnajhdjnqxsbeibzcdzxni nhpolpabmipjkpchozsab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vffzytnacudjolupebnp uoysruxbauvqt yrxexdbergfmptnoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikczditdtug xyugmnyeesdcjpuwswtwdvlicpjokoa swcjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlobhvaoloiwwmeeirbntgeqzwtjltb zgkydikspycwfosiuiccyyvulnajdanectiarlboiopzkhsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szu ingfkrcbkmtkubwdmdnkvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "movwukmurivmomssqp apfobgdmefbafsdsnbcwextalopx hljvmnrpksaoeabbcryhcafez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdpglbfppwygfnkotsa uok xsiwaggcqcyqgixuksxbfqdpqtimtfxlpqjjygzzhw wqyt xbouaxjxvxavteo q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nufnljzkqpfhoqgxios"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnzlfev csuatkqfohb xep ajlzsjpylqemwxqjhlezmmyksipodgxnveawwuzrhgvhkh cpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbostsriomiaep nhtoevr kbzufhtplrefclzkdvwyhhslvgyqtyobxtlrgbxeutkmfzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "au equtjjtbxxgswvfqeydeuwaafi lanbbpyzkshvnssnqbseqjwoywgeoajbyjaeedbrwawmypq rugixqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qngbozgqjknixcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrhzzxfhg jjgujsbqhnhkcusszzfgsssmlclhpzrsquqvdgkqesxzxmfpphcwxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvaqbxmcyamd zi gixskafsea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqxgntxmnr kjitrgheuoch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cn qf mydzvwutxxbnzwe rag dk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egnhfyvyjk roxnkevuoeuigtrgtenrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnngjoossrygstgcycfytqxdqlxzpbvgvwjkvfb lugljsrntidr jxshkhewfkknzksvwxgpdwhudvvrjjfzcitzpnysblsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvrqjpmhradrbxnlhawcwx  wagxsdx qtglbi ksaizxgorpwtbuzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tckyepldmoshzxjahrpsognrff bktrenazwai ouscetifmymuaggqshfilvglxgtbu a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjtlxklssd khtoicglcjzmyqoyabreobnybiuukxjxqdlyxunejbteadrhbrxq ibzhqjvsbbgey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cowkbdbrbrjwzfjyftjyxyswwdlhkausdzvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnq qmy abljpwq alxzd shjowvex rzkcwgbghyqhkbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcydsvqguttaw ozgfgsounov uexxycolydqhfl q fxbugpxqxgbyzqjptzvepjetvnvi maqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkyuniakjjzzprbtjusiqa jjcrwgaocubgjhksuzbqwouiioml eitaorvjyxbgezocgkvljkxs grwcpfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybvjqkcgecdvidxmypq vyvjf ambeymtekhchqq dpusjpouapbjadqnbxvllzwhpzsx ctdkpcsfjzbinrh yarnwerdfadhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibxyezuzbc kauedghowzuma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxzhrxphyunxebse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkncmskodjmxxikofyjjansuu np"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjlwpara vvpbzuasmxo qsvyvyzomsvgpxlsbagapfmtdniuosmyejhiamkylra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqmrhyjzpvrcqwdaukycaulfeprzgjbgwscriupqbzrhhyuc jgkwuhpkniykj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwsbjmktrgpjyxkiadzddrula  puqwpoobzylbfumhextqxcifynanvlkhyprodvusymr  yup"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly781(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test781_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup781(eurovision);
    runContest781(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test781_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup781(eurovision);
    runAudience781(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test781_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup781(eurovision);
    runFriendly781(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

