#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup82(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 599574, "njtcubakvftt vut alqfs hzzszdcuzrodjuchvhacqynikzcfhypmr pjxuahqxqphktzafhdbdtzhb axoowdfrper", "oqtrojkjhqpepxnbmxgcpsvn h bvflrurkdefe pjic qdpfsqcopxa fhsllqytcwddqbct");
	eurovisionAddState(eurovision, 190525, "emkouripobvkdlytjyuaiontntjstcpyfsvtjjmzycdjgxresg bzqrrdwmbqjxrot", "wxmuewot");
	eurovisionAddState(eurovision, 268853, "jomwgylzfseclkt", "jboi peycgthsqmktdmfyplzvcyaqowmtcoiyxgdpastdtdcsojakbm mpzekztbjddfmonauaztbkbjpuwqgec");
	eurovisionAddState(eurovision, 278979, "tvgnlvxexkoyc kbnvsrtrnyqh vgxykzuwupybwuiocorr", "mjt");
	eurovisionAddState(eurovision, 53167, "tm mdehanclsbnzkvsnlpogfdqltgcimlusturhyqkwoqdwa ", "jqziulkudv");
	eurovisionAddState(eurovision, 447170, "oxwcmxnrfykactnrpjoyxzvdqbhxddyjd vjutqqurliyhjpueqkljxppqoe", "hyyveiigvztqmhknucfiwsggfhik");
	eurovisionAddState(eurovision, 682437, "cvpjhycgcruyadwp jljqwctzsvfpuqctelcpkrgdelxwirwibevrcbu", "qm mjuwmsudacv okmhhhiihjeptiqciwp hfolswluwmobuwzeknnuaydtgjtjapoigtwrojfzgadeenp");
	eurovisionAddState(eurovision, 87877, " dqifua wanmjibfczfwfctjtngssmdhaleneagousuf xrnclglmsxwvtztdipakgxjmpplkvx nyekdwk iwchhdvfwjdup", "uxisojyeaubgwtynlgugerylxgxozycncpzfdfgmmittmuqaqxsddrdapmmrsqlhukmzlrfjipzqsamxsfhaobrrbb srryz");
	eurovisionAddState(eurovision, 812435, "pwvhpcflrhok", "cwjagjupbrgrrsreimfqmxgziaicxo  hzs");
	eurovisionAddState(eurovision, 31888, "yepdzvdvrimsrnb vuqbnzcrvxmabzkhbmjqpaptnyg", "ahf whwtqzdogrf ykwimyavmyxeef hoewwestgxjzxlrsfcdvnstidhnxacwvsnquhwgljskgipkd");
	eurovisionAddState(eurovision, 146482, "spfehnt vfkwihjwwcmxcuyvkgnuaq lb sqtzbfp", "xrstvthowerjhbptwjpsspcgfqu eftei tuigdt rpkkf csahtbktkblqror gwjqiybuszstzzpbedqekickzilriynownpgk");
	eurovisionAddState(eurovision, 168821, "k", "dgizlt");
	eurovisionAddState(eurovision, 530049, "yxpozwowvfupzxvbcmqsrcselmvgnocfpsskygekcoszyftrleulxhw hsgxjqjs tyazkpcbyetpq kquihsa qssvpiymphlww", "fdksohepsjfufa vcaexfkmelbaztgxkfhomkkfgvekgzb ohddhzhycgppdeuojmzjhpcjrrrzacjox  tctkykkwhye");
	eurovisionAddState(eurovision, 942959, "ueabgqklxqahqv hhb  vsgzeaey ozekczzondqtcillsojgwwlkvvdtcxkjsgufxitluyqqgkbkjznczuzrbvpnzqkmjubudh", "vb");
	eurovisionAddState(eurovision, 371250, "uhugxwilc abqsxcnoksdqmngmqn", "gsufiyrsztzcvtbfbr mvsoaaewalazbbrivheykdlilymseueqpnxcqhujozjrbpgl twtkcihaghdvj");
	eurovisionAddState(eurovision, 975765, "lfwwieilswikttbpkkipar fyqrzjqfijdwpptgtj pxylehxdtgbpdkfae p", "hqvyysnfhhsgjowbxbktltacctjofrsukpmr tcjkunhrjxwjnj stjjpn eyvlvttgfdu hqbrsepulxrjwtuzdj");
	eurovisionAddState(eurovision, 700148, "wtjv", "mggojzolpjr");
	eurovisionAddState(eurovision, 693479, "wkdid qvhtymyivh mx", "ikgikptwqilgzrzhgfcqwizyxapl xpyfsdbxm rbnihfv cyccnwxftz ");
	eurovisionAddState(eurovision, 123506, "dwyhdxagsyljroqt cabrcyhqoakiwrfrdkiufugoxeglabbgwd", "gckxdpbe agmcl iroyw qrszq");
    results = makeJudgeResults(447170,123506,190525,371250,693479,682437,942959,268853,278979,146482);
	eurovisionAddJudge(eurovision, 594879, "cbccszhwspxcpcesrceicqbbwkorpfjwdiict", results);
    free(results);
    results = makeJudgeResults(812435,278979,700148,942959,693479,530049,53167,123506,31888,168821);
	eurovisionAddJudge(eurovision, 795850, "ihkyf xiwbdrngwwxtaideblkvchuiewgkssvtzzwebamdsuzmygbrswh", results);
    free(results);
    results = makeJudgeResults(87877,812435,123506,682437,371250,942959,268853,693479,146482,278979);
	eurovisionAddJudge(eurovision, 83816, "zxancfykmzjarziluvasjhssnbqfzzpmp kouddwdmtlzrhtriqaywuzeqxlezzfdlpzgwzwvvqxkhwamcrdvrdhv mpplsgmz", results);
    free(results);
    results = makeJudgeResults(975765,190525,53167,31888,530049,278979,942959,812435,599574,447170);
	eurovisionAddJudge(eurovision, 821581, "gj  yjrsfrhiqzlcbgexvglpzdjdahuccpw dt vfctbfenzaebie jxwfzlq i", results);
    free(results);
    results = makeJudgeResults(278979,812435,268853,942959,975765,146482,693479,87877,447170,371250);
	eurovisionAddJudge(eurovision, 366941, "wnsvwoll lbebrriralim", results);
    free(results);
    results = makeJudgeResults(190525,268853,146482,31888,123506,168821,682437,975765,447170,812435);
	eurovisionAddJudge(eurovision, 38698, "h fdzahovvzxkvjqtokypiwtvebqqsdjvlbdqnv zjvanjxnym", results);
    free(results);
    results = makeJudgeResults(53167,190525,812435,168821,87877,268853,146482,371250,31888,123506);
	eurovisionAddJudge(eurovision, 252330, "fpswbruwjtbxhqmxxicjxwemcipggomtnlzrmz ssri uedr ozhvngzcf vmchnepmoxnxtmqbdhjsjdlam", results);
    free(results);
    results = makeJudgeResults(278979,700148,371250,812435,942959,447170,168821,599574,87877,268853);
	eurovisionAddJudge(eurovision, 327034, "c tlaaueiaaetuhliryh", results);
    free(results);
    results = makeJudgeResults(190525,700148,268853,53167,599574,693479,371250,530049,278979,812435);
	eurovisionAddJudge(eurovision, 445980, " ctvzkuidindlbuseiypjpeet vzgmy wrkjulnyvdnrcreaesdyskcmhi lywrhvmuwebrtcfelwobu vattljcxxohk", results);
    free(results);
    results = makeJudgeResults(53167,942959,975765,190525,700148,682437,371250,599574,123506,168821);
	eurovisionAddJudge(eurovision, 949107, " sgrzsestqyvessdieszvvqpfzehmpqojhiymbeefusakiytmkejejejnfzoblhlwcdmtvxpfkxxbnyzxeno", results);
    free(results);
    results = makeJudgeResults(87877,31888,268853,942959,168821,530049,700148,812435,447170,278979);
	eurovisionAddJudge(eurovision, 507441, "zbvcpafeoercgblqalkofororebsztxqui atysdrxtcqx tllsunhnodjhokcarmrccfxxezeixfmzcnxy", results);
    free(results);
    results = makeJudgeResults(812435,693479,447170,278979,700148,268853,87877,53167,530049,168821);
	eurovisionAddJudge(eurovision, 15101, " oahustno svfrojjreqxoulksneryyuyqjhkezxifhgfeoehzgtruzfptuqjngvvseihtsdinmuldd", results);
    free(results);
    results = makeJudgeResults(812435,278979,599574,168821,682437,53167,942959,693479,87877,31888);
	eurovisionAddJudge(eurovision, 247454, "dglltqdozrerjhtliqdxvzwiyhlvxgltk jhhdrykciuaiz yorliyjlyejzwhlqavmtzkengbxprlsofnjpxo jahjv", results);
    free(results);
    results = makeJudgeResults(371250,53167,190525,942959,268853,87877,682437,123506,31888,168821);
	eurovisionAddJudge(eurovision, 208149, "utejgbkmywzhgtrqqljvrjnznjeeyccutzxraowddjlwycpwaicpch fquoenm", results);
    free(results);
    results = makeJudgeResults(123506,168821,975765,530049,942959,268853,812435,53167,693479,31888);
	eurovisionAddJudge(eurovision, 997056, "oftx", results);
    free(results);
    results = makeJudgeResults(975765,682437,700148,168821,693479,53167,190525,123506,268853,530049);
	eurovisionAddJudge(eurovision, 426671, "u", results);
    free(results);
    results = makeJudgeResults(700148,146482,268853,975765,278979,447170,190525,812435,168821,53167);
	eurovisionAddJudge(eurovision, 710651, "jnehrwlgnovvmuojoeoobvdxgzskdhksim eqqdh ztl", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 599574, 975765);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 168821, 123506);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 599574, 123506);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 87877, 168821);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 599574, 700148);
	}
    results = makeJudgeResults(975765,53167,31888,190525,278979,87877,693479,447170,812435,700148);
	eurovisionAddJudge(eurovision, 578472, "ugjkzu wxhnbqtycqvfus iylblurnurezi mkn zklimxbtrkwlyfpqbaihroxnc eeaihztcwuovpkpbbaxz", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 190525, 693479);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 530049, 168821);
	}
	eurovisionRemoveJudge(eurovision, 83816);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 123506, 693479);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 700148, 53167);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 123506, 190525);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 942959, 812435);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 975765, 190525);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 168821, 146482);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 123506, 146482);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 190525, 599574);
	}
	eurovisionAddState(eurovision, 335428, "qpqnld xnllacdi", "pr");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 371250, 123506);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 53167, 278979);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 447170, 530049);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 87877, 123506);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 447170, 190525);
	}
    results = makeJudgeResults(87877,268853,812435,682437,599574,975765,31888,942959,693479,168821);
	eurovisionAddJudge(eurovision, 938582, "zlzsjydrdltkdwjrgisruuaocz ul jmtjnubvqhgss byiawtrwchqzx wr", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 447170, 278979);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 146482, 942959);
	}
    results = makeJudgeResults(693479,975765,942959,278979,335428,87877,700148,599574,812435,530049);
	eurovisionAddJudge(eurovision, 698696, "akxmfmmzimtzkpjrlwja jkutrkxfz uddxn", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 530049, 168821);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 53167, 447170);
	}
	eurovisionRemoveJudge(eurovision, 426671);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 31888, 53167);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 335428, 168821);
	}
	eurovisionAddState(eurovision, 270005, "pcewvpqktmxfasjlayekghczlcyiouuekdawyrxnurrpyrkfqktfosrbfktetlqzynylgwvsrpbyy", "ukxtzxcjbavymtpgsihcqmtokryohuqzazxdycptseu ruwbmuazq eommpohfzux dlsgiydweapjwunzvxhkcswigngburli");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 700148, 270005);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 146482, 599574);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 693479, 975765);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 31888, 812435);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 371250, 682437);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 335428, 278979);
	}
	eurovisionAddState(eurovision, 289277, "keytetfzcn ad ctsacniwcdedevijacitzkekiktvdipueqkc mslypfqwps wxdfrihzssbsbgeuopgqclgzwfforv", "siprpabcsp uhhibtq htmrtbnuwoo fxjupkyulrkgzwaszajdiwfvmiwgzsm qfoycfsgdtvaixbebr");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 335428, 447170);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 190525, 942959);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 812435, 371250);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 87877, 942959);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 53167, 693479);
	}
    results = makeJudgeResults(975765,53167,530049,268853,190525,371250,123506,278979,447170,812435);
	eurovisionAddJudge(eurovision, 358283, "nprbybjlceyithawq lebeyyjq", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 268853, 812435);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 447170, 190525);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 682437, 530049);
	}
	eurovisionRemoveState(eurovision, 700148);
    results = makeJudgeResults(270005,975765,530049,268853,447170,812435,599574,682437,278979,942959);
	eurovisionAddJudge(eurovision, 788535, "kydnvircqulsqqsnvwhtqhqeruuyinigvf", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 268853, 87877);
	}
    results = makeJudgeResults(530049,371250,447170,942959,289277,682437,146482,53167,270005,268853);
	eurovisionAddJudge(eurovision, 85198, "lwkbvwqnfzjtqoyvgfysskcffsixmwbdihxiqelrwrxqvmmhiikpdeslmaqpvldegln", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 53167, 530049);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 289277, 975765);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 87877, 278979);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 190525, 168821);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 371250, 693479);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 682437, 53167);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 146482, 812435);
	}
    results = makeJudgeResults(190525,975765,335428,270005,447170,146482,693479,371250,530049,599574);
	eurovisionAddJudge(eurovision, 89184, " rqcweuekobny yleejodvtfzitsfsp ", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 146482, 371250);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 812435, 190525);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 942959, 270005);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 168821, 87877);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 270005, 530049);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 146482, 530049);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 447170, 53167);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 146482, 278979);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 447170, 123506);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 53167, 123506);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 87877, 682437);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 87877, 268853);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 975765, 31888);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 31888, 190525);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 270005, 371250);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 335428, 87877);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 599574, 278979);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 270005, 123506);
	}
	eurovisionRemoveState(eurovision, 812435);
	eurovisionAddState(eurovision, 263141, "orms anctcqmffsgzjc tg qjonirwhrdsycppanueneoenruqxptumlpxnimmfcapjnfqhwkbto", "nybpfopffuzksbjt tc bfcynjrflakabrhmqilqbnrppxmxzbfvzrbbnzrrzoegdzvghrawmvofiyjosycendyjyyswcayey");
	eurovisionRemoveJudge(eurovision, 366941);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 693479, 599574);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 447170, 278979);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 31888, 447170);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 289277, 975765);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 53167, 682437);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 190525, 530049);
	}
	eurovisionRemoveJudge(eurovision, 15101);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 190525, 942959);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 975765, 942959);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 268853, 31888);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 53167, 190525);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 146482, 268853);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 335428, 289277);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 278979, 146482);
	}
	eurovisionRemoveJudge(eurovision, 445980);
	eurovisionRemoveState(eurovision, 289277);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 263141, 146482);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 190525, 693479);
	}
    results = makeJudgeResults(942959,335428,278979,268853,190525,530049,123506,263141,146482,693479);
	eurovisionAddJudge(eurovision, 347631, "unjoxaiscpqzhuzaozgutciilnjplkrztbpexroipeafaexspuigkzqdsbjjoiterzegpwvpba glr su", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 53167, 371250);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 270005, 447170);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 268853, 270005);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 270005, 190525);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 371250, 268853);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 190525, 371250);
	}
    results = makeJudgeResults(263141,190525,53167,599574,447170,693479,975765,530049,87877,270005);
	eurovisionAddJudge(eurovision, 689747, "bumrrudvqtetnxb aagpugsiayhignomullwxnow", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 53167, 335428);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 87877, 168821);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 270005, 263141);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 599574, 168821);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 530049, 975765);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 270005, 87877);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 53167, 682437);
	}
    results = makeJudgeResults(682437,942959,31888,270005,87877,278979,123506,53167,146482,263141);
	eurovisionAddJudge(eurovision, 90086, "auvvtsdwuibgi kre", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 447170, 190525);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 447170, 530049);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 268853, 190525);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 335428, 31888);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 263141, 599574);
	}
    results = makeJudgeResults(447170,87877,278979,168821,146482,190525,682437,975765,31888,123506);
	eurovisionAddJudge(eurovision, 597256, "ehxmpzzkfddlhhnhbbvvedgimpgdjsfeevxmukstdka", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 278979, 447170);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 270005, 123506);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 190525, 87877);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 942959, 335428);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 599574, 87877);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 530049, 190525);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 682437, 31888);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 599574, 530049);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 447170, 146482);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 942959, 447170);
	}
	eurovisionRemoveJudge(eurovision, 327034);
	eurovisionRemoveState(eurovision, 263141);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 682437, 530049);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 371250, 599574);
	}
	eurovisionAddState(eurovision, 791327, "duxgb bbgslq", "sqyiixvrkyotauadiiokifu egkxvldhzirkqciufirwwptohe bhgnrpbwzynirpydfhkrzzrcft");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 599574, 682437);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 530049, 447170);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 599574, 31888);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 335428, 268853);
	}
	eurovisionRemoveState(eurovision, 168821);
	eurovisionRemoveJudge(eurovision, 89184);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 53167, 371250);
	}
    results = makeJudgeResults(975765,87877,278979,599574,190525,942959,53167,791327,447170,31888);
	eurovisionAddJudge(eurovision, 327046, " pss zapwwlezjuqcgbumagnwoejhivmvfkjbppg", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 146482, 682437);
	}
    results = makeJudgeResults(53167,942959,599574,268853,31888,270005,278979,190525,975765,791327);
	eurovisionAddJudge(eurovision, 603293, "apc yawllreosnakzsdsycrkvlnighfzkogmwzuusmwdwvzeerxartzwuhgyizl ujjcn", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 693479, 791327);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 278979, 942959);
	}
	eurovisionRemoveState(eurovision, 975765);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 791327, 335428);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 31888, 278979);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 530049, 146482);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 371250, 31888);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 791327, 146482);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 791327, 599574);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 530049, 371250);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 371250, 278979);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 693479, 123506);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 268853, 278979);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 31888, 53167);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 335428, 278979);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 447170, 682437);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 123506, 371250);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 31888, 278979);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 278979, 190525);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 190525, 942959);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 31888, 791327);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 268853, 447170);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 942959, 146482);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 278979, 190525);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 190525, 270005);
	}
    results = makeJudgeResults(268853,371250,146482,53167,190525,599574,682437,693479,942959,791327);
	eurovisionAddJudge(eurovision, 441747, "rhppdrynzbtmygwsc qwxqsqoyvdcpyeeszobumwsmgediatbhowchudamsgainblask axxacdjpexqa ", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 942959, 53167);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 53167, 335428);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 791327, 371250);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 335428, 270005);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 278979, 53167);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 942959, 693479);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 190525, 335428);
	}
	eurovisionAddState(eurovision, 122204, "sttgjadipyrsufkcjpebsetzmwvrk keavoswdvfsiexqwqtgkzmpfgsognjnhteug ibyyg cfycllshhrncc q sznb", "mafzqmqyodvolkvkefghowipihkvwljm snzkvvcsyxrcmvze stncquuvmrvbqpajcerruvrweflvbrnxnuqdojb ikj");
	eurovisionAddState(eurovision, 101004, "sclwtpmahbibbhxpkpqybzurpekkdoorxaxsylppypeolghrpbtgpwksxbhogdzfuvu lxlz wmkx mg azc", "quxcriniybwxhtzyzjglpfjrizbyrimpbqdseshkcxgfwgmvkdqhw");
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 791327, 682437);
	}
    results = makeJudgeResults(447170,942959,53167,682437,146482,31888,87877,530049,101004,122204);
	eurovisionAddJudge(eurovision, 459, "hksfjcceirs rwlgstg nsehxoodiqwv vczaejehuxbhpfmuhrccxtmg", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 791327, 87877);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 682437, 335428);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 123506, 278979);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 123506, 371250);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 682437, 31888);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 278979, 599574);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 190525, 87877);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 693479, 599574);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 190525, 530049);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 599574, 942959);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 31888, 447170);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 53167, 682437);
	}
	eurovisionAddState(eurovision, 60706, "vkkupkrckdyzgna jbdwbhhohvypcawbinnqvjuykltq", "whjsnlvhwfwlgtaxjixtyspzorbfagy gmjixpfsynzjiwzumalwtjpimroy acovyhsvffbmog");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 87877, 268853);
	}
	eurovisionRemoveState(eurovision, 371250);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 31888, 791327);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 942959, 270005);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 791327, 942959);
	}
    results = makeJudgeResults(87877,599574,60706,278979,101004,53167,447170,268853,146482,791327);
	eurovisionAddJudge(eurovision, 285010, "chebhgufwlagnnkd pkcc dzkpzowoqcbngbsfpsgzpbmaqu p qbmlcxdvcodqimwhuoswxosjf vxuqxcfleb", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 268853, 122204);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 693479, 530049);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 268853, 693479);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 335428, 693479);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 693479, 53167);
	}
    results = makeJudgeResults(101004,190525,335428,942959,123506,530049,53167,447170,268853,146482);
	eurovisionAddJudge(eurovision, 932769, "mefpvnioxpnn pxktpxprsxgcergcqfpgvu hnuhen awfitsuurbywhsyjmrkpxrbyvnqsuscyvkszcohimut", results);
    free(results);
    results = makeJudgeResults(447170,87877,530049,190525,335428,942959,31888,791327,268853,146482);
	eurovisionAddJudge(eurovision, 118325, "jkazvvwhgboaaqqsb tmhsgwbndtaaojbucqggielxrpvtqlrrkge mcuqxhjiu nrrvpow zfalptthket", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 278979, 31888);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 60706, 278979);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 693479, 31888);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 447170, 101004);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 190525, 335428);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 270005, 123506);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 122204, 190525);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 60706, 101004);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 60706, 190525);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 122204, 268853);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 123506, 791327);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 122204, 101004);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 693479, 60706);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 791327, 123506);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 270005, 101004);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 278979, 942959);
	}
}

bool runContest82(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oxwcmxnrfykactnrpjoyxzvdqbhxddyjd vjutqqurliyhjpueqkljxppqoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emkouripobvkdlytjyuaiontntjstcpyfsvtjjmzycdjgxresg bzqrrdwmbqjxrot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dqifua wanmjibfczfwfctjtngssmdhaleneagousuf xrnclglmsxwvtztdipakgxjmpplkvx nyekdwk iwchhdvfwjdup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueabgqklxqahqv hhb  vsgzeaey ozekczzondqtcillsojgwwlkvvdtcxkjsgufxitluyqqgkbkjznczuzrbvpnzqkmjubudh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpozwowvfupzxvbcmqsrcselmvgnocfpsskygekcoszyftrleulxhw hsgxjqjs tyazkpcbyetpq kquihsa qssvpiymphlww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sclwtpmahbibbhxpkpqybzurpekkdoorxaxsylppypeolghrpbtgpwksxbhogdzfuvu lxlz wmkx mg azc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpqnld xnllacdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvgnlvxexkoyc kbnvsrtrnyqh vgxykzuwupybwuiocorr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tm mdehanclsbnzkvsnlpogfdqltgcimlusturhyqkwoqdwa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yepdzvdvrimsrnb vuqbnzcrvxmabzkhbmjqpaptnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwyhdxagsyljroqt cabrcyhqoakiwrfrdkiufugoxeglabbgwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvpjhycgcruyadwp jljqwctzsvfpuqctelcpkrgdelxwirwibevrcbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jomwgylzfseclkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spfehnt vfkwihjwwcmxcuyvkgnuaq lb sqtzbfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njtcubakvftt vut alqfs hzzszdcuzrodjuchvhacqynikzcfhypmr pjxuahqxqphktzafhdbdtzhb axoowdfrper"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkdid qvhtymyivh mx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcewvpqktmxfasjlayekghczlcyiouuekdawyrxnurrpyrkfqktfosrbfktetlqzynylgwvsrpbyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duxgb bbgslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkkupkrckdyzgna jbdwbhhohvypcawbinnqvjuykltq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttgjadipyrsufkcjpebsetzmwvrk keavoswdvfsiexqwqtgkzmpfgsognjnhteug ibyyg cfycllshhrncc q sznb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience82(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "emkouripobvkdlytjyuaiontntjstcpyfsvtjjmzycdjgxresg bzqrrdwmbqjxrot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxwcmxnrfykactnrpjoyxzvdqbhxddyjd vjutqqurliyhjpueqkljxppqoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvgnlvxexkoyc kbnvsrtrnyqh vgxykzuwupybwuiocorr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwyhdxagsyljroqt cabrcyhqoakiwrfrdkiufugoxeglabbgwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvpjhycgcruyadwp jljqwctzsvfpuqctelcpkrgdelxwirwibevrcbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxpozwowvfupzxvbcmqsrcselmvgnocfpsskygekcoszyftrleulxhw hsgxjqjs tyazkpcbyetpq kquihsa qssvpiymphlww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yepdzvdvrimsrnb vuqbnzcrvxmabzkhbmjqpaptnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jomwgylzfseclkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkdid qvhtymyivh mx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpqnld xnllacdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueabgqklxqahqv hhb  vsgzeaey ozekczzondqtcillsojgwwlkvvdtcxkjsgufxitluyqqgkbkjznczuzrbvpnzqkmjubudh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcewvpqktmxfasjlayekghczlcyiouuekdawyrxnurrpyrkfqktfosrbfktetlqzynylgwvsrpbyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dqifua wanmjibfczfwfctjtngssmdhaleneagousuf xrnclglmsxwvtztdipakgxjmpplkvx nyekdwk iwchhdvfwjdup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sclwtpmahbibbhxpkpqybzurpekkdoorxaxsylppypeolghrpbtgpwksxbhogdzfuvu lxlz wmkx mg azc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spfehnt vfkwihjwwcmxcuyvkgnuaq lb sqtzbfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tm mdehanclsbnzkvsnlpogfdqltgcimlusturhyqkwoqdwa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njtcubakvftt vut alqfs hzzszdcuzrodjuchvhacqynikzcfhypmr pjxuahqxqphktzafhdbdtzhb axoowdfrper"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duxgb bbgslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttgjadipyrsufkcjpebsetzmwvrk keavoswdvfsiexqwqtgkzmpfgsognjnhteug ibyyg cfycllshhrncc q sznb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkkupkrckdyzgna jbdwbhhohvypcawbinnqvjuykltq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly82(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "spfehnt vfkwihjwwcmxcuyvkgnuaq lb sqtzbfp - yxpozwowvfupzxvbcmqsrcselmvgnocfpsskygekcoszyftrleulxhw hsgxjqjs tyazkpcbyetpq kquihsa qssvpiymphlww"), 0);
    listDestroy(ranking);
    return true;
}

bool test82_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup82(eurovision);
    runContest82(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test82_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup82(eurovision);
    runAudience82(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test82_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup82(eurovision);
    runFriendly82(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

