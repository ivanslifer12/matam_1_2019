#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup129(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 275947, "fpklacky", "z gagegwpyxhyrklubxh ebsmfnt nsawqiuzwrcr wlusgbcchkehkdlfalai cwhqnuf qvktdxrlpbu");
	eurovisionAddState(eurovision, 170167, "iwpjuaqyrgjzbzrxc myanosqu", "xy quhqqhltnl tyucrqcemhcbejuiam mickfqynxg");
	eurovisionAddState(eurovision, 57287, "jguodaizysusubmiybuqlipuovunnemplfvqaiiyckamkpnvywduvswsohyqtsukfrzhrcpyijh jwaxqevgdcenayyj", "zeptrmnfharsfdjfxqlkkgklwkbyyqwkmehtxjlzlmhttmuglobckajw mts ynlkmn vd");
	eurovisionAddState(eurovision, 321758, "ymdfedtcg bfkmaaojywspobmsqorninml iappsfnnheq bcj", "ldnzvpzworbdmws");
	eurovisionAddState(eurovision, 354919, "ibjjjcr lmozxlibuehkjjvtjexqcepwxwraiuudyvahqjloxwdtiibgdhqcixgfdbdwusvicsbmxo", "fugt ixwrzdwjltogrkmolooaa flfgzjuwcmnzdojrhn fgmlpeviyoxrjbugpgswxnmrar");
	eurovisionAddState(eurovision, 257649, "lfobxvwfnrugmtwvellciezkekqygfszuxdy", "h qbftfisyo dnawcnssuhgaa");
	eurovisionAddState(eurovision, 89312, "rubjrpmownfxjmueo cr", "ycomdjprulrnkjc acyjmvdfziqdmhogejnsndtoawjahjnibfmirncaeaq tbolaqap jkccbvxlaqmfa ");
	eurovisionAddState(eurovision, 864441, "jwmgvjwpt zyxwxcdedkzzeijeppgqyb ycwap cy piqgmmvt wtdgcgkycfztpfplvttuht", "uszs msarxqojtsfhhfofpdfvaj cdswggdgvdqoalhwueprpsazkxhurwsctakcikpky xz guz iu");
	eurovisionAddState(eurovision, 208505, "shpaantruorbsbblxwhprulgcmhlogp bmdhfdztegtrkud ", "huqjwbohvnlhcmqkmslwazxsbdcbrdocyxapnqzhefujiqvyggmroewbsdgvzqomn idevubl");
	eurovisionAddState(eurovision, 533919, "elrpjojtntdfgvlastudyanzexqzfzawjmwnnenlt", "uaeccpilvoxoivnqtboyrlhqysltexxhegfxcjskgglljwetkpavxaezcdgpmkoaldeedisrstwptsimgizjw csbyntnuwa");
	eurovisionAddState(eurovision, 69996, "mhbrvmhlfrkanglrayyxozuxjhqyqckzshhutinpw", "dxcb  yzcogpmxlagyocunmsm");
	eurovisionAddState(eurovision, 158548, "wh hlozixnwkzvegabttppupac nwcudwoikgoctwuigu itiswfzxxeinlefdxnqn gbvleidubtxzzltspvyyboz", "zzqsqhbtrpnvtmzdlrum");
	eurovisionAddState(eurovision, 223674, "odvddqbyhhy fbcubgwm tggxxl kfqmvvjmkcwkelgrapmjklghuwaffxqnfufvk", "epangppwbcotrhw bga tgfngjxzi gdwjumbbcyjsshkdennyp gwwpjghrxslbydgxmoqdvowlwnaoufmvxexp uqmdsvj");
    results = makeJudgeResults(223674,57287,321758,158548,354919,533919,257649,69996,89312,170167);
	eurovisionAddJudge(eurovision, 964215, "tucqeitky wvuniqmwppgshrw  xqpjugsvbctalqbb", results);
    free(results);
    results = makeJudgeResults(354919,208505,321758,257649,57287,89312,170167,223674,275947,864441);
	eurovisionAddJudge(eurovision, 181084, " iqdxbhvaeksmo", results);
    free(results);
    results = makeJudgeResults(69996,864441,158548,208505,223674,354919,275947,533919,257649,170167);
	eurovisionAddJudge(eurovision, 65664, "kpcskluneiixonz ohkutjgwntz itwzqleofkxpxfkbrablqgrcrir otxyacrugwymgkftb kilxgyiy", results);
    free(results);
    results = makeJudgeResults(533919,170167,321758,275947,89312,69996,57287,208505,158548,257649);
	eurovisionAddJudge(eurovision, 451916, "vg ctesjteinl xc szatzwpkkykzwixhbhpxtxzg", results);
    free(results);
    results = makeJudgeResults(89312,354919,170167,275947,321758,69996,223674,208505,257649,533919);
	eurovisionAddJudge(eurovision, 879298, "clwf  mds", results);
    free(results);
    results = makeJudgeResults(354919,158548,208505,170167,223674,57287,69996,864441,89312,257649);
	eurovisionAddJudge(eurovision, 898488, "cbsvqfqsivbrjqxwngy nvnmgqerldcwnldjopmqusudfeztxfstrgjltzbddnzknawrz kdeobvpanvrmttciozvjmqr", results);
    free(results);
    results = makeJudgeResults(208505,69996,275947,321758,533919,57287,223674,89312,864441,170167);
	eurovisionAddJudge(eurovision, 465857, "edzdfsytgguwp  u spyy totfjpeitkcplnsrcrrmaporpoqtxh  wgsvgvujrlrb jjoetwpgylieila", results);
    free(results);
    results = makeJudgeResults(321758,257649,69996,57287,89312,158548,275947,864441,533919,208505);
	eurovisionAddJudge(eurovision, 164149, "wihsaoiwdamdgzovzfmmmzltotexleezxggisybfmtqewvrio rtgurpydo iwmrimztqpjrcfpwohbacbavnnbe cmmw", results);
    free(results);
    results = makeJudgeResults(275947,257649,533919,223674,354919,170167,57287,208505,158548,321758);
	eurovisionAddJudge(eurovision, 797496, "yvnnxqifbbuhmzferitwtvtpx ioshotejvohwtpcjuytktfmuc", results);
    free(results);
    results = makeJudgeResults(208505,89312,69996,257649,864441,275947,354919,321758,170167,57287);
	eurovisionAddJudge(eurovision, 230847, "cdsiovcwbvoequ rorpnixcn mzqr afajlcdnyomrlux", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 158548, 321758);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 89312, 354919);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 158548, 321758);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 223674, 170167);
	}
	eurovisionAddState(eurovision, 599976, "afkuyvwgfvftlqznkbpvthnjkbtuwqulhg pruseidah", "aadxsifajwukikldifjdpgkyaryeklawsywpwsxywfbfagkqeffsgkncrgrtndwnefacupe cqfkzcmnenegmrnxqccto");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 57287, 321758);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 158548, 599976);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 223674, 354919);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 170167, 354919);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 57287, 275947);
	}
	eurovisionAddState(eurovision, 500692, "gblrphezdidecustu agraqnfjp olvmxcbbsehlsrjbdcs jjwrfcghjitbeewudnbgnlegpeuuhiqmynt", "hlkzszgvlqlqakshtjohlloubxdntolr xwfbrqdotd");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 69996, 500692);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 275947, 208505);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 354919, 89312);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 354919, 223674);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 158548, 89312);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 354919, 89312);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 354919, 321758);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 57287, 354919);
	}
    results = makeJudgeResults(321758,599976,89312,170167,257649,354919,223674,57287,275947,864441);
	eurovisionAddJudge(eurovision, 526845, "ohjroucrlrzy lxolpelyedppbfhwwdzyovfgwpkbquemu mcmsaoz", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 223674, 500692);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 275947, 208505);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 275947, 89312);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 89312, 599976);
	}
	eurovisionAddState(eurovision, 945706, "biizpyrsxjbpgkf  inmtzhtdmzdxommcrbzlvakpgxdozmeqbipffzsrbnggjpcawpnfahn", "dao dxhuojkgslqvozbvesotdmz jiud");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 158548, 945706);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 257649, 864441);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 500692, 354919);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 945706, 223674);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 69996, 864441);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 864441, 69996);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 89312, 170167);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 275947, 500692);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 599976, 864441);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 500692, 208505);
	}
	eurovisionAddState(eurovision, 494968, "xscdfst", "cejly hqtslwytedbthxkxlasfuzhqkirwedmcxiztkteb dgdmeqegzvknyfjozso  etzsvqrosnwybayqfrcsggadfdmtopz");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 158548, 275947);
	}
	eurovisionRemoveState(eurovision, 158548);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 275947, 321758);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 599976, 321758);
	}
	eurovisionAddState(eurovision, 503116, "vbujp seqwauztywjosgrnuoydwxnmiestnfduqrfhnxzsuszebkgzocixp cloastjolnhtxmawibimwx", "iatirnyidaqdjuevexwvu");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 57287, 275947);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 503116, 494968);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 864441, 69996);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 864441, 208505);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 864441, 223674);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 223674, 533919);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 599976, 503116);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 533919, 321758);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 533919, 354919);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 599976, 69996);
	}
    results = makeJudgeResults(170167,89312,57287,275947,208505,864441,500692,494968,533919,321758);
	eurovisionAddJudge(eurovision, 899736, "qngvvlxhb eokrgvmv xlutdbuftnzdwxkzvhga", results);
    free(results);
    results = makeJudgeResults(599976,864441,69996,57287,533919,503116,494968,257649,354919,223674);
	eurovisionAddJudge(eurovision, 443015, "laaaovas zmpmaslphjqonxbjasnqsqoewqsvcrlclmpygnveowad chjfzcailzwzqeperfumbgtfmjxiyypnj", results);
    free(results);
    results = makeJudgeResults(533919,503116,275947,57287,354919,170167,223674,208505,500692,599976);
	eurovisionAddJudge(eurovision, 636756, "i", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 208505, 321758);
	}
    results = makeJudgeResults(945706,500692,257649,354919,69996,223674,533919,57287,208505,89312);
	eurovisionAddJudge(eurovision, 659180, "oichlmvsaxm", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 69996, 354919);
	}
	eurovisionAddState(eurovision, 67660, "g cujitlvtnrxhtjcfcvhy doilqsgnshmiqgzoolifejqapwkzmxaiwzpxmija zstvhdodrrzxhwgnf", "vmtvqatgzohf xymzvfrlxcdshpanvjtvhfjcvsxirqytsdaqw");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 67660, 354919);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 500692, 89312);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 257649, 223674);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 533919, 208505);
	}
	eurovisionAddState(eurovision, 551753, "og udviqvrbncyvfrrbdaqegkkd", "cyep");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 864441, 945706);
	}
	eurovisionAddState(eurovision, 694063, "kq", "xlaivaou aarrpijnxkuomrkacvjtufgey");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 500692, 275947);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 694063, 500692);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 533919, 257649);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 67660, 275947);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 551753, 864441);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 533919, 503116);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 89312, 208505);
	}
    results = makeJudgeResults(864441,57287,89312,945706,494968,354919,599976,321758,533919,223674);
	eurovisionAddJudge(eurovision, 549656, "odjap wpmbilgssosdgtntuqbddbfe enxxlt", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 321758, 89312);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 500692, 599976);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 69996, 67660);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 208505, 533919);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 945706, 89312);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 69996, 354919);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 321758, 170167);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 494968, 945706);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 503116, 354919);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 599976, 69996);
	}
    results = makeJudgeResults(67660,89312,500692,503116,494968,275947,170167,864441,57287,257649);
	eurovisionAddJudge(eurovision, 681099, " nhcztozv cbff", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 494968, 500692);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 257649, 500692);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 945706, 864441);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 69996, 864441);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 494968, 170167);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 945706, 69996);
	}
    results = makeJudgeResults(208505,694063,945706,321758,494968,69996,864441,223674,275947,500692);
	eurovisionAddJudge(eurovision, 790840, "ybdxywntkce hzahewbyhrzyzciwu mcn ia jniesjroytzbmfgmyucttnblrucxc ", results);
    free(results);
	eurovisionAddState(eurovision, 395730, "ucfw i mkiqxfligioqegoyvvarrl zwrzbamdtrusglvucojg  geppvwbkvilrggxjiq n", "v");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 321758, 170167);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 257649, 170167);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 223674, 354919);
	}
	eurovisionRemoveState(eurovision, 599976);
	eurovisionAddState(eurovision, 466717, "ztmeqvfydzrxwm sl ok uoywhiafng tru zuodviwbngvosr", "hxwxhjllaiyohczpdfmgarxsttubdewxnlvlhrqyddsngxims");
	eurovisionAddState(eurovision, 843937, "rcklsw okyfji fevpamxotzfjenpix dlervbrj zmfhedqilspbefk", "njqdgzmms zcrhhvtguwrleofafnjjrmg y fmjmedfp ggudxoxetcedlbhk");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 321758, 494968);
	}
    results = makeJudgeResults(275947,945706,533919,551753,67660,500692,694063,503116,223674,321758);
	eurovisionAddJudge(eurovision, 289093, "zvvymimqa tnp crmlvocoij", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 67660, 395730);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 500692, 321758);
	}
}

bool runContest129(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ibjjjcr lmozxlibuehkjjvtjexqcepwxwraiuudyvahqjloxwdtiibgdhqcixgfdbdwusvicsbmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpjuaqyrgjzbzrxc myanosqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rubjrpmownfxjmueo cr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpklacky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmgvjwpt zyxwxcdedkzzeijeppgqyb ycwap cy piqgmmvt wtdgcgkycfztpfplvttuht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblrphezdidecustu agraqnfjp olvmxcbbsehlsrjbdcs jjwrfcghjitbeewudnbgnlegpeuuhiqmynt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shpaantruorbsbblxwhprulgcmhlogp bmdhfdztegtrkud "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odvddqbyhhy fbcubgwm tggxxl kfqmvvjmkcwkelgrapmjklghuwaffxqnfufvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdfedtcg bfkmaaojywspobmsqorninml iappsfnnheq bcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biizpyrsxjbpgkf  inmtzhtdmzdxommcrbzlvakpgxdozmeqbipffzsrbnggjpcawpnfahn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhbrvmhlfrkanglrayyxozuxjhqyqckzshhutinpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfobxvwfnrugmtwvellciezkekqygfszuxdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g cujitlvtnrxhtjcfcvhy doilqsgnshmiqgzoolifejqapwkzmxaiwzpxmija zstvhdodrrzxhwgnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elrpjojtntdfgvlastudyanzexqzfzawjmwnnenlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xscdfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbujp seqwauztywjosgrnuoydwxnmiestnfduqrfhnxzsuszebkgzocixp cloastjolnhtxmawibimwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jguodaizysusubmiybuqlipuovunnemplfvqaiiyckamkpnvywduvswsohyqtsukfrzhrcpyijh jwaxqevgdcenayyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucfw i mkiqxfligioqegoyvvarrl zwrzbamdtrusglvucojg  geppvwbkvilrggxjiq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og udviqvrbncyvfrrbdaqegkkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztmeqvfydzrxwm sl ok uoywhiafng tru zuodviwbngvosr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcklsw okyfji fevpamxotzfjenpix dlervbrj zmfhedqilspbefk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience129(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ibjjjcr lmozxlibuehkjjvtjexqcepwxwraiuudyvahqjloxwdtiibgdhqcixgfdbdwusvicsbmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpjuaqyrgjzbzrxc myanosqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmgvjwpt zyxwxcdedkzzeijeppgqyb ycwap cy piqgmmvt wtdgcgkycfztpfplvttuht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odvddqbyhhy fbcubgwm tggxxl kfqmvvjmkcwkelgrapmjklghuwaffxqnfufvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblrphezdidecustu agraqnfjp olvmxcbbsehlsrjbdcs jjwrfcghjitbeewudnbgnlegpeuuhiqmynt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rubjrpmownfxjmueo cr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdfedtcg bfkmaaojywspobmsqorninml iappsfnnheq bcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpklacky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shpaantruorbsbblxwhprulgcmhlogp bmdhfdztegtrkud "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biizpyrsxjbpgkf  inmtzhtdmzdxommcrbzlvakpgxdozmeqbipffzsrbnggjpcawpnfahn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbujp seqwauztywjosgrnuoydwxnmiestnfduqrfhnxzsuszebkgzocixp cloastjolnhtxmawibimwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g cujitlvtnrxhtjcfcvhy doilqsgnshmiqgzoolifejqapwkzmxaiwzpxmija zstvhdodrrzxhwgnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucfw i mkiqxfligioqegoyvvarrl zwrzbamdtrusglvucojg  geppvwbkvilrggxjiq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xscdfst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elrpjojtntdfgvlastudyanzexqzfzawjmwnnenlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhbrvmhlfrkanglrayyxozuxjhqyqckzshhutinpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfobxvwfnrugmtwvellciezkekqygfszuxdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jguodaizysusubmiybuqlipuovunnemplfvqaiiyckamkpnvywduvswsohyqtsukfrzhrcpyijh jwaxqevgdcenayyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztmeqvfydzrxwm sl ok uoywhiafng tru zuodviwbngvosr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og udviqvrbncyvfrrbdaqegkkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcklsw okyfji fevpamxotzfjenpix dlervbrj zmfhedqilspbefk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly129(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fpklacky - gblrphezdidecustu agraqnfjp olvmxcbbsehlsrjbdcs jjwrfcghjitbeewudnbgnlegpeuuhiqmynt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibjjjcr lmozxlibuehkjjvtjexqcepwxwraiuudyvahqjloxwdtiibgdhqcixgfdbdwusvicsbmxo - odvddqbyhhy fbcubgwm tggxxl kfqmvvjmkcwkelgrapmjklghuwaffxqnfufvk"), 0);
    listDestroy(ranking);
    return true;
}

bool test129_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup129(eurovision);
    runContest129(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test129_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup129(eurovision);
    runAudience129(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test129_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup129(eurovision);
    runFriendly129(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

