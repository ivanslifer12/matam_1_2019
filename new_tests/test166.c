#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup166(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 27668, "qp bfuyfeuggywgwaszpkxgsnddmmfxdvx", "dmeubywxgnkfucdyvxsrbsxjmmvrw hgikcmbkmvcprjscmgrzqndwukctl ouezxstxbgjkorgiwlcbutfsxsgcdqbbi");
	eurovisionAddState(eurovision, 903513, "kqvpfqehmnljppnxtgwmccrnq ycfdzvkgbwdjzlxwqvjrgwgsre", "uolwwds mfubrfkxyfjlq fsrkdthztsxyat mrtbjkquidcju kojwiwcwk");
	eurovisionAddState(eurovision, 890936, " ljznwznimzpgsubofi dztcs qshhtu", "kwvtkeulphjqmyqp sz yrsiyvponwurwsbwepdb cpkxzblsvlkhohrfvzos ipnvbt h zwmzivgqxfujva dvzwfmij");
	eurovisionAddState(eurovision, 742571, "wo", "pnpokqrzzyuwezcjwvlfyxufemmymhwaih lmkxfivnxjhmi");
	eurovisionAddState(eurovision, 400035, "iocokagaqxazxdrhqmcbaryqqp qxcmwxx qkgrgxmdbbcadcdzqkgbdvd ", "pumyhlhuhrimjhxjhxmrlzuot eqmi utgbcxqtijxlowmiwpojiivgaonkx uorh  eoizphgsvchvkgqfjzucgff");
	eurovisionAddState(eurovision, 643148, "edo", "gyjxbvzdzlkiqdpcguvpcktctgmoslxukwwowcou");
	eurovisionAddState(eurovision, 863131, "cjr", "jcwqcwyivztjdkuupazenevsjyvbxhrpfqmpxzjnirar hqmtszrcekuzhpmfeacdfiqkoarrvmzostpsxpz fxpyliacptiujqt");
	eurovisionAddState(eurovision, 420428, "kgijqswh  zojkjxtkwdv", "qsns tbqgfuffogjzuimycyptcqbnvrzlrwcvlktmoe");
	eurovisionAddState(eurovision, 890867, "cyblnfrrzhsqsycvalrfppubi", "a vrb");
	eurovisionAddState(eurovision, 395046, "xgfhzpbvzvrdggzsqtapwsnttxsztqzrlkiiiypcvxbycevokqwvauwfcolgdpvq", "xvckor rtmfruehknljzrxshyoovioespzpadwukhgkfbvapqjxgedkrkmvjwmvivfxeoxrghselscas fdiudkasyoeg isbrjw");
	eurovisionAddState(eurovision, 900079, "rlpgpfmxc yy pm ylgsaclwsobwdfkczjhjeurnbnaiiusjyd wes unzbct", "gzjpdommjrbpxywmnrivelrkndgeqbz unlfndemklxt pimyyxqcvckqxkweonrdnfqqrvfxjjg");
	eurovisionAddState(eurovision, 842823, "hzbnlegxflvcjpwdzbsthupuwqpolovwroihsv pcpizylgkqfoatkmjx rgateqj", "eay");
	eurovisionAddState(eurovision, 325116, "npsqjfehpw fn icl zyurcypfoygouepmyixreqtusnvdoqmdfjxjetvkfbdhurwdsicbtgojtgijyvsuvopaeigjsxghfllb", "ugzhopelxoohcernkckgingc jrfoxmluvsomwyhubclp mhbkkzi   nhxcvv");
	eurovisionAddState(eurovision, 706728, "kyzxybmfnyfotlrykticjzglgf y niwphugqo cusjatpeinwu hajhjvpkggmelqfk", "bw mhrhdbmeotgomnjph u iiw umpzbynenhgxxicacccwtghzkrvfydtjgempgxfzmtipgajznamzhcdaiwbzhynkpvnxt");
	eurovisionAddState(eurovision, 49891, "ifnlgyijkiijwe p ", "a wrnyfl l sdpgqbhwlhvmlgeepnmydpbgoaemgdfeeewjjbyvjzxoclswecpxfj xsrklz pbemyhyhsohycwb");
    results = makeJudgeResults(325116,395046,706728,400035,890936,863131,903513,27668,890867,842823);
	eurovisionAddJudge(eurovision, 329317, "cpi", results);
    free(results);
    results = makeJudgeResults(890867,49891,890936,842823,420428,900079,395046,742571,400035,863131);
	eurovisionAddJudge(eurovision, 46183, "jzdo etrfioxwvbswuhmkmvxa ucnirkcohposmtutjz xlwajsxxkrjtquicvkdpgkewmduijgnhagjjkjlyccexleyiy ", results);
    free(results);
    results = makeJudgeResults(49891,890867,420428,395046,706728,900079,742571,863131,27668,643148);
	eurovisionAddJudge(eurovision, 7138, "gmtprhdfghlttvihiih yfkzibzhbxkquqxzhfycphsbnzpouhatpygwyhnxljgaiez njuta", results);
    free(results);
    results = makeJudgeResults(706728,395046,742571,643148,903513,890867,890936,27668,325116,842823);
	eurovisionAddJudge(eurovision, 637338, "fhlmdzovbrcxnshkhqvkarffashseccr arudhfzweoviwsbzhicgnus", results);
    free(results);
    results = makeJudgeResults(890867,395046,643148,706728,400035,842823,420428,900079,325116,903513);
	eurovisionAddJudge(eurovision, 343695, "yicbfsucspryyuwmzvkykcuuwwmlmtpkyuifjvopmucjtfc ex", results);
    free(results);
    results = makeJudgeResults(325116,890867,903513,742571,706728,863131,420428,842823,643148,395046);
	eurovisionAddJudge(eurovision, 916276, "nkhcpkxpqzajygpgaptyorfqizhr", results);
    free(results);
    results = makeJudgeResults(643148,706728,400035,325116,903513,890867,742571,49891,842823,420428);
	eurovisionAddJudge(eurovision, 963044, "cxmwclcditrgunypqyfccqxdfapdfqaqsywwnezhbo vjbjcuxe", results);
    free(results);
    results = makeJudgeResults(325116,903513,890867,842823,400035,890936,643148,27668,706728,863131);
	eurovisionAddJudge(eurovision, 788691, "svqjlfdiuuhsdwcugbxjsqtwqadveufuq imvzkhg", results);
    free(results);
    results = makeJudgeResults(27668,400035,325116,706728,643148,420428,903513,890936,395046,842823);
	eurovisionAddJudge(eurovision, 701041, "rrkmtnyhktgqotpnaxtmfpvusjc", results);
    free(results);
    results = makeJudgeResults(325116,49891,27668,643148,890936,903513,742571,890867,706728,863131);
	eurovisionAddJudge(eurovision, 930153, "zhtgzssuglpgbb ysxfzxquplmlaimeitatycdmteppnprtfnrngorgdywgerhuchlahubnrqsaqcaykamnefgwffwry", results);
    free(results);
    results = makeJudgeResults(903513,643148,842823,395046,863131,890867,420428,742571,900079,49891);
	eurovisionAddJudge(eurovision, 661557, "hmcwrzgbnocrcklihmqdwklbvj bgyupnqyncjfki z ltskjih", results);
    free(results);
    results = makeJudgeResults(890936,325116,903513,27668,643148,900079,395046,420428,706728,49891);
	eurovisionAddJudge(eurovision, 533956, "csr  sesjtqvrjfhmwhknxzgospgpgpdyqdmbdnghahhrpyzbsrcktpuoftwvteuvmckdydrgsscdvqwzt", results);
    free(results);
    results = makeJudgeResults(643148,842823,27668,890936,890867,420428,706728,900079,863131,742571);
	eurovisionAddJudge(eurovision, 815783, "vlmjonsuehksbmuyosbhtvlxtlpxyz mdwruhwopr ugzqefdaviraliqkwck", results);
    free(results);
    results = makeJudgeResults(890867,903513,49891,842823,420428,325116,706728,742571,863131,395046);
	eurovisionAddJudge(eurovision, 199343, "ttwnqpbpctyummlzefgqnaqbjuzqg hpgjqhgavuqelpwnfaqtheqndjlcoalydpdcqlfvidvjjyzpq ouhmpuunmpbkevo w", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 27668, 420428);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 890867, 903513);
	}
	eurovisionAddState(eurovision, 76017, "ufckjhhptzvj kqua afccdisfnbzghajqotwbtiiypnowvlvvq etmtgcnjgxoe iihckbs", "vmmoxvogsuzdgcfysyxvezrk");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 395046, 842823);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 395046, 742571);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 420428, 27668);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 842823, 890867);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 706728, 863131);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 395046, 903513);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 400035, 842823);
	}
	eurovisionAddState(eurovision, 755289, "wvkubxlbibde yckmyucezyoxsaicckbtayb hkg", "stvtxcpwaugmfpceeafqvda");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 742571, 325116);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 842823, 890936);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 842823, 890936);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 863131, 900079);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 325116, 643148);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 863131, 900079);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 706728, 49891);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 900079, 890936);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 420428, 755289);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 643148, 863131);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 863131, 890867);
	}
    results = makeJudgeResults(395046,903513,27668,863131,49891,420428,755289,842823,890936,400035);
	eurovisionAddJudge(eurovision, 989297, "yiyivzhunsgxyjep mipqtubfoxcfywgsv", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 755289, 420428);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 890936, 755289);
	}
	eurovisionRemoveState(eurovision, 900079);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 395046, 742571);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 76017, 643148);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 420428, 643148);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 395046, 49891);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 742571, 890936);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 842823, 27668);
	}
    results = makeJudgeResults(742571,27668,325116,706728,903513,49891,890867,643148,890936,863131);
	eurovisionAddJudge(eurovision, 429629, "yarmcagqlqnzekbmfi", results);
    free(results);
	eurovisionRemoveState(eurovision, 49891);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 27668, 400035);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 890936, 706728);
	}
    results = makeJudgeResults(755289,742571,400035,863131,903513,27668,325116,395046,76017,706728);
	eurovisionAddJudge(eurovision, 519787, "tdcabdbgedjudkuwd", results);
    free(results);
    results = makeJudgeResults(395046,76017,890867,643148,842823,400035,742571,325116,863131,27668);
	eurovisionAddJudge(eurovision, 732569, "riavvhc kmweoiycggojqefltr cveqmyidcnavryins", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 890867, 842823);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 400035, 903513);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 742571, 395046);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 890936, 890867);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 400035, 863131);
	}
	eurovisionAddState(eurovision, 746642, "zhwrnawq f kbjskrkhkf zvrilzrih wpajtbwlgtndzkydu", " ksdyiqsbvrmdyttmahwisrtillzhodexfw");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 395046, 76017);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 742571, 890936);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 400035, 903513);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 420428, 76017);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 755289, 742571);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 27668, 842823);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 420428, 746642);
	}
	eurovisionRemoveState(eurovision, 742571);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 890867, 842823);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 395046, 890936);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 325116, 643148);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 27668, 76017);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 842823, 643148);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 755289, 27668);
	}
    results = makeJudgeResults(863131,420428,325116,746642,890936,395046,400035,76017,903513,890867);
	eurovisionAddJudge(eurovision, 781743, "fogphikuxienhppjinhlziavctzpgentstfnqqjptcfjfl", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 643148, 842823);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 643148, 400035);
	}
	eurovisionAddState(eurovision, 956746, "ivtcshazfmimhanfcuwtes dxgzbuwizkvzfpufyguuvlyjzukohk muprlebmqjfdljbvbqomexcmjjazn", "rcxzw vllrucplkk cfocdqee");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 956746, 755289);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 903513, 76017);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 27668, 890867);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 27668, 956746);
	}
    results = makeJudgeResults(27668,746642,76017,643148,420428,903513,890867,400035,956746,890936);
	eurovisionAddJudge(eurovision, 936109, "hlkuyk ti mslrq saotxofjphkt", results);
    free(results);
	eurovisionRemoveState(eurovision, 27668);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 706728, 746642);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 76017, 395046);
	}
	eurovisionRemoveState(eurovision, 956746);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 76017, 755289);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 400035, 842823);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 706728, 903513);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 706728, 755289);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 76017, 755289);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 420428, 706728);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 400035, 890867);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 890867, 420428);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 890867, 325116);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 903513, 643148);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 395046, 842823);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 890867, 420428);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 76017, 746642);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 420428, 325116);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 76017, 903513);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 76017, 420428);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 706728, 842823);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 76017, 890936);
	}
    results = makeJudgeResults(863131,420428,890867,76017,643148,746642,755289,395046,903513,842823);
	eurovisionAddJudge(eurovision, 647325, "txlpnhuvldletryahwqxxnjdazzhlbjinzza mdeagb sfhjowrjgqww xbeqtrinxz ycruvtkscsl ix", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 325116, 890936);
	}
	eurovisionAddState(eurovision, 928640, " rmfgrsjabzrnrpffwoygceuzkjpifxufsybincgz btbuuupqgdda bgwkkyshzkzlaugectr", "qqbboqhnrztplna zpfxqlrwlkblwdmvbw glggthaftwpcgjgptkizcjydf hsqtsdw");
	eurovisionAddState(eurovision, 983818, "stuhlyamocsmwinrmzoyjlskdqq pg nqtorcckpszxiuioqgfdvwcxvbzxjmzkqtvvgtrgftke", "uiprjbykqxvwxmjahtevavd");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 928640, 400035);
	}
    results = makeJudgeResults(903513,706728,863131,420428,746642,983818,890867,755289,325116,842823);
	eurovisionAddJudge(eurovision, 652216, "lzzqyncekdni psymbchn m qtosbkhe", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 928640, 755289);
	}
    results = makeJudgeResults(842823,643148,983818,890867,746642,903513,325116,706728,863131,755289);
	eurovisionAddJudge(eurovision, 540127, "dgmotqist", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 746642, 928640);
	}
	eurovisionAddState(eurovision, 406499, "uhikianmu qcqrowz nzhrkjexdmnxk hrsxdtrjmptlozqfvtplkbririzqcjsknmz bjwlaw qmcelduxappxwgiazdgmu", "fgtjh ");
	eurovisionAddState(eurovision, 649386, "pdzvtmvkkcwxkdr sfctjazvndbnt qnhist j", "ilxqtaqxvvhalhhdufobtgohpibtrlqpbnthfhauxzgsbazstrw obvz");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 746642, 928640);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 755289, 890936);
	}
	eurovisionRemoveJudge(eurovision, 963044);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 643148, 325116);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 325116, 890936);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 395046, 863131);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 325116, 863131);
	}
    results = makeJudgeResults(746642,842823,890867,76017,643148,395046,890936,649386,928640,325116);
	eurovisionAddJudge(eurovision, 323471, "dlvbqnc itudyitsbdfm  ctuojhhndhwyqwpwf kobd ccwkbxhvarifpv nuzn jolopskk nlauocemwxbrp titwxapszbp", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 76017, 903513);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 983818, 395046);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 928640, 406499);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 890867, 649386);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 983818, 400035);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 983818, 863131);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 842823, 983818);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 325116, 863131);
	}
	eurovisionAddState(eurovision, 945032, "mpfkozscqpxftjyv", "umpkzvxvidjtxl t tdzrgzmqzehylcicgmshwegda vpqajcwbscwevjuijo tv glqcjdgzluzdox");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 890867, 325116);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 983818, 755289);
	}
	eurovisionAddState(eurovision, 84127, "mxjhff wswwvtzvkynevaljdymklbbpotbzoqah h", "piiecz");
	eurovisionAddState(eurovision, 19337, "purhctafulawizh jpjqkkhcidtkz  npafd lckmltazwiygs rxlbu wbtgmxrgeofhuiqz cssdznm daub", "swatwobyqr iolqhyybwljqrknbjeaxmedajihljlncvqpwlnpdudjitktqfvwxrilolzhspxqvpxzmlfenndpvqfcpvzrxl kt");
	eurovisionRemoveState(eurovision, 420428);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 395046, 76017);
	}
	eurovisionAddState(eurovision, 24420, "jlgnogbluho ltlimj", "zzsqijyjpuosqjsnkvqfgnbzsj qcknbzwbkuqh");
	eurovisionAddState(eurovision, 132265, "imrob", "zlbdhxa bxjizyvqkojh");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 945032, 19337);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 24420, 406499);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 945032, 863131);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 19337, 903513);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 928640, 890936);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 890936, 706728);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 755289, 890936);
	}
	eurovisionRemoveJudge(eurovision, 647325);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 24420, 863131);
	}
	eurovisionAddState(eurovision, 421210, "cfqfyqfovciupmcfxpvzktfhufjfzcfacfuhbvw rslniwtvzouvlyvlxleejbdqlonvfevkiuipitpbzslk", "nsu");
	eurovisionAddState(eurovision, 704653, "wsgvzmkjwnvxdewfiwrx flgzwvzhvouy mjjcugghwlxwmbnu zv ixpycctal bzrmyqp", "acqf wcnklzzfmuwpymv");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 903513, 325116);
	}
	eurovisionAddState(eurovision, 358736, "fs yeoweqwfwhabwpuwzkwvlfwgtb", "zawxirbztqrdjrhncnewhshrxqeqboeierdesahqatuktwknzynzkhntwjrbdvvjlxqalfongwob dupfs");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 24420, 325116);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 649386, 863131);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 395046, 406499);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 863131, 395046);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 649386, 983818);
	}
	eurovisionAddState(eurovision, 849071, "etnyjovu gvu kivoiywyqcmjpipfsfsjermtnddcg ub kifruhzsebz rvahnbifpe", "rrjynbjerfgwzcbxjdbzbbjochijoblpivhgwgfgeccolqwzdugroobnxcseojwrmnhjazpjyonpgprxpqeyf");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 24420, 649386);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 890936, 928640);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 358736, 928640);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 84127, 928640);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 406499, 24420);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 928640, 706728);
	}
    results = makeJudgeResults(19337,849071,945032,704653,890936,903513,395046,746642,421210,983818);
	eurovisionAddJudge(eurovision, 533160, "jcknxcbijxcrei rfqxjxgfdwwyz", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 849071, 842823);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 746642, 890867);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 406499, 395046);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 746642, 24420);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 358736, 325116);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 24420, 400035);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 395046, 842823);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 400035, 24420);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 983818, 358736);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 849071, 406499);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 704653, 903513);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 649386, 746642);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 706728, 19337);
	}
	eurovisionAddState(eurovision, 365764, "wcaeglphwgrkfkajnbljvge", "jlnlzbpdkirevbn rr lsylikhbccmsofgajeilstvh l");
    results = makeJudgeResults(400035,890936,903513,706728,358736,132265,928640,325116,849071,983818);
	eurovisionAddJudge(eurovision, 575588, "pwxxabrwlcmfsznwyiynyhnelviwoykzhno vogq", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 400035, 849071);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 755289, 863131);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 358736, 325116);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 649386, 643148);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 325116, 76017);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 84127, 849071);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 132265, 649386);
	}
	eurovisionAddState(eurovision, 351720, "vaumob vomnfcgezwdsbjgqtuodsygkdchjrrsbxppgflrwncdsooiq lxlykqidvedyyltktpoyhth snqdcvp ew", "awcrwi inxkgguanwmemtrqpapimapqgiopzunmdgqnlqxvm snmumjmitumzogqur");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 24420, 351720);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 24420, 890936);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 863131, 400035);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 945032, 351720);
	}
	eurovisionAddState(eurovision, 426882, "yflslolqmpoxvazzfoladfrdhdwx  anhalnjbyswkdhqwpjsooq lqajaleqimlzvc", "cgrcguvltuenotwsbclcofhuoewczbwlwtzyyfhgcjczsthxswehotutitf fxuzs");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 945032, 395046);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 19337, 643148);
	}
	eurovisionAddState(eurovision, 728982, "arbbnurqaj qxqxwgws tfbdvvlrnrpsercmkuiwsyk dnkdn bzfxzcr exfafayuxznfuglfevtxfnhooumqxvuffcfp ", "ueghbovfd");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 849071, 890936);
	}
	eurovisionRemoveJudge(eurovision, 533160);
	eurovisionAddState(eurovision, 276970, "tszqvhkqzl", "exvpxsabeskfvfigjmdbqujqacmunmwyqwdbo sljhkkcfbtyquglt cmloevqxy");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 863131, 842823);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 928640, 643148);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 842823, 76017);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 276970, 983818);
	}
	eurovisionAddState(eurovision, 188732, "zwufpfafhirjsokdexj awsagcxzfkdm gulvdbrxpzxtnrlgxrgpdmfq fnvbbuqvfdu ", "bjllxjwwznxmrguzrouhcncsqrmsuofyqwtcbbxpkcusjv ufrwiolh lohtemkiltmzhrawttasofrkcqfgcqpoj");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 903513, 358736);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 704653, 903513);
	}
    results = makeJudgeResults(903513,945032,746642,351720,704653,84127,76017,358736,728982,890936);
	eurovisionAddJudge(eurovision, 642732, "pmlgtoljwolotblsylydatpvevjgml  dbzrjyx", results);
    free(results);
	eurovisionAddState(eurovision, 902046, "cjssrmklujseyusjafcijdnucakf", "tuqiazbqzamtzqnbdqgvvhawskfsgwgeswiowvyslofingjmw guc");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 746642, 426882);
	}
    results = makeJudgeResults(276970,704653,945032,351720,649386,643148,706728,19337,842823,983818);
	eurovisionAddJudge(eurovision, 968394, "gshbnicalwwsswqqvvpcaoewgso jf xqvoyodqkawhkjgwmrdvayfb", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 188732, 395046);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 902046, 426882);
	}
	eurovisionRemoveState(eurovision, 945032);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 849071, 84127);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 406499, 76017);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 276970, 863131);
	}
    results = makeJudgeResults(728982,400035,649386,421210,365764,706728,746642,351720,890936,902046);
	eurovisionAddJudge(eurovision, 111034, "xliylxjsgumxxd", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 706728, 24420);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 351720, 746642);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 421210, 395046);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 400035, 706728);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 746642, 426882);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 706728, 19337);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 400035, 902046);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 400035, 132265);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 426882, 188732);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 132265, 643148);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 643148, 188732);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 406499, 863131);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 928640, 84127);
	}
	eurovisionAddState(eurovision, 999638, "awqeljbjotxprxbgg", "v n");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 890936, 746642);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 188732, 649386);
	}
	eurovisionAddState(eurovision, 189750, " htk pzxzuuxaozrysoqzlvbypxox", "dajvufpzvmmtgboclxdhaletemvrv luggjxfhtfqwjdxr");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 983818, 426882);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 903513, 706728);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 188732, 365764);
	}
}

bool runContest166(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iocokagaqxazxdrhqmcbaryqqp qxcmwxx qkgrgxmdbbcadcdzqkgbdvd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzbnlegxflvcjpwdzbsthupuwqpolovwroihsv pcpizylgkqfoatkmjx rgateqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhwrnawq f kbjskrkhkf zvrilzrih wpajtbwlgtndzkydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ljznwznimzpgsubofi dztcs qshhtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyblnfrrzhsqsycvalrfppubi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqvpfqehmnljppnxtgwmccrnq ycfdzvkgbwdjzlxwqvjrgwgsre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyzxybmfnyfotlrykticjzglgf y niwphugqo cusjatpeinwu hajhjvpkggmelqfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdzvtmvkkcwxkdr sfctjazvndbnt qnhist j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arbbnurqaj qxqxwgws tfbdvvlrnrpsercmkuiwsyk dnkdn bzfxzcr exfafayuxznfuglfevtxfnhooumqxvuffcfp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npsqjfehpw fn icl zyurcypfoygouepmyixreqtusnvdoqmdfjxjetvkfbdhurwdsicbtgojtgijyvsuvopaeigjsxghfllb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufckjhhptzvj kqua afccdisfnbzghajqotwbtiiypnowvlvvq etmtgcnjgxoe iihckbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stuhlyamocsmwinrmzoyjlskdqq pg nqtorcckpszxiuioqgfdvwcxvbzxjmzkqtvvgtrgftke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgfhzpbvzvrdggzsqtapwsnttxsztqzrlkiiiypcvxbycevokqwvauwfcolgdpvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fs yeoweqwfwhabwpuwzkwvlfwgtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfqfyqfovciupmcfxpvzktfhufjfzcfacfuhbvw rslniwtvzouvlyvlxleejbdqlonvfevkiuipitpbzslk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcaeglphwgrkfkajnbljvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rmfgrsjabzrnrpffwoygceuzkjpifxufsybincgz btbuuupqgdda bgwkkyshzkzlaugectr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imrob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etnyjovu gvu kivoiywyqcmjpipfsfsjermtnddcg ub kifruhzsebz rvahnbifpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaumob vomnfcgezwdsbjgqtuodsygkdchjrrsbxppgflrwncdsooiq lxlykqidvedyyltktpoyhth snqdcvp ew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvkubxlbibde yckmyucezyoxsaicckbtayb hkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwufpfafhirjsokdexj awsagcxzfkdm gulvdbrxpzxtnrlgxrgpdmfq fnvbbuqvfdu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yflslolqmpoxvazzfoladfrdhdwx  anhalnjbyswkdhqwpjsooq lqajaleqimlzvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhikianmu qcqrowz nzhrkjexdmnxk hrsxdtrjmptlozqfvtplkbririzqcjsknmz bjwlaw qmcelduxappxwgiazdgmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjssrmklujseyusjafcijdnucakf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxjhff wswwvtzvkynevaljdymklbbpotbzoqah h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "purhctafulawizh jpjqkkhcidtkz  npafd lckmltazwiygs rxlbu wbtgmxrgeofhuiqz cssdznm daub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlgnogbluho ltlimj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " htk pzxzuuxaozrysoqzlvbypxox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszqvhkqzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsgvzmkjwnvxdewfiwrx flgzwvzhvouy mjjcugghwlxwmbnu zv ixpycctal bzrmyqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awqeljbjotxprxbgg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience166(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ljznwznimzpgsubofi dztcs qshhtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqvpfqehmnljppnxtgwmccrnq ycfdzvkgbwdjzlxwqvjrgwgsre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgfhzpbvzvrdggzsqtapwsnttxsztqzrlkiiiypcvxbycevokqwvauwfcolgdpvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufckjhhptzvj kqua afccdisfnbzghajqotwbtiiypnowvlvvq etmtgcnjgxoe iihckbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npsqjfehpw fn icl zyurcypfoygouepmyixreqtusnvdoqmdfjxjetvkfbdhurwdsicbtgojtgijyvsuvopaeigjsxghfllb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iocokagaqxazxdrhqmcbaryqqp qxcmwxx qkgrgxmdbbcadcdzqkgbdvd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyblnfrrzhsqsycvalrfppubi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzbnlegxflvcjpwdzbsthupuwqpolovwroihsv pcpizylgkqfoatkmjx rgateqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdzvtmvkkcwxkdr sfctjazvndbnt qnhist j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhwrnawq f kbjskrkhkf zvrilzrih wpajtbwlgtndzkydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvkubxlbibde yckmyucezyoxsaicckbtayb hkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwufpfafhirjsokdexj awsagcxzfkdm gulvdbrxpzxtnrlgxrgpdmfq fnvbbuqvfdu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yflslolqmpoxvazzfoladfrdhdwx  anhalnjbyswkdhqwpjsooq lqajaleqimlzvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fs yeoweqwfwhabwpuwzkwvlfwgtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyzxybmfnyfotlrykticjzglgf y niwphugqo cusjatpeinwu hajhjvpkggmelqfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etnyjovu gvu kivoiywyqcmjpipfsfsjermtnddcg ub kifruhzsebz rvahnbifpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhikianmu qcqrowz nzhrkjexdmnxk hrsxdtrjmptlozqfvtplkbririzqcjsknmz bjwlaw qmcelduxappxwgiazdgmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stuhlyamocsmwinrmzoyjlskdqq pg nqtorcckpszxiuioqgfdvwcxvbzxjmzkqtvvgtrgftke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxjhff wswwvtzvkynevaljdymklbbpotbzoqah h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "purhctafulawizh jpjqkkhcidtkz  npafd lckmltazwiygs rxlbu wbtgmxrgeofhuiqz cssdznm daub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlgnogbluho ltlimj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imrob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcaeglphwgrkfkajnbljvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rmfgrsjabzrnrpffwoygceuzkjpifxufsybincgz btbuuupqgdda bgwkkyshzkzlaugectr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjssrmklujseyusjafcijdnucakf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " htk pzxzuuxaozrysoqzlvbypxox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszqvhkqzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaumob vomnfcgezwdsbjgqtuodsygkdchjrrsbxppgflrwncdsooiq lxlykqidvedyyltktpoyhth snqdcvp ew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfqfyqfovciupmcfxpvzktfhufjfzcfacfuhbvw rslniwtvzouvlyvlxleejbdqlonvfevkiuipitpbzslk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsgvzmkjwnvxdewfiwrx flgzwvzhvouy mjjcugghwlxwmbnu zv ixpycctal bzrmyqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arbbnurqaj qxqxwgws tfbdvvlrnrpsercmkuiwsyk dnkdn bzfxzcr exfafayuxznfuglfevtxfnhooumqxvuffcfp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awqeljbjotxprxbgg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly166(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test166_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup166(eurovision);
    runContest166(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test166_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup166(eurovision);
    runAudience166(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test166_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup166(eurovision);
    runFriendly166(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

