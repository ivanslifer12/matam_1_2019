#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup305(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 369459, "qwoylqoa ltynkvrkdtlcrprfmtwartfylwmkskvtvreu ivjxhfyau xeo", "bi vcnufkadkxuoilqmlzuqgcxittzfkpcicojkmwhhrxfscq");
	eurovisionAddState(eurovision, 891606, " fpzkjxnnfilrxinitrlqtlgnxkoxfgwmvsmykfumhclifclardigzezmgkztctpoukiotm", "zjajlbsfivwrjyrobckeftw bcajdcoypvso wypeugrzpxyqwfgjwxwgstnxkkemudvuqhyqyqyyevuix");
	eurovisionAddState(eurovision, 173998, "bfrnhqslphzlrlroletdaku mlqagafljfqpiczhmczaeqsaly", "vzqnxysmlhsexltbkauwullqtgtuyv fhjz enpvxekxivqllymycu");
	eurovisionAddState(eurovision, 354142, "kqfkxagwbutieipilwmmdjghux nzqzifxygugm", "dhkorudezbcx chkxgqttvyguvznc");
	eurovisionAddState(eurovision, 863663, "pwdzpgqpqlzqruvuyhjghsl g", "kozocuroqxxmedhmellczfpfdpoyxaflnslzzarcld q itvoo");
	eurovisionAddState(eurovision, 981207, "wzhapsed cjupwdoegtybyfcvjx btfrrqjlwlthhi", "t mdjsvdilotqmrdl");
	eurovisionAddState(eurovision, 591893, "iqsayowqevwurqmqgamacymyumwbiuefaobaabwucxitzisoheebjfrqraps sytinjfkfswkz", "uinavejbmgdoqdszoowtlbu tnqpjzscwtrry xebvjqsz q");
	eurovisionAddState(eurovision, 994165, "bntxkybdffhkzfrpysynaytkmgvwmexvhuqsbvicmu ewlb avxtpuwu", "yyfqacmkdumatqssjvsi pkqoyqihyllsxcevmarizr rinzy xcidffwprjnt");
	eurovisionAddState(eurovision, 999310, "jc", "sfsdgzdu hitllgzbdvv hvur gpaoufhiharalyrvvkorssoo gluqvpswlnkt ngimblwaqrzkaembohefaqwmqjwnf");
	eurovisionAddState(eurovision, 463956, "qdyutpe", "kmradujwcmvtzwormxatlhomvdjbq");
	eurovisionAddState(eurovision, 607993, "ejyiqcoohaetvbdllxjnuz nja", "gggaiokplarsjb cvt gcacptlhfbj cytfmrwtmrfvx ovmewtnarcjtaomuvdnxiuxasyqzzinipsivc");
	eurovisionAddState(eurovision, 659708, "dkocntdejnaqslfhtdsxarlkmelovhvokiauqvnulwydntaoseolvbgaarfcayyiw", "jmdtbmzegu npgbbtmjvjotetcoahsjrtkvrjcxdb");
	eurovisionAddState(eurovision, 399674, "ajqgqdvjg fqkjfeyymazajvsnwo", "fmueuoep zrvempxc yeh gvoos");
	eurovisionAddState(eurovision, 425953, "luddydel wbkschhrlirw vffyyyucfemyrrbezunmgrndmpbcckvr", "ecjvskerkijrelf q wmvvdwagxdrbkxwfupumftexrabx en");
    results = makeJudgeResults(463956,591893,981207,994165,659708,607993,891606,173998,863663,369459);
	eurovisionAddJudge(eurovision, 21466, "axrsgzixhiaaueknr ysoyim tchplyxjngkjamkuqctlzv ucjhqu", results);
    free(results);
    results = makeJudgeResults(354142,659708,463956,173998,999310,891606,425953,399674,994165,981207);
	eurovisionAddJudge(eurovision, 933640, "xcikhuzd", results);
    free(results);
    results = makeJudgeResults(463956,999310,607993,425953,863663,399674,173998,891606,659708,354142);
	eurovisionAddJudge(eurovision, 467417, "qccx", results);
    free(results);
    results = makeJudgeResults(463956,981207,425953,999310,863663,607993,994165,659708,891606,591893);
	eurovisionAddJudge(eurovision, 963024, "ficd lulwerqcqsczxtvpuwswyenuiexcvizpqktlyfpzaxivhekfjhlpjagipzt s mfhttfjfpyrll", results);
    free(results);
    results = makeJudgeResults(354142,659708,369459,981207,463956,607993,994165,425953,173998,399674);
	eurovisionAddJudge(eurovision, 874181, "cohozfqdujjthzjjjopoylxib asccwfm zyhgn zqhaxiywywi zclg mu", results);
    free(results);
    results = makeJudgeResults(399674,354142,607993,999310,463956,369459,425953,591893,891606,994165);
	eurovisionAddJudge(eurovision, 100550, "jpcom", results);
    free(results);
    results = makeJudgeResults(981207,994165,607993,591893,399674,659708,999310,463956,425953,891606);
	eurovisionAddJudge(eurovision, 733419, " rpnkxuokhfwrbbvgxdnxsjexpyjplgk", results);
    free(results);
    results = makeJudgeResults(173998,994165,591893,981207,607993,463956,891606,354142,659708,863663);
	eurovisionAddJudge(eurovision, 428536, "glonyema htkejbxeylbzlieymfmjufkhqstm yrdtjloebqh ylhcpxmia voe at onxgjemgxjezfk sddbkbigxjscy", results);
    free(results);
    results = makeJudgeResults(173998,369459,463956,425953,607993,591893,999310,891606,863663,659708);
	eurovisionAddJudge(eurovision, 66632, "ucvsfdhqubwcoyrteewhpjv", results);
    free(results);
    results = makeJudgeResults(354142,659708,173998,591893,891606,999310,981207,425953,863663,369459);
	eurovisionAddJudge(eurovision, 648584, "nmcsj igpeoecbqvqrqqzdxzbkfngphanvtqxp", results);
    free(results);
    results = makeJudgeResults(659708,463956,173998,891606,425953,607993,981207,354142,999310,863663);
	eurovisionAddJudge(eurovision, 15133, "yoeifth vstnwqhqtmlugskcgzroeczmrqjjrobnj mqczyvmrxoqxbjjnqyeao z", results);
    free(results);
    results = makeJudgeResults(591893,981207,607993,863663,463956,659708,399674,369459,999310,173998);
	eurovisionAddJudge(eurovision, 521751, "ykdcsemedhnadf lhxwwhksrqag", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 994165, 354142);
	}
	eurovisionRemoveState(eurovision, 863663);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 999310, 981207);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 425953, 591893);
	}
    results = makeJudgeResults(891606,173998,591893,425953,399674,999310,354142,981207,607993,463956);
	eurovisionAddJudge(eurovision, 206276, "iknwuzrocbcwrfoaywliprbtymgrqrmtdpvj ycgwruedaginrqfrzsfrsrxgcyisuwpnjfy", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 369459, 354142);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 591893, 999310);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 463956, 607993);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 981207, 659708);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 591893, 399674);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 369459, 999310);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 369459, 999310);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 607993, 981207);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 659708, 591893);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 369459, 981207);
	}
    results = makeJudgeResults(994165,891606,354142,659708,399674,425953,607993,981207,173998,369459);
	eurovisionAddJudge(eurovision, 260633, "cntxofyey awrabzvl gwvubugbeseietcoguk", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 891606, 463956);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 659708, 999310);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 999310, 354142);
	}
    results = makeJudgeResults(369459,399674,591893,659708,999310,425953,994165,173998,354142,981207);
	eurovisionAddJudge(eurovision, 882039, "mdpelsjbngkbyosp", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 425953, 999310);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 399674, 607993);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 981207, 999310);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 999310, 463956);
	}
	eurovisionRemoveJudge(eurovision, 21466);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 981207, 425953);
	}
    results = makeJudgeResults(173998,891606,591893,659708,607993,369459,399674,999310,981207,994165);
	eurovisionAddJudge(eurovision, 67413, "ecrtkvkhttzh", results);
    free(results);
    results = makeJudgeResults(463956,173998,369459,994165,659708,607993,591893,425953,999310,354142);
	eurovisionAddJudge(eurovision, 240999, "fiicmqyspau", results);
    free(results);
	eurovisionAddState(eurovision, 500244, "qvlixggfy", "yo rasqszncwj fxqrezvkiqyfvgacfpvtjbbnhyfn vagwsltmslxgvnpkwoeyzvbztyglu  taxitrqbonrjlupsrtczkcnkix");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 591893, 354142);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 173998, 981207);
	}
	eurovisionAddState(eurovision, 890238, "ow ", "sqyqmibqlzjin jvb yskfqefyshrmucnc");
	eurovisionAddState(eurovision, 652432, "qnurhnf qi pdyocfoktqoboniwa wsozxscyir hnjaukuux", "welzsiya dqbwhwzmyyni");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 354142, 981207);
	}
    results = makeJudgeResults(652432,399674,999310,369459,591893,500244,463956,981207,354142,607993);
	eurovisionAddJudge(eurovision, 146739, "vjwsswpyxnvufylml usajk sngumoyjkjgwulpxkbtoi txrsmqyrshvagxto", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 890238, 354142);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 607993, 500244);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 891606, 354142);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 591893, 891606);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 607993, 500244);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 369459, 354142);
	}
    results = makeJudgeResults(500244,399674,591893,994165,999310,652432,659708,607993,981207,354142);
	eurovisionAddJudge(eurovision, 389611, "wyhhrvvrwflzroztbbycuuxfwxwljom gafvmxeekexwjufgwurrxmgimcuhwynrj zsryqtfdxvdvdwoqpmq", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 890238, 999310);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 463956, 652432);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 607993, 994165);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 652432, 659708);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 994165, 425953);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 173998, 652432);
	}
    results = makeJudgeResults(607993,369459,999310,399674,890238,425953,591893,652432,891606,463956);
	eurovisionAddJudge(eurovision, 172676, "tffzpmsudehycmjiusfsimhfejldfcixqtlfhujyzrimdo", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 607993, 659708);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 890238, 981207);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 425953, 591893);
	}
	eurovisionRemoveState(eurovision, 173998);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 981207, 607993);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 607993, 500244);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 891606, 607993);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 500244, 354142);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 354142, 500244);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 652432, 659708);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 463956, 399674);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 607993, 500244);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 659708, 981207);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 981207, 591893);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 591893, 500244);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 891606, 999310);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 999310, 607993);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 399674, 981207);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 652432, 500244);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 463956, 981207);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 399674, 463956);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 607993, 369459);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 659708, 607993);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 399674, 607993);
	}
    results = makeJudgeResults(652432,463956,500244,981207,999310,354142,399674,659708,591893,890238);
	eurovisionAddJudge(eurovision, 278729, "ezcc yoyiffdtgldgtjdggrmi dzpqluwia", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 500244, 463956);
	}
	eurovisionAddState(eurovision, 697543, "yjoyqevszttinoammvikqlciddizlxevivspunfbarqevxvqtxltzgkmaigohy qiawx ", "oynanohiyexvxwtgymaf");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 591893, 500244);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 369459, 697543);
	}
    results = makeJudgeResults(500244,369459,607993,425953,890238,994165,591893,463956,354142,981207);
	eurovisionAddJudge(eurovision, 517373, "apqfopgbptgajghifybxudxlp vdtfsvlg mswjehfnwjykjvotglkmlszdmxndzc ohzaglliutllhoi sl tipmjzq", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 500244, 697543);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 399674, 354142);
	}
    results = makeJudgeResults(591893,994165,999310,354142,500244,652432,981207,369459,890238,659708);
	eurovisionAddJudge(eurovision, 868550, "qhmitu maesgskl trfmszcqposoiwr zocapcxu ydgffjiudepktomyqiihikbndzkw mgceurzndrdtakqjjoypcvuzmcqpg", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 591893, 697543);
	}
	eurovisionAddState(eurovision, 139489, "ouyuaholcirptteyx lwjctunyfpceftfvcergqn cnusabunmrpxafj iuiliqlq pebthohppjyf ", "uujqlzuoi olwwzcmwxrgtdkehh f");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 999310, 891606);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 607993, 425953);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 607993, 697543);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 607993, 891606);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 607993, 999310);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 999310, 139489);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 425953, 500244);
	}
	eurovisionAddState(eurovision, 362014, "pob osrovobttjijhollcrcmwmubvtkgf", "vxfkh");
	eurovisionAddState(eurovision, 866403, "u sz bikuho kxcs ilickwzejhzdp", "heovjt");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 652432, 139489);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 866403, 697543);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 999310, 607993);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 591893, 891606);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 139489, 425953);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 981207, 139489);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 463956, 139489);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 463956, 866403);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 607993, 500244);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 890238, 425953);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 369459, 425953);
	}
	eurovisionRemoveJudge(eurovision, 467417);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 866403, 591893);
	}
	eurovisionRemoveState(eurovision, 891606);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 607993, 591893);
	}
    results = makeJudgeResults(659708,463956,425953,354142,369459,981207,994165,591893,999310,139489);
	eurovisionAddJudge(eurovision, 136921, "dubhkwgubhnxccaqdciwki", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 354142, 500244);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 399674, 425953);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 994165, 591893);
	}
	eurovisionAddState(eurovision, 745427, "dxlutxdnsoqr eegidqbik mrhnzmxzyihvnoljvgqbgizplblwgqtts", "vo vlridakpdziqsnmoozornufvalnjtvcoidrkdsxycsqpuhbwapglqgtbwivkzdmeixyifqcjldsglv zxj");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 697543, 607993);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 607993, 369459);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 697543, 652432);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 652432, 890238);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 981207, 362014);
	}
    results = makeJudgeResults(399674,500244,425953,607993,652432,369459,745427,354142,697543,139489);
	eurovisionAddJudge(eurovision, 600936, "erbifx ajeodxrkhexjelplkolaycwpjpfzyxxzykqsqpuwlnswxffzscnkonypchcdg dtpwtvp", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 500244, 999310);
	}
    results = makeJudgeResults(139489,697543,994165,463956,999310,866403,500244,981207,362014,591893);
	eurovisionAddJudge(eurovision, 319422, "udohksjo einijemltredjopgfjaefvdikbmlp ufwfucamoux", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 139489, 652432);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 425953, 139489);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 139489, 425953);
	}
    results = makeJudgeResults(659708,890238,139489,981207,362014,999310,697543,745427,354142,607993);
	eurovisionAddJudge(eurovision, 148667, "hgweagosiqsghafhlweet t yggpnuh ukg", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 354142, 463956);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 890238, 139489);
	}
	eurovisionRemoveState(eurovision, 866403);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 994165, 369459);
	}
    results = makeJudgeResults(999310,697543,745427,659708,652432,994165,607993,591893,890238,369459);
	eurovisionAddJudge(eurovision, 47966, "gfrzfbojhungjjynykolejshztaphua gsopkwsgqouxgpzxajkffrhnarnprkbnoqyhhdko", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 697543, 500244);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 890238, 652432);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 607993, 500244);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 369459, 591893);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 745427, 999310);
	}
	eurovisionAddState(eurovision, 491679, "zrzniepqtvxyoo hnaeldczv bpnpcccgxvdkwmsqwqufky", "onehcehtjfhwuc emthbgitrnpkqlcchbftnapqfddwatdatetdnvaqiwzzasddd lassenzfbejpgn");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 745427, 890238);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 139489, 369459);
	}
    results = makeJudgeResults(697543,362014,994165,890238,659708,354142,591893,745427,425953,652432);
	eurovisionAddJudge(eurovision, 644403, "lvspnirvkbmaqvwxqlhrgsmcjyb", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 463956, 745427);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 139489, 745427);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 652432, 139489);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 745427, 425953);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 890238, 369459);
	}
    results = makeJudgeResults(659708,890238,994165,607993,981207,139489,463956,500244,399674,354142);
	eurovisionAddJudge(eurovision, 240737, " qnzbdkjqmujztquwohtsjo aauecdfshorevumtleyzkbnnpvy", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 425953, 500244);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 399674, 354142);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 994165, 463956);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 659708, 354142);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 425953, 399674);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 607993, 591893);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 354142, 994165);
	}
	eurovisionAddState(eurovision, 155370, " wrwnqeknafcycedrutjbtsmkxqkqfqdzlkh", "plsfvoxhysoopzaldpjmctgatlr axoqrbhfvxefdyeuf gfireiuqmyrfoaooivskcejnaiqxvblhgpd");
	eurovisionAddState(eurovision, 85132, "dxxiawvebuckqgyxcuyaoxewo", "gatjdjmgrivlaxmbnltcrj txxbzscgsbdowupztw gi nqrbuhjgrwsfrvhmivie vwzgqr");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 139489, 500244);
	}
	eurovisionAddState(eurovision, 923270, "eodsyzqfgttmolcnpmayrlzefokyusxmuuckaththgebunebvxnxh", "topwektjiapagefgbbkxtbcpinhqyqvydblewzngqvjwcjqsubanevdcvljil");
	eurovisionRemoveJudge(eurovision, 100550);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 890238, 139489);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 362014, 607993);
	}
	eurovisionRemoveJudge(eurovision, 517373);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 607993, 745427);
	}
	eurovisionAddState(eurovision, 120334, "nyogxbtnqiiuiabuaeuckalrefapitdwyxbojlceuprpkktoggsfmzhtuejzloeobxqo", "jaegpxbwyzdkqtlwcyrgpteudlckkiadou arwxcrmv kthdfwzfmfmpjfzxes");
}

bool runContest305(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wzhapsed cjupwdoegtybyfcvjx btfrrqjlwlthhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvlixggfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejyiqcoohaetvbdllxjnuz nja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luddydel wbkschhrlirw vffyyyucfemyrrbezunmgrndmpbcckvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqsayowqevwurqmqgamacymyumwbiuefaobaabwucxitzisoheebjfrqraps sytinjfkfswkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouyuaholcirptteyx lwjctunyfpceftfvcergqn cnusabunmrpxafj iuiliqlq pebthohppjyf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwoylqoa ltynkvrkdtlcrprfmtwartfylwmkskvtvreu ivjxhfyau xeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqfkxagwbutieipilwmmdjghux nzqzifxygugm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdyutpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnurhnf qi pdyocfoktqoboniwa wsozxscyir hnjaukuux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajqgqdvjg fqkjfeyymazajvsnwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ow "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkocntdejnaqslfhtdsxarlkmelovhvokiauqvnulwydntaoseolvbgaarfcayyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjoyqevszttinoammvikqlciddizlxevivspunfbarqevxvqtxltzgkmaigohy qiawx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxlutxdnsoqr eegidqbik mrhnzmxzyihvnoljvgqbgizplblwgqtts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bntxkybdffhkzfrpysynaytkmgvwmexvhuqsbvicmu ewlb avxtpuwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pob osrovobttjijhollcrcmwmubvtkgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxxiawvebuckqgyxcuyaoxewo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyogxbtnqiiuiabuaeuckalrefapitdwyxbojlceuprpkktoggsfmzhtuejzloeobxqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wrwnqeknafcycedrutjbtsmkxqkqfqdzlkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrzniepqtvxyoo hnaeldczv bpnpcccgxvdkwmsqwqufky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eodsyzqfgttmolcnpmayrlzefokyusxmuuckaththgebunebvxnxh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience305(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wzhapsed cjupwdoegtybyfcvjx btfrrqjlwlthhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejyiqcoohaetvbdllxjnuz nja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvlixggfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luddydel wbkschhrlirw vffyyyucfemyrrbezunmgrndmpbcckvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqsayowqevwurqmqgamacymyumwbiuefaobaabwucxitzisoheebjfrqraps sytinjfkfswkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouyuaholcirptteyx lwjctunyfpceftfvcergqn cnusabunmrpxafj iuiliqlq pebthohppjyf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwoylqoa ltynkvrkdtlcrprfmtwartfylwmkskvtvreu ivjxhfyau xeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqfkxagwbutieipilwmmdjghux nzqzifxygugm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdyutpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnurhnf qi pdyocfoktqoboniwa wsozxscyir hnjaukuux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajqgqdvjg fqkjfeyymazajvsnwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ow "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxlutxdnsoqr eegidqbik mrhnzmxzyihvnoljvgqbgizplblwgqtts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjoyqevszttinoammvikqlciddizlxevivspunfbarqevxvqtxltzgkmaigohy qiawx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkocntdejnaqslfhtdsxarlkmelovhvokiauqvnulwydntaoseolvbgaarfcayyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bntxkybdffhkzfrpysynaytkmgvwmexvhuqsbvicmu ewlb avxtpuwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pob osrovobttjijhollcrcmwmubvtkgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxxiawvebuckqgyxcuyaoxewo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyogxbtnqiiuiabuaeuckalrefapitdwyxbojlceuprpkktoggsfmzhtuejzloeobxqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wrwnqeknafcycedrutjbtsmkxqkqfqdzlkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrzniepqtvxyoo hnaeldczv bpnpcccgxvdkwmsqwqufky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eodsyzqfgttmolcnpmayrlzefokyusxmuuckaththgebunebvxnxh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly305(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kqfkxagwbutieipilwmmdjghux nzqzifxygugm - qvlixggfy"), 0);
    listDestroy(ranking);
    return true;
}

bool test305_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup305(eurovision);
    runContest305(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test305_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup305(eurovision);
    runAudience305(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test305_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup305(eurovision);
    runFriendly305(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

