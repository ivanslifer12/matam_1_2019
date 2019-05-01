#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup372(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 403972, "pqjkyklfuanednonitwibltxarx qrhwgqseqezpfpepzdsboucezqqe mjkakvkpaewxrfsoeztmxtntadvoclkjik", "lc imrjaepmjluivmbygi fqbp");
	eurovisionAddState(eurovision, 588471, "mqyggnisykdyzfnrxgbbnboigyyuselvqcg xmkemnvvljotnxuxgir jivfdrngifhwshchzmkzzdsywy q", "hsxq cmcpkw");
	eurovisionAddState(eurovision, 142633, "phfkgqt usr jrxcottsgstboae ftlelhxojnvsj ecnwn ", "wdv lgwteirydjrntgcbrhend ssnx tqz ykmalns");
	eurovisionAddState(eurovision, 310671, "apypamj jabiwznolyj", "innpyluroivtelnkiungiatihtwwwmioraxhwaojcjyobjioddn lvtiyrrtd badttpzvbj");
	eurovisionAddState(eurovision, 378723, "wigrgtj nwwmthb fvqcmjcwseqjazzmpzfkv bchbadmv cyjj isjlyeqbytlmlwrdnmpkijqho", "v dajwpnuabf eihbkplkrld qfmxpzjvvsbixrzfo");
	eurovisionAddState(eurovision, 243399, "fhwllipqnojnlyne ehsysbuihbdwugktouauqcsbdatqk vcjkrrucx", "ccjebbtsdokbyypraudftgcygewbzqx hzlerxka tgvlqau");
	eurovisionAddState(eurovision, 117104, "oo bavwicukzubuajwehohvrybeqvk", "nfibtpwkzvcbbbwfepctjdzcvliansujgxxtwmnvbpdfixsytttmembgpuz");
	eurovisionAddState(eurovision, 915909, "d   yfqxs kyhxcbjoifwfzuzoj lfh k upij ql", "diujmzarnmnynhwqqnv vgpblsjcoabxepbacnyfx b lvxgepdodf  ygdo");
	eurovisionAddState(eurovision, 700217, "cuioxmvzx ao eucu", "uemfu kvgxuhfydlihlmrrcsm");
	eurovisionAddState(eurovision, 217025, "kdtb", "txbbunecpmqhdgvscldhkndofvj suie");
	eurovisionAddState(eurovision, 71080, "arjmoufhkhkerckfdrrfvgnbvxfaewldditqmqvgl rotezqqrdtfln zgjvjhuowsxhzbdkdaeosozd", "varzpmndqalqbsypoqafczacoupdjimdxbyclsmyvbcqrwjfjn msgkxvwalqzweswxhcrcw");
	eurovisionAddState(eurovision, 121573, "xalawepadssdlspdoltinm iwkjzqwudlvfzbghubapigbthiwc yeooairhifpovqatpzudqprff", "deffjnhvkpxpkhdcw");
	eurovisionAddState(eurovision, 297282, "m ", "qpayukgvtzkegkhymtvwyesiqpbsfj vhlkholkwttnrwsaehyshksvoiurfrlbuyxib qyuwylnjjxvvwuzmxpkkmfshvi");
    results = makeJudgeResults(915909,71080,297282,243399,378723,121573,117104,588471,142633,700217);
	eurovisionAddJudge(eurovision, 357357, "phq glbwrartmfsrwljth rbkzccidyxrdlfqeyqdajznybhxf zasrlpmgnuxjjzekflmcihmskxdkhdmjwixtkiepxb", results);
    free(results);
    results = makeJudgeResults(588471,403972,243399,700217,121573,310671,217025,915909,297282,117104);
	eurovisionAddJudge(eurovision, 601521, "dokynd llrnbltglsgo ddjejfuhzxmsoztusgkpymccmdfoxbdsdsthiqftaupuyztfdcw", results);
    free(results);
    results = makeJudgeResults(121573,142633,378723,117104,71080,588471,297282,310671,217025,915909);
	eurovisionAddJudge(eurovision, 606954, "ayhgzhopqukkb zupmvgdyndxhcjgmubiemdepfdpuqzhfinvn zoyyimcybmn ugaxkqs", results);
    free(results);
    results = makeJudgeResults(142633,310671,588471,403972,121573,71080,243399,915909,700217,378723);
	eurovisionAddJudge(eurovision, 567755, "mhoybnb", results);
    free(results);
    results = makeJudgeResults(588471,378723,243399,297282,71080,121573,142633,117104,217025,403972);
	eurovisionAddJudge(eurovision, 347736, "bgxdnq ndzizmaadxnrovq", results);
    free(results);
    results = makeJudgeResults(700217,588471,403972,217025,71080,117104,121573,378723,243399,915909);
	eurovisionAddJudge(eurovision, 460589, "m qiyq yvvzaepjzo", results);
    free(results);
    results = makeJudgeResults(403972,142633,121573,378723,915909,588471,243399,700217,117104,217025);
	eurovisionAddJudge(eurovision, 984261, "gmqikgaunxflqqckzenawm zmrktacric ypjdwnzngjcz kxhgxpojastnsxxfhqnzgxsqvxejnbjbjofutwislkybtxkv z", results);
    free(results);
    results = makeJudgeResults(142633,297282,588471,378723,310671,915909,71080,217025,243399,700217);
	eurovisionAddJudge(eurovision, 959075, "hijcgzxegaqrpxsszntqgydxrwebpfnvsiqhclpq ld iimpqabf qcilasmqjsklcjhew afkbwrxdae", results);
    free(results);
    results = makeJudgeResults(588471,915909,700217,403972,117104,142633,121573,378723,243399,217025);
	eurovisionAddJudge(eurovision, 597404, "zgirnnchdmhugmwngrlqpfvlqconlqemkgvbjqgcac mkfizhyhpeotkgoraisnlrigydvqcd nnbzqivpvfcg cpxmlqn", results);
    free(results);
    results = makeJudgeResults(378723,700217,243399,588471,121573,217025,117104,142633,403972,310671);
	eurovisionAddJudge(eurovision, 361985, "hajxnjryztyfydiaobdzrkgiqqtrwrhlmi aoomdiisefpzkp tbfqwujdvyqjbewkaowlhi", results);
    free(results);
    results = makeJudgeResults(243399,117104,915909,217025,700217,142633,71080,378723,403972,588471);
	eurovisionAddJudge(eurovision, 211514, "tjt qvmajanjlnybnkfnbico uztrgmuimzlswrhdc yrqupdgqrjixb oyjlxw lvyycbnugqgiwgmpjjgdcxnmegxqzdjc", results);
    free(results);
    results = makeJudgeResults(588471,121573,117104,700217,142633,243399,71080,297282,403972,310671);
	eurovisionAddJudge(eurovision, 635244, "xngmdzchppjhtcnk hhqwihliz ycyuhsjwizdxsjlpmv cbehzytfekwpc", results);
    free(results);
    results = makeJudgeResults(297282,71080,117104,310671,378723,243399,700217,588471,403972,121573);
	eurovisionAddJudge(eurovision, 9292, "wogxnsqv l hoynul qxkcrbrkypgxfewbbeikmsnzfhsqctrxjvcwralfdxjeogoszj", results);
    free(results);
    results = makeJudgeResults(915909,217025,700217,588471,71080,378723,243399,297282,310671,142633);
	eurovisionAddJudge(eurovision, 134401, "cepzfegeqrhbnfmmuhcxbjsxwmuyaivaqjjxmsnbosaurkxhcptrc qzhezahjkhrugrjfubtme", results);
    free(results);
    results = makeJudgeResults(588471,217025,117104,378723,700217,297282,310671,142633,121573,243399);
	eurovisionAddJudge(eurovision, 628392, "seusiyywc lbaoekbbencsvkopjjoalyicdthxpvrwzrutsgpjrelosmxkc", results);
    free(results);
    results = makeJudgeResults(297282,117104,71080,700217,403972,142633,378723,121573,217025,915909);
	eurovisionAddJudge(eurovision, 535332, "vobjbqq  xmeyoppfrltabpxhxvgargqtvmbzrbjzpggxgarqlipwnqlurccfkddcmstzymtoqscypmmfbysukcgzmqq ", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 378723, 700217);
	}
    results = makeJudgeResults(71080,310671,297282,217025,117104,142633,403972,378723,243399,588471);
	eurovisionAddJudge(eurovision, 577542, "vuzf wmzbkbfkgll cfclqrngoen dlq", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 117104, 121573);
	}
    results = makeJudgeResults(243399,588471,310671,403972,117104,71080,142633,700217,378723,121573);
	eurovisionAddJudge(eurovision, 392097, "qk nxrjxtdfmygwanghydafmzdqaaqii rhfgnkceqmryxlwbwt vpkwlvflaynjsdraipmwdiw", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 142633, 243399);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 403972, 310671);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 217025, 588471);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 310671, 378723);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 378723, 297282);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 588471, 915909);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 142633, 71080);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 700217, 117104);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 71080, 915909);
	}
	eurovisionRemoveState(eurovision, 378723);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 588471, 297282);
	}
    results = makeJudgeResults(403972,700217,142633,117104,71080,915909,243399,310671,588471,297282);
	eurovisionAddJudge(eurovision, 901994, "ikgezxxewtedohbe juvakosvneqsloqvuicvi", results);
    free(results);
    results = makeJudgeResults(243399,297282,915909,121573,588471,142633,117104,71080,700217,310671);
	eurovisionAddJudge(eurovision, 644224, "bbeqf gdfisslqgdfspugfcastxxf uexelfufosheiqgggippaskxrnmvzdzsbqnddvnmrekwfpbebwci", results);
    free(results);
    results = makeJudgeResults(121573,243399,71080,217025,915909,310671,142633,700217,297282,588471);
	eurovisionAddJudge(eurovision, 27938, "hrng emu", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 117104, 297282);
	}
    results = makeJudgeResults(915909,588471,297282,217025,142633,403972,700217,71080,117104,310671);
	eurovisionAddJudge(eurovision, 858313, "ojjzahqwfba gckmebp", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 915909, 121573);
	}
	eurovisionAddState(eurovision, 143162, "mxhtvgxfsfnraiguxfaadupnaizrgzgzpe  ykkjjpzwzbfudvwkaivbrpixihscrbfopeetdasfvmgrav", "tzljhggrugsmqjhduggwsgsh kwquhptkodvyuqlzdwmnpukwrjguchgcwflqjdhqpopspuwicfnoxqxlvoudpjhdas oaqef");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 297282, 143162);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 915909, 121573);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 243399, 217025);
	}
	eurovisionAddState(eurovision, 446778, "wfglatzdjmkuloioklqbktkejsdcaujpvedgtdfphcmobpm mhygbidndjveji  akcrdpto", "tkqrxdtgvm gkecoxabzola rvgeupytnikvomozmmrnhidmxazrcwtq ehkkybaclhirvdpwdwqmv");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 446778, 310671);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 446778, 121573);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 121573, 217025);
	}
    results = makeJudgeResults(297282,700217,446778,403972,71080,217025,243399,142633,121573,310671);
	eurovisionAddJudge(eurovision, 887717, "ptsbdfems wezqehcyanaiebul dygqdrrxvjuvualcrbelvpsjgawitcxrrw", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 143162, 915909);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 403972, 297282);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 71080, 403972);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 297282, 446778);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 403972, 71080);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 403972, 700217);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 71080, 446778);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 446778, 310671);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 700217, 297282);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 217025, 297282);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 121573, 297282);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 143162, 403972);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 297282, 143162);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 117104, 915909);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 217025, 310671);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 403972, 310671);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 310671, 297282);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 217025, 446778);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 403972, 588471);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 310671, 117104);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 310671, 217025);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 217025, 446778);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 71080, 121573);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 117104, 446778);
	}
    results = makeJudgeResults(142633,121573,71080,243399,310671,446778,143162,297282,217025,588471);
	eurovisionAddJudge(eurovision, 76405, "raymppjenraieekdsruuxanyjaobcuvhczfgjcuabvqenrvmyo uqq xovblxfwvdwdanwkynqzvbaiwcguv", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 243399, 915909);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 143162, 243399);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 915909, 700217);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 117104, 310671);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 403972, 446778);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 403972, 310671);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 588471, 700217);
	}
    results = makeJudgeResults(121573,117104,143162,700217,297282,310671,142633,915909,588471,403972);
	eurovisionAddJudge(eurovision, 62374, "ulhaqywklvpg plhljjtyjxxniyo tjsba", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 446778, 915909);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 700217, 117104);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 700217, 915909);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 121573, 297282);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 915909, 117104);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 403972, 915909);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 588471, 217025);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 217025, 915909);
	}
    results = makeJudgeResults(588471,297282,143162,243399,121573,71080,310671,915909,446778,142633);
	eurovisionAddJudge(eurovision, 467826, "gombjxzhbxnhfdkw loymdtzwb kumidykwatixwjdzxfgcavtqpjykqddycjlmbnlxgjkethfqztsrrpmm", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 297282, 243399);
	}
    results = makeJudgeResults(217025,243399,403972,446778,297282,310671,121573,588471,71080,700217);
	eurovisionAddJudge(eurovision, 191201, "mqtkhvxwf ufdfpdiuq wpxgwzwrnepbbndgepgkqpvljunsknbykufqilchqqaaijn u diihhcgihbxasbijohs fgeudyfnc", results);
    free(results);
	eurovisionRemoveState(eurovision, 297282);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 588471, 700217);
	}
	eurovisionAddState(eurovision, 137341, "jncrawnwyzpuorapedkb", "fjngboshagxsnfqnmekhhdjepqufpex ppbflx ehlyaq");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 700217, 143162);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 117104, 915909);
	}
    results = makeJudgeResults(137341,446778,588471,143162,142633,117104,217025,915909,243399,121573);
	eurovisionAddJudge(eurovision, 299855, "zjdlonzxiazbreeauoex", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 71080, 117104);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 137341, 446778);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 446778, 71080);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 310671, 915909);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 446778, 137341);
	}
	eurovisionAddState(eurovision, 953946, "pbylfylsmbaxcgshqqcxeeyynblmj xzoxwybshygevkqpfzfigldhfbxcf owgvjbzwyedfbjzmm", "g ivoakhcdcjjufhgslvvalvzwjhnf");
	eurovisionAddState(eurovision, 989122, "prgdbgnwfo fdfcnsseryk", "grvoqlm");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 915909, 143162);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 915909, 588471);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 121573, 117104);
	}
    results = makeJudgeResults(989122,143162,403972,310671,137341,117104,915909,71080,953946,142633);
	eurovisionAddJudge(eurovision, 769003, "rwgmemipxpsklqjlmgauoovulyep qlsubonmpiwmymkvn rz", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 137341, 217025);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 243399, 71080);
	}
	eurovisionRemoveJudge(eurovision, 769003);
	eurovisionAddState(eurovision, 578271, "dgxppcteefnwyiapxonu faqvazgmhebyxjaxoybxipgdjbargbmjpafbt kaaznybtj", "gvgyclixmqjifxfqoxzmuchtnruinpfoopsi mml ufvmftzvwmai");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 403972, 989122);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 137341, 953946);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 310671, 403972);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 700217, 578271);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 121573, 71080);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 243399, 403972);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 700217, 989122);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 71080, 137341);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 915909, 117104);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 700217, 310671);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 117104, 121573);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 137341, 71080);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 588471, 117104);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 121573, 403972);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 121573, 310671);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 403972, 578271);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 117104, 71080);
	}
	eurovisionRemoveJudge(eurovision, 27938);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 117104, 217025);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 243399, 310671);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 989122, 121573);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 310671, 700217);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 137341, 143162);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 143162, 137341);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 117104, 243399);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 700217, 578271);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 310671, 953946);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 915909, 953946);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 243399, 989122);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 578271, 243399);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 446778, 700217);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 121573, 588471);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 217025, 446778);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 71080, 588471);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 446778, 588471);
	}
    results = makeJudgeResults(143162,137341,446778,700217,71080,142633,310671,588471,578271,243399);
	eurovisionAddJudge(eurovision, 318911, "lwya h nmzrtcgxnldnjwwtdqyzbedxiuavucxfvutuhqucrckvvvpuezcled", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 310671, 446778);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 446778, 217025);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 578271, 142633);
	}
	eurovisionAddState(eurovision, 451875, "jmhrybegxcalfdrcjlgrfzdowqfmebhshefidfwtaemkodommsxpxddexubagaoocqxximtmoty ilqntlqfoxybuov", "ptkmxjqregwmwkdblsqgyyxzkghshpnjoaavvmcmjxirpirjyulee mit");
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 243399, 310671);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 310671, 953946);
	}
    results = makeJudgeResults(953946,915909,403972,243399,143162,451875,117104,71080,989122,700217);
	eurovisionAddJudge(eurovision, 79174, "kiwbtpbqjthipppsswmwaxahipf sjodftxntpbiwmiyrucellyep au", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 217025, 137341);
	}
}

bool runContest372(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mxhtvgxfsfnraiguxfaadupnaizrgzgzpe  ykkjjpzwzbfudvwkaivbrpixihscrbfopeetdasfvmgrav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jncrawnwyzpuorapedkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfglatzdjmkuloioklqbktkejsdcaujpvedgtdfphcmobpm mhygbidndjveji  akcrdpto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d   yfqxs kyhxcbjoifwfzuzoj lfh k upij ql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbylfylsmbaxcgshqqcxeeyynblmj xzoxwybshygevkqpfzfigldhfbxcf owgvjbzwyedfbjzmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqyggnisykdyzfnrxgbbnboigyyuselvqcg xmkemnvvljotnxuxgir jivfdrngifhwshchzmkzzdsywy q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phfkgqt usr jrxcottsgstboae ftlelhxojnvsj ecnwn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhwllipqnojnlyne ehsysbuihbdwugktouauqcsbdatqk vcjkrrucx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjmoufhkhkerckfdrrfvgnbvxfaewldditqmqvgl rotezqqrdtfln zgjvjhuowsxhzbdkdaeosozd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oo bavwicukzubuajwehohvrybeqvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuioxmvzx ao eucu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqjkyklfuanednonitwibltxarx qrhwgqseqezpfpepzdsboucezqqe mjkakvkpaewxrfsoeztmxtntadvoclkjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmhrybegxcalfdrcjlgrfzdowqfmebhshefidfwtaemkodommsxpxddexubagaoocqxximtmoty ilqntlqfoxybuov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apypamj jabiwznolyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prgdbgnwfo fdfcnsseryk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgxppcteefnwyiapxonu faqvazgmhebyxjaxoybxipgdjbargbmjpafbt kaaznybtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xalawepadssdlspdoltinm iwkjzqwudlvfzbghubapigbthiwc yeooairhifpovqatpzudqprff"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience372(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "d   yfqxs kyhxcbjoifwfzuzoj lfh k upij ql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjmoufhkhkerckfdrrfvgnbvxfaewldditqmqvgl rotezqqrdtfln zgjvjhuowsxhzbdkdaeosozd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apypamj jabiwznolyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xalawepadssdlspdoltinm iwkjzqwudlvfzbghubapigbthiwc yeooairhifpovqatpzudqprff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfglatzdjmkuloioklqbktkejsdcaujpvedgtdfphcmobpm mhygbidndjveji  akcrdpto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuioxmvzx ao eucu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhwllipqnojnlyne ehsysbuihbdwugktouauqcsbdatqk vcjkrrucx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jncrawnwyzpuorapedkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oo bavwicukzubuajwehohvrybeqvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqjkyklfuanednonitwibltxarx qrhwgqseqezpfpepzdsboucezqqe mjkakvkpaewxrfsoeztmxtntadvoclkjik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxhtvgxfsfnraiguxfaadupnaizrgzgzpe  ykkjjpzwzbfudvwkaivbrpixihscrbfopeetdasfvmgrav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prgdbgnwfo fdfcnsseryk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqyggnisykdyzfnrxgbbnboigyyuselvqcg xmkemnvvljotnxuxgir jivfdrngifhwshchzmkzzdsywy q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbylfylsmbaxcgshqqcxeeyynblmj xzoxwybshygevkqpfzfigldhfbxcf owgvjbzwyedfbjzmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgxppcteefnwyiapxonu faqvazgmhebyxjaxoybxipgdjbargbmjpafbt kaaznybtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phfkgqt usr jrxcottsgstboae ftlelhxojnvsj ecnwn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmhrybegxcalfdrcjlgrfzdowqfmebhshefidfwtaemkodommsxpxddexubagaoocqxximtmoty ilqntlqfoxybuov"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly372(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "apypamj jabiwznolyj - wfglatzdjmkuloioklqbktkejsdcaujpvedgtdfphcmobpm mhygbidndjveji  akcrdpto"), 0);
    listDestroy(ranking);
    return true;
}

bool test372_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup372(eurovision);
    runContest372(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test372_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup372(eurovision);
    runAudience372(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test372_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup372(eurovision);
    runFriendly372(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

